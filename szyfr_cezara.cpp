/*
Oskar Jasłowski
Szkopul - Szyfr Cezara
*/
#include<iostream>
#include <cstdio>

using namespace std;

int sprawdz(char lit)
{
	if(lit >= 'a' && lit <= 'z') return 0;
	if(lit >= 'A' && lit <= 'Z') return 1;
	return 2;
}

void szyfr(int wybor, int k, string &tekst)
{		
	if(!(k >= 0 && k <= 26)) return;
	
	int spr;
	char a, z;
	
	for(int i = 0; i < tekst.size(); i++)
	{
		spr = sprawdz(tekst[i]);
		if (spr < 2)
		{
            if(spr == 0) 
				a = 'a', z = 'z';
			else if (spr == 1)
				a = 'A', z = 'Z';
	
			if(wybor == 1)
				if(tekst[i] + k <= z)
					tekst[i] += k;
				else
					tekst[i] = tekst[i] + k - 26; 
			else
				if(tekst[i] - k >= a)
					tekst[i] -= k;
				else
					tekst[i] = tekst[i] - k + 26;
        }
	}
}

int main()
{
    ios::sync_with_stdio(false);
	
    int wybor, k;
    string tekst;

    cin >> wybor >> k >> tekst;
	szyfr(wybor,k,tekst);
	cout << tekst << endl;

	return 0;
}