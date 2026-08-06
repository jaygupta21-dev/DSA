class Solution {
    int bs(vector<int>&arr ,int tar,int st,int end){
        if(st<=end){
            int mid=st+(end-st)/2;
            if(arr[mid]==tar){
                return mid;
            }
            if(arr[mid]>tar){
                return bs(arr,tar,st,mid-1);
            }
            else{
              return bs(arr,tar,mid+1,end);
            }
        }
        return -1;
    }
public:
    int search(vector<int>& arr, int tar) {
        int n=arr.size();
        return bs(arr,tar,0,n-1);

        
        
    }
};