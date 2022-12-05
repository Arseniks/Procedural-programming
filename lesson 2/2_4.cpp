#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "");
    int N, endN;

    cout << "Введите N: ";
    cin >> N;
    if (N > 0){
        endN = N + 10;
        for (int i = N; i < endN; i++) {
            cout << i << endl;
        }
    }
    else {
        cout << "Введеные неверные данные" << endl;
    }

    return 0;
}