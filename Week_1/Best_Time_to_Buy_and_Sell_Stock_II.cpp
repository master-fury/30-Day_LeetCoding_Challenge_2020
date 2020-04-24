class Solution {
public:
    const int INF= 1e9 + 5;
    int maxProfit(vector<int>& prices) {
        int bws=-INF, bwos=0;
        for(int i : prices){
            bws=max(bws,bwos-i);
            bwos=max(bwos,bws+i);
        }
        return bwos;
    }
};