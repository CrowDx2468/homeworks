#include <iostream>
#include <string>
#include <Windows.h>
#include <tuple>
using namespace std;
typedef tuple <int, int> box;
void borders(box , box , box );
int main() {

    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    int x = 0, y = 0;

    box first;
    cout << "введите x верхнего угла" << endl;
    cin >> x;
    cout << "введите y верхнего угла" << endl;
    cin >> y;
    first = make_tuple(x, y);
    
    box second;
    cout << "введите x нижнего угла" << endl;
    cin >> x;
    cout << "введите y нижнего угла" << endl;
    cin >> y;
    second = make_tuple(x, y);
    
    box dot;
    cout << "введите x точки" << endl;
    cin >> x;
    cout << "введите y точки" << endl;
    cin >> y;
    dot = make_tuple(x, y);
    
    borders(first, second, dot);

}
void borders(box a,box b, box c) {

    int x1, x2, x3, y1, y2, y3;

    x1 = get<0>(a);
    x2 = get<0>(b);
    x3 = get<0>(c);
    y1 = get<1>(a);
    y2 = get<1>(b);
    y3 = get<1>(c);

    if (x1<x3 && x2>x3 && y1>y3 && y2<y3){
        cout << "\ninside";
    }
    else if (x1 == x3 && y1 >= y3 && y2 <= y3 || x2 == x3 && y1 >= y3 && y2 <= y3 || y1 == y3 && x1 <= x3 && x2 >= x3 || y2 == y3 && x1 <= x3 && x2 >= x3) {
        cout << "\nat the adge";
    }
    else {
        cout << "\noutside";
    }
}
