#include "Header.h";

int main()
{
    int row;
    cout << "Enter the row: ";
    cin >> row;

    int column;
    cout << "Enter the column: ";
    cin >> column;

    int** array = new int* [row];

    for (int i = 0; i < row; i++)
    {
        array[i] = new int[column];
    }


    fill_array(array, row, column);
    print_array(array, row, column);
    cout<<"Sorted array: " << endl << endl;
    sort_array(array, row, column);
    print_array(array, row, column);

    for (size_t i = 0; i < row; i++)
    {
        delete array[i];
    }
    delete array;

    return 0;
}