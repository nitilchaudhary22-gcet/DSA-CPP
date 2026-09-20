class Solution {
public:
     bool isHappy(int n) {
        int sum ;
        int rem ;
        while(n>6){
            sum = 0; 
            while(n>0){
                rem = n % 10;
                sum = sum + rem*rem ;
                n = n / 10;
            }
            n = sum;
            if(sum == 1 || sum == 7){
                return true ;
            }
        }
        if(n == 1){
            return true;
        }
        return false;
    }
};
