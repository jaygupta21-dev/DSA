class Solution {
    bool iSsafe(vector<string>&board,int row,int col,int n){
        // row checking
        for(int i=0;i<n;i++){
            if(board[row][i]=='Q'){
              return false;}
        }
        // colume checking
        for(int i=0;i<n;i++){
            if(board[i][col]=='Q'){
            return false;
            }
        }
        // left upper digonal checking
        for(int i=row,j=col;i>=0 && j>=0;i--,j--){
            if(board[i][j]=='Q'){
            return false;
            }
        }
        //  cheking for right upper diagonal
        for(int i=row,j=col;i>=0 && j<n;i--,j++){
            if(board[i][j]=='Q'){
            return false;
            }
        }
        return true;
    }
    void queen(vector<string>&board,int row,int n,vector<vector<string>>&ans){
        if(row==n){
            ans.push_back({board});
            return;
        }
        for(int j=0;j<n;j++){
            if(iSsafe(board,row,j,n)){
                board[row][j]='Q';
                queen(board,row+1,n,ans);
                board[row][j]='.';
            }
        }
    }
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        vector<vector<string>>ans;
        queen(board,0,n,ans);
        return ans;
        
    }
};