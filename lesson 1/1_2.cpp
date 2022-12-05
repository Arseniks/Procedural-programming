#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    cout << a + b << " " << a - b << " " << a * b << " ";
    if (b == 0 && a == 0){
        cout << "Бесконечное количество решений" << endl;
    } else if (b != 0 && a == 0){
        cout << 0 << endl;
    } else if (b == 0 && a != 0){
        cout << "Нет решений" << endl;
    } else {
        cout << a / b << endl;
    }
    return 0;
}
