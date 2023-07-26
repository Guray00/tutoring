#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;
    cout << "Inserisci il primo numero: " << endl;
    cin >> n1;
    cout << "Inserisci il secondo numero: " << endl;
    cin >> n2;
    cout << "Inserisci il terzo numero: " << endl;
    cin >> n3;
    if (n1 > n2) {
        if (n1 > n3) {
            cout << "Il più grande è: " << n1 << endl;
        } else {
            cout << "Il più grande è: " << n3 << endl;
        }
    } else {
        if (n2 > n3) {
            cout << "Il più grande è: " << n2 << endl;
        } else {
            cout << "Il più grande è: " << n3 << endl;
        }
    }
  
    return 0;
}