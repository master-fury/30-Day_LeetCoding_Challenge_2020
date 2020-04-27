class Solution {
public:
    string stringShift(string s, vector<vector<int>>& shift) {
        for(int i=0;i<shift.size();i++){
            if(shift[i][0]==0){
                while(shift[i][1]--){
                    string ch;
                    ch.push_back(s[0]);
                    s.erase(s.begin());
                    s.append(ch);
                }
            }
            else{
                while(shift[i][1]--){
                    string ch;
                    ch.push_back(s.back());
                    s.pop_back();
                    ch.append(s);
                    s=ch;
                }
            }
        }
        return s;
    }
};