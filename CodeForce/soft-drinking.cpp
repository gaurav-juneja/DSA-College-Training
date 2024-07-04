#include <iostream>
using namespace std;

int main()
{
    int friends,bottle,ml,lime,slice,salt,needMl,needSalt;
    cin>>friends>>bottle>>ml>>lime>>slice>>salt>>needMl>>needSalt;
    // Drink
    int totalDrink = (bottle*ml)/needMl;
    // Slice
    int totalLime = (lime*slice);
    // Salt
    int totalSalt = salt/needSalt;
    // Required to make toast
    int total = min(totalDrink,min(totalSalt,totalLime))/friends;
    cout<<total;
}