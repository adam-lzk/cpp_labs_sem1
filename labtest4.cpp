#include <iomanip>  
#include <iostream>  // cin cout
using namespace std;

int main(void)
{	int  n = 5, sum = 0;
	                            // 1     i++     1..n
	for (int i = 1; i <= n; i++)
	{	cout << setw(5) << i;
		sum += i;
	}
	cout << endl << " s1= " << sum << endl << endl;
	                         
                               // 2     ++i      1..n
	sum = 0;
	for (int i = 1; i <= n; ++i)
	{	cout << setw(5) << i;
		sum += i;
	}
	cout << endl << " s2= " << sum << endl << endl;
	                             
                                       // 3    0..n-1
	sum = 0;
	for (int i = 0; i < n; i++)
	{	cout << setw(5) << i;
		sum += i;
	}
	cout << endl << " s3= " << sum << endl << endl;
	                                   // 4   10..n-1
	sum = 0;
	for (int i = 10; i < n; i++)
	{	cout << setw(5) << i;
		sum += i;
	}
	cout << endl << " s4= " << sum << endl << endl;
	                               // 5     нет тела цикла
	sum = 0;
	for (int i = 1; i <= n; i++)
	{	cout << setw(5) << i;
	    sum += i;
	}
	cout << endl << " s5 = " << sum << endl << endl;
}
