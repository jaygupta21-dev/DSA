class Solution {
public:
    int compress(vector<char>& chars) {
        int  n=chars.size();
        int idx=0;
        int i=0;
        while(i<n){
            char ch=chars[i];
            int count =0;
            while(i<n && chars[i]==ch){
                count++;
                i++;
            }
            if(count==1){
                chars[idx]=ch;
                idx++;
            }
            if(count>1){
                chars[idx]=ch;
                idx++;
                string s=to_string(count);
                int size=s.size();
                for(int j=0;j<size;j++){
                    chars[idx]=s[j];
                    idx++;
                }
            }
        }
        return idx;

    }
};