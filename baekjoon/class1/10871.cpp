#include <iostream>

using namespace std;

int main()
{
    int n, x, t;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        if (t < x)
        {
            cout << t << " ";
        }
    }
    cout << endl;
    return 0;
}