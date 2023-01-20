#include <iostream>

using namespace std;

void percentage(int);

int main()
{
    int number;
    cout << "Enter a number : ";
    cin >> number;
    percentage(number);
}

void percentage(int number)
{
    int number1;
    float p1 = 0;
    float p2 = 0;
    float p3 = 0;
    float p4 = 0;
    float p5 = 0;
    for(int i = 0; i < number; i++)
    {
        cout << "Enter the number : ";
        cin >> number1;
        if(number1 < 200)
        {
            p1++;
        } 
        else if(number1 >= 200 && number1 < 400)
        {
            p2++;
        }
        else if(number1 >= 400 && number1 < 600)
        {
            p3++;
        }
        else if(number1 >= 600 && number1 < 800)
        {
            p4++;
        }
        else if(number1 >= 800 && number1 < 1000)
        {
            p5++;
        }
    }
    p1 = p1 * 100 / number;
    p2 = p2 * 100 / number;
    p3 = p3 * 100 / number;
    p4 = p4 * 100 / number;
    p5 = p5 * 100 / number;
    cout << p1 << endl << p2 << endl << p3 << endl << p4 << endl << p5;

}