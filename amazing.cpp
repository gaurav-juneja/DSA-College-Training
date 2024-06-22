#include <iostream>
using namespace std;

int main()
{
    char *c[] = {"ENTNG", "NST", "AMAZI", "FIRBE"};
    char **cp[] = {c + 3, c + 2, c + 1, c};
    char ***cpp = cp;

    cout << **++cpp;
    cout << *((*++cpp) - 1) + 3;
}