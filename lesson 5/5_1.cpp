#include <iostream>
 
using namespace std;
 
int NOD_1(int a , int b) {
    while(a != 0 and b != 0) {
        if(a > b)
        {
            a = a % b;
        }
        else 
        {
            b = b % a;
        }
        
    }
    return (a + b);
}

int NOD_2(int a, int b) {
    while (a != b)
        if (a > b) {
            a -= b;
        } else {
            b -= a;
        }
    return a;
}
  
int main(void)
{   
    int a, b;
    
    cout << "Введите два числа:";
    cin >> a >> b;
    
    cout << NOD_1(a, b) << endl;
    cout << NOD_2(a, b) << endl;
 
 
  return 0;
}
