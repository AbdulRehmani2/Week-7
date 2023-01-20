#include <iostream>

using namespace std;

void printTable(int);

int main()
{
    int table;
    cout << "Enter a number : ";
    cin >> table;
    printTable(table);
}

void printTable(int number)
{
    for(int i = 1; i <= 10; i++)
    {
        cout << number << " x " << i << " = " <<  number * i << endl;
    }
}