class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int sum = 0;
        int rem;
        int temp = x;

        while(x >= 1) {
            rem = x % 10;
            sum = sum + rem;
            x = x / 10;
        }

        if(temp % sum == 0) {
            return sum;
        }

        return -1;
    }
};
