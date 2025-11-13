#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int n = 7;

    int* p = &n;
    int** pp = &p;

    cout << **pp;
}