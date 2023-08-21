#include <iostream>
#include <ctime>
#include "Header.h";

using namespace std;

void first(int *arr, int size)
{
	srand(time(NULL));
	cout << endl << "Массив состоит из следующих элементов: ";
	for (int i = 0; i < size; ++i)
	{
		arr[i] = rand() % 100;
		cout << arr[i] << ", ";
	}
	cout << endl;
}

void first(double* arr, int size)
{
	srand(time(NULL));
	cout << endl << "Массив состоит из следующих элементов: ";
	for (int i = 0; i < size; ++i)
	{
		arr[i] = (rand() % 100)/10.0;
		cout << arr[i] << ", ";
	}
	cout << endl;
}

void second(int* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = i;
		cout << arr[i] << " ";
	}
}void second(double* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = i + 1.0/i;
		cout << arr[i] << " ";
	}
}

void third(int* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = size - i;
		cout << arr[i] << " ";
	}
}void third(double* arr, int size)
{
	for (size_t i = 0; i < size; i++)
	{
		arr[i] = size - i -1.0/i;
		cout << arr[i] << " ";
	}
}

