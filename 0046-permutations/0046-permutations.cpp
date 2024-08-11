// class Solution {
// public:
//     void combine(vector<bool>check,vector<int>nums,vector<vector<int>>&ans,vector<int>temp)
//     {
//         if(temp.size()==nums.size())
//         {
//             ans.push_back(temp);
//             return;
//         }
//         for(int i=0;i<nums.size();i++)
//         {
//             if(!check[i])
//             {
//                 check[i]=true;
//                 temp.push_back(nums[i]);
//                 combine(check,nums,ans,temp);
//                 temp.pop_back();
//                 check[i]=false;
//             }
//         }
//     }
//     vector<vector<int>> permute(vector<int>& nums) {
//         vector<vector<int>>ans;
//         vector<int>temp;
//         vector<bool>check(nums.size());
//         combine(check,nums,ans,temp);
//         return ans;
//     }
// };


class Solution{
    public:
    vector<vector<int>> permute(vector<int>&nums)
    {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        ans.push_back(nums);
        while(next_permutation(nums.begin(),nums.end()))
        {
            ans.push_back(nums);
        }
        return ans;
    }
};