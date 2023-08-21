#pragma once
#include <iostream>
using namespace std;

void first(int* arr, int size);
void first(double* arr, int size);
void second(int* arr, int size);
void second(double* arr, int size);
void third(int* arr, int size);
void third(double* arr, int size);


template<class T>
void output(T* arr, int size, int& count, int& counter)
{
	for (size_t i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl << "count of comparings = " << count;
	cout << endl << "count of replacing = " << counter;
}

template<class T>
void quickSort(T* arr, int left, int right, int& count, int& counter)
{
	T pivot; // разрешающий элемент
	int l_hold = left; //левая граница
	int r_hold = right; // правая граница
	pivot = arr[left];
	while (left < right) // пока границы не сомкнутся
	{
		while ((arr[right] >= pivot) && (left < right))
		{
			right--; // сдвигаем правую границу пока элемент [right] больше [pivot]
			++count;
		}
		if (left != right) // если границы не сомкнулись
		{
			arr[left] = arr[right]; // перемещаем элемент [right] на место разрешающего
			left++; // сдвигаем левую границу вправо
			++counter;
		}
		while ((arr[left] <= pivot) && (left < right))
		{
			left++; // сдвигаем левую границу пока элемент [left] меньше [pivot]
			++count;
		}
		if (left != right) // если границы не сомкнулись
		{
			arr[right] = arr[left]; // перемещаем элемент [left] на место [right]
			right--; // сдвигаем правую границу вправо
			++counter;
		}
	}
	arr[left] = pivot; // ставим разрешающий элемент на место
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot)// Рекурсивно вызываем сортировку для левой и правой части массива
	{
		quickSort(arr, left, pivot - 1, count, counter);
	}
	if (right > pivot)
	{
		quickSort(arr, pivot + 1, right, count, counter);
	}
}

/*Бинарными вставками*/
template<class T>
void sort_bin(T* arr, int size, int& count, int& counter)
{
	count = 0;
	counter = 0;
	for (int i = 1; i < size; i++) //перебор всех элементов начиная со второго
	{
		T x = arr[i]; // присвоение переменной х текущего элемента
		int left = 0; //установка текущих границы для поиска
		int right = i - 1;
		while (left <= right) //поиск места вставки бинарным поиском
		{
			int mid = (left + right) / 2;
			++count;
			if (x < arr[mid]) { right = mid - 1; }
			else left = mid + 1;
		}
		// сдвиг элементов после найденного места на 1 позицию вправо
		for (int j = i - 1; j >= left; j--) { arr[j + 1] = arr[j]; ++counter; }
		if (arr[left] != x) ++counter;
		arr[left] = x; //вставка текущего элемента в найденную позицию
	}
}
/*-=End-=*/
