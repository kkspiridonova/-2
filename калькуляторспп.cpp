// калькуляторспп.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;


int main()
{
	SetConsoleCP(1251);
	setlocale(LC_ALL, "Russian");
	float a, b, c;
	int opt = 0;
	cout << "1.Сложение \n2.Вычитание \n3.Деление \n4.Умножение \n5.Возведение в степень \n6.Нахождение квадратного корня \n7.Нахождение 1 процента от числа \n8.Найти факториал числа \n9.Выход\n";
	while (opt != 9)
	{
		cout << "Выберите опцию:";
		cin >> opt;
		switch (opt) {
		case 1:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			c = a + b;
			cout << "Результат: " << c << endl;
			break;
		case 2:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			c = a - b;
			cout << "Результат: " << c << endl;
			break;
		case 3:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			if (b == 0)
			{
				cout << "Ошибка\n";
				break;
			}
			c = a / b;
			cout << "Результат: " << c << endl;
			break;
		case 4:
			cout << "Введите первое число: ";
			cin >> a;
			cout << "Введите второе число: ";
			cin >> b;
			c = a * b;
			cout << "Результат: " << c << endl;
			break;
		case 5:
			cout << "Введите число: ";
			cin >> a;
			cout << "Введите степень: ";
			cin >> b;
			c = pow(a, b);
			cout << "Результат: " << c << endl;
			break;
		case 6:
			cout << "Введите число: ";
			cin >> a;
			if (a < 0) 
			{
				cout << "Ошибка\n";
				break;
			}
			c = sqrt(a);
			cout << "Результат: " << c << endl;
			break;
		case 7:
			cout << "Введите число: ";
			cin >> a;
			double k;
			k = a / 100.00;
			cout << "Результат: " << k << endl;
			break;
		case 8:
			cout << "Введите число: ";
			int d;
			cin >> d;
			if (d < 0)
			{
				cout << "Ошибка\n";
				break;
			}
			long c = 1;
			for (int i = 1; i <= d; i++)
			{
				c = c * i;
			};
			cout << "Результат: " << c << endl;
			break;
		}

	}



}
