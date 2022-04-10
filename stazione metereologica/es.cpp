#include <iostream>
#include <ctime>
using namespace std;



int main(){

  int n   = 24;
  int max = 50; // il numero max che generiamo

  // sto creando il vettore
  int v[n];

  // devo inserire in un vettore n numeri casuali
  int conta;

  // serve per inizializzare i numeri casuali
  srand(time(NULL));


  // devo generare n numeri casuali
  for (conta = 0; conta < n; conta++ ){

    // voglio numeri casuali da 1 a max
    int casuale = rand()%max + 1;
    v[conta] = casuale;
  }


  cout<< "Il vettore vale: ";

  for (conta = 0; conta < n; conta++){
    cout<<v[conta]<<" ";
  }
  
  // 1) temperatura media
  // la somma del vettore / n

  float somma = 0;
  for (conta = 0; conta < n; conta++){
    somma = somma + v[conta];
  }

  float media = somma / n;
  cout<<endl<<"La media vale: "<<media<<endl;

  float sd = 0;
  float sn = 0;

  // somma diurna
  for(conta = 0; conta < (n/2); conta++){
    sd = sd + v[conta];
  }

  // somma notturna
  for(conta = 12; conta < n; conta++){
    sn = sn + v[conta];
  }

  float md = sd / (n/2);
  float mn = sn / (n/2);

  cout<<"Media diurna: "<<md<<endl;
  cout<<"Media notturna: "<<mn<<endl;

  // 3) media crepuscolare (si ipotizza 18, 19, 20)
  float sc = 0;
  for (conta = 18; conta < 21; conta++){
    sc = sc + v[conta];
  }

  float mc = sc/3;
  cout<<"Media crepuscolare: "<<mc<<endl;
  
	return 0;

}