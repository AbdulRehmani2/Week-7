#include <iostream>

using namespace std;

int main()
{
    int count;
    int number;
    float p1 = 0, p2 = 0, p3 = 0;
    cout << "Enter the no of numbers : ";
    cin >> count;
    for(int i = 1; i <= count; i++)
    {
        cout << "Enter the number : ";
        cin >> number;
        if(number % 2 == 0)
        {
            p1++;
        } 
        if(number % 3 == 0)
        {
            p2++;
        }
        if(number % 4 == 0)
        {
            p3++;
        }
    }
    p1 = p1 * 100 / count;
    p2 = p2 * 100 / count;
    p3 = p3 * 100 / count;
    cout << p1 << endl << p2 << endl << p3;
}