// class Solution {
// public:

//     void solve(int ind,vector<int>arr,int &count,vector<int>temp,int t)
// {
//     if(ind==arr.size())
//     {
//         if (!temp.empty()) {
//         int min_v=*min_element(temp.begin(),temp.end());
//         int max_v=*max_element(temp.begin(),temp.end());
//         if((min_v+max_v)<=t)
//         {
//             count+=1;
//         }
//         }
//         return;
//     }
//     // for(int i=ind;i<arr.size();i++)
//     // {
//         temp.push_back(arr[ind]);
//         solve(ind+1,arr,count,temp,t);
//         temp.pop_back();
//         solve(ind+1,arr,count,temp,t);
//     // }
// }

//     int numSubseq(vector<int>& nums, int target) {
//         int count=0;
//         vector<int>temp;
//         solve(0,nums,count,temp,target);
//         return count;
//     }
// };



const int mod=1000000007;

class Solution{
    public:
    int numSubseq(vector<int>&nums,int target)
    {
        int ans=0;
        int l=0,r=nums.size()-1;
        sort(nums.begin(),nums.end());
        vector<int>temp(nums.size());
        temp[0]=1;
        for(int i=1;i<nums.size();i++)
        {
            temp[i]=(temp[i-1]*2)%mod;
        }
        while(l<=r)
        {
            if(nums[l]+nums[r]<=target)
            {
                ans+=temp[r-l];
                ans%=mod;
                l++;
            }else{
                r--;
            }
        }
        return ans;
    }
};

