#include <iostream>
#include <cmath>

using namespace std;

long double num_den(long double x, double const p, int& count)
{
    long double numerator, denominator, prex, fact, pre_fact = 2, sum = 0; int one = -1, k = 0; prex = x;
    count = 0;

    for (int k = 1; k <= 3; k += 2)
        x *= x;

    prex *= prex;

    do
    {
        k++;
        count++;
        numerator = one;
        fact = pre_fact * pre_fact;
        denominator = fact;
        pre_fact *= k + 2;
        sum += (numerator / denominator) * x;
        one = -one;
        x *= prex;
    } while (abs((numerator / denominator)*x) > p); //10^-6

    return sum;
}

int main()
{
    long double x, sum; double const p = 1e-6; int count;

    cout << "Enter x: " << endl; cin >> x; x /= 2;

    while (x < 0 || x>1)
    {
        cout << "Invalid!" << endl << "Enter x: " << endl;
        cin >> x;
        x /= 2;
    }

    sum = num_den(x, p, count);
    cout << sum << " ";
    cout << endl << count << endl;

    return 0;
}
