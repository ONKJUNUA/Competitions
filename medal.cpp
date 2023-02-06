#include <iostream>

using namespace std;

int main()
{
    int n,b=-1,a=0;
    cin >> n;
    string imie[n];
    int zadania[n];
    string zwyciezcy[n];

    for(int i=0;i<n;i++)
        cin >> imie[i] >> zadania[i];

    for(int i=0;i<n;i++)
    {    
        if(zadania[i]==b)
        {
            a++;
            zwyciezcy[a]=imie[i];
        }
        if(zadania[i]>b)
        {
            b=zadania[i];
            a=0;
            zwyciezcy[a]=imie[i];
        }
    }
    for(int i=0;i<a+1;i++)
        cout << zwyciezcy[i] << endl;
    return 0;
}