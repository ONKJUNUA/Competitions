#include <iostream>
using namespace std;

int main()
{
    int m;
    cin >> m;
    if (m==1)
        cout<<"NIE\n";
    else if (m==2)
        cout<<"TAK\n";
    else
        {for (int i=2;i<m;i++)
            if (m%i==0)
                {cout<<"NIE\n";
                break;}
            else if (i==m-1)
                {cout<<"TAK\n";
                break;}}
    return 0;
}