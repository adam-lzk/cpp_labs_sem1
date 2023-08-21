// Лаба 2 N1.3 Б2 - выстроить числа в порядке возрастания (через swap)

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    double x, y, z = 0;

    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    cout << "z = ";
    cin >> z;

    do 
    {
        if (x > y)
        {
            swap (x, y);
        }

        if (y > z)
        {
            swap (y, z);
        }
    } while (x > y || y > z);

    cout << x << " <= " << y << " <= " << z << endl;
}
