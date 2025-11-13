#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void sideMove(int arr[], int a);
int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int side;
    cout << "сдвиг влево - 0 \n свдиг вправо - 1" << endl;
    cin >> side;
    sideMove(arr1, side);
    sideMove(arr1, side);
    
    for (int i = 0;i < 10;i++) {
        cout << arr1[i];
    }
}
void sideMove(int arr[], int a) {
    int temp;
    if (a == 1) {
        for (int i = 9; i > 0; i--) {
            temp = arr[i];
            arr[i] = arr[i - 1];
            arr[i - 1] = temp;
        }
    }
    if (a == 0) {
        for (int i = 0; i < 9; i++) {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
    }
}