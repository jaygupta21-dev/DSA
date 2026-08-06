class Solution {

    void subset(vector<int>& candidates,
                vector<int>& ans,
                vector<vector<int>>& sub,
                int target,
                int i) {

        if(target == 0){
            sub.push_back(ans);
            return;
            }

        if(i == candidates.size() || target < 0){
            return;
        }

        // Pick
        ans.push_back(candidates[i]);
        subset(candidates, ans, sub, target - candidates[i], i+1);

        // Backtracking
        ans.pop_back();

        // Not Pick
        int idx=i+1;
        while(idx<candidates.size() && candidates[idx]==candidates[idx-1]){
            idx++;
        }
        subset(candidates, ans, sub, target,idx);
    }

public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> ans;
        vector<vector<int>> sub;

        subset(candidates, ans, sub, target, 0);

        return sub;
    }
};