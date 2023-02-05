#include <iostream>
using namespace std;

int main()
{
    int n,x,y,p=0;
    cin >> n;
    int tab[n][4];
    for(int i=0;i<n;i++)
        for(int j=0;j<4;j++)
            cin >> tab[i][j];
    cin >> x >> y;
    for(int i=0;i<n;i++)
        if(x>=tab[i][0] && x<=tab[i][2] && y>=tab[i][1] && y<=tab[i][3])
            p=i+1;
    cout << p;
    return 0;
}