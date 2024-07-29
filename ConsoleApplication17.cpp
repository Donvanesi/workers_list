#include <iostream>
using namespace std;



struct calculator
{
	int first_number;
	int second_number;
	int result;
};

void fadd(calculator&);
void fsub(calculator&);
void fmul(calculator&);
void fdiv(calculator&);

int main()
{
	setlocale(LC_ALL, "Russiаn");
	char ch;
	calculator calculator1;
	cout << "Введите первое число: ";
	cin >> calculator1.first_number;
	cout << "Введите второе число: ";
	cin >> calculator1.second_number;
	cout << "Выберите какое действие выполнить: + - / *";
	cin >> ch;
	switch (ch)
	{
	case '+':
	{
		fadd(calculator1);
		cout << calculator1.result << endl;
		break;
	}
	case '-':
	{
		fsub(calculator1);
		cout << calculator1.result << endl;
		break;
	}
	case '/':
	{
		fdiv(calculator1);
		cout << calculator1.result << endl;
		break;
	}
	case '*':
	{
		fmul(calculator1);
		cout << calculator1.result << endl;
		break;
	}
	default:
	{
		cout << "Вы ввели неправильный символ" << endl;
		break;
	}
	return 0;
	}
}
void fadd(calculator& plus)
{
	plus.result = plus.first_number + plus.second_number;
}
void fsub(calculator& minus)
{
	minus.result = minus.first_number - minus.second_number;
}
void fmul(calculator& multiplication)
{
	multiplication.result = multiplication.first_number * multiplication.second_number;
}
void fdiv(calculator& division)
{
	division.result = division.first_number / division.second_number;
}