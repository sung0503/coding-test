#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    int res = a * a + b * b + c * c + d * d + e * e;
    cout << res % 10 << endl;
    return 0;
}