#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int a = 1;
    int b = 1;
    float somma = 0;
    cin >> n;

    if(n >= 1) {
        cout << "1" << endl;
        cout << "1" << endl;
        for ( int i=0; n >= (somma+a) and n!=1; i++) {
            somma = a+b;
            cout << somma << endl;
            a = b;
            b = somma;
        }
    } else {
            cout << "errore" << endl;
        }
    return 0;
}
