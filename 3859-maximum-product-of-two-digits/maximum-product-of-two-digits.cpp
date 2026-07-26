class Solution {
public:
    int maxProduct(int n) {
        int maxnum=0;
        int maxpro=0;
        int product=1;
        int maxnum2=1;
        while(n>0){
            int rem=n%10;
             maxnum=max(maxnum,rem);
            product=maxnum2*rem;
            maxpro=max(maxpro,product);
             if(maxnum!=maxnum2){
                maxnum2=maxnum;
             }
             n=n/10;
        }
        return maxpro;
        
    }
};