class Solution {
    bool issorted(vector<int>&arr,int n){
        if(n==0||n==1){
        return true;
      }
      return arr[n-1]>=arr[n-2] && issorted(arr,n-1);

    }
     bool issorted2(vector<int>&arr,int n){
        if(n==0||n==1){
        return true;
      }
      return arr[n-1]<=arr[n-2] && issorted2(arr,n-1);
     }

public:
    bool isMonotonic(vector<int>& arr) {
        int n=arr.size();
       return issorted(arr,n) || issorted2(arr,n);
        
    }
};