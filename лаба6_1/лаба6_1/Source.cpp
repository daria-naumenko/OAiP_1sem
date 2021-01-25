#include <iostream> 
#include <iomanip> 
#include <math.h> 
#include <conio.h>
using namespace std;
int main()
{
    int** a, tmp; 
    int i, j, n;

    cout << "Vvedite razmer: " << endl;
    cin >> n;  

    if (n <= 0) 
    {
        cout << "Vvedite pologitelnoe chislo\n";
        cin >> n;
    }
    a = new int* [n]; 
    for (i = 0; i < n; i++)
        a[i] = new int[n]; 

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++) 
        {
            cout << "Vvedite a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    int max = a[n-1][n - 1]; 
    for (i = 0; i < n; i++) { 
        for (j = 0; j < n; j++)
        {
            if (i > (n - j - 1))
            {
                if (a[i][j] > max)
                    max = a[i][j];
            }
        }

    }
    cout << endl;
    cout << "max = " << max << endl;  
        
    for (int i = 0; i < n; ++i) 
    {
        for ( j = 0; j < n; ++j)
        {
            cout << a[i][j]<< "\t";
        }
        cout << endl;
    }
    _getch();
} 