class Solution {
public:
    int findTheWinner(int n, int k) {
        int s=0;
        for(int i=1;i<=n;i++)
        {
            s=(s+k)%i;
        }
        return s+1;
    }
};