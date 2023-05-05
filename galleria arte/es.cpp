#include <iostream>
#include <string.h>
using namespace std;

/*
GalleriaDArte
  Attributi:
    - Ha dei quadri  => quadri[...]
    - Nome           => char[MAX_CHAR]

  funzioni:
    - Inserire un quadro
    - cancellare un quadro
    ----------------------
    - getNome => restituisce il nome della galleria
    - setNome => imposta il nome della galleria

Quadro
  Attributi:
    - autore
    - prezzo
    - titolo

  funzioni:
    - visualizzare prezzo 
    - visualizzare l'autore
    - print() => stampa a schermo tutte le informazioni riguardanti il quadro
    ----------------------
    - setPrezzo => imposta un prezzo
    - setTitolo => imposta un titolo
    - setAutore => imposta un autore
*/

#define MAX_CHAR 25

class Quadro{
  private:
    char autore[MAX_CHAR]; 
    int prezzo; 
    char titolo[MAX_CHAR];

  public:
    // costruttore di default
    Quadro(){
      prezzo = 0;
    }

    Quadro(char titolo[], char autore[], int prezzo){
      // il this ci fa capire che ci riferiamo al titolo del quadro
      strcpy(this->titolo, titolo);
      strcpy(this->autore, autore);
      this->prezzo = prezzo; 
    }

    // realizzazione del metodo print per far vedere a schermo il quadro
    void print(){
      cout<<"Titolo: "   << titolo << endl;
      cout<<"- Autore: " << autore << endl;
      cout<<"- Prezzo: " << prezzo << endl<<endl;
    }

    void setTitolo(char titolo[]){
      strcpy(this->titolo, titolo);
    }

    bool setPrezzo(int prezzo_finale){
      if(prezzo_finale<0)
        return false; 
      
      else {
        prezzo = prezzo_finale;
        return true;
      }
    }

    int getPrezzo(){
      // deve restituire il prezzo del quadro
      return prezzo;
    }

    // visualizzare l'autore
    void printAutore(){
     cout<<autore<<endl; 
    }

    void printTitolo(){
     cout<<titolo<<endl; 
    }
    
};



int main(){

  // quadro1
  char titolo1[MAX_CHAR] = "pietà";
  char autore1[MAX_CHAR] = "Pietro";
  Quadro q1(titolo1, autore1, 5);

  // quadro2
  char titolo2[MAX_CHAR] = "Secondo quadro";
  char autore2[MAX_CHAR] = "Gigi";
  Quadro q2(titolo2, autore2, 100);

  q1.setTitolo("Titolo cambiato!");
  q1.setPrezzo(-5);
  
  q1.print();
  q2.print();

  q1.printTitolo();

	return 0;
}