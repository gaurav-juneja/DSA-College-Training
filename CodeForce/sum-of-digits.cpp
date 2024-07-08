#include <iostream>
#include <string>
using namespace std;

int digit(string n, int &count)
{
    if (n.length() == 1)
    {
        return 0;
    }

    int sum = 0;
    for (char c : n)
    {
        sum += c - '0';
    }
    count++;
    if (sum < 10)
    {
        return count;
    }
    else
    {
        return digit(to_string(sum), count);
    }
    return count;
}

int main()
{
    string n;
    cout << "Enter a Number: ";
    cin >> n;
    int count = 0;
    int sum = digit(n, count);
    // cout << "Sum of digits of a number is: " << sum << endl;
    cout << "Number of digits in a number is: " << count;
}