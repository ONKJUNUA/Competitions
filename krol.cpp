/*
Oskar Jasłowski
Szkopul - Krol
*/
#include <iostream>

using namespace std;

int main(){
    char k;
    int w, l;
    cin >> k >> w;

    if ((k == 'a' && w == 1) || (k == 'a' && w == 8) || (k == 'h' && w == 1) || (k == 'h' && w == 8))
        l = 3;
    else if ((k == 'a' || k == 'h') || (w == 1 || w == 8))
        l = 5;
    else l = 8;

    cout << l;
    return 0;
}