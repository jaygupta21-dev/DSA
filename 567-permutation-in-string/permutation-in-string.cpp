class Solution {
   bool ispermutationsame(int arr[],int arr2[]){
        for(int i=0;i<26;i++){
            if(arr[i]!=arr2[i]){
                return false;
            }
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int n=s1.size();
        int arr[26]={0};
         for(int i=0;i<n;i++){
            int m=s1[i]-'a';
            arr[m]++;
         }
         int m=s2.size();
         for(int i=0;i<m;i++){
            int windleng=0, idx=i;
            int arr2[26]={0};
            while(windleng<n && idx<m){
                int j=s2[idx]-'a';
                arr2[j]++;
                windleng++;
                idx++;
            }
            if(ispermutationsame(arr,arr2)){
                return true;
            }
         }
         return false;
        
    }
};