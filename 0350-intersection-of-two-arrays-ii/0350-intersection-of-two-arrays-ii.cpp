class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;

        if (nums1.size() > nums2.size()) {
            swap(nums1, nums2);
        }

        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] < nums2[j]) {
                ++i;
            } else if (nums1[i] > nums2[j]) {
                ++j;
            } else {
                arr.push_back(nums1[i]);
                ++i;
                ++j;
            }
        }

        return arr;
    }
};

// Another Method

// class Solution {
// public:
//     vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
//         sort(nums1.begin(),nums1.end());
//         sort(nums2.begin(),nums2.end());
//         vector<int> arr;
//         set_intersection(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(),back_inserter(arr));
//         return arr;
//     }
// };