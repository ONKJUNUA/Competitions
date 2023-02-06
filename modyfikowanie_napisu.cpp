#include <iostream>
#include <string>
#include <cstddef>
using namespace std;

int main()
{
    string napis,a,c;
    char funkcja='A',b;
    int liczba;
    cin>>napis;
    while (funkcja!='N')
        {cin>>funkcja;
        if (funkcja=='Z')
            {cin>>a>>b;
            size_t found = napis.find_first_of(a);
            while (found!=string::npos)
                {napis[found]=b;
                found=napis.find_first_of(a,found+1);}}
        if (funkcja=='D')
            {cin>>c;
            napis.append(c);}
        if (funkcja=='U')
            {cin >> liczba;
            for (int i=1;i<=liczba;i++)
                napis.pop_back();}}
    cout<<napis;
    return 0;
}