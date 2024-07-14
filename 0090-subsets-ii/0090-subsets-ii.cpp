class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        
        set<vector<int>>sett;
        for(int i=0;i<(1<<n);i++)
        {
            vector<int>temp;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    temp.push_back(nums[j]);
                }
                sort(temp.begin(),temp.end());
            }
            sett.insert(temp);
        }
        vector<vector<int>>ans;
        for(auto p:sett)
        {
            ans.push_back(p);
        }
        return ans;
    }
};