/*
Oskar Jasłowski
Szkopul - Na przemian
*/
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n,b=0,y=0;
    cin >> n;
    int z[n/2 + 1], a[n/2];

    for (int i=0; i<n; i++)
        if (i%2==0||i==0)
        {
            cin >> z[b];
            b++;
        }
        else 
        {
            cin >> a[y];
            y++;
        }

    if (n%2==0)
    {   
        for (int i=0; i<n/2; i++)
            cout << z[i] << ' ';
    }
    else
    {
        for (int i=0; i<n/2+1; i++)
            cout << z[i] << ' ';
    }

    cout << endl;
    for (int i=0; i<n/2; i++)
        cout << a[i] << ' ';

    return 0;
}