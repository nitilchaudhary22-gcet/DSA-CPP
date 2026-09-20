class Solution {
public:
    int reverse(int x) {
        long long rem, temp = 0;
        while(x!=0){
            rem = x%10;
            temp = temp*10 + rem;
            x = x/10;
        }
        if(temp > 2147483647 || temp < -2147483648)
            return 0;
            
        return temp;
    }
};
