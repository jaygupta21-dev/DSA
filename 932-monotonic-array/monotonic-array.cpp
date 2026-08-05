class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        int n=arr.size();
        int j=n-1;
        int i=n-1;
        int count_a=0;
        int count_b=0;
        while(j>0){
            if(arr[j]>=arr[j-1]){
                count_a++;
            }
            j--;
        }
        if(count_a==n-1){
            return true;
        }
        while(i>0){
            if(arr[i-1]>=arr[i]){
                count_b++;
            }
            i--;
        }
        if(count_b==n-1){
            return true;
        }
        return false;
        
    }
};