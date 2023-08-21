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
	T pivot; // ����������� �������
	int l_hold = left; //����� �������
	int r_hold = right; // ������ �������
	pivot = arr[left];
	while (left < right) // ���� ������� �� ���������
	{
		while ((arr[right] >= pivot) && (left < right))
		{
			right--; // �������� ������ ������� ���� ������� [right] ������ [pivot]
			++count;
		}
		if (left != right) // ���� ������� �� ����������
		{
			arr[left] = arr[right]; // ���������� ������� [right] �� ����� ������������
			left++; // �������� ����� ������� ������
			++counter;
		}
		while ((arr[left] <= pivot) && (left < right))
		{
			left++; // �������� ����� ������� ���� ������� [left] ������ [pivot]
			++count;
		}
		if (left != right) // ���� ������� �� ����������
		{
			arr[right] = arr[left]; // ���������� ������� [left] �� ����� [right]
			right--; // �������� ������ ������� ������
			++counter;
		}
	}
	arr[left] = pivot; // ������ ����������� ������� �� �����
	pivot = left;
	left = l_hold;
	right = r_hold;
	if (left < pivot)// ���������� �������� ���������� ��� ����� � ������ ����� �������
	{
		quickSort(arr, left, pivot - 1, count, counter);
	}
	if (right > pivot)
	{
		quickSort(arr, pivot + 1, right, count, counter);
	}
}

/*��������� ���������*/
template<class T>
void sort_bin(T* arr, int size, int& count, int& counter)
{
	count = 0;
	counter = 0;
	for (int i = 1; i < size; i++) //������� ���� ��������� ������� �� �������
	{
		T x = arr[i]; // ���������� ���������� � �������� ��������
		int left = 0; //��������� ������� ������� ��� ������
		int right = i - 1;
		while (left <= right) //����� ����� ������� �������� �������
		{
			int mid = (left + right) / 2;
			++count;
			if (x < arr[mid]) { right = mid - 1; }
			else left = mid + 1;
		}
		// ����� ��������� ����� ���������� ����� �� 1 ������� ������
		for (int j = i - 1; j >= left; j--) { arr[j + 1] = arr[j]; ++counter; }
		if (arr[left] != x) ++counter;
		arr[left] = x; //������� �������� �������� � ��������� �������
	}
}
/*-=End-=*/
