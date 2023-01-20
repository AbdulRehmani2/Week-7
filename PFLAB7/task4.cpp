#include <iostream>

using namespace std;

int countDigit(int, int);

int main()
{
    int number1, digit, result;
    cout << "Enter the number : ";
    cin >> number1;
    cout << "Enter the digit : ";
    cin >> digit;
    result = countDigit(number1, digit);
    cout << result;
}

countDigit(int number, int digit)
{
    int count = 0;
    while(number > 0)
    {
        if(number % 10 == digit)
        {
            count++;
        }
        number = number / 10;
    }
    return count;
}