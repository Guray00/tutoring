/*

se il numero di iscritti è maggiore a 25, formare una classe

se invece rimangono 15 alunni in più viene fatta una classe, sennò vengono
divisi in una classe
*/

#include <iostream>
using namespace std;


main(){
    unsigned int a, i, nc, n;
    cout<<"programa per la suddivisione degli studenti in classi\n";
    cout<<"inserire numero degli iscritti di una scuola\n";
    cin>>i;

    nc = i/25;

    int rimasti = i - nc*25;

    // se sono rimasti meno di 15, li divido
    if(rimasti < 15){
       cout<<"abbiamo messo in media per classe "  << (double) rimasti/nc << " studenti"<<endl;
    }

    // altrimenti creo una classe
    else {
        nc = nc + 1;
    }


    cout<< "Il numero di classi sono: "<< nc<<endl;

    // 1713 alunni
    // nc prende 68

    // 68*25

}
