#include <iostream>
using namespace std;

int main()
{
    int k,n=-50;
    cin >> k;
    int tab[k];
    for(int i=0;i<k;i++)
    {
        cin >> tab[i];
        if (tab[i]>n)
            n=tab[i];
    }
    cout << n;
    return 0;
}