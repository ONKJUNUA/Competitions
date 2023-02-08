#include <iostream>
using namespace std;
 
int main()
{
  bool jest=false;
  int n,m;
  cin >> n;
  while (n!=0)
  {
    m=n%10;
    if (m==1) jest=true;
    n/=10;
  }
  if (jest==true) cout << "TAK";
  else cout << "NIE";
  return 0;
}

/*int n,c=0,w=0;
  cin >> n;
  bool tab[n];
  for (int i=0;i<n;i++)
  {
    cin >> tab[i];
    if (tab[i]==1 && c==1 && i!=1)
      w++;
    if (tab[i]==1) 
      {w++;  
      c=0;}
    else if (tab[i]==0) 
      {c++;
      cout << c << " ";}
  }
  cout << endl << w;

int n,max,tmp=0;
  cin >> n;
  int tab[n];
  for (int i=0;i<n;i++)
    cin >> tab[i];

  max=tab[0];
  for (int i=0;i<n;i++)
    if (tab[i]>max)
      {max=tab[i];
      tmp=i;}
  
  tab[tmp]=tab[n-1];
  tab[n-1]=max;

  for (int i=0;i<n;i++)
    cout << tab[i] << " ";
int n,c=0,w=0;
  cin >> n;
  int tab[n];
  for (int i=0;i<n;i++)
  {
    cin >> tab[i];
    if (tab[i]==1 && c==1 && i!=1)
      w++;
    if (tab[i]==1) 
      {w++;  
      c=0;}
    else if (tab[i]==0) 
      {c++;}
  }
  cout << w;*/