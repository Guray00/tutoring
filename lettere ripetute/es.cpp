#include <iostream>
using namespace std;

int main(){
  string str;
  bool doppione = false;
  
  // chiediamo all'utente di inserire una stringa
  cout<<"inserisci una stringa: ";
  cin >> str;

  // scelgo una lettera con cui fare i confronti
  for(int i = 0; i < str.length(); i++){

    // per ogni lettera che segue
    for(int j = i+1; j < str.length(); j++){
        // controllo se sono uguali
        if(str[i] == str[j]){
          // allora ho un doppione
          doppione = true;
          break;
        }
    }

    // se ho già trovato un doppione
    if(doppione == true){
      break;  // fermati
    }
  }

  // se ho un doppione
  if(doppione == true){
    cout<<"ci sono lettere che si ripetono"<<endl;
  }
  else{
    cout<<"non ci sono lettere che ri ripetono"<<endl;
  }

	return 0;
}