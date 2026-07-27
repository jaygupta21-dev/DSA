class Solution {
public:
    bool isPalindrome(int x) {
        long revnum=0;
        int orignal=x;
        while(x>0){
            int rem=x%10;
            revnum=revnum*10+rem;
            x=x/10;
        }
        if(orignal==revnum){
            return true;
        }
        else{
            return false;
        }
        
    }
};