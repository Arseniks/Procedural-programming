#include <iostream>
#include <fstream>
#include <cstring> 

using namespace std;

int main()
{   
    string one, two, three, four, five, six, seven, eight, nine, ten;
    
    ofstream fout ("file.txt");
    cout << "Введите 10 чисел через пробел:";
    cin >> one >> two >> three >> four >> five >> six >> seven >> eight >> nine >> ten;
    fout << one << " " << two << " "  << three << " "  << four << " "  << five << " "  << six << " "  << seven << " "  << eight << " "  << nine << " "  << ten;
    fout.close();
    
    string line;
    double sum;
    
    ifstream fin;
    fin.open("file.txt");
    
    if (fin.is_open()) {
        getline(fin, line);
        string num = "";
        for (char i:line) {
            if (int(i) != int(' ')) {
                num += i;
            } else {
                sum += stof(num);
                num = "";
            }
        }
    }
    cout << sum;
    fin.close();
    return 0;
}
