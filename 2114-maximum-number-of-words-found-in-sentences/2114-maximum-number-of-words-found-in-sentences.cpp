class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
       int len = 0;
       int max = 0;
       string str = "";
       for(int i = 0; i<sentences.size(); i++) {

            str += sentences[i];
            for(int j=0; j<str.length(); j++) {
                if(str[j]==' ') {
                    len++;  
                }
            }
            str = "";
            if(len>=max) {
                max = len;
            }

            len = 0;

       }
       return max + 1;
    }
};