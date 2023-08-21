#include <iostream>

using namespace std;

int main(void)
{
    const int MAX = 1001;
    char Array[MAX], New_Array[MAX];
    int N_New_Array = 0;

    cout << "Enter the string" << endl;
    cin.getline(Array, MAX);

    int Sum = strlen(Array);
    bool b = 0;

    for (int i = 0; i <= Sum; i++)
    {
        //Находим начало слова
        if (Array[i] != 32 && Array[i] != 46 && Array[i] != 44 && Array[i] != 58
            && Array[i] != 59 && Array[i] != 33 && Array[i] != 63 && Array[i] != 45
            && Array[i] != 40 && Array[i] != 41 && Array[i] != 0)
        {
            int Word_Lenght = 1;
            i++;

            //Находим длинну слова
            while (Array[i] != 32 && Array[i] != 46 && Array[i] != 44 && Array[i] != 58
                   && Array[i] != 59 && Array[i] != 33 && Array[i] != 63 && Array[i] != 45 &&
                   Array[i] != 40 && Array[i] != 41 && Array[i] != 0)
            {
                i++;
                Word_Lenght++;
            }

            int Povtor = 0;

            //Выделяем найденное слово в отдельный массив
            char Word[1001];
            int k = 0;

            for (int j = i - Word_Lenght; j <= i; j++)
            {
                Word[k] = Array[j];
                k++;
            }

            Word[k] = 0;
            cout << Word << endl;

            //Находим количество повторов
            for (int j = 0; j < k; j++)
            {
                char Symbol = Word[k];
                int Kol_vo = 1;

                for (int r = j + 1; r < k; r++)
                {
                    if (Word[j] == Word[r])
                    {
                        Kol_vo++;

                        for (int l = r; l < Sum; l++)
                            Word[l] = Word[l + 1];

                        r--;
                        k--;
                    }
                }

                if (Kol_vo != 1)
                    Povtor += Kol_vo;
            }

            //Если повторов больше, чем половина слова, то записываем это слово в новый массив
            if (Povtor > Word_Lenght - Povtor)
            {
                for (int n = N_New_Array, j = i - Word_Lenght; j < i; n++, j++)
                    New_Array[n] = Array[j];

                //Передвигает курсор записиси в новом массиве вместе с разделяющим знаком
                N_New_Array += Word_Lenght + 1;
            }
        }
    }

    New_Array[N_New_Array] = 0;
    cout << "New string - " << New_Array << endl;
}
