#include <iostream>
#include <cmath>

using namespace std;

double round(double);

int main()
{
    int cargo;
    int ton;
    int mini = 0, truck = 0, train = 0, total;
    double average, miniPercent, truckPercent, trainPercent;
    cout << "Enter the cargo : ";
    cin >> cargo;
    for(int i = 1; i <= cargo; i++)
    {
        cout << "Enter the weight : ";
        cin >> ton;
        if(ton <= 3)
        {
            mini = mini + ton;
        }
        else if (ton > 3 && ton <= 11)
        {
            truck = truck + ton;
        }
        else if(ton > 11)
        {
            train = train + ton;
        }
    }
    total = mini + train + truck;
    miniPercent = (double) mini * 100 / total;
    truckPercent = (double) truck * 100 / total;
    trainPercent = (double) train * 100 / total;
    average = (mini * 200) + (truck * 175) + (train * 120);
    average = average / total;
    miniPercent = round(miniPercent);
    cout << miniPercent;
    truckPercent = round(truckPercent);
    trainPercent = round(trainPercent);
    average = round(average);
    cout << "Average price per tonne is : " << average << endl;
    cout << "Percent by minibus is : " << miniPercent << endl;
    cout << "Percent by truck is : " << truckPercent << endl;
    cout << "Percent by train is : " << trainPercent << endl;
}

double round(double number)
{
    number = number * 100;
    number = ceil(number);
    number = number / 100;
    return number;
}