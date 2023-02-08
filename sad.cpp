/*
Oskar Jasłowski
Szkopul - Sad
*/
#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    int x[n], y[n];
    int minx, maxx, miny, maxy;
    for (int i = 0; i<n; i++)
    {
        cin >> x[i] >> y[i];
        if (i == 0)
        {
            minx =x[i];
            maxx =x[i];
            miny =y[i];
            maxy =y[i];
        }

        if (minx>x[i])
            minx = x[i];
        if (maxx<x[i])
            maxx = x[i];
        if (miny>y[i])
            miny = y[i];
        if (maxy<y[i])
            maxy = y[i];
    }

    cout << (maxx-minx)*2 + (maxy-miny)*2;

    return 0;
}