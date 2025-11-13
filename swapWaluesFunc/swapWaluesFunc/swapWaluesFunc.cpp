#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

template <typename T, typename T1> void swap(T  &a, T1 &b) {
    T1 temp = a;
    a = b;
    b = temp;
}


int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    
    float c;
    float d;

    cin >> c;
    cin >> d;

    swap(c, d);
    
    cout << "c = " << c << "\t d = " << d << endl;  
}

