#include <iostream>
using namespace std;

int main() {

    int n,x,a=-1,b=-1,g=0;
    cin >> n >> x;
    int tab[n];
    for(int i=0;i<n;i++)
        {cin >> tab[i];
        if (tab[i]==x && g==0)
            {a=i+1;
            g++;}
        else if (tab[i]==x)
            b=i+1;
        else if (a!=-1 && b==-1)
            b=a;}
    cout << a << " " << b;
    return 0;
}