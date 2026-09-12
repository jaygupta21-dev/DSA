class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        int lmax=0;
        int rmax=0;
        int l=0;
        int r=n-1;
        int ans=0;
        while(l<r){
            lmax=max(lmax,arr[l]);
            rmax=max(rmax,arr[r]);
            if(rmax<lmax){
                ans+=rmax-arr[r];
                r--;
            }
            else{
                ans+=lmax-arr[l];
                l++;
            }
            
        }
        return ans;

        
    }
};