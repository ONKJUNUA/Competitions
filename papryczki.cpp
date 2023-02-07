#include <iostream>
using namespace std;

int main()
{
    int k,n=0;
    cin >> k;
    int p[k+1], l[]={1,2,4,8,16,32,64,128,256,512,1024};

    for(int i=0;i<k+1;i++){
        cin >> p[i];
        n+=p[i]*l[i];
    }
    cout << n+1;
    return 0;
}