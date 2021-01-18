#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    int a, b, c, S, ab, ac;

    cout << "Введите числа А и В:";
    cin >> a >> b;
    if (a == b) {
        a = 0;
        b = 0;
        cout << a << " " << b << endl;
    }
    if (a < b) {
        a = b;
        cout << a << " " << b << endl;
    }
    if (a > b) {
        b = a;
        cout << a << " " << b << endl;
    }
    cout << "Введите трич числа: ";
    cin >> a >> b >> c;
    if (a >= b) {
        if (b >= c) {
            S = a + b;
        }
        else {
            S = a + c;
        }
    }
    else {
        if (a >= c) {
            S = a + b;
        }
        else {
            S = b + c;
        }
    }
    cout << S << endl;
    cout << "Введите координаты точек a,b и c: ";
    cin >> a >> b >> c;
    ab = abs(a - b);
    ac = abs(a - c);
    if (ab < ac) {
        cout << "Точка В ближе к А. Расстояние равно " << ab << endl;
    }
    if (ac < ab) {
        cout << "Точка C ближе к А. Расстояние равно " << ac << endl;
    }
    if (ab == ac) {
        cout << "Точки B и С равноудалены от точки A" << endl;
    }
    cout << "Введите кординаты точки: ";
    cin >> ab >> ac;
    if (ab > 0 and ac > 0) {
        cout << "Точка находится в первой четверти" << endl;
    }
    if (ab > 0 and ac < 0) {
        cout << "Точка находится в четвертой четверти" << endl;
    }
    if (ab < 0 and ac < 0) {
        cout << "Точка находится в третьей четверти" << endl;
    }
    if (ab < 0 and ac > 0) {
        cout << "Точка находится во второй четверти" << endl;
    }
    cout << "Введите целое число: ";
    cin >> a;
    if (a % 2 == 0) {
        cout << "Четное ";
    }
    else {
        cout << "Нечетное ";
    }
    if (a > 0) {
        cout << "Положительное число" << endl;
    }
    else {
        cout << "Отрицательное число" << endl;
    }
    cout << "Введите число: ";
    cin >> a;
    if (a % 2 == 0) {
        cout << "Четное ";
    }
    else {
        cout << "Нечетное ";
    }
    if (a / 100 > 0) {
        cout << "Трехзначное число" << endl;
    }
    else {
        if (a / 10 > 0) {
            cout << "Двузначное число" << endl;
        }
        else {
            cout << "Однозначное число" << endl;
        }
    }
}

