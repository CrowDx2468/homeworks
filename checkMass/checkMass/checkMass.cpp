#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void check(int arr[]);

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int arr2[10] = { 9,8,7,6,5,4,3,2,1,0 };

    check(arr1);
    check(arr2);
    
}
void check(int arr[]) {
    int firstCount = 0;
    for (int i = 0; i < 9;i++) {
        if (arr[i] < arr[i + 1]) {
            firstCount++;
        }
        else if (arr[i] > arr[i + 1]) {
            firstCount--;
        }
        else {
            cout << "массив не попадает в категорию!" << endl;
        }
    }
    switch (firstCount) {
    case 9: 
        cout << "это возрастающая последовательность!" << endl;
        break;
    case -9:
        cout << "это убывающая последовательность!" << endl;
    }
}