#include <iostream>
#include<math.h>

using namespace std;

int main() {
    for (double y = 1; y > -1; y -= 0.1){
        for (double x = -3 * 3.14; x < 3 * 4; x += 0.13) {
            if (abs(sin(x) - y) < 0.1) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;

    }
    return 0;
}
