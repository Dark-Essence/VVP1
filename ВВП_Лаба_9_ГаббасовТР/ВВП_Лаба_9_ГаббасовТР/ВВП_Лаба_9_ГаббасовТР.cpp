#include <iostream>

using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");

    int a, b, c, N, K;

    cout << "Введите время прошедшее с начала суток в секундах: ";
    cin >> N;
    a = N % 60;
    cout << "С последней минуты прошло " << a << " секунд" << endl;
    cout << "Введите число K: ";
    cin >> K;
    a = K % 7;
    cout << "Номер дня недели - " << a << endl;
    cout << "Введите число K: ";
    cin >> K;
    cout << "Введите число N: ";
    cin >> N;
    a = (K + N - 2) % 7;
    cout << "Номер дня недели - " << a+1 << endl;
    cout << "Введите число A: ";
    cin >> a;
    cout << "Введите число B: ";
    cin >> b;
    cout << "Введите число C: ";
    cin >> c;
    N = (a / c) * (b / c);
    cout << "Кол-во квадратов равно: " << N << endl;
    cout << "Площадь незанятой части равна: " << (a * b - N * c * c) << endl;
    cout << "Введите номер года: ";
    cin >> N;
    a = N / 100 + 1;
    cout << "Данному году соответствует " << a << " столетие " << endl;
}

