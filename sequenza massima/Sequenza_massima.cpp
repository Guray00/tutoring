#include <iostream>
using namespace std;

int main(){
    int num, len, val, somma, sommax, max;

    cout << "Inserire il numero di sequenze: ";
    cin >> num;

    // Viene chiesta la quantità di valori presenti in ogni sequenza
    for(int i=1; i<=num; i++){
        cout << "Inserire la lunghezza della sequenza: ";
        cin >> len;
        somma = 0;

        // Vengono chiesti i valori della sequenza
        for(int j=0; j<len; j++){
            cout << "Inserire valore: ";
            cin >> val;
            // Si calcola la somma dei valori
            somma = somma + val;
        }

        // Si chiede se la somma della sequenza attuale è più grande della somma maggiore
        if(i==1 || somma>sommax){
            // La somma maggiore diventa quella attuale
            sommax = somma;
            // Viene salvato in max il numero della sequenza
            max = i;
        }
    }

    cout << "La sequenza con la somma massima è la ";
    cout << max;
}