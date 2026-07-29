class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int R=0,C=m-1;
        while(R<n && C>=0){
            if(matrix[R][C]==target){
                return true;
            }
            if(matrix[R][C]>target){
                C--;
            }
            else{
                R++;
            }
        }
        return false;
        
    }
};