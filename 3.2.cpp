// Лаба N3.2 Б5 - заполнение массива наибольшими числами исходного массива (по кресту)

#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main(void)
{
    srand(time(NULL));

    int size = 0, max = 0;  // must be const int SIZE

    cout << "\n size = ";
    cin >> size;
    cout << endl;

    int arr1[size][size], arr2[size][size];


    for (int row1 = 0; row1 < size; row1++)  // заполнение массива 1 рандомными числами от 0 до 99 вклчительно
    {
        for (int col1 = 0; col1 < size; col1++)
        {
            arr1[row1][col1] = rand() % 100;
        }
    }


    for (int row1 = 0; row1 < size; row1++)  // нахождение элементов и заполнение массива 2
    {
        for (int col1 = 0; col1 < size; col1++)
        {

            for (int row2 = 0; row2 < size; row2++)  // проход по колонне
            {
                if (arr1[row2][col1] > max)
                {
                    max = arr1[row2][col1];
                }
            }

            for (int col2 = 0; col2 < size; col2++)  // проход по строке
            {
                if (arr1[row1][col2] > max)
                {
                    max = arr1[row1][col2];
                }
            }

            arr2[row1][col1] = max;
            max = -1;

        }
    }


    for (int row1 = 0; row1 < size; row1++)  // вывод массива 1
    {
        for (int col1 = 0; col1 < size; col1++)
        {
            cout << setw (3) << arr1[row1][col1];
        }
        cout << endl;
    }
    cout << endl;

    for (int row2 = 0; row2 < size; row2++)  // вывод массива 2
    {
        for (int col2 = 0; col2 < size; col2++)
        {
            cout << setw (3) << arr2[row2][col2];
        }
        cout << endl;
    }
    cout << endl;
}
