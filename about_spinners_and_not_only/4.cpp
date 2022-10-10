#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int num_compartment(int k) {
    if (k <= 36) {
        return (k - 1) / 4;    
    } else {
        return 8 - (k - 37) / 2;
    }
}

int main()
{
    cout << "Введите количество свободных мест:";
    int n;
    cin >> n;
    if (n < 0) {
        cout << "Некорректный ввод";
    } else {
        vector <int> a(9, 0);
        for(int i = 0; i < n; i++) {
            int el;
            cin >> el;
            a[num_compartment(el)] += 1;
            
        }
        int res = 0;
        int curr = 0;
        for (int i = 0; i <= 9; i++) {
            if (a[i] == 6) {
                curr += 1;
                res = max(res, curr);
            } else {
                curr = 0;
            }
        }
        cout << res;
    }
    return 0;
}
