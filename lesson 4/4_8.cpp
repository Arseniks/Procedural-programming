#include <iostream>

using namespace std;

int main()
{
    double a[3][4] = {5, 2, 0, 10, 3, 5, 2, 5, 20, 0, 0, 0};
    
    double b[4][2]= {1.2, 0.5, 2.8, 0.4, 5, 1, 2, 1.5};
    
    double c[3][2];
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            for (int k = 0; k < 4; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    
    cout << "Матрица С:" << endl;
    for (int i = 0; i < 3; i++){
        for (int j = 0;j < 2; j++){
            cout << c[i][j] << " ";
        }
        cout << endl;
        }
    cout << endl;
    
    int max1 = 0;
    int min1 = 0;
    double temp = 0;
    double temp2 = 1000000;
    for (int i = 0; i < 3; i++){
        if (c[i][0] > temp){
            max1 = i+1;
            temp = c[i][0];
        }
        if (c[i][0] < temp2){
            min1 = i+1;
            temp2 = c[i][0];
        }
    }
    
    int max2 = 0;
    int min2 = 0;
    double temp1 = 0;
    double temp3 = 1000000;
    for (int i = 0; i < 3; i++){
        if (c[i][1] > temp1){
            max2 = i+1;
            temp1 = c[i][1];
        }
        if (c[i][1] < temp3){
            min2 = i+1;
            temp3 = c[i][1];
        }
    }
    
    double s = 0;
    for (int i = 0; i < 3; i++){
        s += c[i][0];
    }
    
    double s1 = 0;
    for (int i = 0; i < 3; i++){
        s1 += c[i][1];
    }
    
    cout << "Продавец " << max1 << " выручил больше всего денег с продажи" << ", а продовец " << min1 << " меньше всего." << endl;
    
    cout << "Продавец " << max2 << " получил наибольшие комиссионные" << ", а продовец " << min2 << " наменьшие." << endl;
    
    cout << "Общая сумма денег, вырученных за проданные товары равна " << s << endl;
    
    cout << "Общая сумма комиссионных всех продавцов " << s1 << endl;
    
    cout << "Общая сумма денег, прошедших через руки продавцов " <<  s + s1 << endl;
    
    return 0;
}
