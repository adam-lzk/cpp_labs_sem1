// Лаба 1 N1.2 Б9 - точка принадлежит части плоскости (через return)

#include <iostream>
#include <cmath>

using namespace std;

bool isInSquare(double x, double y, double R) {
    return x >= 0 && y >= 0 && x <= 2 * R && y <= 2 * R;
}

bool isInTriangle(double x, double y, double R) {
    return x <= 0 && y <= 0 && y >= -x - 2 * R;
}

bool isInCircle(double x, double y, double R) {
    return x >= 0 && y >= 0 && x * x + y * y < R * R;
}

int main() {

    double x = 0, y = 0, R = 0;

    cout << "R = ";
    cin >> R;
    do {
        if (R <= 0) {
            cout << "\"R\" должно быть больше 0 (R > 0)\n"
                 << "R = ";
            cin >> R;
        }
    } while (R <= 0);

    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    if ((isInSquare(x, y, R) || isInTriangle(x, y, R)) && !isInCircle(x, y, R)) {
        cout << "Точка (" << x << ";" << y << ") принадлежит плоскости\n";
    } else {
        cout << "Точка (" << x << ";" << y << ") не принадлежит плоскости\n";
    }

    return 0;
}
