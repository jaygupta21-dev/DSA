class Solution {
    void subset(vector<int>&arr,vector<int>&ans,vector<vector<int>>&sub,int i){
        if(i==arr.size()){
            sub.push_back(ans);
            return;
        }
        ans.push_back(arr[i]);
        subset(arr,ans,sub,i+1);
        ans.pop_back();
        int idx=i+1;
        while(idx<arr.size() && arr[idx]==arr[idx-1]){
            idx++;
        }
        subset(arr,ans,sub,idx);

    }
public:
    vector<vector<int>>subsetsWithDup(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<int>ans;
        vector<vector<int>>sub;
        subset(arr,ans,sub,0);
        return sub;

        
    }
};