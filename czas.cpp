/*
Oskar Jasłowski
Szkopul - Czas
*/
#include <iostream>

using namespace std;

int main(){
    int C, g, m, s;
    cin >> C;
    g = C / 3600;
    m = (C - g * 3600) / 60;
    s = (C - g * 3600) - m * 60;
    cout << g << "g" << m << "m" << s << "s";
    return 0;
}