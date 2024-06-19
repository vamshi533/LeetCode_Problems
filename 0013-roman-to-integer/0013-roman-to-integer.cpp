class Solution {
public:
    int romanToInt(string str) {
    map<char,int>s;
    s['I']=1;
    s['V']=5;
    s['X']=10;
    s['L']=50;
    s['C']=100;
    s['D']=500;
    s['M']=1000;
    int a=0;
    for(int i=0;i<str.length();i++)
    {
        if(s[str[i]]>=s[str[i+1]])
        {
            a=a+s[str[i]];
        }
        else{
            a=a-s[str[i]];
        }
    }
    return a;
    }
};