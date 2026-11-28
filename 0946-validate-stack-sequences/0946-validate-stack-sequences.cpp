class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> res;
        bool ans = false;
        res.push(pushed[0]);
        int i = 1;
        int j = 0;
        

        while (i<pushed.size() || !res.empty()) {
            
           
            if (!res.empty() && j<popped.size() && res.top() == popped[j]) {
                res.pop();
                j++;
                
            }
            

            
            else if (i < pushed.size()) {
                res.push(pushed[i]);
                i++;
                
            }

            else {
                break;
            }
            
        }

        return res.empty() && j==popped.size();
    }
};