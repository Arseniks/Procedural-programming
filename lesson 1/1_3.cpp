#include <iostream>

using namespace std;

int main()
{
    float b, c;
    float x;
    cin >> b >> c;
    if (b == 0 && c == 0){
        cout << "Бесконечное количество решений" << endl;
    } else if (b != 0 && c == 0){
        cout << 0 << endl;
    } else if (b == 0 && c != 0){
        cout << "Нет решений" << endl;
    } else {
        x = -c / b;
        cout << x << endl;
    }
    return 0;
}