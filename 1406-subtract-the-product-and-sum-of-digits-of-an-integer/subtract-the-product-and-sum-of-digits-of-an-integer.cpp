class Solution {
public:
    int subtractProductAndSum(int n) {
        int rem;
        long pro=1;
        int sum=0;
        while(n>0){
            rem=n%10;
            pro=pro*rem;
            sum+=rem;
            n=n/10;
        }
        int diff=pro-sum;
        return diff;
        
    }
};