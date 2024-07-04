#include <iostream>
#include <vector>
using namespace std;

string getRotatedArrayString(vector<int>& arr, int n, int d) {
    d = d % n;

    // Create a rotated vector
    vector<int> rotated(arr.begin() + d, arr.end());
    rotated.insert(rotated.end(), arr.begin(), arr.begin() + d);

    // Convert rotated array to string
    string result;
    for (int i = 0; i < rotated.size(); ++i) {
        if (i > 0) result += " ";
        result += to_string(rotated[i]);
    }
    return result;
}

//Do not edit this part of code 
 int main() {
    int test;
    cin >> test;

    while (test-- > 0) {
        int N, D;
        cin >> N >> D;
        vector<int> a(N);

        for (int i = 0; i < N; i++) {
            cin >> a[i];
        }
        string rotatedArrayStr = getRotatedArrayString(a, N, D);
        cout << rotatedArrayStr << endl;
    }

    return 0;
}

/*
Given an unsorted array arr[] of size N, rotate it by D elements (anti-clockwise).

Input:
The first line of the input contains T denoting the number of testcases. First line of eacg test case contains two space separated elements, N denoting the size of the array and an integer D denoting the number size of the rotation. Subsequent line will be the N space separated array elements.

Output:
For each testcase, in a new line, output the rotated array.

Constraints:
1 <= T <= 200
1 <= N <= 107
1 <= D <= N
0 <= arr[i] <= 105
*/