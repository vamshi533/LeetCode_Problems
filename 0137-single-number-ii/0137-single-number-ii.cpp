// class Solution {
//     public:
//     int singleNumber(vector<int>&nums) {
//         int ones = 0;  // stores the bits that appeared once
//         int twos = 0;  // stores the bits that appeared twice
        
//         for (int num : nums) {
//             ones = (ones ^ num) & ~twos;
//             twos = (twos ^ num) & ~ones;
//         }
        
//         return ones;
//     }
// };

class Solution{
    public:
    int singleNumber(vector<int>nums)
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int res=0;
        for(int i=0;i<32;i++)
        {
            int c=0;
            for(int j=0;j<n;j++)
            {
                if(nums[j] & (1<<i))
                {
                    c++;
                }
            }
            if(c%3!=0)
            {
                res=res+(1<<i);
            }
        }
        return res;
    }
};