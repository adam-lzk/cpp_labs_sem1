// Лаба 2 N2.2 Б9 - разложение функции в ряд Тейлра

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    float x = -0.6, xn = 0.8, dx = 0.1;
    double y1 = 0, y2 = 1;
    int a = 2, i = 1;

    cout << endl << "y = 1 / (1+x)^3 - 1\n\n";

    cout << "y1 - calculation of the function by the formula\n";
    cout << "y2 - decomposition of a function into a Taylor series\n\n";

    for (float x = -0.6; x <= xn; x += dx)  // repeated 15 times
    {
        y1 = 1 / (pow ((1 + x), 3)) - 1;
        cout << "y1 = " << y1 << endl;

        do
        {
            y2 += pow(-1,i) * pow(x, i) * a * (a + 1) / 2;;
            a++;
            i++;
        } while (a <= 20); //(abs(y1 - y2) < pow(10, -6));  // ???

        cout << "y2 = " << y2 << endl << endl;
    }
}
