/*
Oskar Jasłowski
Szkopul - Pole trojkata
*/
#include <iostream>
#include <math.h>
#include <iomanip>
#include <cstdio>

using namespace std;

double poleTrojkata(double a, double b, double c)
{
    double s = (a+b+c)/2, pole = sqrt(s*(s-a)*(s-b)*(s-c));
    return pole;
}

int main()
{
    ios::sync_with_stdio(false);
    double x,y,z;
    cin >> x >> y >> z;
    double wynik = poleTrojkata(x,y,z);
    cout << fixed << setprecision(3) << wynik;
    return 0;
}