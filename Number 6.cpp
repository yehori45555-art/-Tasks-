#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int d;
    d = (b * b) - (4 * a * c);
    if (a == 0)
    {
        if (b != 0)
        {
            cout << 1 << " " << (-c / b);
        }
        if (b == 0)
        {
            cout << -1;
        }
    }
    if ((a != 0) and (b == 0) and (c == 0))
    {
        cout << 1 << " " << 0;
    }
    else
    {
        if (d >= 0){
            int x1, x2;
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            if (x1 == x2)
            {
                cout << 1 << " " << x1;
            }
            if (x1 > x2)
            {
                cout << 2 << " " << x2 << " " << x1;
            }
            if (x2 > x1)
            {
                cout << 2 << " " << x1 << " " << x2;
            }
        }
    }
}
