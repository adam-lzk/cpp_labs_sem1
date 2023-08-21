#include "Header.h"

void sort_array(int** a, int row, int column) {
    int tmp, min, *b;
    b = new int[column];

    for (int j = 0; j < column; j++) {
        int sum = 0;
        for (int i = 0; i < row; i++)
            sum += a[i][j];
        b[j] = sum;
    }

    for (int i = 0; i < column - 1; i++) {

        min = i;
        for (int j = i + 1; j < column; j++)
            if (b[j] > b[min])
                min = j;
        for (int j = 0; j < row; j++) {

            tmp = a[j][i];
            a[j][i] = a[j][min];
            a[j][min] = tmp;
        }
        tmp = b[i];
        b[i] = b[min];
        b[min] = tmp;
    }
}



void fill_array(int** array, int row, int column)
{
    srand(time(NULL));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            array[i][j] = rand() % 10;
        }
    }
}

void print_array(int** array, int row, int column)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << array[i][j] << '\t';
        }
        cout << endl;
    }
}
