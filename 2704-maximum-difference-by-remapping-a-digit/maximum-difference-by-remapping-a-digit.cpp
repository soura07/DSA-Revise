class Solution {
public:
    void replace(char ch, char new_ch, int idx, string &s){
        for(int i=idx; i<s.length(); i++){
            if(s[i] == ch) s[i] = new_ch;
        }
    }
    int minMaxDifference(int num) {
        string s = to_string(num);
        
        for(int i=0; i<s.length(); i++){
            if(s[i] != '9'){
                replace(s[i], '9', i, s);
                break;
            }
        }
        int mx = stoi(s);

        s = to_string(num);

        for(int i=0; i<s.length(); i++){
            if(s[i] != '0'){
                replace(s[i], '0', i, s);
                break;
            }
        }
        int mn = stoi(s);

        return mx - mn;
    }
};