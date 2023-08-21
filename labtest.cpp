#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    double d = 0.123456789012345;  // double и float выводят 5 знаков после запятой, при ц.ч. = 0
    float f = 0.1234567;

    cout << endl << "double/float 0.12345678:" << endl << "d " << d << endl << "f " << f << endl;
    cout << setprecision(15) << "d' " << d << endl;  // 15 max
    cout << setprecision(7) << "f' " << f << endl << endl;  // 7 max

    double
    d1 = 1.12345678,
    d2 = 12.12345678,
    d3 = 123.12345678,
    d4 = 1234.12345678,
    d5 = 12345.12345678,
    d6 = 123456.12345678;
    cout << "double x.12345678:" << endl << d1 << endl << d2 << endl << d3 << endl << d4 << endl << d5 << endl << d6 << endl;
}




























         /*(xFerz == xKon + 1 || xFerz == xKon + 2 || xFerz == xKon + 3 || xFerz == xKon + 4 ||
            xFerz == xKon - 1 || xFerz == xKon - 2 || xFerz == xKon - 3 || xFerz == xKon - 4 || xFerz == xKon) &&
           (yFerz == yKon + 1 || yFerz == yKon + 2 || yFerz == yKon + 3 || yFerz == yKon + 4 ||
            yFerz == yKon - 1 || yFerz == yKon - 2 || yFerz == yKon - 3 || yFerz == yKon - 4 || yFerz == yKon) && */

        /* ( (xFerz != xKon) && (yFerz != yKon + 1 || yFerz != yKon - 1 || yFerz != yKon + 3 || yFerz != yKon - 3) ) &&
           ( (yFerz != yKon) && (xFerz != xKon + 1 || xFerz != xKon - 1 || xFerz != xKon + 3 || xFerz != xKon - 3) ) &&
           ( (xFerz != xKon + 1 || xFerz != xKon - 1) && (yFerz != yKon + 4 || yFerz != yKon - 4) ) &&
           ( (xFerz != xKon + 4 || xFerz != xKon - 4) && (yFerz != yKon + 1 || yFerz != yKon - 1) ) &&
           ( (xFerz != xKon + 3 || xFerz != xKon - 3) && (yFerz != yKon + 2 || yFerz != yKon - 2) ) &&
           ( (xFerz != xKon + 2 || xFerz != xKon - 2) && (yFerz != yKon + 3 || yFerz != yKon - 3) ) &&
           ( (xFerz != xKon + 4 || xFerz != xKon - 4) && (yFerz != yKon + 3 || yFerz != yKon - 3) ) &&
           ( (xFerz != xKon + 3 || xFerz != xKon - 3) && (yFerz != yKon + 4 || yFerz != yKon - 4) ) &&
           ( (xFerz != xKon + 2 || xFerz != xKon - 2) && (yFerz != yKon + 2 || yFerz != yKon - 2) ) &&
           ( (xFerz != xKon + 4 || xFerz != xKon - 4) && (yFerz != yKon + 4 || yFerz != yKon - 4) ) */