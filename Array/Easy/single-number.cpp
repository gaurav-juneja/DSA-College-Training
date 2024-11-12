// 136 LeetCode
#include <iostream>
using namespace std;

int main()
{
    int nums[5] = {4, 1, 2, 1, 2};
    int n = sizeof(nums) / sizeof(nums[0]);
    int XOR = 0;
    for (int i = 0; i < n; i++)
    {
        XOR = XOR ^ nums[i];
    }
    cout << XOR;
}