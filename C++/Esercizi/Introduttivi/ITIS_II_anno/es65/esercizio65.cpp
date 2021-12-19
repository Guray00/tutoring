
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

struct biblioteca{
	int codice;
	string titolo;
	string autore;
	int anno;
	string editore;
};

int main(){
	ifstream in;
	ofstream out;
	int n;
	cout<<"---------MENU'---------\n"
		<<"|1)aggiungi un libro  |\n"
		<<"|2)ordinamento codice |\n"
		<<"|3)vis. elenco        |\n"
		<<"|4)ric. per codice    |\n"
		<<"|5)ric. per titolo    |\n"
		<<"|6)salvataggio su file|\n"
		<<"|7)caricamento da file|\n"
		<<"-----------------------\n";
	short int scelta;
	cin>>scelta;
	switch(scelta){
		case 1:
			out.open("collezione.txt",ios::app);
			cout<<"quanti libri si vogliono aggiungere alla libreria\n";
			cin>>n;
			for(int i=0;i<n;i++){
				
			}
		break;
	}
}
