#include <iostream>
#include <string>
#include <Windows.h>
#include <tuple>
using namespace std;


int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    char str[5][10] = { "my","nick","name","is","Seling"};

    int arr[5] = {};
    for (int i = 0; i < 5; i++) {
        arr[i] = strlen(str[i]);
        cout << arr[i] << " ";
    }


   /* char tmp[5] = "****";
    for (int i = 0; i < 5; i++) {
            if (strlen(str[i]) == 4) {
                strcpy_s(str[i],tmp);
            }
            cout << str[i] << " ";
    }*/
   

   /* for (int i = 0; i < 5; i++) {
        if (strlen(str[i]) == 1) {
            strcpy_s(str[i], str[4]);
            break;
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << str[i] << " ";
    }*/

}
//if (strlen(maxStr) < strlen(arr[i])) {
//    memset(maxStr, 0, sizeof(maxStr));
//    strcpy_s(maxStr, arr[i]);
//}