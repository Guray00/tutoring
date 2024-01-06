#include <iostream>
using namespace std;

int main(){
  string str;
  int  conta = 0;
  char lettera = ' ';
  
  cout<<"inserire una stringa: ";
  cin>> str;


  // scorro la parola soffermandomi su una lettera
  for(int i = 0; i < str.length(); i++){
    int tmp = 1;

    // per ogni lettera che mi viene dopo
    for(int j = i+1; j < str.length(); j++){

      // quando vedo che c'è un'alta lettera uguale
      if(str[i] == str[j]){
        // la conto
        tmp = tmp + 1;
      }
    }

    // se abbiamo trovato che compare più del massimo
    if(tmp > conta){
      // salviamo la lettera nuova
      conta = tmp;
      lettera = str[i];
    }
  }

  cout << "La lettera che compare maggiormente è " << lettera <<endl;
  
	return 0;
}