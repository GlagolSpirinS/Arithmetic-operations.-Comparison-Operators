#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	system("cls");
	setlocale(LC_ALL, "Russian_Russia.1251");

	int vibor;
	int a;
	int b;
	double chislo;
	int proverka;



	while (true)
	{
		cout << "------------------------------------------\n";
		cout << "1.cложение\n";
		cout << "2.вычитание\n";
		cout << "3.умножение\n";
		cout << "4.деление\n";
		cout << "5.возведение в степень\n";
		cout << "6.квадратный корень из числа\n";
		cout << "7.нахождение процента от числа\n";
		cout << "8.выход из программы\n";
		cout << "------------------------------------------\n";
		cout << "Выберите действие?\n";

		cin >> vibor;
		switch (vibor)
		{
		case 1:
			cout << "------------------------------------------\n";
			cout << "Вы выбрали сложение!\n";
			cout << "Введите первое число\n";
			cin >> a;
			cout << "Введите второе число\n";
			cin >> b;
			cout << "Ответ:" << a + b << "\n";
			cout << "Введите ноль для перезапуска\n";
			cin >> proverka;
			if (proverka == 0)
			{
				system("cls");
			}			break;
		case 2:
			cout << "------------------------------------------\n";
			cout << "Вы выбрали вычитание!\n";
			cout << "Введите первое число\n";
			cin >> a;
			cout << "Введите второе число\n";
			cin >> b;
			cout << "Ответ:" << a - b << "\n";
			cout << "Введите ноль для перезапуска\n";
			cin >> proverka;
			if (proverka == 0)
			{
				system("cls");
			}
			break;
		case 3:
			cout << "------------------------------------------\n";
			cout << "Вы выбрали умножение!\n";
			cout << "Введите первое число\n";
			cin >> a;
			cout << "Введите второе число\n";
			cin >> b;
			cout << "Ответ:" << a * b << "\n";
			cout << "Введите ноль для перезапуска\n";
			cin >> proverka;
			if (proverka == 0)
			{
				system("cls");
			}
			break;
		case 4:
			cout << "------------------------------------------\n";
			cout << "Вы выбрали деление!\n";
			cout << "Введите первое число\n";
			cin >> a;
			cout << "Введите второе число\n";
			cin >> b;
			if (a == 0, b == 0)
			{
				cout << "Что-то пошло не так!\n";
			}
			else
			{
				cout << "Ответ:" << a / b << "\n";
			}
			cout << "Введите ноль для перезапуска\n";
			cin >> proverka;
			if (proverka == 0)
			{
				system("cls");
			}
			break;
		case 5:
			cout << "------------------------------------------\n";
			cout << "Вы выбрали возведение в степень!\n";
			cout << "Введите первое число\n";
			cin >> a;
			cout << "Введите второе число\n";
			cin >> b;
			cout << "Ответ:" << pow(a, b) << "\n";
			cout << "Введите ноль для перезапуска\n";
			cin >> proverka;
			if (proverka == 0)
			{
				system("cls");
			}
			break;
		case 6:
			cout << "------------------------------------------\n";
			cout << "Вы выбрали возведение в квадрат!\n";
			cout << "Введите число\n";
			cin >> a;
			cout << "Ответ:" << sqrt(a) << "\n";
			cout << "Введите ноль для перезапуска\n";
			cin >> proverka;
			if (proverka == 0)
			{
				system("cls");
			}
			break;
		case 7:
			cout << "------------------------------------------\n";
			cout << "Вы выбрали нахождение процента!\n";
			cout << "Введите первое число\n";
			cin >> chislo;
			cout << "Ответ:" << chislo / 100 << "\n";
			cout << "Введите ноль для перезапуска\n";
			cin >> proverka;
			if (proverka == 0)
			{
			system("cls");
			}
			break;
		case 8:
			exit(0);
			break;
		}
	}
}