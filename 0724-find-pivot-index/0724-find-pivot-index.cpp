class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total = 0;
        for(int num: nums){
            total += num;
        }
        int leftSum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            if(2*leftSum + nums[i] == total){
               return i ; 
            }
            leftSum += nums[i];
        }
        return -1;
    }
};