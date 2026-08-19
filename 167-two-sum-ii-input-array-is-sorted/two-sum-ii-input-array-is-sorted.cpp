class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        vector<int>ans;
        while(i<=j){
            if(arr[i]+arr[j]==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                break;
            }
            if(arr[i]+arr[j]>target){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;

        
    }
};