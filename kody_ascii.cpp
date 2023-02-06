#include <iostream>
using namespace std;

int main()
{
    int n,m,c=0;
    cin >> n >> m;
    int tab[n];
    
    for(int i=n;i<m+1;i++)
    {
        cout << i << " - " << char(i);
        if (c==2)
        {
            cout << endl;
            c=0;
        }    
        else
        {
            cout << "\t\t";
            c++;
        }
    }
            
    return 0;
}