class Solution {
public:
    int fillCups(vector<int>& amount) {
        int maxi=0;
        int total =0;
        for(int i=0;i<amount.size();i++){
            total+=amount[i];
            maxi=max(maxi,amount[i]);
        }
       
        return max(maxi,(total+1)/2);
    }
};