#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{
    int power = 1, zeros = 0, var = 0, br = 0, i = 0;
    int arr[100];

    while (true)
    {
        var = pow(5,power);
        power++;

        while (var > 0)
        {
            arr[i] = var % 10;  // if var = 100x + 10y + z  =>  arr[0] = z, arr[1] = y, arr[2] = x
            var /= 10;
            i++;
        }

        for (int j = 0; j < i-2; j++)  // 3 нуля подряд
        {
            if (power >= 3)
            {
                if ( (arr[j] == 0) && (arr [j-1] == 0) && (arr[j-2] == 0) )
                {
                    cout << power << endl;
                    br = 1;
                    break;
                }
            }
        }
        if (br == 1)
            break;
    }
}
