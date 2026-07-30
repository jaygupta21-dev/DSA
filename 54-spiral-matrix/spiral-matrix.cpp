class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int>ans;
        int strow=0,stcol=0,endrow=n-1,endcol=m-1;
        while(strow<=endrow && stcol<=endcol){
            for(int i=stcol;i<=endcol;i++){
               ans.push_back(matrix[strow][i]);
            }
            for(int i=strow+1;i<=endrow;i++){
                ans.push_back(matrix[i][endcol]);
            }
            for(int i=endcol-1;i>=stcol;i--){
                if(strow==endrow){
                    break;
                }
                ans.push_back(matrix[endrow][i]);
            }
            for(int i=endrow-1;i>strow;i--){
                if(stcol==endcol){
                    break;
                }
                ans.push_back(matrix[i][stcol]);
            }
            strow++,endrow--,stcol++,endcol--;
        }
        return ans;
        
    }
};