// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int low = 1;
        int high = n;
        int mid = 0;
        int flag = 0;
        while(1){
            mid = low+(high-low)/2;
            flag = guess(mid);
            if(flag == -1) high = mid - 1;
            else if(flag == 1) low = mid + 1;
                 else return mid;
        }
    }
};