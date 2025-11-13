#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int changingNorm(int arr[], int& nor, int& num);
int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int norm = 0;
    int* nor = &norm;
    int size;

    cout << "сколько чисел хотите ввести?" << endl;
    cin >> size;
    int* num = &size;

    int* arr1 = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr1[i];
    }
    cout << changingNorm(arr1,*nor, *num);


    cout << "\nсколько чисел хотите ввести?" << endl;
    cin >> size;
    int* arr2 = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr2[i];
    }
    cout << changingNorm(arr2, *nor, *num);

    cout << "\nсколько чисел хотите ввести?" << endl;
    cin >> size;
    int* arr3 = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> arr3[i];
    }
    cout <<changingNorm(arr3, *nor, *num);

}
int changingNorm(int arr[], int &nor, int &num) {
    int result = 0, summ = 0;
    for (int i = 0; i < num; i++) {
        summ += arr[i];
        if (nor < arr[i]) {
            result += 1;
        }
    }
    nor = summ / num;
    return result;
}
