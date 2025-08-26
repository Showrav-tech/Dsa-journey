#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        long long bestDiagonal = -1;
        long long bestArea = -1;
        int result = 0;

        for (auto &rect : dimensions) {
            long long l = rect[0], w = rect[1];

            long long diagonalSq = l * l + w * w; 
            long long area = l * w;

            if (diagonalSq > bestDiagonal || 
               (diagonalSq == bestDiagonal && area > bestArea)) {
                bestDiagonal = diagonalSq;
                bestArea = area;
                result = (int)area;
            }
        }
        return result;
    }
};
int main() {
    Solution sol;
    vector<vector<int>> dimensions = {{9,3}, {8,6}};
    cout << sol.areaOfMaxDiagonal(dimensions) << endl;
}

