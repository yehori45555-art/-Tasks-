#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Введіть кількість рядків: ";
    cin >> rows;
    cout << "Введіть кількість стовпців: ";
    cin >> cols;

    int number = 1;

    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < cols; j++) {
                cout << number++ << " ";
            }
        } else {
            int start = number + cols - 1;
            for (int j = 0; j < cols; j++) {
                cout << start-- << " ";
            }
            number += cols;
        }
        cout << endl;
    }

    return 0;
}
