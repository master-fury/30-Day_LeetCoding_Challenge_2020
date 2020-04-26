class Solution {
public:
    int lastStoneWeight(vector<int>& stones) { 
        while(stones.size()>1){
            sort(stones.begin(),stones.end(),greater<int>());
            if(stones.size()==2 && stones[0]==stones[1]){
                return 0;
                }
            else if(stones[0]==stones[1]){
                stones.erase(stones.begin()+(1));
                stones.erase(stones.begin());                
            }
            else{
                int new_stone=stones[0]-stones[1];
                stones[0]=new_stone;
                stones.erase(stones.begin()+(1));
            }
        }
        return stones[0];
    }
};