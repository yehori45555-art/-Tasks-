#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.length();


    if (n < 3) {
        cout << "NO";
        return 0;
    }

    int left = 0;
    int right = n - 1;

   
    char edge = s[0];

  
    while (left < n && s[left] == edge) left++;
    while (right >= 0 && s[right] == edge) right--;

  
    if (left > right && left == n - right - 1) {
       
        if (right - left + 1 == 1) {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
