#include <iostream>
using namespace std;

int main(){
  int temperatura[4], pressione[4], scelta, maxT = 0, minT = 0, maxP = 0, minP = 0, n, posizione;

  // inserisco i valori di temperatura
  for(int i = 0; i < 4; i++){
    cout<< "Inserisci il valore di temperatura: ";
    cin>> temperatura[i];
  }

  // inserisco i valori di pressione
  cout << endl;
  for(int i = 0; i < 4; i++){
    cout<< "Inserisci il valore di pressione: ";
    cin>> pressione[i];
  }

  do {
    cout << "\nScelta: ";
    cin >> scelta;

    switch(scelta){
      // stampa valori
      case 1:
        cout << "Temperatura: ";
        for(int i = 0; i < 4; i++){
          cout << temperatura[i] << " ";
        }

        cout << endl << "Pressione:   ";
        for (int i = 0; i< 4; i++){
         cout << pressione[i] << " "; 
        }
        break;

      // trova valore max
      case 2:
        // massimo della temperatura
        for (int i = 0; i< 4; i++){
            // se ho trovato una cosa più grande del mio massimo
            if (temperatura[i] > temperatura[maxT]){
              // me la ricordo e aggiorno
              maxT = i;
            }
        }

        // massimo della pressione
        for (int i = 0; i< 4; i++){
          if (pressione[i] > pressione[maxT]){
              // me la ricordo e aggiorno
              maxP = i;
          }
        }
        
        cout << "Massima temperatura: "<< temperatura[maxT]<<endl;
        cout << "Massima pressione:   "<< pressione[maxP];
        break; 

      // minimo
      case 3:
        // minimo della temperatura
        for (int i = 0; i< 4; i++){
            // se ho trovato una cosa più grande del mio massimo
            if (temperatura[i] < temperatura[minT]){
              // me la ricordo e aggiorno
              minT = i;
            }
        }

        // minimo della pressione
        for (int i = 0; i< 4; i++){
          if (pressione[i] < pressione[minP]){
              // me la ricordo e aggiorno
              minP = i;
          }
        }
        
        cout << "Minimo temperatura: "<< temperatura[minT]<<endl;
        cout << "Minimo pressione:   "<< pressione[minP];
        break;

      // valore temperatura inserito
      case 4:
        cout << "Inserisci un valore di temperatura da cercare: ";
        cin >> n;
        posizione = -1; // all'inizio considero che non c'è
        for(int i = 0; i < 4; i++){
          if(temperatura[i] == n){
            posizione = i;
          }
        }

        if (posizione != -1){
          cout << "La posizione in cui compare e' " << posizione<<endl;
        }
        else{
          cout << "Il valore non compare";
        }
        break;
    
      // valore temperatura inseirto
      case 5:
        cout << "Inserisci un valore di pressione da cercare: ";
        cin >> n;
        posizione = -1; // all'inizio considero che non c'è
        for(int i = 0; i < 4; i++){
          if(pressione[i] == n){
            posizione = i;
          }
        }

        if (posizione != -1){
          cout << "La posizione in cui compare e' " << posizione<<endl;
        }
        else{
          cout << "Il valore non compare";
        }
        break;
    }
    
    cout<< "\n";
     
  } while(scelta > 0);

	return 0;
}