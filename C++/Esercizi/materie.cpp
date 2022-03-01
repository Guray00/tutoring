#include <iostream>
#include <string.h>
#include <fstream>
#include <iomanip>

using namespace std;
#define MAX_CARAT  25
#define MAX_VOTI   5
#define MAX_RIGHE  20

struct Info {
  char materia [MAX_CARAT];  // materia
  int voti [MAX_VOTI];       // tanti voti
  int assenze;               // assenze- no vettore 
}; 

bool leggiFile(Info [], int &, char []);
void stampa(Info [], int);
bool modificaVoto(Info[], int, char[], int, int);
void salvaFile(char [], Info[], int);
float calcolaMedia(Info);
bool isInsufficiente(Info);
void scriviInsufficienti(char[], Info[], int);

float calcolaMediaPonderata(Info, int[]);
bool isInsufficientePonderata(Info int[]);
void scriviInsufficientiPonderata(char[], Info[], int, int[]);



int main(){

  Info informazioni[MAX_RIGHE];
  int righe;

  // serve per decidere il nome del file da leggere
  char nomeFile[MAX_CARAT] = "Voti.txt";

  //  facciamo le cose solo se siamo riusciti a leggere per bene il file
  if (leggiFile(informazioni, righe, nomeFile)){

    int scelta;

    // facciamo inserire all'utente cosa vuole fare
    do {
      cout<<"seleziona l'opzione che preferisci: "<<endl;
      cout<<"1) Stampa le materie"<<endl;
      cout<<"2) Correzione voto"<<endl;
      cout<<"3) Scrivi su un file le materie insufficienti"<<endl;
      cout<<"0) Termina"<<endl<<endl;
      
      // inserimento utente
      cin>>scelta;
      switch(scelta){

        case 1:
                stampa(informazioni, righe);
                break;
        
        case 2:
                char materia[MAX_CARAT];
                int voto; 
                int posizionevoto; 
          
                cout<<"Inserisci materia modificare: ";
                cin>>materia; 
                cout<<"Inserisci il voto da modificare: ";
                cin>>voto; 
                cout<<"Inserisci posizione voto da modificare: ";
                cin>>posizionevoto; 
          
                modificaVoto(informazioni, righe, materia, posizionevoto, voto);
                break;
        case 3: 
                char nome_file[MAX_CARAT]; 
                cout<<"Inserisci nome file: "; 
                cin>>nome_file; 
                scriviInsufficienti(nome_file, informazioni, righe);
                break; 
        
        
      } 
      cout<<endl;
      cout<<endl;
    }
    while(scelta != 0);

    cout<< "Programma terminato";
  }
  
	return 0;
}


bool leggiFile(Info informazioni[], int &n, char nome_file[]){
  // fa delle cose per leggere il file

  fstream fin;
  
  fin.open(nome_file, ios::in); // apriamo il file

  n = 0; //contatore
  
  if(!fin){
    cout<<"impossibile aprire il file"; 
    return false;
  }
  else 
  {
    // fino a quando non ho finito di leggere...
    while(!fin.eof()){

      // leggiamo la materia
      fin >> informazioni[n].materia;

      // leggiamo i voti
      for(int i=0; i<5; i++)
      {
          fin >> informazioni[n].voti[i]; //informazioni[n]-- indica la riga; voti[i]--siccome vettore 
      }

      // leggiamo le assenze
      fin >> informazioni[n].assenze;
      n++; // aggiorniamo il contatore di riga
    }
    
  /*
    !true => false
    fin.eof() => false => !false => true
    fin.eof() => true  => !true  => false
  */

    fin.close(); 
    return true;
  }
}  

void stampa(Info informazioni[], int n){

  cout<<left<<setw(18)<<"MATERIA"<<setw(25)<<"VOTI"<<setw(10)<<"ASSENZE"<<endl; //setw per definire lo spazio tra caratteri

  for(int i=0; i<n; i++)
    {
      cout<<setw(18)<<informazioni[i].materia; 

      for(int j=0; j<5; j++)
        {
          cout<<setw(5)<<informazioni[i].voti[j]; //[j]--per vettore
        }
      
      cout<<setw(10)<<informazioni[i].assenze; 
      
      
    }
  
}


// le informazioni, il numero di informazioni, la materia, la posizione del voto, il voto


