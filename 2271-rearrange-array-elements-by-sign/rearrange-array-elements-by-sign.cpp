class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        vector<int>arr1;
        vector<int>arr2;
        while(i<n){
            if(arr[i]>0){
                arr1.push_back(arr[i]);
                i++;
            }
            else{
                arr2.push_back(arr[i]);
                i++;
            }   
    }
    int k=0;
    for(int j=0;j<n;j=j+2){
        arr[j]=arr1[k];
        k++;
    }
    int m=0;
    for(int j=1;j<n;j=j+2){
        arr[j]=arr2[m];
        m++;
    }
    return arr;
    }
};