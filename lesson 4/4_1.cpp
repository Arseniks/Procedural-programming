#include <iostream>
#include <fstream>
#include <cstring> 

using namespace std;

int main()
{   
    string num;
    
    ofstream fout ("file.txt");
    cout << "Введите 10 чисел через пробел:";
    
    for (int i = 0; i < 10; i++) {
        cin >> num;
        fout << num << " ";
    }
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
