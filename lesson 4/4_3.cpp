#include <iostream>

using namespace std;


int circle() {
    float R;
    cout << "Введите радиус окружность:";
    cin >> R;
    if (R < 0) {
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
    if (a < 0 || b < 0) {
        cout << "Стороны прямоугольника должны быть больше 0.";
    } else {
        cout << "S = a ∙ b" << endl;
        cout << a * b;
    }
    return 0;
}


int triangle() {
    float a, h;
    cout << "Введите основание и высоту треугольника:";
    cin >> a >> h;
    if (a < 0 || h < 0) {
        cout << "Сторона треугольника и высота должны быть больше 0.";
    } else {
        cout << "S = (1 / 2) ∙ a ∙ h" << endl;
        cout << 0.5 * a * h;
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
