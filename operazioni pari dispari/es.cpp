#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){

  // inizializziamo per la generazione dei casuali
  srand(time(NULL));
  int n,contp=0,contd=0,mp=0, md=0;

  // scatola che salva la somma dei pari parte 0
  int sp = 0;
  
  // scatola che salva la somma dei dispari parte 0
  int sd = 0;

  // per 50 volte
  for(int i=0; i<50; i++){

    // invento un numero casuale tra -100 e +100
    n = rand()%(201) + (-100);
    cout << n << " ";

    // controllo se il numero e' divisibile per 2
    if (n%2==0){
      // sommo il numero alla somma dei pari
      sp=sp+n;
      contp=contp+1;
    }
    else {
      sd=sd+n;
      contd=contd+1;
    }
  }
  
  // stampiamo a schermo la somma dei pari
  cout << endl<<endl;
  cout << "la somma dei pari e' " << sp << endl;
  cout << "la somma dei dispari e' " << sd << endl;
  cout << "i numeri pari sono " << contp << endl;
  cout << "i numeri dispari sono " << contd << endl;

  // se il cont non e' zero
  if(contp > 0){
    mp=(sp/contp);
  }

  if(contd > 0){
    md=(sd/contd);
  }

  cout << "la media dei pari e' " << mp << endl;
  cout << "la media dei dispari e' " << md << endl;
  
	return 0;
}