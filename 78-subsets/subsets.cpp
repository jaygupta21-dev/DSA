class Solution {
    void subset(vector<int>&arr,vector<int>&ans,vector<vector<int>>&sub,int i){
        if(i==arr.size()){
            sub.push_back(ans);
            return;
        }
        ans.push_back(arr[i]);
        subset(arr,ans,sub,i+1);
        ans.pop_back();
        subset(arr,ans,sub,i+1);

    }
public:
    vector<vector<int>> subsets(vector<int>& arr) {
        vector<int>ans;
        vector<vector<int>>sub;
        subset(arr,ans,sub,0);
        return sub;

        
    }
};