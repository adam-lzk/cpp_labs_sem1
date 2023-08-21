// Лаба N2.5 Б8 - определение n-ой цифры в последовательности чисел Фибоначчи (не мой код)

#include <iostream>

using namespace std;

int main(void)
{
    int k = 0;

    while (true)
    {
        cout << endl << "k: ";
        cin >> k;

        int c = 0, fib = 1, prevfib = 1, preprevfib = 0, revfib = 0;
        int mem, cifra = 0, counter = 0, fixcount = 0;

        for (int count = 1; count < k;)
        {
            fib = prevfib + preprevfib;
            preprevfib = prevfib;
            prevfib = fib;
            mem = fib;

            while (mem > 0)
            {
                mem /= 10;
                ++count;
                ++counter;

                if (count == k)
                    fixcount = counter;
            }

            cifra = fib;

            if (fib > 9)
            {
                while (fib)
                {
                    revfib = revfib * 10 + (fib % 10);
                    fib /= 10;
                }
                while (c != fixcount)
                {
                    cifra = revfib % 10;
                    revfib /= 10;
                    ++c;
                }
            }
            revfib = 0;
            counter = 0;
        }
        if (k == 1)
            cifra = 1;
        cout << cifra;
    }
}
