#include <iostream>

using namespace std;

void perestanovki(int t, int n, int a[]) {
    if (t == n - 1) {
        bool w = false;
        for (int i = 0; i < n; ++i) {
            if (a[i] == i + 1) {
                w = true;
                break;
            }
        }
        if (w) {
            for (int i = 0; i < n; ++i) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    } else {
        for (int j = t; j < n; ++j) {
            swap(a[t], a[j]);
            perestanovki(t + 1, n, a);
            swap(a[t], a[j]);
        }
    }
}

int main() {   
    int n;
    cout << "Введите n количество шариков:";
    cin >> n;
    
    int a[n];
    for (int el = 0; el < n; el++) {
        a[el] = el + 1;
    }
    
    perestanovki(0, n, a);
    
    return 0;
}


