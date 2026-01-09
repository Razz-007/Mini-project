//que 15: Problem Title: ADTU Canteen Bill Analyzer

#include <iostream>
using namespace std;

int main()
{
    int n, m,s;
    
    cout << "Enter number of studnets: ";
    cin >> n;
    cout << "Enter number of days: ";
    cin >> m;
    int value[n][m];
    cout << "enter money spent by each student for days: ";
    for (int i = 0; i < n; i++)
    {
        cout << "\nstudent " << i + 1 << ": ";
        for (int j = 0; j < m; j++)
        {
            cin >> value[i][j];
        }
    }
    cout << "weekly spendature: " << endl;
    cout << "--------------------";
    int highs = 0;
    int lows = 9999;
    int tops = 0;
    int lowsp = 0;
    for (int i = 0; i < n; i++)
    {
         s = 0;

        for (int j = 0; j < m; j++)
        {
            s += value[i][j];
        }

        cout << "\nStudent " << i + 1 << " total: $" << s << endl;
        if (s > highs)
        {
            highs = s;
            tops = i;
        }
        
        else if (s < lows)
        {
            lows = s;
            lowsp = i;
        }
    }
    cout << "\n Highest spender: " << tops + 1 << " ($" << highs << " )";
    cout << "\n Lowest spender: " << lowsp + 1 << " ($" << lows << " )";

    return 0;
}
