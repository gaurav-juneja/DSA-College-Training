#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num)
{
    if (num <= 1)
        return false;
    if (num == 2)
        return true; // 2 is the only even prime number
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

// Recursive function to find the index of the largest prime number
int largestPrimeIndex(int arr[], int index, int n, int largestIndex)
{
    if (index == n)
    {
        return largestIndex;
    }

    // If the current number is prime and larger than the current largest prime
    if (isPrime(arr[index]))
    {
        if (largestIndex == -1 || arr[index] > arr[largestIndex])
        {
            largestIndex = index;
        }
    }

    // Recursion for the next element
    return largestPrimeIndex(arr, index + 1, n, largestIndex);
}

int main()
{
    int arr[] = {2, 7, 53, 32, 67, 93, 13};
    int n = sizeof(arr) / sizeof(arr[0]);
    int index = 0;
    int largestIndex = -1;

    int largestPrimeIdx = largestPrimeIndex(arr, index, n, largestIndex);

    if (largestPrimeIdx != -1)
    {
        cout << "The index of the largest prime number is: " << largestPrimeIdx << endl;
    }
    else
    {
        cout << "No prime number found in the array." << endl;
    }

    return 0;
}
