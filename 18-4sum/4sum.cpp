class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<vector<int>>ans;
        sort(arr.begin(),arr.end());
        for(int i=0;i<n-3;i++){
            if(i>0 && arr[i]==arr[i-1]){
                continue;
            }
            int a=arr[i];
            for(int j=i+1;j<n-2;j++){
                if(j>i+1 && arr[j]==arr[j-1]){
                    continue;}

                int b=arr[j];
                int left=j+1;
                int right=n-1;
                while(left<right){
                    int c=arr[left];
                    int d=arr[right];
                    long long sum=1LL *a+b+c+d;
                    if(sum==target){
                        ans.push_back({a,b,c,d});
                        left++;
                        right--;
                        while(left<right && arr[left]==arr[left-1]){
                            left++;
                        }
                        while(left<right && arr[right]==arr[right+1]){
                            right--;
                        }
                        
                    }
                        
                    else if(sum<target){
                        left++;
                    }
                    else{
                        right--;
                    }
                }
            }
        }
        return ans;
        
    }
};