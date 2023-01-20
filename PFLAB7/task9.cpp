#include <iostream>

using namespace std;

float calcMoney(int);

int main()
{
    float money;
    int year;
    float result;

    cout << "Enter the money : ";
    cin >> money;
    cout << "Enter the year : ";
    cin >> year;

    result = calcMoney(year);
    if(money > result)
    {
        cout << "Yes, he will live a carefree life and have " << money-result << " dollars left";
    }
    else
    {
        cout << "He will need " << result-money << " dollars to survive";
    }
}

float calcMoney(int year)
{
    float expense;
    int even = 0;
    int odd1 = 0;
    int odd2 = 0;
    for (int i = 1800; i <= year; i++)
    {
        if(i%2 == 0)
        {
            even++;
        }
        else
        {
            odd1++;
            odd2 = odd2 + 50*(i+18-1800);
        }
    }
    even = 12000 * even;
    odd1 = odd1 * 12000;
    odd1 = odd2 + odd1;
    expense = even + odd1;
    return expense;
}