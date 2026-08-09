class Solution {
public:
    string compressedString(string word) {
        int  n=word.size();
        string comp;
        int idx=0;
        int i=0;
        while(i<n){
            char ch=word[i];
            int count =0;
            while(i<n && word[i]==ch){
                count++;
                i++;
            }
            if(count<=9){
                string s=to_string(count);
                // comp.push_back(s);
                for(int j=0;j<s.size();j++){
                    comp.push_back(s[j]);
                }
                comp.push_back(ch);
            }
            else{
                while(count>9){
                    count =count-9;
                    string m=to_string(9);
                    // comp.push_back(m);
                    for(int j=0;j<m.size();j++){
                    comp.push_back(m[j]);
                }
                comp.push_back(ch);
                }
                string p=to_string(count);
                // comp.push_back(j);
                for(int j=0;j<p.size();j++){
                    comp.push_back(p[j]);
                    }
                comp.push_back(ch);
            } 
        }
        return comp;

        
    }
};