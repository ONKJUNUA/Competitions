#include<iostream>

using namespace std;

int main()
{
	int a[3];
    cin >> a[0] >> a[1] >> a[2];
    for(int i=0;i<3;i++)
        cout << a[i] << ' ';
    cout << endl;
    for(int i=2;i>=0;i--)
        cout << a[i] << ' ';
	return 0;
}