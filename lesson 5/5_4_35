#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Введите строку s:";
    
    string s;
    s = "fg    fff f     ";
    
    int m = 0;
    int curr = 0;
    for (char i: s) {
        if (int(i) == int(' ')) {
            curr++;
        } else {
            if (curr > m) {
                m = curr;
            }
            curr = 0;
        }
    }
    if (curr > m) {
        m = curr;
    }
    cout << m;
    return 0;
}
