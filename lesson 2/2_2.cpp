#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(0, "");
    double x, a;
    double w;

    cout << "Введите x: ";
    cin >> x;
    cout << "Введите a: ";
    cin >> a;

    if (abs(x) < 1 && x != 0) {
        w = a * log(abs(x));
        cout << "w = " << w << endl;
    }
    else if (abs(x) > 1 && a >= x * x) {
        w = sqrt(a - x * x);
        cout << "w = " << w << endl;
    }
    else {
        cout << "Введены неверные данные" << endl;
    }
    return 0;
}