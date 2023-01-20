#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    int number2= 1;
    int number;
    int result;
    cout << "Enter the number : ";
    cin >> number;
    cout << number1 << endl;
    if(number >= 2)
    {
    cout << number2 << endl;
    }
    for(int i = 1; i <= number-2; i++)
    {
        result = number1 + number2;
        number1 = number2;
        number2 = result;
        cout << result << endl;
    }

}