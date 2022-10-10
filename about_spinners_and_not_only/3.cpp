#include <iostream>

using namespace std;

int main()
{
    cout << "Введите количество строк и столбцов:";
    int n, m;
    cin >> n >> m;
    if (n <= 0 || m <= 0) {
        cout << "Некорректный ввод";
    } else {
        int c = 0;
        int r = 0;
        for (int i = 1; i < n + 1; i++) {
            c += i;
        }
        for (int i = 1; i < m + 1; i++) {
            r += c * i;
        }
        cout << r;
    }
    return 0;
}
