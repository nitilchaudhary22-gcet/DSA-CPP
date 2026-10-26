class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxwealth = 0;
        for(int i = 0; i < accounts.size(); i++){
            int Wealth = 0;
            for(int j = 0; j < accounts[i].size(); j++){
                Wealth = Wealth + accounts[i][j];
            }
            if(Wealth > maxwealth){
                maxwealth = Wealth;
            }
        }
        
    return maxwealth;
    }
};
