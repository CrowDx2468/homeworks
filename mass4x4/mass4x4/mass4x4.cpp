#include <iostream>
#include <string>
#include <Windows.h>
#include <tuple>
using namespace std;

int** mult(int arr[][4]) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            arr[i][j] *= 2;
        }
    }
    return 0;
}
int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int summ = 0, max;
    int arr[4][4] = { {100,2,3,5}, // summ 11
                        {3,5,1,7}, // 16
                        {6,7,2,7}, // summ 22
                        {4,2,6,3} }; // [0][3] [1][2] [2][1] [3][0] 


    mult(arr);


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
  

    /*for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            summ += arr[i][j];
        }
    }
    cout << summ;*/
  /*  for (int i = 0; i < 4; i++) {
        summ = 0;
        for (int j = 0; j < 4; j++) {
            summ += arr[i][j];
        }
        cout << summ << endl;
    }*/
    
   /* for (int i = 0; i < 4; i++) {
        max = arr[i][0];
        for (int j = 0; j < 4; j++) {
            if (max < arr[i][j]) {
                max = arr[i][j];
            }
        }
        if (summ < max) {
            summ = max;
        }
        cout << "максимальное в строке - " << max << endl;
    }
    cout << "максимальное в массиве - " << summ << endl;*/
}

