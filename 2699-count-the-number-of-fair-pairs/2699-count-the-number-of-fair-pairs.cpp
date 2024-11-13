// class Solution {
// public:
//     long long countFairPairs(vector<int>& num, int lower, int upper) {
//         sort(num.begin(), num.end());
//         set<int> temp(num.begin(), num.end());
//         vector<int> nums(temp.begin(), temp.end());
//         int n = nums.size();
//         long long count = 0;
//         for (int i = 0; i < n;) {
//             for (int j = i + 1; j < n;) {
//                 long long sum = nums[i] + nums[j];
//                 if (sum < lower) {
//                     j++;
//                 } else if (sum > upper) {
//                     break;
//                 } else {
//                     j++;
//                     count++;
//                 }
//             }
//         }
//         return count;
//     }
// };

class Solution {
public:
    long long countFairPairs(vector<int>& num, int lower, int upper) {
        sort(num.begin(), num.end());
        int n = num.size();
        long long count = 0;
        for (int i = 0; i < n; ++i) {
            int left = lower_bound(num.begin() + i + 1, num.end(), lower - num[i]) - num.begin(); 
            int right = upper_bound(num.begin() + i +
            1, num.end(), upper - num[i]) - num.begin(); count += right - left;
        }

        return count;
    }
};
