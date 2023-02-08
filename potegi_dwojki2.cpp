#include <iostream>

using namespace std;

int main()
{
    long long n,a=1;
    cin >> n;
    if (n==0) n=1;
    else if (n%4==1||n==1) n=2;
    else if (n%4==2||n==2) n=4;
    else if (n%4==3||n==3) n=8;
    else if (n%4==0||n==4) n=6;
    cout << n;
    return 0;
}