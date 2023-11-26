#include <iostream>
#include <ctime>
using namespace std;

int main(){
  int punteggio_computer  = 0; 
  int punteggio_giocatore = 0; 

  srand(time(NULL));

  // il gioco continua fino a quando
  // uno dei due non raggiunge 5 vittorie
  while(punteggio_giocatore < 5 && punteggio_computer < 5){
    char mossa;

    // finchè metto un valore sbagliato, ti chiedo
    // di rensirlo in modo corretto
    do{
      cout<< "Scegli una mossa [s, c, f]: ";
      cin >> mossa;
      
      // informo l'utente se sbaglia
      if(mossa != 's' && mossa != 'c' && mossa != 'f'){
        cout << "Errore! Puoi inserire solo s/c/f" <<endl<<endl; 
      }
    } while(mossa != 's' && mossa != 'c' && mossa != 'f');

    // la scelta della mossa è stata effettuata correttamente
    int casuale = rand()%3; // numero da 0 a 3

    // 0 => sasso 1=> carta 2 => forbici
    switch(casuale){
      // computer ha scelto sasso
      case 0:
        cout<< "Il computer ha scelto sasso: ";
        
        if(mossa == 'c'){
          cout<< "hai vinto il turno!";
          punteggio_giocatore++;  
        } else if(mossa == 'f'){
          cout<< "hai perso il turno...";
          punteggio_computer++;
        }else {
          cout<< "hai pareggiato. ";
          
        }
        
        break;

      // computer ha scelto carta
      case 1:
        cout<< "Il computer ha scelto carta: ";
        
        if(mossa == 'f'){
          cout<< "hai vinto il turno!";
          punteggio_giocatore++;  
        } else if(mossa == 's'){
          cout<< "hai perso il turno...";
          punteggio_computer++;
        }else {
          cout<< "hai pareggiato. ";
        }
        break;

      // computer ha scelto forbici
      case 2:
        cout<< "Il computer ha scelto forbici: ";

        if(mossa == 's'){
          cout<< "hai vinto il turno!";
          punteggio_giocatore++;  
        } else if(mossa == 'c'){
          cout<< "hai perso il turno...";
          punteggio_computer++;
        }else {
          cout<< "hai pareggiato. ";
        }
        break;
    }

    cout <<endl<< "Giocatore: "<<punteggio_giocatore << " computer: "<< punteggio_computer <<endl<<endl;
  }
  
  // la partita è finita
  // se il giocatore ha il punteggio più alto
  cout<<"Punteggio giocatore: "<<punteggio_giocatore<<endl;
  cout<<"Punteggio computer:  "<<punteggio_computer<<endl;
  if(punteggio_giocatore > punteggio_computer){
    cout << "Hai vinto!"<<endl;
  }
  else {
    cout << "Hai perso..."<<endl;
  }
  
  return 0;
}