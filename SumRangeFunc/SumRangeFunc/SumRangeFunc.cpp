
#include <iomanip>
#include <iostream>

using namespace std;

int summRange(int, int);
int main()
{
	setlocale(LC_ALL, "");
	int firstNum, secondNum, thirdNum, choice;

	cin >> firstNum;
	cin >> secondNum;
	cin >> thirdNum;

	cout << (summRange(firstNum, secondNum) + summRange(secondNum, thirdNum));
}

int summRange(int a, int b) {
	int summ = 0;
	if (a > b) {
		return 0;
	}
	else {
		for (int i = a; i <= b;i++) {
			summ += i;
		}
		return summ;
	}
}
