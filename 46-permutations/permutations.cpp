class Solution {
    // note:here ARR and ANS is pass by reference;
    void par(vector<int>&arr,vector<vector<int>>&ans,int idx){
        if(idx==arr.size()){
            ans.push_back(arr);
            return;
        }
        for(int i=idx;i<arr.size();i++){
            swap(arr[idx],arr[i]);
            par(arr,ans,idx+1);
            // here backtracking started below this line code for backtracking
            swap(arr[idx],arr[i]);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& arr) {
        vector<vector<int>>ans;
        par(arr,ans,0);
        return ans ;
        

    }
};