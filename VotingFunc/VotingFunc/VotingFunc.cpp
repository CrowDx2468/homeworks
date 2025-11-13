#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;


int yesCount = 0, noCount = 0;
string answer;
void voting(string);
int main() {
    
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    do {
        cout << "Введите ваш голос (за / против / стоп): ";
        cin >> answer;
        if (answer != "стоп") {
            voting(answer);
            cout << "\nза:" << yesCount << "\nпротив:" << noCount << endl;
        }
    } while (answer != "стоп");

    cout << "\nГолосование завершено!" << endl;
    cout << "Итог:\nза: " << yesCount << "\nпротив: " << noCount << endl;

}
void voting(string answer) {
    if (answer == "за") {
        yesCount++;
    }
    else if (answer == "против") {
        noCount++;
    }
}
