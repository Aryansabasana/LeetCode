class Solution {
public:
    int compress(vector<char>& chars) {
        string res = "";
        int count =1;
        for(int i=1; i<chars.size(); i++) {
            if(chars[i]==chars[i-1]) {
                count++;
            }
            else {
                res += chars[i-1];
                if(count>1) {
                res += to_string(count); }
                count = 1;
            }
        }

        res += chars.back();
        if(count>1) {
        res += to_string(count); 
        }

        chars.clear();

        for(int i=0; i<res.size(); i++) {
            
            chars.push_back(res[i]);
            
        }

        return chars.size();

    }
};