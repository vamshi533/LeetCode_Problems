class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>temp;
        vector<char>arr;
        for(auto c:s)
        {
            if(c=='(')
            {
                temp.push(arr.size());

            }
            else if(c==')')
            {
                int i=temp.top();
                temp.pop();
                reverse(arr.begin()+i,arr.end());
            }
            else{
                arr.push_back(c);
            }
        }
        return string(arr.begin(),arr.end());
    }
};