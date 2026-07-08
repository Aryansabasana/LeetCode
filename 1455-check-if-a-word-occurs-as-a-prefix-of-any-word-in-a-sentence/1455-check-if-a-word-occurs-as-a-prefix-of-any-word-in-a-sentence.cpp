class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
          int a = sentence.find(searchWord) ; 
        while(a!=-1){
            if(a==0 || sentence[a-1] == ' '){
                int count = 1 ; 
                for(int i = 0 ; i < a ; i ++){
                    if(sentence[i]==' '){
                        count++ ; 
                    }
                }
                return count ; 
            }
            a = sentence.find(searchWord , a + 1) ; 
        }
        return  -1 ; 
    }
};