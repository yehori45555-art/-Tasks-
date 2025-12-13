#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Ukrainian");

    int counter = 0;
    int counter_2 = 0;
    int length, width;

    char star = '*';

    cout << "Введіть довжину: " << endl;
    cin >> length;

    cout << "Введіть ширину: " << endl;
    cin >> width;

    for (; counter < width; counter++)
    {
        cout << star << " ";
    }

    cout << endl;

    
    for (; counter_2 < length; counter_2++)
    {
        cout << star << endl;
    }

    system("pause");
    return 0;
}
