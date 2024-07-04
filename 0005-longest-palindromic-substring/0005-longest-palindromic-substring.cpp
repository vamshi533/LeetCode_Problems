class Solution {
    private:
        bool check(string &s,int i,int j)
        {
            while(i<j)
            {
                if(s[i]!=s[j])
                {
                    return false;
                }
                i++;
                j--;
            }
            return true;
        }
public:
    string longestPalindrome(string s) {
        int st=0;
        int maxin=0;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            for(int j=i;j<n;j++)
            {
                if(check(s,i,j))
                {
                    if(j-i+1>maxin)
                    {
                        maxin=j-i+1;
                        st=i;
                    }
                }
            }
        }
        return s.substr(st,maxin);
    }
};