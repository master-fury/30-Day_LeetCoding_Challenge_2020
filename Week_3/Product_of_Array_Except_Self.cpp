class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        const int n=nums.size();
        vector<int>pref_pro;
        vector<int>suf_pro(n+1);
        pref_pro.push_back(1);
        suf_pro[n]=1;
        for(int i:nums){
            pref_pro.push_back(pref_pro.back()*i);
        }
        for(int i=n-1;i>=0;i--){
            suf_pro[i]=suf_pro[i+1]*nums[i];
        }
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i]=pref_pro[i]*suf_pro[i+1];
        }
        return ans;
    }
};