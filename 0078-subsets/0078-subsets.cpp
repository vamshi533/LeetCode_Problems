// class Solution {
// public:
//     vector<vector<int>> subsets(vector<int>& nums) {
//         vector<vector<int>> res;
//         vector<int> op;
//         solve(nums, 0, op, res);
//         return res;
//     }
    
//     void solve(vector<int>& nums, int start, vector<int>& op, vector<vector<int>>& res) {
//         if (nums.size() == start) {
//             res.push_back(op);
//             return;
//         }
        
//         solve(nums, start + 1, op, res);
//         op.push_back(nums[start]);
//         solve(nums, start + 1, op, res);
//         op.pop_back();
//     }
// };

class Solution{
    public:
    vector<vector<int>>subsets(vector<int>&nums)
    {
        int n=nums.size();
        vector<vector<int>>ans;
        for(int i=0;i<(1<<n);i++)
        {
            vector<int>temp;
            for(int j=0;j<n;j++)
            {
                if(i&(1<<j))
                {
                    temp.push_back(nums[j]);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};