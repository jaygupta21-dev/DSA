class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>ans;
        int j=0;
        for(int i=0;i<n;i++){
            int j=start+2*i;
            ans.push_back(j);
        }
        for(int i=0;i<n;i++){
            j=j^ans[i];
        }
        return j;
        
    }
};