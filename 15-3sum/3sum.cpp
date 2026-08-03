class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n=arr.size();
        vector<vector<int>>ans;
        int a,b,c;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
             a=arr[i];
           int j=i+1;
            int k=n-1;
            while(j<k){
                b=arr[j];
                c=arr[k];
                int sum=a+b+c;
                if(sum==0){
                         ans.push_back({a,b,c});
                          j++;
                          k--;
                       while(j<k && arr[j]==arr[j-1]){
                        j++;
                       }
                     
                      }
                else if(sum<0){
                    j++;
                }
                else{
                    k--;
                }
            }
        }
        return ans;
            
        
    }
};