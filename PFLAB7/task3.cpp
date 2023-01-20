#include <iostream>

using namespace std;

int totalDigits(int);

int main()
{
    int number;
    int result;
    cout << "Enter the number : ";
    cin >> number;
    result = totalDigits(number);
    cout << result;
}

int totalDigits(int number)
{
    int number1 = 0;
    while(number > 0)
    {
        number = number / 10;
        number1++;
    }
    return number1;
}