#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    
    if (a == 0)
    {
        if (b != 0)
        {
            cout << 1 << " " << (-c / b);
        }
        else
        {
            
            if (c == 0)
                cout << -1; 
            else
                cout << 0;  
        }
        return 0;
    }

    
    double d = b * b - 4 * a * c;

    if (d < 0)
    {
        cout << 0;
        return 0;
    }

    double x1 = (-b - sqrt(d)) / (2 * a);
    double x2 = (-b + sqrt(d)) / (2 * a);

    if (x1 == x2)
    {
        cout << 1 << " " << x1;
    }
    else
    {
        if (x1 > x2)
            swap(x1, x2);

        cout << 2 << " " << x1 << " " << x2;
    }

    return 0;
}
