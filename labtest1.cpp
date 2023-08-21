#include <iomanip>  
//#include <conio.h>      // getche
#include <iostream>     // cin cout

using namespace std;

int main (void)
{
	int n = 10,  m = 20;

	cout << setw(7) << "|  ";

	for (int i = 0; i < n; i++)
		cout << setw(4) << i;
	cout<<endl;

	cout <<"------------------------------------------------"<<endl;

	for (int i = 0; i <= m - 1;  i++)
	{ 	unsigned char c=30;
		cout << setw(4) << c + i * n << "|  ";
		for (int j = 0; j <= n - 1;  j++)
			cout << setw(4) << char(c + i * n + j);
		cout<<endl;
	}
	cout<<endl<<endl;
}
