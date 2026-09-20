class Solution {
public:
    bool isPalindrome(int x) {
        int rem, original = x;
        long long rev = 0;
        while (x>0){
        rem = x % 10;
        rev = rev *10 + rem;
        x = x/10;
        }
        if(original==rev){
            return true;
        }
        return false;
    }
};
