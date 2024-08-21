#define ll long long
class Solution {
public:
    int p = 1e9 + 7;
    ll power(long long x, long long y) {
      long long res = 1;    
      if (x == 0) return 0; 
        while(y>0)
        {
            if(y%2==1)
            {
                res=(res*x)%p;
            }
            y=y/2;
            x=(x*x)%p;
        }
      return res;
    }
  
    int countGoodNumbers(long long n) {
      ll count_of_4s = n/2;
      ll count_of_5s = n - count_of_4s;
      ll ans = ((power(4, count_of_4s) % p  * power(5, count_of_5s) % p) % p);
      return (int)ans;
       
    }
};