#include <iostream>

using namespace std;

int main()
{
    cout << "Введите количество лопастей:";
    int m;
    cin >> m;
    
    if (m <= 0) {
        cout << "Некорректный ввод";
    } else {
        int k_3 = 0;
        int k_4 = 0;
        if (m == 1 || m == 2 || m == 5) {
            cout << 0 << endl;
            cout << 0;
        } else if (m % 4 == 0) {
            cout << 0 << endl;
            cout << m / 4;
        } else if (m % 4 == 1) {
            cout << 3 << endl;
            cout << (m - 9) / 4;
        } else if (m % 4 == 2) {
            cout << 2 << endl;
            cout << (m - 6) / 4;
        } else if (m % 4 == 3) {
            cout << 1 << endl;
            cout << (m - 3) / 4;
        } 
    }
    return 0;
}
