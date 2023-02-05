#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int h = n;
    int h1 = n;

    for (int i=0;i<n;i++)
    {
        for (int j=0;j<2*n+1;j++)
        {
            if (j>h)
                cout << " ";
            else if (j<h1)
                cout << " ";
            else cout << "*";  
        }
        h++;
        h1--;
        cout << "\n";
    }

    h = n;
    h1 = n;
    for (int i=0;i<n+1;i++)
    {
        for (int j=0;j<2*n+1;j++)
        {
            if (j>h)
                cout << " ";
            else if (j<h1)
                cout << " ";
            else cout << "*";  
        }
        h++;
        h1--;
        cout << "\n";
    }
    return 0;
}