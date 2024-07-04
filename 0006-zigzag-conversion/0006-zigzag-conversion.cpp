class Solution {
public:
    string convert(string s, int num) {
        if(num==1 || num>=s.length())
        {
            return s;
        }
        vector<vector<char>>temp(num);
        int index=0,t=1;
        for(char p:s)

        {
            temp[index].push_back(p);
            if(index==0)
            {
                t=1;
            }
            else if(index==num-1)
            {
                t=-1;
            }
            index+=t;
        }
        string ans="";
        for(auto p:temp)
        {
            for(char i:p)
            {
                ans+=i;
                            }
        }
        return ans;
    }
};