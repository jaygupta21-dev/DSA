class Solution {
public:
    int numSubarraysWithSum(vector<int>& arr, int k) {
        int n=arr.size();
        int psum[n];
        int count=0;
        unordered_map<int,int>m;
        psum[0]=arr[0];
        for(int i=1;i<n;i++){
            psum[i]=psum[i-1]+arr[i];
        }
        for(int i=0;i<n;i++){
            int val=(psum[i]-k);
            if(psum[i]==k){
                count++;
            }
             if(m.find(val)!=m.end()){
                count=count+m[val];
            }
            if(m.find(psum[i])!=m.end()){
                m[psum[i]]++;
            }
            else{
                m[psum[i]]=1;
            }
        }
        return count;


           
        
    }
};