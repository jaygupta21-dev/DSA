class Solution {
public:
    bool searchMatrix1(vector<vector<int>>& matrix, int target,int mid,int m){
       int stC=0,endC=m-1;
        int midC;
        while(stC<=endC){
            midC=stC+(endC-stC)/2;
            if(matrix[mid][midC]==target){
                return true;
            }
            if(target<matrix[mid][midC]){
                endC=midC-1;
            }
            else{
                stC=midC+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int stR=0,endR=n-1;
        int mid;
        while(stR<=endR){
          mid=stR+(endR-stR)/2;
          if(matrix[mid][0]<=target && target<=matrix[mid][m-1]){
          return searchMatrix1(matrix,target,mid,m);
          }  
          if(target<=matrix[mid][0]){
            endR=mid-1;
          }
          else if(target>matrix[mid][m-1]){
            stR=mid+1;
          }
        }
        return false;
        
    }
};