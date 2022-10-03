#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Введите число n:";
    
    int n;
    cin >> n; 
    
    double res = 0;
    
    for(int i = 1; i < n + 1; i++) {
        double sum_sin = 0;
        for(int j = 1; j < i + 1; j++) {
            sum_sin += sin(j);    
        }
        res += (i / sum_sin);
    }
    
    cout << res;
    
    return 0;
}
