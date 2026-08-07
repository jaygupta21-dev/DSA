class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int k=1;
        if(n==1){
            return n;
        }
        while(i<n-1){
            if(arr[i]==arr[i+1]){
                i++;
            }
            else{
                k++;
                arr[k-1]=arr[i+1];
                i++;
            }
        }
        return k;
        
    }
};