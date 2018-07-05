int myAtoi(string str) {
    long long ans = atoll(str.c_str());
    if (ans>INT_MAX) return INT_MAX;
    else if (ans<INT_MIN) return INT_MIN;
    else return ans;
}
