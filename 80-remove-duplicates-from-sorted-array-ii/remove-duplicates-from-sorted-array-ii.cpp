class Solution {
public:
    int removeDuplicates(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int k=1;
        int count =1;
        if(n<=2){
            return n;
        }
        while(i<n-1){
            if(arr[i]==arr[i+1]){
                if(count<2){
                    count++;
                    k++;
                    arr[k-1]=arr[i+1];
                }
                i++;
            }
            else{
                count=1;
                k++;
                arr[k-1]=arr[i+1];
                i++;
            }
        }
        return k;
        
    }
};