#include<iostream>
#include<time.h>
#include<stdlib.h>


/*
Scrivere un programma C per registrare i dati di un concorso pubblico con tre prove: scritto, orale pratico. Occorre conoscere per un concorrente: 

> il punteggio assegnato nelle singole prove
> il tempo impiegato nella prova pratica dove viene usato un particolare attrezzo
> il punteggio totale. 

Il concorso è superato se:
> il punteggio totale è almeno 60
> in ciascuna prova è stato riportato almeno 18 come punteggio. 

Inoltre al candidato viene assegnato un bonus di 5 punti se nella prova orale è stato riportato 30 oppure l'attrezzo è stato adoperato per non più di 10 minuti. 

Ci sono N concorrenti. Determinare:
1. quanti concorrenti hanno superato il concorso
2. il punteggio medio nella prova scritta
*/

using namespace std;
int main(){
	
	int provaorale,provascritta,provapratica,tempo,attrezzo,totale,ncandidati,i;	

  int vincitori = 0;
  int somma_punteggio = 0;

  //chiediamo al concorrente tutto ciò che ci serve
  cout<<"Quanti concorrenti ci sono ?"<<endl;
  cin>>ncandidati;

  for(int i=0;i<ncandidati;i++){
    // chiediamo informazioni sulla prova orale
    cout<<"Inserisci il punteggio che hai avuto nella prova orale"<<endl;
    cin>>provaorale;

    // chiediamo informazioni sulla prova pratica
    cout<<"Inserisci il punteggio che hai avuto nella prova scritta"<<endl;
    cin>>provascritta;
    somma_punteggio = somma_punteggio + provascritta;
  
    // chiediamo informazioni sulla prova scritta
    cout<<"Inserisci il punteggio che hai avuto nella prova pratica"<<endl;
    cin>>provapratica;
    cout<<"Inserisci il tempo che hai impiegato"<<endl;
    cin>>tempo;
    totale= provascritta+provaorale+provapratica;
  
    // se il concorrente ha preso 30 all'orale => 5 bonus
    if (provaorale==30){		
    	cout<<"5 punti di bonus"<<endl;
    	totale= totale+5;
    }
  
    // meno di 10 minuti => 5 bonus
    if (tempo<=10){
    	cout<<"5 punti di bonus"<<endl;
    	totale=totale+5;
    }
  
    // concorrente vincitore
    if((totale>=60)&&(provascritta>=18)&&(provaorale>=18)&&(provapratica>=18)){
    	cout<<"Hai superato il concorso"<<endl;		
      vincitori = vincitori + 1;
    }
    
    else{
    	cout<<"Non hai superato il concorso"<<endl;
    }
  
    cout<<totale<<endl<<endl;
  }

  float media = (float)somma_punteggio / (float) ncandidati;
  cout<<"hanno passato il concorso "<< vincitori << " persone"<<endl;
  cout<<"la media alla prova scritta e' "<< media <<endl;
}