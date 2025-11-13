#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
template <typename T>
T concatenate(T a, T b) {
    return a + b;
}

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int firstI, secondI;
    string firstS, secondS;

    cin >> firstI;
    cin >> secondI;
    cout << concatenate(firstI, secondI) << endl;

    cin >> firstS;
    cin >> secondS;
    cout << concatenate(firstS, secondS) << endl;

}