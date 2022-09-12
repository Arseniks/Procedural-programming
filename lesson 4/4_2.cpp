#include <iostream>

using namespace std;


int sign(float x) {
    if (x > 0) {
        return 1;
    } else if (x == 0) {
        return 0;
    } else {
        return -1;
    }
}

int main()
{   
    float a;
    cout << "Введите число:";
    cin >> a;
    cout << sign(a);
    return 0;
}
