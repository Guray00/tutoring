#include <iostream>
#include <time.h>
#include <stdlib.h>
using namespace std;

/*
Esercizio: inserire 3 numeri interi da 2 a 10. 
Se i valori sono uguali visualizza "tris"; se solo due di 
essi sono uguali visualizza "coppia".
*/

// fare questo esercizio uguale, ma invece di uscire quando un
// numero è sbagliato, richiederlo fino a quando è giusto (CICLO)

int main(){
  int a,b,c;
  
  // chiediamo 3 numeri al nostro utente
  cout<<"Inserisci tre numeri"<<endl;
  cin>>a>>b>>c;

  // se siamo in "..." allora esci (return 0;)
  if(a<2 || a > 10){
    // fa uscire dal programma
    cout<<"Hai sbagliato a inserire"<<endl;
    return 0;
  }
    
  else if (b < 2 || b > 10){
    cout<<"Hai sbagliato a inserire"<<endl;
    return 0;
  }
    
  else if (c < 2 || c > 10){
    cout<<"Hai sbagliato a inserire"<<endl;
    return 0;
  }

  /* metodo veloce per uscire
  if((a<2 || a > 10) || (b < 2 || b > 10) || (c < 2 || c > 10)){
    cout<<"Hai sbagliato a inserire"<<endl;
    return 0;
  }*/


  // verificare se sono uguali tutti e 3 i numeri, oppure
  // se esiste una qualche coppia che è uguale
  
  // caso in cui troviamo un tris
  if((a == b) && (b == c)){
    cout<<"Tris"<<endl;
  }

  // condizioni per trovare una coppia
  else if ((a == b) && (b != c)){
    cout<<"Coppia"<<endl;
  }

  // condizioni per trovare una coppia
  else if ((a != b) && (a == c)){
    cout<<"Coppia"<<endl;
  }

  // condizioni per trovare una coppia
  else if ((a != c) && (b == c)){
    cout<<"Coppia"<<endl;
  }

  // in tutti gli altri casi, quindi non abbiamo trovato
  // ne coppie ne tris
  else {
    cout<<"Non ci sono ne tris ne coppie";
  }
  

  // dati i numeri: a, b, c
  // (a == b) && (b == c) -> tris
  // (a == b) && (b != c) -> coppia
  // (a != b) && (a == c) -> coppia
  // (a != c) && (b == c) -> coppia
  
	return 0;

}

  /*  AND &&
      cond1    cond2   risultato
      vero     vero    vero
      falso    falso   falso
      vero     falso   falso
      falso    vero    falso


      OR ||
      cond1    cond2   risultato
      vero     vero    vero
      vero     falso   vero
      falso    vero    vero
      falso    falso   falso
  */