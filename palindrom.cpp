#include <iostream>
#include <string>
using namespace std;

int main()
{
    string m;
    cin >> m;
    if (m.length()==1)
        cout << "TAK";
    else
        {while (m.length()>1)
            {if (m.front() == m.back())
                {m.erase(0,1);
                m.erase(m.length()-1,1);
                if (m.length()==1 || m.length()==0 || m.length()==-1)
                    {cout << "TAK";
                    break;}}
            else
            {cout << "NIE";
            break;}}}
    return 0;
}