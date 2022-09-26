#include <iostream>
#include <string>
#include <vector>
#include <math.h>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>


using namespace std;


int main()
{   
    string num;
    int rad_old, rad_new;
    cout << "Введите число:";
    cin >> num;
    cout << "Введите основание системы счисления исходного числа:";
    cin >> rad_old;
    cout << "Введите системe счисления в которую нужно перевести исходное числа:";
    cin >> rad_new;
    vector <int> a;
    int n;
    bool wrong = false;
    for (int i: num) {
        n = int(i);
        if (int('0') <= n && n <= int('9')) {
            n = n - int('0');
        } else if (int('A') <= n && n <= int('Z')) {
            n = n - int('A') + 10;
        } else {
            wrong = true;
        }
        a.push_back(n);
    }
    int to_ten = 0;
    int deg;
    if (wrong) {
        cout << "Введено некорректное число";
    } else {
        deg = a.size() - 1;
        for (int i: a) {
            if (i > rad_old - 1) {
                wrong = true;
            }
            to_ten += i * pow(rad_old, deg);
            deg -= 1;
        }
        if (wrong) {
            cout << "В исходной системе счисления не может быть таких чисел";
        } else {
            vector <int> res;
            while (to_ten > 0) {
                res.push_back(to_ten % rad_new);
                to_ten /= rad_new;
            }
            reverse(res.begin(), res.end());
            for (int i: res) {
                switch(i)
                {
                    case 10:
                        cout << 'A';
                        break;
                    case 11:
                        cout << 'B';
                        break;
                    case 12:
                        cout << 'C';
                        break;
                    case 13:
                        cout << 'D';
                        break;
                    case 14:
                        cout << 'E';
                        break;
                    case 15:
                        cout << 'F';
                        break;
                    default:
                        cout << i;
                        break;
                }
                
            }
        }
    }
    return 0;
}
