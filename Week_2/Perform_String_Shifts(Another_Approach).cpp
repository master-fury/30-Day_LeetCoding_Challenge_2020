class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        int count=0;
        for(vector<int> i : shift){
            if(i[0]==0)
                count-=i[1];
            else
                count+=i[1];
        }
        int l=s.length();
        count %=l;
        if(count<0)
            count+=l;
        return s.substr(l-count)+s.substr(0,l-count);  
    }
};