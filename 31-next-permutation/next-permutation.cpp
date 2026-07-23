class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int pivet=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                pivet=i;
                break;
            }
        }
        if(pivet==-1){
            // here we did a on place in the given array that why we are returning from here
             reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>=pivet;i--){
            if(nums[i]>nums[pivet]){
                swap(nums[pivet],nums[i]);
                break;
            }
        }
        int i=pivet+1;
        int j=n-1;
        while(i<=j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        
    }
};