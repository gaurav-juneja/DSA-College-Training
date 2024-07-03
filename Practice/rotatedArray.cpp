#include <iostream>
using namespace std;
int search(int nums[], int target, int n)
{

    int left = 0;
    int right = n - 1;

    int mid = left + (right - left) / 2;
    while (left <= right)

    {
        mid = left + (right - left) / 2;
        if (nums[mid] == target)
        {
            return mid;
        }
        if (nums[mid] > nums[0])
        {

            if (target >= nums[0] && target <= nums[mid])
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        else
        {
            if (nums[mid] <= target && target <= nums[right])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
    }
    return mid;
}
int main()
{
    int nums[] = {4, 5, 6, 7, 0, 1, 2};
    int n = sizeof(nums)/sizeof(nums[0]);
    int result = search(nums, 0, n);
    cout << result;
}