#include <iostream>

using namespace std;

int main() { 
    for (int i = 0; i < 14; i++) {
        for (int j = 0; j < 30; j++) {
            if (i == 0) {
                cout << "_";
            } else if (i >= 1 && i <= 6 && j >= 0 && j <= 8) {
                cout << "*";
            } else {
                cout << "_";
            }
        }
        cout << endl;
    }
    return 0;
}
