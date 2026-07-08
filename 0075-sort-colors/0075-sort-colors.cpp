class Solution {
public:
    void sortColors(vector<int>& nums) {
          int a = 0 ; 
        int b = nums.size() - 1 ; 
        for (int i = 0 ; i < nums.size() ; i++){
        if(i>b){
            break ; 
        }
        if(nums[i]==0){
            int temp = nums[i] ; 
            nums[i] = nums[a] ; 
            nums[a] = temp ; 
            a++ ; 
        }
        else if (nums[i]==2){
            int temp = nums[i] ; 
            nums[i] = nums[b] ; 
            nums[b] = temp ; 
            i -- ; 
            b-- ; 
        }
        
        }
    }
};