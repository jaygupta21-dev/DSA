class Solution {
public:
    int findDuplicate(vector<int>& arr) {
        multimap<int ,int>m;
        int n=arr.size();
        // use of slow and fast pointer 
        int slow=arr[0];
        int fast=arr[0];
        do{
            slow=arr[slow];
            fast=arr[arr[fast]];
        }while(slow!=fast);
        slow=arr[0];
        while(slow!=fast){
            slow=arr[slow];
            fast=arr[fast];
        }
        return fast;
        
    }
};