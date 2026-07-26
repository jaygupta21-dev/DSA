class Solution {
public:
    int maxProduct(int n) {
        int maxnum=0;
        int maxpro=0;
        int product=1;
        int maxnum2=1;
        while(n>0){
            int rem=n%10;
            product=maxnum*rem;
            maxpro=max(maxpro,product);
                     maxnum=max(maxnum,rem);
             n=n/10;
        }
        return maxpro;
        
    }
};