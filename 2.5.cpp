// Лаба N2.5 Б8 - определение n-ой цифры в последовательности чисел Фибоначчи (не доделал)

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    cout << "k - digit number" << endl;

    while (true)
    {
        unsigned int number = 0, previousNumber = 1, buff = 0;
        int fibNumber = 0, k = 0;
        int classCounter = 0, largestClassDigit = 0, allDigitsCounter = 0, boolVar = 0;

        cout << "k: ";  // номер цифры в последовательности чисел Фибоначчи
        cin >> k;

        for (int i = 1; i <= 48; i++)  // repeat 48 times (48th - max stored fibonacci number = 2971215073)
        {
            buff = number;
            number += previousNumber;
            previousNumber = buff;

            fibNumber = previousNumber;  // 0, 1, 1, 2, 3, 5, 8, ..., 2971215073

            if (fibNumber < 10)
            {
                allDigitsCounter++;

                if (allDigitsCounter == k)
                {
                    cout << fibNumber << endl;
                    break;
                }
            }

            if (fibNumber >= 10)
            {
                while (fibNumber >= 10)
                {
                    largestClassDigit = fibNumber;
                    while (largestClassDigit >= 10)
                    {
                        largestClassDigit /= 10;  // узнаю цифру наибольшего разряда
                        classCounter++;
                    }
                    allDigitsCounter++;

                    if (allDigitsCounter == k)
                    {
                        cout << largestClassDigit << endl;
                        boolVar = 1;
                        break;
                    }

                    fibNumber -= largestClassDigit * (int)pow(10, classCounter);  // убираем левую цифру числа fibNumber (например: 377 - 300 = 77, 77 - 70 = 7)

                    if (fibNumber < 10)
                    {
                        allDigitsCounter++;
                        if (allDigitsCounter == k)
                        {
                            cout << largestClassDigit << endl;
                            boolVar = 1;
                            break;
                        }
                    }
                }
            }

            if (boolVar == 1)
                break;
        }
    }
}
