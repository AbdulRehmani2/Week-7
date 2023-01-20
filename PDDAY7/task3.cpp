#include <iostream>

using namespace std;

void upper(int rows);
void lower(int rows);

int main()
{
    int rows;
    cout << "Enter the number of rows : ";
    cin >> rows;
    upper(rows/2);
    lower(rows/2);
}

void upper(int rows)
{
    for(int i = 0; i <= rows; i++)
    {
        for(int k = rows; k >= i; k--)
        {
            cout << " ";
        }
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    
}

void lower(int rows)
{
    for(int i = 0; i <= rows; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for(int k = rows; k >= i; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}