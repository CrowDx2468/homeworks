#include <iomanip>
#include <iostream>

using namespace std;

int quan = 0;
void hello();
int main()
{
	setlocale(LC_ALL, "");
	int choice;
	cout << "1 - продолжить" << "\n0 - стоп" << endl;
	cin >> choice;
	do {
		hello();
		cout << "продолжить?" << endl;
		cin >> choice;
	} while (choice != 0);
	cout << quan;
}
void hello() {
	cout << "hello" << endl;
	quan += 1;
}