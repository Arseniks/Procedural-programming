#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int N, K;
    cout << "Ввкдите количество свободных мест: ";
    cin >> N;
    cout << "Введите количество школьников: ";
    cin >> K;
    
    vector <int> a(N);
    if (K > N){
        cout << "Некорректный ввод";
        return 0;
    } else if (K == N or K == N - 1){
        cout << 0 << endl;
        cout << 0;
        return 0;
    } else if(K == 1){
        if(N % 2 == 0){
            cout << N / 2 - 1 << endl;
            cout << N / 2;
        } else{
            cout << int(N / 2) << endl;
            cout << int(N / 2);
        }
        return 0;
    } else {
        for (int i = 0; i < N; i++) {
            if (i == int(N / 2)) {
                a[i] = 1;
            } else {
                a[i] = 0;
            }
        }
    }

    int tempi;
    while(K > 1) {
        int k = 0;
        int max = 0;
        int temp = 0;
        for (int i = 0; i < N; i++) {
            if (a[i] == 0 and i!=N-1) {
                k++;
            } else {
                if (k > max) {
                    max = k;
                    temp = i;
                }
                k = 0;
            }
        }
        a[int((2 * temp - max) / 2)] = 1;
        K--;
        tempi = int(2 * temp - max) / 2;
    }
    
    int j = 1;
    int temp1 = 1;
    int leftk = 0, rightk = 0;
    while (j > 0 and j < N) {
        j = tempi - temp1;
        if (a[j] == 0){
        leftk++;
        } else{
            break;
        }
        temp1++;
    }
    temp1 = 1;
    j = 1;
    while (j > 0 and j < N-1){
        j = tempi + temp1;
        if (a[j] == 0){
            rightk++;
        } else{
            break;
        }
        temp1++;
    }
    
    if(leftk >= rightk){
        cout << rightk << endl;
        cout << leftk;
    } else {
        cout << leftk << endl;
        cout << rightk;
    }
    
    return 0;
}
