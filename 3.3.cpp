// Лаба N3.3 Б1 - N2.3 через решето Эратосфена

#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int size, size2 = 0;

    cout << "\nEnter a number: ";
    cin >> size;

    int arr[size], arr2[size];


    for (int i = 0; i < size; i++)  // заполнение массива arr
    {
        if (i > 0)
            arr[i] = i + 1;  // 2,..., size
    }


    int worksUpTo = ceil(sqrt(size));  // для оптимизации

    for (int i = 1; i < worksUpTo; i++)  // поиск простых числе в масстве arr через решето Эратосфена
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] != 0)
            {
                if (arr[j] % arr[i] == 0)  // все составные числа массива arr приравниваются к 0
                    arr[j] = 0;
            }
        }
    }


    for (int i = 0; i < size; i++)  // заполнение массива arr2 простыми числами из массива arr
    {
        if (arr[i] != 0)
        {
            arr2[size2] = arr[i];
            size2++;
        }
    }


    cout << "Prime divisors of this number: ";

    for (int i = 0; i < size2; i++)  // поиск делителей числа size в массиве arr2
    {
        if (size % arr2[i] == 0)
            cout << arr2[i] << " ";
    }
    cout << endl << endl;
}
