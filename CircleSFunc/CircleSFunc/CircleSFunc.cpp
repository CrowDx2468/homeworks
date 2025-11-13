#include <iomanip>
#include <iostream>

using namespace std;

float circleS(float);
int main()
{
	setlocale(LC_ALL, "");
	float radius;

	for (int i = 0; i < 3; i++) {
		cout << "\nзадайте радиус - " << endl;
		cin >> radius;
		cout << "площадь круга равна - " << circleS(radius) << endl;
	}
}

float circleS(float r) {
	float s;
	s = 3.14 * (r * r);
	return s;
}