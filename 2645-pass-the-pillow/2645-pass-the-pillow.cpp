class Solution {
public:
    int passThePillow(int n, int time) {
        int t= time/(n-1);
        return t%2==0? (time%(n-1)+1) : (n-time%(n-1));
    }
};