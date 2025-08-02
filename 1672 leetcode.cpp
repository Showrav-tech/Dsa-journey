#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows, cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix(rows, vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }
    int m=0;
  for (int i = 0; i < rows; ++i) {
      int sum=0;
        for (int j = 0; j < cols; ++j) {
       sum+=matrix[i][j];
    
        }
     m=max(sum,m) ;  
    }

 cout<<m;

    return 0;
}