// Лаба 2 N2.3 Б1 - поиск всех натуральных делителей числа

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double n = 0, x = 0; // n/x

    cin >> n;

    for (x = 1; x <= n; x++ ) {
        if (n / x == round(n / x)) {
            cout << x << endl;
        } 
    }
    return 0;
}
