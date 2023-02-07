#include <iostream>

using namespace std;

int main() {
    int n,m,m2,a=0,b=0,x=0,y=0,sum;
    cin >> n;
    int tab[n][n];

    for (int i=0;i<n;i++)
        {for (int j=0;j<n;j++)
            {cin >> tab[i][j];
            if (i==0 && j==0)
                m=tab[i][j];
            if (m<tab[i][j])
                m=tab[i][j];}}
    m2=m;

    while(x<n)
        {for (int i=x;i<n-a;i++)
            {for (int j=y;j<n-b;j++)
                {sum+=tab[i][j];}}
            if (sum>m) m=sum;
            sum=0;
            b++;
            if (b>n) {b=0; y++; if (y>n) {y=0; a++; if (a>n) {a=0; x++;}}}}

    if (m!=0) cout << m;
    else cout << m2;
	return 0;}