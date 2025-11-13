#include <iostream>
#include <string>
#include <Windows.h>
#include <tuple>
using namespace std;

void stringDiff(string, string, int& modul_link, string& answer_link);
int main() {

    /*setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);*/
    /*string name = "alex";
    string name2{ "alex" };
    cout << name[1] << " " << name2[2] << endl;
    for (int i = 0; i < 4; i++) {
        cout << name[i] << " ";
    }

    cout << createNewString(name, name2);*/

   /* string tmp = "ddfhdfhdfhdfgh";
    cout << tmp.size();*/

    int modul; //
    string answer; //
    string first;
    string second;
    cin >> first;
    cin >> second;

    int &modul_link = modul;
    string& answer_link = answer;

    stringDiff(first, second, modul_link, answer_link);
    
    cout << ("apple" < "apartments") << endl; // Истина, тк второе слово раньше по алфавиту
    cout << ("APPLE" < "apartments") << endl; // Ложь, тк в юникоде заглавные буквы раньше прописных
    cout << boolalpha  << " ";

}
void stringDiff(string a, string b, int& modul_link, string& answer_link) {
    if (a.size() < b.size()) {
        modul_link = b.size() - a.size();
        answer_link = "second";
    }
    else if (a.size() > b.size()) {
        modul_link = a.size() - b.size();
        answer_link = "first";
    }
}
