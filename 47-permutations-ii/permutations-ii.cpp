class Solution {
    void parunique(vector<int>&arr,vector<vector<int>>&ans,set<vector<int>>&s,int idx){
        if(idx==arr.size()){
            if(s.find(arr)==s.end()){
            ans.push_back(arr);
            s.insert(arr);
            }
            return;
             }
        for(int i=idx;i<arr.size();i++){
            swap(arr[idx],arr[i]);
            parunique(arr,ans,s,idx+1);
            // here backtracking started below this line code for backtracking
            swap(arr[idx],arr[i]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& arr) {
        vector<vector<int>>ans;
        set<vector<int>>s;
        parunique(arr,ans,s,0);
        return ans;
        
    }
};