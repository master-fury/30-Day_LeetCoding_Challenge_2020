class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n =nums.size();
        int ans=0;
        int pref=0;
        unordered_map<int ,int>countp;
        countp[pref]++;
        for(int r=0;r<n;r++){
            pref += nums[r];
            int t=pref-k;
            ans += countp[t];
            countp[pref]++;
        }
        return ans;
    }
};