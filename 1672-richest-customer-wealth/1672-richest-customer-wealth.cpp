class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        // vector<int> totalSum;
        // int sum = 0;
        int maxWealth = INT_MIN;
        for(int i=0; i<accounts.size(); i++) {
            int sum = 0;
            for(int j = 0; j<accounts[i].size(); j++) {
                sum+= accounts[i][j];
            }

            maxWealth = max(maxWealth, sum); 
        }

        // for(int i=0; i<accounts.size(); i++) {
        //     vector<int> arr = accounts[i];
        //     for(int j=0; j<arr.size(); j++) {
        //         sum = sum + arr[j];
        //     }
        //     totalSum.push_back(sum);
            
        // }
        // for(int k=0; k<totalSum.size(); k++) {
        //     if(max <= totalSum[k]) {
        //         max = totalSum[k];
        //     }
        // }

        return maxWealth;
    }
};