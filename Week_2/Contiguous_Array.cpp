public:
    int findMaxLength(vector<int>& nums) {
       unordered_map<int,int> m;
        m[0]=-1;
        int maxlen=0,count=0;
        for(int i=0;i<nums.size();i++){
            count += nums[i]==1?1 :-1;
            auto it=m.find(count);
            if(it!=m.end()){
                maxlen=max(maxlen,i-m.at(count));
            }
            else{
                m[count]=i;
            }
        }
        return maxlen;
    }
};