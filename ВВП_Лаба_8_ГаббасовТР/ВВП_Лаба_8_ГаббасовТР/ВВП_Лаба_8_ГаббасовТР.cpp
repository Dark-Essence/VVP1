#include <iostream>

using namespace std;


int main()
{

	setlocale(LC_ALL, "Rus");

	int a,b,c,d;
	cout << "Введите размера файла в байтах: ";
	cin >> a;
	cout << "Размер файла в килобайтах: " << a / 1024 << endl;
	cout << "Введите число A: ";
	cin >> a;
	cout << "Введите число B: ";
	cin >> b;
	cout << "В отрезке длины A содержится " << a / b << " отрезков B" << endl;
	cout << "Введите число A: ";
	cin >> a;
	cout << "Введите число B: ";
	cin >> b;
	cout << "Длина незанятой части отезка A: " << a%b << endl;
	cout << "Введите двузначное число: ";
	cin >> a;
	c = a / 10;
	d = a % 10;
	cout << "Обратное число: " << d << c << endl;
	cout << "Введите трёхзначное число: ";
	cin >> a;
	b = a / 100;
	c = a / 10 % 10;
	d = a % 10;
	cout << "Преобразованное число: " << c << d << b << endl;
}
