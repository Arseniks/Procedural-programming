#include <iostream>


using namespace std;


#define m 37
#define b 3
#define c 64
#define s0 0


int s(int i) {
    if (i == 0) {
        return s0;
    } else {
        return (m * s(i - 1) + b) % c;
    }
}


int main() {
    int i;
    cout << "Введите количество членов последовательности:";
    cin >> i;
    for (int n = 1; n < i + 1; n++){
        cout << s(n) << " ";
    }
    
    return 0;
}
