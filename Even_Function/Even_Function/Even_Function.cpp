#include <iostream>
#include <iomanip>
using namespace std;

bool even( int k) {
	if (k % 2 == 0) {
		return true;
	}
	else {
		return false;
	}
}
int main()
{
	setlocale(LC_ALL, "");

	int arr[10] = { 2,43,66,54,77,64,67,35,85,69 };

	for (int i = 0; i < 10; i++) {
		cout << even(arr[i]) << " ";
	}
}


