#include <iostream>
#include <math.h>

using namespace std;


int circle() {
    float R;
    cout << "Введите радиус окружность:";
    cin >> R;
    if (R <= 0) {
        cout << "Радиус должен быть больше 0.";
    } else {
        cout << "S = π ∙ R ^ 2" << endl;
        cout << 3.14 * R * R;
    }
    return 0;
}


int rectangle() {
    float a, b;
    cout << "Введите две стороны прямоугольника:";
    cin >> a >> b;
    if (a <= 0 || b <= 0) {
        cout << "Стороны прямоугольника должны быть больше 0.";
    } else {
        cout << "S = a ∙ b" << endl;
        cout << a * b;
    }
    return 0;
}


int triangle() {
    float a, b, c;
    cout << "Введите три стороны треугольника:";
    cin >> a >> b >> c;
    float p = (a + b + c) / 2;
    float ma = max(max(a, b), c);
    float mi = min(min(a, b), c);
    float sr = a + b + c - ma - mi;
    if (a <= 0 || b <= 0 || c <= 0) {
        cout << "Сторона треугольника должны быть больше 0.";
    } else if (ma >= mi + sr) {
        cout << "Такого треугольника не существует";
    } else {
        cout << "S = sqrt(p ∙ (p - a) ∙ (p - b) ∙ (p - c))" << endl;
        cout << sqrt(p * (p - a) * (p - b) * (p - c));
    }
    return 0;
}


int main() {   
    char op;
    cout << "Введите название операции (C - для круга, R - для прямоугольник и T - для треугольника):";
    cin >> op;
    if (int(op) == int('C')) {
        circle();
    } else if (int(op) == int('R')) {
        rectangle();
    } else if (int(op) == int('T')) {
        triangle();
    } else {
        cout << "Введено некорректное обазначение операции";
    }
    return 0;
}
