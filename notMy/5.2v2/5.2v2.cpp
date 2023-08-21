#include <ctime>
#include "Header.h";

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите размер массива: ";
	int size; cin >> size;
	cout << endl << "Выберите способ заполнения массива: " << endl << "1. Случайным образом" << endl << "2. По возврастанию" << endl << "3. По убыванию" << endl;
	int way; cin >> way;
	int count = 0, counter = 0;
	double* arr = new double[size] ;

	switch (way)
	{
	case 1:
		first (arr, size);
		break;
	case 2:
		second(arr, size);
		break;
	case 3:
		third(arr, size);
		break;
	default:
		cout << "Способ с таким номером не задан.";
		return 0;
		break;
	}

	cout << endl << "Выберите метод сортировки: " << endl << "1. Быстрая сортировка" << endl << "2. Сортировка бинарными вставками" << endl;
	cin >> way;

	switch (way)
	{
	case 1:
		quickSort(arr, 0, size - 1, count, counter);
		break;
	case 2:
		sort_bin(arr, size, count, counter);
		break;
	default:
		cout << "Способ с таким номером не задан.";
		return 0;
		break;
	}

	output(arr, size, count, counter);
	
	delete[] arr;
}
