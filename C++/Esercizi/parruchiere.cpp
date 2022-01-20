#include <iostream>
using namespace std;

/*
In un centro parrucchiere si forniscono servizi a N clienti in un giorno. Ogni cliente sceglie più trattamenti: 
> shampoo, messa in piega, taglio, colore, trattamento lisciante, maschera. 

Il servizio prevede almeno lo shampoo e la messa in piega, tutti gli altri trattamenti sono facoltativi. 

Ogni trattamento ha un costo che viene fissato da un listino prezzi valido per tutti i clienti. Il servizio prevede un sovrapprezzo variabile tra un minimo del 1% e un massimo del 20% a seconda la lunghezza dei capelli. 

Calcolare per ogni cliente il prezzo da pagare e il totale incassato durante la giornata. (facoltativo: un cliente se esibisce la carta fedeltà ha diritto a uno sconto del 5%; contare quanti tagli si sono effettuati durante la giornata)
*/

int main(){

  int nclienti;
  
  cout<<"Quanti clienti sono entrati?"<<endl;
  cin>>nclienti;

  int shampoo      = 3;
  int piega        = 10;
  
  int taglio       = 10;
  int colore       = 10;
  int trattamento  = 10;
  int maschera     = 10;
  
  for (int i=0; i < nclienti; i++){

    int risposta;
    int lunghezza;
    
    // totale per singolo cliente (di partenza)
    float totale = shampoo + piega;

    cout << "quanto sono lunghi i capelli?"<<endl;
    cin>>lunghezza;
    
    cout << "Vuoi fare un taglio? 0 => no, 1 => si"<<endl;
    cin >> risposta;
    if(risposta == 1){
      totale = totale + taglio;
    }

    cout << "Vuoi fare un colore? 0 => no, 1 => si"<<endl;
    cin >> risposta;
    if(risposta == 1){
      totale = totale + colore;
    }

    cout << "Vuoi fare un trattamento? 0 => no, 1 => si"<<endl;
    cin >> risposta;
    if(risposta == 1){
      totale = totale + trattamento;
    }

    cout << "Vuoi fare un maschera? 0 => no, 1 => si"<<endl;
    cin >> risposta;
    if(risposta == 1){
      totale = totale + maschera;
    }

    // calcolo della percentuale
    totale = totale + (float)(totale*lunghezza)/100.0;
  }

  
	return 0;

}