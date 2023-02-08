/*
Oskar Jasłowski
Szkopul - Prostopadloscian
*/
#include <iostream>
#include <cstdio>

using namespace std;

int pole(int a, int b, int c)
{
    return a*b*c;
}

int objetosc(int a, int b, int c)
{
    return 2*(a*b)+2*(a*c)+2*(c*b);
}

int main()
{
    ios::sync_with_stdio(false);
    int a,b,c;
    cin >> a >> b >> c;
    cout << pole(a,b,c) << endl << objetosc(a,b,c);

    return 0;
}