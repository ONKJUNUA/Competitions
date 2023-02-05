#include <iostream>
using namespace std;

int main() {

    long long liczba, sum=0;
    cin >> liczba;
    string wynik;
    string suma;

    if (liczba!=0)
        {while(liczba){

            if (liczba%2)
                {wynik = "1" + wynik;
                sum++;}
            else 
                wynik = "0" + wynik;

            liczba /= 2;
        }

        while(sum){
            suma = (sum%2?"1":"0") + suma;
            sum /= 2;
        }
        cout << wynik << " " << suma;}
    
    else cout << 0 << " " << 0;;
    return 0;
}