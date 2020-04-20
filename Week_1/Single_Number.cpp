class Solution {
public:
    int singleNumber(vector<int>& nums) {
      int r=0;
      for(int a:nums){
          r^=a;
      }
        return r;
    }
};