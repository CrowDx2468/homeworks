#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
void sortMass(int arr[], int arr2[]);

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int arr3[10] = { 3,3,5,4,6,5,52,9,3,8 };
    int arr4[10] = {};

    sortMass(arr3, arr4);

    for (int i = 0; i < 10; i++) {
        cout << arr3[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr4[i] << " ";
    }
   

 
}
void sortMass(int arr[], int arr2[]) {

    int quan = 0;
    int position = 0;

    for (int i = 0; i < 10; i++) {
        int tmp = arr[i];
        for (int j = 0; j < 10; j++) {
            if (tmp == arr[j]) {
                quan += 1;
            }
        }
        if (quan == 1) {
            arr2[position] = arr[i];
            position++;
        }
        quan = 0;
    }
}