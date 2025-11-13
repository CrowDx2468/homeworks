#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
template <typename myType1, typename myType2>
bool compare(myType1 q, myType2 w) {
    bool answer;
    answer = sizeof(q) == sizeof(w) ? true : false;
    return answer;
}

int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int choice, firstI, secondI;
    float firstF, secondF;
    double secondD;
    string firstS, secondS;

    cin >> firstI;
    cin >> secondD;
    cout << compare(firstI, secondD);
   
}


