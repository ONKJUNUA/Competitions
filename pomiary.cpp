#include <iostream>

using namespace std;

int main()
{
    int n,s=0,w=0;
    while(n>=0){
        cin >> n;
        if (s!=n && n!=-1)
            w++;
        s=n;}
    cout << w;
    return 0;
}