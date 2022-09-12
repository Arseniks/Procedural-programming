#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string a = "qweqrtyutiopaaasdfghzklmnbvcxx";
    vector <int> b(26);
    for (char i:a) {
        b[int(i) - int('a')] += 1;
    }
    int k = 0;
    for (int i:b) {
        for (int j = 0;j < i;j++) {
            cout << char(k + int('a'));
        }
        k++;
    }
    return 0;
}
