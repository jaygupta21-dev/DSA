class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int j=0;
        int maxsize=0;
       int size=0;
        unordered_map<char,int>m;
        for(int i=0;i<n;i++){
           while(m.find(s[i])!=m.end()){
            m.erase(s[j]);
            j++;
            size--;
           }
           m[s[i]]=1;
           size++;
           maxsize=max(maxsize,size);

        }
        return maxsize;
        
    }
};