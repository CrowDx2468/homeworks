#include <iostream>
#include <string>
#include <Windows.h>
#include <tuple>
using namespace std;
int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int summ = 0, max;
    int arr[4][4] = { {1,2,3,5}, 
                        {3,5,1,7}, 
                        {6,7,2,7}, 
                        {4,2,6,3} }; 
    max = arr[0][1];
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if(i != j && (i + j) != 3){
                if (arr[i][j] > max) {
                    max = arr[i][j];
                }
            }
        }
   }
    cout << max;
}