#include <iostream>

using namespace std;

int main()
{
    int year;
    cin >> year;
    bool check = false;
    if (year % 400 == 0)
    {
        check = true;
    }
    if ((year % 4 == 0) && (year % 100 != 0))
    {
        check = true;
    }
    if (check)
    {
        cout << 1;
    }
    else
    {
        cout << 0;
    }
    cout << endl;
    return 0;
}