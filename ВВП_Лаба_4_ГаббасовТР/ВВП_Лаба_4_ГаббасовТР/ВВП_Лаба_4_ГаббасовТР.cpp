﻿#include <iostream>

using namespace std;


int main()
{
	int a, b,d;

	setlocale(LC_ALL, "Rus");

	cout << "Введите стороны прямоугольника: ";
	cin >> a >> b;
	cout << "Площадь прямоугольника равна: " << a*b << endl;
	cout << "Периметр прямоугольника равен: " << 2*(a+b) << endl;
	cout << "Введите диаметр окружности: ";
	cin >> d;
	cout << "Длина окружности равна: " << 3.14 * d << endl;
	cout << "Введите числа a и b: ";
	cin >> a >> b;
	cout << "Среднне арифметическое этих чисел равно: " << (float)(a + b) / 2 << endl;
	cout << "Введите два ненулевых числа: ";
	cin >> a >> b;
	cout << "Сумма квадратов этих чисел равна: " << a*a+b*b << endl;
	cout << "Разность квадратов этих чисел равна: " << a*a-b*b << endl;
	cout << "Произведение квадратов этих чисел равно: " << (a * a) * (b * b) << endl;
	cout << "Частное квадратов этих чисел равно: " << (float)(a * a) / (b * b) << endl;
	cout << "Введите два ненулевых числа: ";
	cin >> a >> b;
	cout << "Сумма модулей этих чисел равна: " << abs(a) + abs(b) << endl;
	cout << "Разность модулей этих чисел равна: " << abs(a) - abs(b) << endl;
	cout << "Произведение модулей этих чисел равно: " << abs(a) * abs(b) << endl;
	cout << "Частное модулей этих чисел равно: " <<(float)abs(a) / abs(b) << endl;

}