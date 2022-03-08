#include <iostream>
#include <fstream>
#include <iomanip>
#include <string.h>

#define N 15
#define M 72

using namespace std;

struct F1 {
    int anno;
    char pilota[N];
    char paese[N];
    char scuderia[N];
};

void dati(F1[], int &);
void vincitore(F1[], int );
void annivincenti(F1[], char []);
void scriviVincitori(F1[], int, char[]);

int main()
{
    F1 mondiali[M];
    int n;
    int annata;
    char pilotaricerca[N];

    dati(mondiali, n); // mi scrive dentro n quante righe ci sono
    scriviVincitori(mondiali, n, "Mercedes");

    /*
    cout<<endl;
    do{
            cout<<"Anno di cui si vuole sapere il vincitore del mondiale: ";
            cin>>annata;
    }while(annata<1950 || annata>2021);
    vincitore(mondiali, annata);

    cout<<endl<<endl<<"Inserire cognome del pilota da ricercare: ";
    cin>>pilotaricerca;
    annivincenti(mondiali, pilotaricerca);*/


    return 0;
}

void dati(F1 mondiali[], int &j)     
{
    fstream fin;
    fin.open("VincitoriF1.txt", ios::in);

    if(!fin)
    {
        cout<<"impossibile aprire il file";
    }
    else
    {
       // cout<<left<<setw(8)<<"Anno"<<setw(15)<<"Pilota"<<setw(15)<<"Paese"<<setw(15)<<"Scuderia"<<endl;
        while(!fin.eof())   // se il file contenesse piu' elementi di M con le successive operazioni si va a scrivere al di fuori del vettore
        {
            fin>>mondiali[j].anno;
            fin>>mondiali[j].pilota;
            fin>>mondiali[j].paese;
            fin>>mondiali[j].scuderia;
            j++;
        }
        fin.close();
    }
    for(j=0;j<M;j++)        // Conviene non aspettarsi un numero prefissato di record dalla lettura di un file
    {
         /*cout<<left<<setw(8)<<mondiali[j].anno<<setw(15)<<mondiali[j].pilota<<setw(15)<<mondiali[j].paese<<setw(15)<<mondiali[j].scuderia<<endl;*/
    }
}

void vincitore(F1 mondiali[], int annata)
{
        int i;

        for(i=0;i<M;i++)
        {
            if(annata==mondiali[i].anno)
            {   // si chiedeva di non inserire comandi di output (cout) all'interno di questa funzione
                cout<<"il vincitore del mondiale "<<annata<<" e' stato "<<mondiali[i].pilota<<" con la scuderia "<<mondiali[i].scuderia<<endl;
                cout<<"il vincitore dell'annata precedente, del mondiale "<<annata-1<<" e' stato "<<mondiali[i+1].pilota<<" con la scuderia "<<mondiali[i+1].scuderia;
            }    // Attenzione: se nel file txt l'elenco dei vari vincitori non fosse ordinato prendere l'elemento -1 o +1 potrebbe non funzionare per recuperare il vincitore dell'anno precedente o successivo
        }
}

void annivincenti(F1 mondiali[], char pilotaricerca[])
{
    int i;
    int f=0;
    int cnt=0;
    int posizioni[M];

    for(i=0;i<M;i++)
    {
        if(strcmp(mondiali[i].pilota,pilotaricerca)==0)
        {
            cnt++;
            posizioni[f]=i;
            f++;
        }
    }
    if(cnt==0)
        {   // si chiedeva di non inserire comandi di output (cout) all'interno di questa funzione
            cout<<"il pilota non ha mai vinto un mondiale";
        }
    else
        if(cnt==1)  // anche nel caso di un solo mondiale vinto si deve scrivere l'anno nel file
        {
            cout<<"il pilota"<<mondiali[posizioni[1]].pilota<<"ha vinto un mondiale nell'anno "<<mondiali[posizioni[1]].anno;  // l'indice usato e' sbagliato: va usato l'indice 0 perche' nel caso di una sola vittoria il vettore posizioni contiene solo il primo elemento valido
        }
    else
    {       // manca l'inidcazione di quanti mondiali vinti a video
        fstream fout;
        fout.open(mondiali[posizioni[1]].pilota, ios::out);

        for(i=0;i<f;i++)        // gli anni vanno scritti dal meno recente al piu'fot recente
        {
            fout<<mondiali[posizioni[i]].anno;
            fout<<endl;
        }
        fout.close();
    }
}


/*
4. Dato il nome di una scuderia è necessario scrivere in un file l’elenco 
di tutti i piloti vincitori di almeno un mondiale alla guida di un’auto della 
scuderia in questione (attenzione a non ripetere il nome dei piloti 
all’interno del file)

dobbiamo passare:
- la struttura (vettore di strutture)
- nome della scuderia => char[]

cosa restituiamo: nessuno => void
*/

void scriviVincitori(F1 mondiali[], int n, char scuderia[]){
  // F1[i].pilota => leggiamo il pilota di una riga

  // facciamo un for per scorrere tutti i piloti e
  // vedere la scuderia => strcmp(F1[i].scuderia, scuderia) == 0

  int i, j;
  fstream fout;
  fout.open("pilotiVincitori.txt", ios::out);


  int numero_trovati = 0;

  // trovati ci serve per scriverci dentro il nome di un pilota
  // quando lo troviamo. In questo controlliamo poi se è già presente,
  // se p presente non lo scriviamo nel file
  char trovati [M][N]; // vettore di vettori carattere => vettore di stringhe

  // ci scorre tutti i piloti
  for(i=0; i<n; i++)
    {

      // se il pilota appartiene a quella scuderia, lo scriviamo SE NON E' IN TROVATI
      if(strcmp(mondiali[i].scuderia, scuderia) == 0)
      {
        // controllo dentro trovati se il pilota che sto
        // analizzando si trova al suo interno (con numero_trovati che
        // indica quanti ne abbiamo trovati fino ad ora)

        // t serve per ricordarmi che lo ho trovato
        bool t = false;
        for (j = 0; j < numero_trovati; j++){
          if(strcmp(mondiali[i].pilota, trovati[j]) == 0){
            t = true;
          }
        }

        // ====> so, vedento t, se il mio pilota si trova o meno dentro trovati,
        // quindi dentro i piloti che ho già analizzato

        if(t == false){ // se non ho trovato t
          fout<<mondiali[i].pilota<<endl; 

          // mi ricordo per la prossima volta che il pilota l'ho già scritto nel file
          // in modo da non riscriverlo
          strcpy(trovati[numero_trovati], mondiali[i].pilota);
          numero_trovati = numero_trovati + 1; // incremento
        }
      }
    }

  fout.close();
}
