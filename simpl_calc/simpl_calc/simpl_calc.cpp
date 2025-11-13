#include <iomanip>
#include <iostream>
using namespace std;

int calc(int a, int b, int op) {
	if (op == 1) {
		return a - b;
	}
	else if (op == 2) {
		return a * b;
	}
	else if (op == 3) {
		return a / b;
	}
	else {
		return a + b;
	}
}
int main()
{
	setlocale(LC_ALL, "");
	int firstNum, secondNum, operation;

	cout << "введите числа для вычисления : " << endl;
	cin >> firstNum;
	cin >> secondNum;
	cout << "какую операцию хотите выполнить ? " << "\n 1 - вычитание" << "\n 2 - умножение " << "\n 3 - деление" << "\n 4 =< - сложение " << endl;
	cin >> operation;

	cout << calc(firstNum, secondNum, operation);
}


