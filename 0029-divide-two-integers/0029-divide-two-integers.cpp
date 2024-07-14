class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==divisor)
        {
            return 1;
        }

        int flag=0;
        if(dividend<0 && divisor>0)
        {
            flag=1;
        }else if(dividend>0 && divisor<0)
        {
            flag=1;
        }
        else if(dividend<0 && divisor<0)
        {
            flag=0;
        }
        long a=abs(dividend);
        long b=abs(divisor);
        long res=0;
        while(a>=b)
        {
            int c=0;
            while(a>=(b<<(c+1)))
            {
                c++;
            }
            a=a-(b<<c);
            res+=(1<<c);
        }
        if(res== 1<<31 && flag==0)
        {
            return INT_MAX;
        }
        if(res == 1<<31 && flag==1)
        {
            return INT_MIN;
        }
        if(flag==1)
        {
            return -res;
        }
        return res;
    }
};