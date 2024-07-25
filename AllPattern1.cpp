#include <iostream>
using namespace std;

int main()
{
    int n = 5, count = 1;

    cout << "2nd Pattern.";
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    cout << "3rd Pattern." << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }

    cout << endl;
    cout << "4th Pattern." << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }

    cout << endl;
    cout << "5th Pattern." << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    cout << endl;
    cout << "6th Pattern." << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << j;
        }
        cout << "\n";
    }

    cout << endl;
    cout << "7th Pattern." << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < i; k++)
        {
            cout << "*";
        }
        for (int m = 1; m <= i; m++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    cout << endl;
    cout << "8th Pattern." << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = i; k < 5; k++)
        {
            cout << "*";
        }
        for (int m = i; m <= 5; m++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    cout << endl;
    cout << "9th Pattern." << endl;

    for (int i = 1; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << " ";
        }
        for (int k = 1; k < i; k++)
        {
            cout << "*";
        }
        for (int m = 1; m <= i; m++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int k = i; k < 5; k++)
        {
            cout << "*";
        }
        for (int m = i; m <= 5; m++)
        {
            cout << "*";
        }

        cout << "\n";
    }

    cout << endl;
    cout << "10th Pattern." << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j < 5; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    cout << "11th Pattern." << endl;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1" << " ";
            }
            else
            {
                cout << "0" << " ";
            }
        }
        cout << endl;
    }

    cout << endl;
    cout << "12th Pattern." << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    cout << endl;
    cout << "13th Pattern." << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " " << count++;
        }
        cout << endl;
    }
    cout << endl;
    cout << "14th Pattern." << endl;

    for (int i = 1; i <= 5; i++)
    {
        char alphaba = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << " " << alphaba++;
        }
        cout << endl;
    }

    cout << endl;
    cout << "15th Pattern." << endl;

    for (int i = 1; i <= 5; i++)
    {
        char alphab = 'A';
        for (int j = i; j <= n; j++)
        {
            cout << " " << alphab++;
        }
        cout << endl;
    }
    cout << endl;
    cout << "16th Pattern." << endl;

    char alpha = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << alpha;
        }
        cout << alpha++;
        cout << endl;
    }
    cout << endl;

    cout << endl;
    cout << "17th Pattern." << endl;

    for (int i = 1; i <= n; i++)
    {
        char ch = 'A';

        // Space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // Left part
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }

        // Right part
        for (int j = i - 1; j >= 1; j--)
        {
            cout << (char)('A' + j - 1);
        }

        cout << endl;
    }

    cout << endl;
    cout << "18th Pattern." << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
        {
            cout << (char)('A' + n - j) << " ";
        }
        cout << endl;
    }

    cout << endl;
    cout << "19th Pattern." << endl;

    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n + 1; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = i; k <= n; k++)
        {
            cout << " ";
        }
        for (int m = i; m <= n; m++)
        {
            cout << " ";
        }
        for (int u = 1; u <= i; u++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    cout << "20th Pattern." << endl;

    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for (int k = i; k < n; k++)
        {
            cout << " ";
        }
        for (int m = i; m < n; m++)
        {
            cout << " ";
        }
        for (int n = 1; n <= i; n++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= n; j++)
        {
            cout << "*";
        }
        for (int k = 1; k < i; k++)
        {
            cout << " ";
        }
        for (int m = 1; m < i; m++)
        {
            cout << " ";
        }
        for (int v = i; v <= n; v++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    cout << "21th Pattern." << endl;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            if (i == 0 || i == n || j == 0 || j == n)
            {
                cout << ("*");
            }
            else
            {
                cout << (" ");
            }
        }
        cout << endl;
    }

    cout << endl;

    // TatvaSoft Patterns
    int z;
    cout << "-------TatvaSoft Patterns-------";
    cout << endl;
    cout << endl;
    cout << "1st Pattern";
    cout << endl;

    for (int i = 1; i <= n; i++)
    {
        int z = 4 * i - 3;

        for (int j = i; j < n; j++)
        {
            cout << "*";
        }

        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << z;
            z = z - 2;
        }
        cout << endl;
    }

    cout << endl;
    cout << "2nd Pattern" << endl;
    int num1 = 10;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i; j < 4; j++)
        {
            if (num1 > 0)
            {
                cout << num1;
                num1--;
            }
        }
        cout << endl;
    }

    
}