int maxsum(vector<int>& nums, int n)
{
	if (n < 0)
		return 0;
	if (n < 2)
		return nums.at(n);

	int a, b;
	a = maxsum(nums, n - 2) + nums.at(n);
	b = maxsum(nums, n - 3) + nums.at(n - 1);
	return max(a,b);
}

int rob(vector<int>& nums)
{
	return maxsum(nums, nums.size() - 1);
}