class Solution {
    int newnum(int n){
        int d=0;
        while(n>0){
        int t=n%10;
        d+=t*t;
        n/=10;
        }
        return d;
    }
public:
    bool isHappy(int n) {
        unordered_set <int> visited;
        while(true){
            if(n==1)
            return true;
            n=newnum(n);
            if(visited.count(n)==1)
                return false;
            visited.insert(n);    
        }
    }
};