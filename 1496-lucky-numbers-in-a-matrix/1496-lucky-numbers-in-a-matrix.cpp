class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int N = matrix.size();
        int M = matrix[0].size();
        vector<int> r;
        for (int i = 0; i < N; i++) {
            int rMin = INT_MAX;
            for (int j = 0; j < M; j++) {
                rMin = min(rMin, matrix[i][j]);
            }
            r.push_back(rMin);
        }
        
        vector<int> c;
        for (int i = 0; i < M; i++) {
            int cMax = INT_MIN;
            for (int j = 0; j < N; j++) {
                cMax = max(cMax, matrix[j][i]);
            }
            c.push_back(cMax);
        }
        vector<int> l;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (matrix[i][j] == r[i] && matrix[i][j] == c[j]) {
                    l.push_back(matrix[i][j]);
                }
            }
        }
        return l;
    }
};