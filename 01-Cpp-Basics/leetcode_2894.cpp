
class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0;
        int num2 = 0;
        int i = 1;

        while(i <= n) {
            if(i % m != 0) {
                num1 = num1 + i;
            }
            else {
                num2 = num2 + i;
            }
            i++;
        }

        return num1 - num2;
    }
};
