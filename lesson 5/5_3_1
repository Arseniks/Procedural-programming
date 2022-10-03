#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
    string line;
    
    fstream file("file.txt", ios::in | ios::out | ios::binary);

    if (file.is_open()) {
        while (file) {
            if(file.get() == ' ')
                {
                    file.seekp(-1, file.cur);
                    file.put('*');
                    file.flush();
                }
        }
    }
    file.close();
    return 0;
}
