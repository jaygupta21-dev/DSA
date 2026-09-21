class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        unordered_map<char ,int>m;
        queue<int>Q;
        for(int i=0;i<n;i++){
            Q.push(s[i]);
            if(m.find(s[i])==m.end()){
                m[s[i]]=1;
            }
            else{
                m[s[i]]++;
            }
        }
        for(int i=0;i<n;i++){
           if(m[Q.front()]==1){
            return i;
           }
           else{
            Q.pop();
           }
        }
        return -1;
        
    }
};