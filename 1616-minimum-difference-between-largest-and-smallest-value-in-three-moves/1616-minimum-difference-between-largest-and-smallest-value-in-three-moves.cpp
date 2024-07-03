class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        // for(auto p:nums)
        // {
        //     cout<<p<<" ";
        // }
        cout << endl;
        if (n == 5) {
            int c = nums[1] - nums[0];
            for (int i = 1; i < n - 1; i++) {
                c = min(c, (nums[i + 1] - nums[i]));
            }
            return c;
        }
        if (n < 5) {
            return 0;
        } else {
            int m = min(nums[n - 2] - nums[2], nums[n - 3] - nums[1]);
            cout << m<<endl;
            int r= min(nums[n - 4] - nums[0], nums[n - 1] - nums[3]);
            cout<<n;
            int t=min(m,r);
            return t;
        }
    }
};