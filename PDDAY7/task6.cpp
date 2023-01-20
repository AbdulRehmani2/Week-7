 #include <iostream>

using namespace std;

int main()
{
    int days, patient, treated = 0, untreated = 0, doctor = 7;
    cout << "Enter the days : ";
    cin >> days;
    for(int i = 1; i <= days; i++)
    {
        cout << "Enter the patients : ";
        cin >> patient;
        if(i%3 == 0)
        {
            if(untreated > treated)
            {
                doctor++;
            }
        }
        for(int j = 1; j <= patient; j++)
        {
            if(j <= doctor)
            {
                treated++;
            }
            else
            {
                untreated++;
            } 
        }
    }
    cout << "Treated Patients : " << treated << endl << "Untreated Patients : " << untreated;
}