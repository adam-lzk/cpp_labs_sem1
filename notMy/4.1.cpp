#include <iostream>

using namespace std;

int main(void)
{
    char string[1000];

    cout << "\nEnter string: ";
    cin.getline(string, 1000);
    cout << endl;

    bool repeatChar = 0;
    int count = 0;

    for (int i = 0; i < strlen(string); i++)
    {
        repeatChar = 0;
        count = 0;

        for (int j = 0; j < strlen(string); j++)
        {
            if (string[i] == string[j])
            {
                count++;

                if (count > 1)
                {
                    repeatChar = 1;

                    for (int k = j; k < strlen(string); k++)
                        string[k] = string[k + 1];

                    j--;
                }
            }
        }

        cout << "Number of symbol " << string[i] << " is " << count << endl;

        if (repeatChar == 1)
        {
            for (int k = i; k < strlen(string); k++)
                string[k] = string[k + 1];

            i--;
        }
    }

    cout << "\nNew string: " << string << endl << endl;
}
