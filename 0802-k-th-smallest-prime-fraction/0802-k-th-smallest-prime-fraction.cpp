class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<double> temp;
        int n = arr.size();
        cout << n << endl;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                
                    temp.push_back(double(arr[i]) / double(arr[j]));
                
            }
        }
        sort(temp.begin(), temp.end());
        vector<int> nums;
        double t = temp[k - 1];
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (t == (double(arr[i]) / double(arr[j]))) {
                    nums.push_back(arr[i]);
                    nums.push_back(arr[j]);
                    return nums;
                }
            }
        }
        return nums;
    }
};