#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    double y;
    for (double x = -4; x <= 4; x = x + 0.5) {
        if (x != 1) {
            y = (x * x - 2 * x + 2) / (x - 1);
            cout << "x = " << x << ": y = " << y << endl;
        }
        else {
            cout << "Деление на 0" << endl;
        }
    }
    return 0;
}