bool modificaVoto(Info informazioni[], int n, char materia[], int pos, int v){

  // cerchiamo la materia da modificare
  for (int i = 0; i < n; i++){

    if(strcmp(informazioni[i].materia, materia) == 0){ //strcmp controllore di due stringhe
       //  0     1     2
      // [---] [---] [---] ...

      // pos -> da 1 a 5
      // vettori -> da 0 a 4
      
      if( (pos<=5 && pos>=1) && (v>=0 && v<=100) )
      {
        // pos -> posizione del voto da cambiare
        informazioni[i].voti[pos-1] = v;
        return true;
      } 
      
      else {
        return false;
      }
      
    }
    
  }

  return false; // ci arriva soltanto se non ha trovato la materia
  
}


// salvare su file i voti nuovi
/*
  tipo di ritorno -> bool/void (perchè non trovo casi d'uscita)
  parametri       -> nome_file, informazioni, numero di info
*/

void salvaFile(char nome_file[], Info informazioni[], int n){

  fstream fout; //cout, ma per file
  int i, j;

  fout.open(nome_file, ios::out); //per aprire file

  for(i=0; i<n; i++)
    {
      fout<<informazioni[i].materia<<" "; // scrivo nel file nella materia
      for(j=0; j<5; j++)
        {
          fout<<informazioni[i].voti[j]<<" "; //<<" " -- per spazio
        }
      
      fout<<informazioni[i].assenze<<" "<<endl;
    }
  

  fout.close(); // chiude il file in modo che vada tutto bene  
}

// scrivere su un file le materie che hanno una media insufficente

/*
  FUNZIONE CHE CI DICE LA MEDIA
  tipi di ritorno -> float
  parametri       -> informazione
*/

float calcolaMedia(Info informazione){
  float somma = 0; // salviamo la somma dei 5 voti
  float media = 0;
  int i;
  
  for(i=0; i<5; i++)
    {
      somma = informazione.voti[i] + somma;
    }

  // facciamo somma / 5 => la media
  media = (somma) / 5.0;
  return media;
}

bool isInsufficiente(Info informazione){
  if(calcolaMedia(informazione) < 60){
    return true;
  }

  return false;
}

// MEDIA PONDERATA
float calcolaMediaPonderata(Info informazione, int pesi[]){
  float somma = 0; // salviamo la somma dei 5 voti
  float somma_pesi = 0;
  float media = 0;
  int i;
  
  for(i=0; i<5; i++)
    {
      somma_pesi = pesi[i] + somma_pesi;
      somma = (informazione.voti[i]*pesi[i]) + somma;
    }

  // facciamo somma / 5 => la media
  media = (somma) / somma_pesi;
  return media;
}


bool isInsufficientePonderata(Info informazione, int pesi[]){
  if(calcolaMediaPonderata(informazione, pesi) < 60){
    return true;
  }

  return false;
}

/*
scrivere una funzione che scrivi in un file tutte le materie
che hanno una media insufficente (voto<60)

2 funzioni
-> trova materia insufficente
-> scrive nel file

tipo ritorno -> void (nel caso poi diventa bool) -> void vuol dire che non parla
parametri    -> Informazioni, n
*/


void scriviInsufficienti(char nome_file[], Info informazioni[], int n){

  int i; 
  fstream fout; 
  fout.open(nome_file, ios::out); //fout.open per aprire file//

  for(i=0; i<n; i++)
  {
      if(isInsufficiente(informazioni[i])){
        fout<<informazioni[i].materia<<" "<<calcolaMedia(informazioni[i])<<endl;
      }
  }

  fout.close();    //per chiudere file
}


/*
tipo di ritorno ->
parametri       -> 

ragionamento:
  -> leggere da un file i pesi
  -> 
*/

void scriviInsufficientiPonderati(char nome_file[], Info informazioni[], int n){
  int i; 
  fstream fout;
  fstream fin;
  int pesi[5];    // creo i pesi

  // leggi i pesi da pesi.txt =================
  fin.open("pesi.txt");
  for (i = 0; i < 5; i++){
    fin>>pesi[i];
  }
  fin.close();
  // ==========================================

  
  fout.open(nome_file, ios::out); //fout.open per aprire file//

  for(i=0; i<n; i++)
  {
      if(isInsufficientePonderata(informazioni[i], pesi)){
        fout<<informazioni[i].materia<<" "<<calcolaMediaPonderata(informazioni[i], pesi)<<endl;
      }
  }

  fout.close();    //per chiudere file
  
}