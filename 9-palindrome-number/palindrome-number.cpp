class Solution {
public:
    bool isPalindrome(int x) {

        if (x < 0) {
            return false;
        }

        int original = x;
        int reverse = 0;

        while (x != 0) {

            int digit = x % 10;

            if(reverse>INT_MAX/10){
                return 0;
            }

            reverse = reverse * 10 + digit;

            x = x / 10;
        }

        return original == reverse;
    }
};