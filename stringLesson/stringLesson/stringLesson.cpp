#include <iostream>
#include <string>
#include <Windows.h>
#include <tuple>
using namespace std;


int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    char arr[5][10] = {"my","name","is","alexey"};
    //char maxStr[10];
    //strcpy_s(maxStr, arr[0]);
    //for (int i = 0; i < 5; i++) {
    //    if (strlen(maxStr) < strlen(arr[i])) {
    //        /*memset(maxStr, 0, sizeof(maxStr));*/
    //        strcpy_s(maxStr, arr[i]);
    //    }
    //}
    //cout << maxStr;
    for (int i = 0; i < 255; i++) {
        cout << i << endl;
    }
}