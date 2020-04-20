class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int ptr=0;
        for(int i:nums){
            if(i!=0){
                nums[ptr]=i;
                ptr++;
            }
        }
        for (int i=ptr;i<nums.size();i++){
            nums[i]=0;
        }
    }
};