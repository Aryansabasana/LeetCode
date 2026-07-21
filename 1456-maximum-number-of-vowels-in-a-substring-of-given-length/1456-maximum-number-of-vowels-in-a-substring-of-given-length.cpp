class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vow = {'a','e','i','o','u'};

        int count = 0;
        
        for(int i=0; i<k; i++) {
            if(vow.count(s[i])) {
                count++;
            }
        }

        int maxLen = count;

        for(int j=k; j<s.length(); j++) {
            if(vow.count(s[j])) {
                count++;
            }
            if(vow.count(s[j-k])) {
                count--;
            }

            maxLen = max(count, maxLen);
        }

        return maxLen;
    }
};