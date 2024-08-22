class Solution {
public:

    void generate(vector<string>&result,string str,int n,int open,int close)
    {
        if(str.length()==2*n)
        {
            result.push_back(str);
            return;
        }
        if(open<n) generate(result,str+"(",n,open+1,close);
        if(close<open) generate(result,str+")",n,open,close+1);
    }

    vector<string> generateParenthesis(int n) {
        vector<string>rest;
        // string str="";
        generate(rest,"",n,0,0);
        return rest;
    }
};