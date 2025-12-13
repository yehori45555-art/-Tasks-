#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, v;
    const double g = 9.8;

    cin >> a >> v;

   
    double angle = a * M_PI / 180.0;

  
    double distance = (v * v * sin(2 * angle)) / g;

    cout << distance;

    return 0;
}
