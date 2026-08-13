class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int ans=0;
        while(i<n){
           ans = ans^arr[i]^i;
            i++;
        }
        ans=ans^n;
        return ans ;


    }
};