#include<iostream>
#include <vector>
using namespace std;

int countPaths(const int n, const int m){
      vector<vector<int>> dp(n, vector<int>(m, 1));

    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < m; ++j) {
            dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
        }
    }
    return dp[n - 1][m - 1];
    }

//Do not edit this part of code 
int main() {
int t;
cin>>t;
while(t--)
{
    int n,m;
    cin>>n>>m;
    cout<<countPaths(n,m);
    cout<<endl;
}
return 0;
}

/*
Problem Statement:
Given a M X N matrix with your initial position at top-left cell, find the number of possible unique paths to reach the bottom right cell of the matrix from the initial position.

Note: Possible moves can be either down or right at any point in time, i.e., we can move to matrix[i+1][j] or matrix[i][j+1] from matrix[i][j].

Input:
The first line contains an integer T, depicting total number of test cases.
Then following T lines contains an two integers A and B depicting the size of the grid.

Output:
Print the number of unique paths to reach bottom-right cell from the top-left cell.

Constraints:
1 ≤ T ≤ 30
1 ≤ M ≤ 15
1 ≤ N ≤ 15
*/