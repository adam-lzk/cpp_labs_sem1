// Лаба 1 N1.1 Б5 - функция

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double x = 0, s = 0, t = 0;

    cout << "y = x^t / (sqrt(x^3 + 1) + ln(s))\n";

    cout << "x = ";
    cin >> x;
    do {
        if (x < -1) {  // x должно быть больше или равно -1 (по одз)
            cout << "\"x\" must be greater than or equal to -1 (x >= -1)\n";
            cout << "x = ";
            cin >> x;
        }
    } while (x < -1);


    do {
        cout << "s = ";
        cin >> s;
        if (s != round(s)) {  // s должно быть целым (по условию)
            cout << "\"s\" must be an integer\n";
        }
        if (s <= 0) {  // s должно быть больше 0 (по одз)
            cout << "\"s\" must be more than 0 (s > 0)\n";
        }
    } while (s <= 0 || s != round(s));


    cout << "t = ";
    cin >> t;
    do {
        if (t != round(t)) {  // t должно быть целым (по условю)
            cout << "\"t\" must be an integer\n";
            cout << "t = ";
            cin >> t;
        }
    } while (t != round(t));

    double buff1 = pow(x, t);
    double buff2 = pow(x, 3) + 1;
    double buff3 = sqrt(buff2);
    double buff4 = log(s);
    double buff5 = buff3 + buff4;
    double y = buff1 / buff5;

    cout << "y = " << y << endl;

    return 0;
}
