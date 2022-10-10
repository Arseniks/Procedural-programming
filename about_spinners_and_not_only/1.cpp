#include <iostream>

using namespace std;

int main()
{
    cout << "Введите стоимость основания спинера, стоимость одной лопасти и максимально возможную стоимость спинера:";
    float a, b, c;
    cin >> a >> b >> c;
     if (a < 0 || b < 0 || c < 0) {
         cout << "Некорректные данные";
     } else {
         int k = 0;
         while (a + b * k <= c) {
            k++;
         }
         cout << k - 1;
     }

    return 0;
}
