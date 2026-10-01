class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            int temp = 0;
            while(nums[i]>0){
                int digit = nums[i]%10;
                temp += digit;
                nums[i] /=10;
            }
            if(temp == i){
                return i;
            }
        }

        return -1;
    }
};