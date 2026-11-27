class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> res;
        
        for(int i=0; i<operations.size(); i++) {
           int n = res.size();

            if(operations[i]=="C") {
                res.pop_back();
            }

           else if(operations[i]=="D") {
                res.push_back(res[n-1]*2);
            }

           else if(operations[i]=="+"){
                res.push_back(res[n-1] + res[n-2]);
            }

            else {
                int val = stoi(operations[i]);
                res.push_back(val);
            }
        }

        return accumulate(res.begin(), res.end(), 0);
    }
};