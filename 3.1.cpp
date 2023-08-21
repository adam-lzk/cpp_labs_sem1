// Лаба N3.1 Б8 - заполнение массива колличеством элементов, больших данного элемента в исходном массиве

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main(void)
{
    srand(time(NULL));

    const int SIZE = 10;
    int arr[SIZE], arr2[SIZE];
    int count = 0;

    cout << endl;
    for (int i = 0; i < SIZE; i++)
    {
        arr[i] = rand() % 20;
        cout << setw (3) << arr[i];
    }
    cout << endl;

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[i])
                count++;
        }
        arr2[i] = count;
        cout << setw(3) << arr2[i];
        count = 0;
    }
    cout << endl << endl;
}
