class Solution {

    void subset(vector<int>& candidates,
                vector<int>& ans,
                vector<vector<int>>& sub,
                int target,
                int i) {

        // Base Case
        if(target == 0){
            sub.push_back(ans);
            return;
        }

        if(i == candidates.size() || target < 0){
            return;
        }

        // Pick
        ans.push_back(candidates[i]);
        subset(candidates, ans, sub, target - candidates[i], i);

        // Backtracking
        ans.pop_back();

        // Not Pick
        subset(candidates, ans, sub, target, i + 1);
    }

public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<int> ans;
        vector<vector<int>> sub;

        subset(candidates, ans, sub, target, 0);

        return sub;
    }
};