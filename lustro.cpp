#include <iostream>

using namespace std;

int main()
{
    int n,o=0;
    cin >> n;
    while(n) {
        o=o*10+n%10;
        n/=10;}
    cout<<o;
    return 0;
}