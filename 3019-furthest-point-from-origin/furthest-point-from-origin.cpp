class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int a=0, b=0;
        for(char c : moves){
            a += (c=='R')-(c=='L');
            b += c == '_';
        }
        return abs(a) + b;
    }
};