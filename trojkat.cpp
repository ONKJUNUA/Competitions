#include <iostream>
using namespace std;
 
int main()
{
    unsigned a,b,c;
    cin>>a>>b>>c;
    if(a+b<=c||a+c<=b||b+c<=a) cout<<"NIE";
    else cout<<"TAK";
    return 0;
}