class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=INT_MIN,a=0;
        for(int i:nums){
            a=a+i;
            ans=max(ans,a);
            a=max(a,0);
        }
        return ans;
    }
};