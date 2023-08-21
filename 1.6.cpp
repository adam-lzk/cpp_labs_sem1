#include <iostream>

using namespace std;

int main()
{
    unsigned int x = 0;
    cout << "x = ";
    cin >> x;

    // проверка 0-го бита
    unsigned int x1 = 1;  // 0001
    if ( (x & x1) == x1)
        cout << "0th bit = 1\n";
        else cout << "0th bit = 0\n";

    // проверка 15-го бита
    unsigned int x2 = 32768;  // 32768 = 2^15 = 1000000000000000
    if ( (x & x2) == x2 )
        cout << "15th bit = 1\n";
        else cout << "15th bit = 0\n";

    // инверсия 7-го и 15-го битов
    unsigned int y1 = 128;  // = 10000000
    unsigned y2 = 32768;  // = 1000000000000000
    unsigned int res = (x ^ y1) ^ y2;
    cout << "result = " << (int)res << endl;

    return 0;
}
