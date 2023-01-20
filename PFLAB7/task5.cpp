#include <iostream>

using namespace std;

int sumDigit(int number);

int main()
{
    int number, result;
    cout << "Enter the number : ";
    cin >> number;
    result = sumDigit(number);
    cout << result;
}

int sumDigit(int number)
{
    int sum = 0;
    while(number>0)
    {
        sum = sum + (number%10);
        number = number / 10;
    }
    return sum;
}