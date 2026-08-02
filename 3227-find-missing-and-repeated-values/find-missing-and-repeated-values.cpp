class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        vector<int>ans;
        unordered_set<int>m;
        int a,b;
        long long exptsum=0;
        long long actualsum=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                actualsum+=grid[i][j];
                if(m.find(grid[i][j])!=m.end()){
                    a=grid[i][j];
                    ans.push_back(a);
                }
                m.insert(grid[i][j]);
            }
        }
        exptsum=1LL *(n*n) *(n*n+1) / 2;
        b=exptsum+a - actualsum;
        ans.push_back(b);
        return {a,b};
        
    }
};