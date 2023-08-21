// Лаба N2.1.1 Б8 - определение повторения цифр указанного числа

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int n = 0, k = 0;  // Введенное число, кол-во цифр числа
    int chr = 0, i = 0; // Число единиц числа n, переменная-счетчик

    cout << "число (n) = ";
    cin >> n;
    int n_copy = n, n_copy2 = n;

    cout << "количество повторяющихся цифр (k) = ";
    cin >> k;

    while (n > 0)
    {
        chr = n % 10;
        i = 0;

        while (n_copy > 0)
        {
            if (chr == n_copy % 10)
                i++;

            n_copy /= 10;
        }

        if (i > k)
            cout << "В числе " << n_copy2 << " цифра " << chr << " встречается более " << k << " раз" << endl;

        n /= 10;
        n_copy = n;
    }
}
