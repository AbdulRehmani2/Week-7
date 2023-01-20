#include <iostream>

using namespace std;

int noOfDots(int);

int main()
{
    int number, result;
    cout << "Enter the no. of sequence : ";
    cin >> number;
    result = noOfDots(number);
    cout << result;
}

int noOfDots(int number)
{
    int result = 0;
    for(int i = 1; i <= number; i++)
    {
        result = result + i;
    }
    return result;
}