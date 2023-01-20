#include <iostream>

using namespace std;

int calGCD(int, int);
int calLCM(int, int, int);

int main()
{
    int number1, number2, result1, result2;
    cout << "Enter the first number : ";
    cin >> number1;
    cout << "Enter the second number : ";
    cin >> number2;
    result1 = calGCD(number1, number2);
    result2 = calLCM(number1, number2, result1);
    cout << result1 << endl << result2;
}

int calGCD(int number1, int number2)
{
    int result;
    int loop;
    if(number1 > number2)
    {
        loop = number1;
    }
    else
    {
        loop = number2;
    }
    for(int i = 1; i <= loop; i++)
    {
        if(number1%i == 0 && number2%i == 0)
        {
            result = i;
        }
    }
    return result;
}

int calLCM(int number1, int number2, int gcd)
{
    int result = (number1 * number2) / gcd;
}