// Лаба N2.4 Б8 - определение кол-ва чисел в наибольшей последовательности подряд идущих чисел одного знака (не доделал)

#include <iostream>

using namespace std;

int main(void)
{
    int n = 0, prevn = 0, count1 = 0, count2 = 0, max = 0;

    cout << "\nto stop typing, enter 666\n";

    while (true)
    {
        cout << "n = ";
        cin >> n;

        if (n == 666)
            break;

        if ( n > 0 && prevn < 0 || n < 0 && prevn > 0 )
        {
            while (true)
            {
                if (count1 > count2 && count1 > max)
                {
                    max = count1;
                    count1 = 0;
                    count2 = 0;
                    break;
                }
                if (count2 > count1 && count2 > max)
                {
                    max = count2;
                    count1 = 0;
                    count2 = 0;
                    break;
                }
                if (count1 == count2 && count1 > max)
                {
                    max = count1;
                    count1 = 0;
                    count2 = 0;
                    break;
                } else break;
            }
        }

        if (n > 0)
            count1++;

        if (n < 0)
            count2++;

        prevn = n;
    }

    cout << "The longest sequence has " << max << " numbers";
}
