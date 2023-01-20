#include <iostream>

using namespace std;

float calcPrice(int, float, int);

int main()
{
    int age;
    float price;
    int unitPrice;
    float total;

    cout << "Enter the age : ";
    cin >> age;
    cout << "Enter the price of washing machine : ";
    cin >> price;
    cout << "Enter the unit price of toy : ";
    cin >> unitPrice;

    total = calcPrice(age, price, unitPrice);
    if(total >= price)
    {
        cout << "Yes!" << total-price;
    }
    else
    {
        cout << "No!" << price - total;
    }

}

float calcPrice(int age, float price, int unitPrice)
{
    int even = 0;
    int odd = 0;
    int sum = 0;
    float total;
    
    for(int i = 1; i <= age; i++)
    {
        if(i % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    for(int i = 1; i <= even; i++)
    {
        sum = (10*i) + sum;
    }
    odd = odd * unitPrice;
    sum = sum - even;
    total = odd + sum;
    return total;
    
}