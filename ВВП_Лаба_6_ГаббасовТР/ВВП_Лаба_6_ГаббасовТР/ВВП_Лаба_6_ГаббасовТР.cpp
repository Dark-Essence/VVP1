#include <iostream>

using namespace std;


int main()
{

	int a, b, c, t, i, j, A;
	float x;
	setlocale(LC_ALL, "Rus");

	cout << "Введите значения переменных a, b: ";
	cin >> a >> b;
	a += b;
	b = a - b;
	a -= b;
	cout << "Преобразование: " << endl;
	cout << "a = " << a << " b = " << b << endl;
	cout << "Введите значения переменных a, b, c: ";
	cin >> a >> b >> c;
	t = a;
	i = b;
	j = c;
	b = t;
	c = i;
	a = j;
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	cout << "Введите значения переменных a, b, c: ";
	cin >> a >> b >> c;
	t = a;
	i = b;
	j = c;
	b = j;
	c = t;
	a = i;
	cout << "a = " << a << " b = " << b << " c = " << c << endl;
	cout << "Введите значение x: ";
	cin >> x;
	cout << "Значение функции y = 3x^6 - 6x^2 - 7 равно: " << 3 * pow(x, 6) - 6 * pow(x, 2) - 7 << endl;
	cout << "Введите значение x: ";
	cin >> x;
	cout << "Значение функции y = 4(x-3)^6 - 7(x-3)^3 + 2 равно: " << 4 * pow(x-3, 6) - 7 * pow(x-3, 3) + 2 << endl;
	cout << "Введите число A: ";
	cin >> A;
	b = A * A * A;
	i = A * A * A * A;
	j = A * A;
	cout << "A^8 = " << A * A * b * b << endl;
	cout << "A^15 = " << i * i * j * j * j * A << endl;

}

