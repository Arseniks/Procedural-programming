#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(0, "");
    double x, y, b;
    double z;

    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    cout << "Введите b: ";
    cin >> b;

    if (b - x >= 0 && b - y > 0) {
        z = log(b - y) * sqrt(b - x);
        cout << "z = " << z << endl;
    }
    else {
        cout << "Введеные неверные данные" << endl;
    }
    return 0;
}