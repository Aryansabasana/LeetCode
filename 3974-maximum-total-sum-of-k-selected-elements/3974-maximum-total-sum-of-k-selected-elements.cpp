class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
         sort(nums.rbegin() , nums.rend()) ; 
        long long int sum = 0 ; 
        for(int i = 0 ; i < k ; i ++){
            if(mul<1){
                //  (1LL) *   (*)kae ke likhana hota he 
                sum += (1LL) * nums[i] ; 
                mul -- ;
            }
            else{
                // long long direct likha sakte he 
                sum += (long long) nums[i]*mul ; 
                mul-- ; 
            }
        }
        return sum ; 
    }
};