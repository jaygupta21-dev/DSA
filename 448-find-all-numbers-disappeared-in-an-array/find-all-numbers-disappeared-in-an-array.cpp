class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& arr) {
        int n=arr.size();
        vector<int>ans;
        for(int i=0;i<n;i++){
            int idx=abs(arr[i])-1;
            arr[idx]=-abs(arr[idx]);
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
        
    }
};