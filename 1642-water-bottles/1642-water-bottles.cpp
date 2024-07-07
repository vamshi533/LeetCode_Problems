class Solution {
public:
    int numWaterBottles(int b, int e) {
        int s=b;
        while(b>=e)
        {
            s=s+b/e;
            b=b/e+b%e;
        }
        return s;
    }
};