#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int a = 10, b = 20;

    int* ptr_a = &a;
    int* ptr_b = &b;

    int tmp = 0;

    tmp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = tmp;

    cout << *ptr_a << " " << *ptr_b;

}
