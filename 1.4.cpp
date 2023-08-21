// Лаба 3 N1.4 Б8 - конь и ферзь на шахмотной доске

#include <iostream>

using namespace std;

int main()
{
  int xKon = 0, yKon = 0, xFerz = 0, yFerz = 0, i = 0;
  int auxilKon = 0, auxilFerz = 0;
  cout << "x (коня) = ";  // от 1 до 8 (поле 8*8)
  cin >> xKon;
  cout << "y (коня) = ";
  cin >> yKon;
  cout << "x (ферзя) = ";
  cin >> xFerz;
  cout << "y (ферзя) = ";
  cin >> yFerz;

  // конь бьет ферзя
  if ( (xFerz == xKon + 2 || xFerz == xKon - 2) && (yFerz == yKon + 1 || yFerz == yKon - 1) ||
       (xFerz == xKon + 1 || xFerz == xKon - 1) && (yFerz == yKon + 2 || yFerz == yKon - 2) )
    {
      cout << "конь бьет ферзя\n";
      auxilKon = 1;
    }

  // ферзь бьет коня
  for (i = 1; i <= 8; i++)  // ферзь бьет по диагонали
  {
    if ( (xKon == xFerz + i || xKon == xFerz - i) && (yKon == yFerz + i || yKon == yFerz - i) ||
         (yKon == yFerz) || (xKon == xFerz) )
      {
        cout << "ферзь бьет коня\n";
        auxilFerz = 1;
        break;
      }
  }


  // второй ход

  if ( (auxilKon == 0) && (auxilFerz == 0) )
  {
    // ферзь бьет коня со второго хода
    cout << "ферзь побьет коня за 2 хода\n";

    // конь бьет ферзя со второго хода
    if ( (xFerz == xKon) && ( (yFerz == yKon + 2) || (yFerz == yKon - 2) || (yFerz == yKon + 4) || (yFerz == yKon - 4) ) ||
         (yFerz == yKon) && ( (xFerz == xKon + 2) || (xFerz == xKon - 2) || (xFerz == xKon + 4) || (xFerz == xKon - 4) ) ||
         ( (xFerz == xKon + 1) || (xFerz == xKon - 1) ) && ( (yFerz == yKon + 1) || (yFerz == yKon - 1) || (yFerz == yKon + 3) || (yFerz == yKon - 3) ) ||
         ( (xFerz == xKon + 2) || (xFerz == xKon - 2) ) && ( (yFerz == yKon + 4) || (yFerz == yKon - 4) ) ||
         ( (xFerz == xKon + 3) || (xFerz == xKon - 3) ) && ( (yFerz == yKon + 1) || (yFerz == yKon - 1) || (yFerz == yKon + 3) || (yFerz == yKon - 3) ) ||
         ( (xFerz == xKon + 4) || (xFerz == xKon - 4) ) && ( (yFerz == yKon + 2) || (yFerz == yKon - 2) ) )
      cout << "конь побьет ферзя за 2 хода\n";
  }

  return 0;
}
