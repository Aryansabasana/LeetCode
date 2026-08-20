class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    
        for(int i=0; i<9; i++) {
             map<char, int> mp;

                for(int j=0; j<9; j++) {    
                    if(board[i][j]=='.') {
                        continue;
                    }

                    if(mp.find(board[i][j])!=mp.end()) {
                        return false;
                    }

                    mp[board[i][j]]++;
                }


                map<char, int> mp2;

                for(int j=0; j<9; j++) {
                    if(board[j][i]=='.') {
                        continue;
                    }

                    if(mp2.find(board[j][i])!=mp2.end()) {
                        return false;
                    }

                    mp2[board[j][i]]++;
                }

                map<char, int> mp3;

                int startRow = (i/3)*3;
                int startCol = (i%3)*3;

                for(int k=startRow; k<startRow + 3; k++) {
                    for(int j=startCol; j<startCol + 3; j++) {
                        if(board[k][j]=='.') {
                            continue;
                        }

                        if(mp3.find(board[k][j])!=mp3.end()) {
                            return false;
                        }

                        mp3[board[k][j]]++;
                    }
                }
            
        }

        return true;
    }
};