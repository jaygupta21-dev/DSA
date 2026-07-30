class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        multimap<int ,int>m;
        int n=arr.size();
        int i=0;
        for( i=0;i<n;i++){
            m.insert({arr[i],i});
            if(m.count(arr[i])>1){
                // return arr[i];
                break;
            }
        }
        return arr[i];
        
    }
};