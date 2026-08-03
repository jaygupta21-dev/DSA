class Solution {
public:
    int findNumbers(vector<int>& arr) {
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int count=0;
            int n=arr[i];
            while(n>0){
                n=n/10;
                count++;
            }
            if(count%2==0){
                ans++;
            }
        }
        return ans;

        
    }
};