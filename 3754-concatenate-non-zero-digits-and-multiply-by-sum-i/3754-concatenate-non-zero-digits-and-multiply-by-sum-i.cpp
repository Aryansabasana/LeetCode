class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0 ; 
        long long v1 = 0 ; 
        long long v2 = 0 ; 
        while(n>=1){
            if(n%10){
                sum += n % 10 ;
                v1 = v1*10 + n%10 ;
            }
            n = n / 10 ;
        }
        while(v1>=1){
            v2 = v2*10 + v1 % 10 ; 
            v1 = v1 / 10 ; 
        }
        return v2 * sum ; 
    }
};