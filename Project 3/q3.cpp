#include <iostream>
using namespace std;

int main()
{
    int rowSize = 2;
    int colSize = 2;
    int a[2][2] = {{2, 4}, {3, 5}};
    int i, j;
    int transpose[2][2];

    for (i = 0; i < rowSize; i++)
    {
        for (j = 0; j < colSize; j++)
        {
            transpose[j][i] = a[i][j];
        }
    }

    cout << "Original Matrix : " << endl;

    for (i = 0; i < rowSize; i++)
    {
        for (j = 0; j < colSize; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    cout << "Transpose Matrix : " << endl;
    
    for (i = 0; i < colSize; i++)
    {
        for (j = 0; j < rowSize; j++)
        {
            cout << transpose[i][j];
        }
        cout << endl;
    }
}