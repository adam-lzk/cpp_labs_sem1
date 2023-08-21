// Лаба 1 N1.1 А9 - функция

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double x = 0, y = 0, pi = 3.14159265359, buff1 = 0, buff2 = 0, buff3 = 0, buff4 = 0, buff5 = 0, buff6 = 0, buff7 = 0, buff8 = 0;
    cout << "x = ";
    cin >> x;
    buff1 = sin(x);
    buff2 = exp(cos(x));
    buff3 = x*x;
    buff4 = sin(buff1 + buff2 + buff3);
    buff5 = sin (pi*x*x);
    buff6 = log(x*x);
    buff7 = sqrt(sqrt(buff5 + buff6));
    buff8 = buff4*buff7;
    y = buff8;
    cout << "y = ";
    cout << y;
    cout << endl;
    return 0;
}
