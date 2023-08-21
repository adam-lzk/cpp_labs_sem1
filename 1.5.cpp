// Лаба 3 N1.5 Б8 - треугольник принадлежит полуплоскости

#include <iostream>

using namespace std;

int main() {
    double x1 = 0, y1 = 0, x2 = 0, y2 = 0, x3 = 0, y3 = 0, a = 0 ,b = 0 ,c = 0;

    cout << "ax + by + c = 0\n";

    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << "x1 = ";
    cin >> x1;
    cout << "y1 = ";
    cin >> y1;
    cout << "x2 = ";
    cin >> x2;
    cout << "y2 = ";
    cin >> y2;
    cout << "x3 = ";
    cin >> x3;
    cout << "y3 = ";
    cin >> y3;
    cout << "A = (" << x1 << ";" << y1 << ")\n";
    cout << "B = (" << x2 << ";" << y2 << ")\n";
    cout << "C = (" << x3 << ";" << y3 << ")\n";

    if ( (a*x1 + b*y1 + c > 0) && (a*x2 + b*y2 + c > 0) && (a*x3 + b*y3 + c > 0) 
      || (a*x1 + b*y1 + c < 0) && (a*x2 + b*y2 + c < 0) && (a*x3 + b*y3 + c < 0) ) {
        cout << "треугольник принадлежит полуплоскости\n";
    } else {
        cout << "треугольник не принадлежит полуплоскости\n";
    }

    return 0;
}