#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float S, p, n;
    float m, r;
    
    cout << "Введите величину ссуды, месячную выплату и количество лет:";
    cin >> S >> m >> n;
    
    if (S <= 0 || m <= 0 || n <= 0) {
        cout << "Нет решения";
    } else {
        double res = 0;
        for (double p = 0.001; res < m; p+=0.001) {
            r = p / 100;
            res = (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
            if (res >= m) {
                cout << int(p);
                break;
            }
        }
    }

    return 0;
}
