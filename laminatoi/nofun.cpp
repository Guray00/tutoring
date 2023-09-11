#include <iostream>
using namespace std;

int main(){
  float n;
  int x;
  float s;
  float lf;
  int cont = 0;
  
  // ci assicuriamo lo spessore sia corretto
  do{
    cout << "inserisci lo spessore del laminato: ";
    cin >> n;

    if(n<=0){
      cout << "Errore! metti uno spessore valido."<<endl<<endl;
    }
  } while(n<=0);

  // ci aspettiamo che il numero di laminatoi sia corretto
  do {
    cout << "inserisci il numero di laminatoi: ";
    cin >> x;
    
    if(x<=0){
      cout << "Errore! Metti una quantità valida."<<endl<<endl;
    }
  } while(x <= 0);

 
  s = n;
  // per ogni laminatoio devo levare il 10% dal laminato
  for (int i=0;i<x;i++){
    s = s - (s / 100)*10;
  }

  // ========== PARTE B =======
 do{
    cout << "inserisci la dimensione del laminato finale: ";
    cin >> lf;

    if(lf<=0 || n<lf){
      cout << "Errore! metti uno spessore valido."<<endl<<endl;
    }
  } while(lf<=0 || n<lf);
  
  while(n > lf){
    n = n - (n / 100)*10;    
    cont++;
  }

  // ========= STAMPA DEI RISULTATI ============
  cout<< "Lo spessore finale vale " << s << endl;
  cout<< "Sono necessari " << cont << " laminatoi per ottenere uno spessore di almeno " << lf <<endl;
  
  return 0;
}