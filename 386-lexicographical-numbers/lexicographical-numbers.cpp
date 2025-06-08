class Solution {
public:
    void solve(int curr, int n, vector<int>&ans){
        if(curr > n){
            return;
        }
        ans.push_back(curr);

        for(int i=0; i<=9; i++){
            int num_new = curr * 10 + i;

            if(num_new > n)
                return;
            solve(num_new, n, ans);
            
        }
    }
    vector<int> lexicalOrder(int n) {
        vector<int> ans;

        for(int s=1; s<= 9; s++){
            solve(s, n, ans);
        }
        return ans;
    }
};