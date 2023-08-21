// Лаба 2 N1.3 Б2 - выстроить числа в порядке возрастания (через buff)

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double x, y, z, buff1, buff2 = 0;

    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;

    do {

        if (x > y) { 
            buff1 = x;
            x = y;
            y = buff1;
        }

        if (y > z) {
            buff2 = y;
            y = z;
            z = buff2;
        }

    } while (x > y || y > z);

    cout << x << " <= " << y << " <= " << z << endl;

    return 0;
}
