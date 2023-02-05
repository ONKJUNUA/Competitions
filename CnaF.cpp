#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float C;
    cin >> C;
    cout << setprecision( 1 ) << fixed;
    cout << ((C*9)/5)+32;
    return 0;
}