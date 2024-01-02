#include <iostream>
#include <string>
using namespace std;

int main(){
  string str;
  int conta = 0;
  
  cout<<"inserisci una stringa: ";
  getline(cin, str);
 
  // all'inizio do per scontato che cercando una nuova parola
  bool incorso = false;
  
  /*
  se la parola in corso:
    -> se becco un carattere chissene, continuo
    -> se becco uno spazio la parola non è più in corso

  se la parola non in corso:
    -> se becco un carattere la metto in corso
    -> altrimenti continuo
  */
  
  for(int i = 0; i < str.length(); i++){
    // se la parola è in corso
    if(incorso == true){
      // se trovo uno spazio
      if(str[i] == ' '){
        // segno che ho finito di cercare  
        incorso = false;
      }
    } else { // se la parola non è in corso
      // se trovo un carattere (qualcosa != da ' ') rinizio
      if(str[i] != ' '){
        incorso = true;
        conta++;
      }
    }
  }

  cout << "Sono state inserite "<< conta << " parole"<<endl;

	return 0;
}