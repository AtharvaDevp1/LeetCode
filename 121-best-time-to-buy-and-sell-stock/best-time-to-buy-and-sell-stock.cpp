class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int n=prices.size();
    if (prices.size() < 2) return 0;

    int mini=1e9;
    int maxi=0;

    for(auto it : prices){
        mini=min(mini,it);
        maxi=max(maxi,it-mini);
    }


   
   return maxi;
        
    }
};