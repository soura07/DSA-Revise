class Solution {
public:
    int longestSubsequence(string s, int k) {
        int c=0;
        while(s.size()>=32 || stoi(s,nullptr,2)>k){
            if(s[0]=='0') c++;
            s=s.substr(1);
        }
        return c+s.size();
    }
};