#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int val;
    cin >> val;
    
    int* ptr_val = &val;

    *ptr_val += 10;

    cout << *ptr_val;
}
