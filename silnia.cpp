#include <iostream>

using namespace std;

int main()
{
    int n,silnia=1;
    cin >> n;
    for(int i=n;i>0;i--)
        silnia*=i;

    cout << silnia;
    return 0;
}