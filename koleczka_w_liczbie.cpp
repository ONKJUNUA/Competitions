#include <iostream>
using namespace std;

int main()
{
    unsigned long long n,m;
    int a=0;
    cin >> n;
    m=n;
    while (n!=0)
    {   
        if(n%10==8)
            a+=2;
        if(n%10==6||n%10==9||n%10==0)
            a++;
        n/=10;
    }
    if (m==0)
        a++;
    cout << a;
    return 0;
}