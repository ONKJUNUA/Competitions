#include <iostream>
#include <string>
using namespace std;

int main()
{
    string n,m;
    int max=0,ob=0,a,b;
    cin >> n >> m;
    for (int i=0;i<n.length();i++)
        {for(int j=0;j<m.length();j++)
            {a=i;
            b=j;
            while(n.at(a)==m.at(b))
                {if(a<n.length()-1 && b<m.length()-1)
                    {a++;
                    b++;
                    ob++;}
                else if(a==n.length()-1 || b==m.length()-1)
                    {ob++;
                    break;}
                else
                    break;}
            if (ob>max)
                {max=ob;}
            ob=0;}}
    cout << max;
    return 0;
}