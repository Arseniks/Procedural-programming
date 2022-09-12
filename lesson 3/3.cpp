#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float S, p, n;
    float m, r;
    
    cout << "Введите сумму займа, месячную выплату и количество лет, на которые взяли займ:";
    cin >> S >> p >> n;
    
    if (S <= 0 || p <= 0 || n <= 0) {
        cout << "Нет решения";
    } else {
        r = p / 100;
        
        cout << (S * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
    }

    return 0;
}
