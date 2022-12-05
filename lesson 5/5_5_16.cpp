#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

int from_16(const string& str) {
    vector <int> ss16;
    for(char i : str) {
        switch (i) {
            case 'A':
                ss16.push_back(10);
                break;
            case 'B':
                ss16.push_back(11);
                break;
            case 'C':
                ss16.push_back(12);
                break;
            case 'D':
                ss16.push_back(13);
                break;
            case 'E':
                ss16.push_back(14);
                break;
            case 'F':
                ss16.push_back(15);
                break;
            default:
                ss16.push_back(i);
                break;
        }
    }
    int ssk = 0;
    int k = 0;
    for (int i = ss16.size() - 1; i >= 0; i--){
        ssk += ss16[i] * pow(16, k);
        k++;
    }
    return ssk;
}

int to_ss(int str, int ss) {
    int ssk = 0;
    int i = 1;
    while(str > 0){
        ssk = ssk + (str % ss) * i;
        i = i * 10;
        str = int(str / ss);
    }
    return ssk;
}

int main() {
    ifstream fin;
    fin.open("input.txt");

    string str;
    vector <string> in_16;
    vector <int> minus;

    while (fin) {
        fin >> str;
        in_16.push_back(str);
        for (char i : str){
            if (i > 'F') {
                cout << "Некорректное число";
                return 0;
            }
        }
        if (str[0] == '-') {
            minus.push_back(-1);
        }
        else {
            minus.push_back(1);
        }
    }
    fin.close();

    int ss;
    while (true) {
        cout << "Введите систему счисления от 2 до 9:";
        cin >> ss;
        if (ss < 2 or ss > 9) {
            cout << "Некорректная система счисления" << endl;
        continue;
        } else {
            break;
        }
    }

    vector <int> in_10;
    for (int i = 0; i < in_16.size() - 1; i++){
        string b = in_16[i];
        in_10.push_back(from_16(b));
    }

    vector <int> res;
    for (int i : in_10){
        res.push_back(to_ss(i, ss));
    }

    ofstream fout;
    fout.open("output.txt");

    for (int i = 0; i < res.size(); i++){
        int r = res[i] * minus[i];
        fout << r << " ";
    }

    fout.close();

    return 0;
}
