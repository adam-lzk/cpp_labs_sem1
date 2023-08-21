// Лаба N2.1.2 Б8 - определение возрастающей последовательности в дробной части числа

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    double number = 0, fractpart = 0;
    int n = 0, dig = 0, dignext = 0, i = 1, i2 = 0;

    cout << endl << "number: ";
    cin >> number;
    double number_copy = number;
    cout << "number of the first characters of the fractional part: ";
    cin >> n;  // !!! should be >= 2 and <= 15 and <= number of characters in the fractional part

    fractpart = number - round(number);

    int rep = n - 1;
    for (int i; i <= rep; i++)  // repeat n-1 times
    {
        dig = int(fractpart * 10) - int(fractpart) * 10;  // first digit of the fractional part
        dignext = int(fractpart * 100) - int(fractpart * 10) * 10;  // next digit

        if (dignext - dig > 0)
            i2++;

        fractpart *= 10;
    }

    if (i2 == rep)
    {
        cout << "\nthe first " << n << " digits of the number " << number_copy << " form an increasing sequence\n\n";
    } else cout << "\nthe first " << n << " digits of the number " << number_copy << " DON'T form an increasing sequence\n\n";
}
