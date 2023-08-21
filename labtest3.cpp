// Referat

#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main() {
	srand(time(NULL));
	int arrA[100][100];
	int arrB[100][100];
	int n, max, x;
	max = 0;
	int q = 0;
	x = 1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arrA[i][j] = rand() % 50;
		}

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (j > i)
			{
				for (int k = i; k <= j; k++)
				{
					q = j;
					for (q = j; q >= i; q--)
					{
						if (arrA[k][q] > max)
							max = arrA[k][q];
					}

				}
				arrB[i][j] = max;
			}
			max = 0;
			if (j < i)
			{
				for (int k = i; k >= j; k--)
				{
					q = j;
					for (q = j; q <= i; q++)
					{
						if (arrA[k][q] > max)
							max = arrA[k][q];
					}

				}
				arrB[i][j] = max;
			}
			if (j == i)
			{
				arrB[i][j] = arrA[i][j];

			}
			max = 0;
		}

	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(3) << arrA[i][j];
		}
		cout << endl;
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(3) << arrB[i][j];
		}
		cout << endl;

	}
}
