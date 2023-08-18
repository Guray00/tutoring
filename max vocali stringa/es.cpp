#include <iostream>
using namespace std;

// do in input un carattere e controlla se è una vocale
bool isVocale(char c){
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'){
    return true;
  }

  else {
    return false;
  }
}

int main(){

  // creiamo la stringa
  char stringa[100];
  int i, conta, massimo;

  // chiediamo in input 
  cout<<"Inserisci una frase"<<endl;

  // prendiamo in ingresso una frase
  cin.getline(stringa,100);

  // "ciao mondo bello\0"

  i = 0;
  massimo = 0;
  conta = 0;
  
  // fino a quando non trovo \0, continuo a cercare
  while(stringa[i] != '\0'){

    // se è una vocale
    if(isVocale(stringa[i])){
      // conto che ho trovato una vocale
      conta=conta+1;
    }
      
    // altrimenti, se la parola è finita
    else if(stringa[i]==' ') {
    
      // aggiorno e controllo il massimo
      if(conta>massimo) {
        massimo = conta;
      }
      
      // rinizio a contare da zero
      conta=0;
    }

    // mandiamo avanti la lettera
    i++;
  }

  cout<<"La parola che ha più vocali contiene "<<massimo<<" vocali";
  
	return 0;
}