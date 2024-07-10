class Solution {
public:
    int minOperations(vector<string>& logs) {
        int s=0;
        for(auto c:logs)
        {
            if(c!="../" && c!="./")
            {
                s++;
            }
            else if(c=="./")
            {
                continue;
            }
            else if(c=="../")
            {
                s=s-1;
                if(s<0)
        {
            s= 0;
        }
            }
        }
        
        return s;
    }
};