class Solution {
public:
    string answerString(string word, int numFriends) {
        if(numFriends==1) return word;
        int n=word.size();
        int req=n-numFriends+1;
        vector<string>res;
        int l=0;
        while(l<n){
            string temp="";
            for(int r=l;r<l+req;r++){
                if(r>=n) break;
                temp+=word[r];
            }
            res.push_back(temp);
            l++;
        }
        sort(res.begin(),res.end(),[](string& a,string& b){
            if(a.size()==b.size()) return a>b;
            return a>b;
        });
        return res[0];
    }
};