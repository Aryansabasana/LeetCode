class Solution {
public:
    string removeStars(string s) {
        vector<char> res;
        string ans = "";
        for(int i=0; i<s.length(); i++) {
            if(s[i]!='*') {
                res.push_back(s[i]);
            }
            else{
                res.pop_back();
            }
        }

        for(int i=0; i<res.size(); i++) {
            ans += res[i];
        }

        return ans;
    }
};