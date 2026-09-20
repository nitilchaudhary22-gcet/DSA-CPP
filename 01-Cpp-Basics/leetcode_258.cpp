class Solution {
public:
    int addDigits(int num){
        int sum = 0, rem;
        while(num>0){
            rem = num%10;
            sum += rem;
            num = num/10;
        }
            while(sum>9){
                rem = sum%10;
                sum = sum / 10 + rem;
            }
        return sum;
    }
};
