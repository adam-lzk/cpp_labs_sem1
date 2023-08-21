// Лаба N2.6 Б8 - схема Горнера (не доделал)

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int n = 0;
    double  x = 1, xn = 3, y1 = 0, y2 = 6, dx = 0.2;

    cout << "y1 - calculations based on the arithmetic progression formula\n";
    cout << "y2 - calculations according to the gorner scheme\n\n";

    for (double x = 1; x <= xn; x += 0.2)  // (+= dx)  repeat 11 times
    {
        y1 = (pow(-1, n) * pow(x, 2*n) * n - x * x) * n / 2;

        for (int i = 1; i <= n; i++)  // repeat n times
        {
            y2 += pow(-1, n) * pow(x, 2*n) * n;
        }

        cout << "x = " << x << endl;
        cout << "y1 = " << y1 << endl;
        cout << "y2 = " << y2 << endl << endl;
    }
}
