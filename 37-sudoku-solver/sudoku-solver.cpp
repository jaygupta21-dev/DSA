class Solution {
    bool issafe(vector<vector<char>>& board,int row,int col,int target){
        for(int i=0;i<9;i++){
            if(board[row][i]==target){
                return false;
            }
        }
        for(int i=0;i<9;i++){
            if(board[i][col]==target){
                return false;
            }
        }
        int strow=(row/3)*3;
        int stcol=(col/3)*3;
        for(int i=strow;i<strow+3;i++){
            for(int j=stcol;j<stcol+3;j++){
            if(board[i][j]==target){
                return false;
            }
            }
        }
        return true;
         }
    bool sudo(vector<vector<char>>& board,int row,int col){
        if(row==board.size()){
            return true;
        }
        if(col==9){
            return sudo(board,row+1,0)  ;
        }
        if(board[row][col]!='.'){
          return sudo(board,row,col+1);
        }
        for(char dig='1';dig<='9';dig++){
            if(issafe(board,row,col,dig)){
                board[row][col]=dig;
                if(sudo(board,row,col+1)){
                    return true;
                }
                board[row][col]='.';
            }
        }
        return false;
    }
public:
    void solveSudoku(vector<vector<char>>& board) {
        sudo(board,0,0);
    }
};