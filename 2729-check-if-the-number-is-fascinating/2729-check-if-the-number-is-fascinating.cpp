class Solution {
public:
    bool isFascinating(int n) {
         int a = n ; 
        int b = n * 2 ; 
        int c = n * 3 ; 
        string s1 = to_string(a) ; 
        string s2 = to_string(b) ; 
        string s3 = to_string(c) ; 
        string s = s1 + s2 + s3 ; 
        sort(s.begin() , s.end()) ; 
        return s == "123456789" ;
    }
};