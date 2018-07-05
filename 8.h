HintsSubmissionsDiscussSolution
      
C++ 4line code
C++ 4line code
56
VIEWS
0
Created at: July 1, 2018 9:54 PM

zhi-hong
zhi-hong
 0
int myAtoi(string str) {
    long long ans = atoll(str.c_str());
    if (ans>INT_MAX) return INT_MAX;
    else if (ans<INT_MIN) return INT_MIN;
    else return ans;
}