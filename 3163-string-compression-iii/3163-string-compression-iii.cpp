class Solution {
public:
    string compressedString(string word) {
        string res = "";
        int count = 1;

        for(int i=1; i<word.length(); i++) {
            if(word[i]==word[i-1]) {
                count++;
            }

            else {
                if(count <= 9) {
                    res += to_string(count);
                    res += word[i-1];
                    count = 1;
                }

                else {
                    res += '9' ;
                    res += word[i-1];
                    count = count - 9;
                    while(count > 9) {
                        res += '9' ;
                        res += word[i-1];
                        count=count-9;

                        
                    }
                    if(count>=1) {
                           res += to_string(count);
                           res += word[i-1];
                           count = 1;
                    }
                }
                
                
            }

        }

        while(count > 9) {
            res += "9";
            res += word.back();
            count -= 9;
        }

        res += to_string(count);
        res += word.back();


        return res;
    }
};