#include <iostream>

using namespace std;

int main()
{
    int number, prime = 0;
    cout << "Enter the number : ";
    cin >> number;
    for(int i = 2; i <= number/2; i++)
    {
        if(number % i == 0)
        {
            prime = 1;
        }
    }
    if(prime == 1)
    {
        cout << "The number is not a prime number.";
    }
    else
    {
        cout << "The number is a prime number.";
    }
}