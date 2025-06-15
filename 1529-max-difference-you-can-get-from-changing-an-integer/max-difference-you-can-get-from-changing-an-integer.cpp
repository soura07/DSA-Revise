class Solution {
public:
    int maxDiff(int num) {
        string maxi = to_string(num);
        string mini = to_string(num);
        int n = maxi.size();
        int i = 0;
        
        while(i < n && maxi[i] == '9'){
            i++;
        }
        char x1 = maxi[i];
        
        int j = 0;
        while(j < n && (maxi[j] == '1' || maxi[j] == '0')){
            j++;
        }
        char x2 = maxi[j];
        
        for(int k = 0 ; k < n ; k++){
            if(maxi[k] == x1){
                maxi[k] = '9';
            }
            if(j > 0 && mini[k] == x2){
                mini[k] = '0';
            }
            if(j == 0 && mini[k] == x2){
                mini[k] = '1';
            }
        }

        return stoi(maxi) - stoi(mini);
    }
};