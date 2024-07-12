class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char>arr;
        int res=0;
        if(x>y)
        {
            for(auto p:s)
            {
                if(!arr.empty() && arr.top()=='a' && p=='b')
                {
                    arr.pop();
                    res+=x;
                }
                else{
                    arr.push(p);
                }
            }
            s.clear();
            while(!arr.empty())
            {
                s+=arr.top();
                arr.pop();
            }
            reverse(s.begin(),s.end());
            for(auto p:s)
            {
                if(!arr.empty() && arr.top()=='b' && p=='a')
                {
                    arr.pop();
                    res+=y;
                }
                else{
                    arr.push(p);
                }
            }
        }
            else{
                for(auto p:s)
                {
                    if(!arr.empty() && arr.top()=='b' && p=='a')
                    {
                        arr.pop();
                        res+=y;
                    }
                    else{
                        arr.push(p);
                    }
                }
                s.clear();
                while(!arr.empty())
                {
                    s+=arr.top();
                    arr.pop();
                }
                reverse(s.begin(),s.end());
                for(auto p:s)
                {
                    if(!arr.empty() && arr.top()=='a' && p=='b')
                    {
                        arr.pop();
                        res+=x;
                    }
                    else{
                        arr.push(p);
                    }
                }
            }
        return res;
    }
};