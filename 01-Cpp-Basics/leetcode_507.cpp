class Solution {
public:
    bool checkPerfectNumber(int num) {
        long long i = 1;
        long long sum = 0;

        while(i < num) {
            if(num % i == 0) {
                sum += i;
            }
            i++;
        }

        if(sum == num) {
            return true;
        }

        return false;
    }
};
