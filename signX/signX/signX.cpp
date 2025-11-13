#include <iomanip>
#include <iostream>
using namespace std;

int sign(int x) {
	if (x < 0) {
		return -1;
	}
	else if (x == 0) {
		return 0;
	}
	else {
		return 1;
	}
}
int main()
{
	setlocale(LC_ALL, "");
	int a, b;

	cout << "введите числа" << endl;
	cin >> a;
	cin >> b;

	cout << sign(a) + sign(b);

}


