#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
    int pred = 0;
    ifstream file;
    string line;
    file.open("input.txt");
    if (file.is_open()) {
        while (getline(file, line)) {
            for (char i:line) {
                if (int('0') <= int(i) && int(i) <= int('9')) {
                    cout << i;
                    pred = 1;
                } else if (pred == 1) {
                    pred = 0;
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
    file.close();
    return 0;
}
