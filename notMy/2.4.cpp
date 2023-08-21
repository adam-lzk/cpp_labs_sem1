// Лаба N2.4 Б8 - определение кол-ва чисел в наибольшей последовательности подряд идущих чисел одного знака (не мой код)

#include <iostream>

using namespace std;

int main(void)
{
    int  number = 0, previousNumber = 0, lengh = 1, maxlengh = 0;

    while(true)
    {
        cout << "number = ";
        cin >> number;

        if(number == 666)
            break;

        if(number > 0 && previousNumber > 0 || number < 0 && previousNumber < 0)
            lengh++;

        if (number > 0 && previousNumber < 0 || previousNumber > 0 && number < 0)
            lengh = 1;

        if(lengh > maxlengh)
            maxlengh = lengh;

        previousNumber = number;
    }

    cout << "The longest sequence has " << maxlengh << " numbers" << endl;
}
