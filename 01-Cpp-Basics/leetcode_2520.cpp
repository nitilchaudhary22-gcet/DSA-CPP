class Solution {
public:
    int countDigits(int num) {
        int digits=0, original=num, rem;
        while(num>0){
            rem = num % 10;
            if(rem == 1 || original % rem == 0){
               digits = digits + 1;
            }
            num = num / 10;
        }
        return digits;
    }
};
