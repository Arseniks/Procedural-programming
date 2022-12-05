#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(0, "");
    double pi = 3.14;
    double R, r, h, l;
    double V, S;

    cout << "Введите R: ";
    cin >> R;
    cout << "Введите r: ";
    cin >> r;
    cout << "Введите h: ";
    cin >> h;

    if (R > 0 && r > 0 && h > 0 && R > r) {
        l = sqrt((R - r) * (R - r) + h * h);
        V = pi * h * (R * R + R * r + r * r) / 3;
        S = pi * (R * R + (R + r) * l + r * r);

        cout << "V = " << V << endl;
        cout << "S = " << S << endl;
    }
    else {
        cout << "Введены неверные данные" << endl;
    }

    return 0;
}