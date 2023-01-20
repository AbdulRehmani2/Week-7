#include <iostream>

using namespace std;

void amplify(int);

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    amplify(number);
}

void amplify(int number)
{
    for(int i = 1; i <= number; i++)
    {
        if(i%4 == 0)
        {
            cout << i*10 << endl;
        }
        else
        {
        cout << i << endl;
        }
    }
}