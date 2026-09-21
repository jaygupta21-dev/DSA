class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>arr;
        deque<int>q;
        for(int i=0;i<k;i++){
            while(q.size()>0 && nums[i]>=nums[q.back()]){
                q.pop_back();
                
            }
            q.push_back(i);
        }
        for(int i=k;i<n;i++){
            arr.push_back(nums[q.front()]);
            while(q.size()>0 && q.front() < i-k+1){
                q.pop_front();
            }
             while(q.size()>0 && nums[i]>=nums[q.back()]){
                q.pop_back();
                
            }
            q.push_back(i);


        }
        arr.push_back(nums[q.front()]);
        return arr;
        
    }
};