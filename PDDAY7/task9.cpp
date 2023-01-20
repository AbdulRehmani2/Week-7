#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    for(int i = 1; i <= number; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        for(int k = number-1; k >= i; k--)
        {
            cout << " ";
        }
        for(int l = number-1; l >= i; l--)
        {
            cout << " ";
        }
        for(int m = 1; m <= i; m++)
        {
            cout << "*";
        }
        cout << endl;
    }
}