
#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

struct Rubrica{
	char nominativo[20]={'\0'};
	char indirizzo[30];
	char citta[20];
	char n_tel[15];
	char e_mail[30];
	struct data_nascita{
		int anno;
		int mese;
		int giorno;
	}nascita;
};

int selezione();

struct Rubrica calcoloeta(struct Rubrica contatto,int anno,int mese,int giorno);

int main(){
	Rubrica contatto[100];
	int i=0,risp,scelta,scelta2,anno,mese,giorno;
	cout<<"inserisci la data odierna"<<endl<<"Anno: ";
		cin>>anno;
		cout<<"Mese: ";
		do{
			cin>>mese;
			if(mese>12)
				cout<<"errore, reinseisci il mese\n";
		}while(mese>12);
		cout<<"Giorno: ";
		do{
			cin>>giorno;
			if(mese>30)
				cout<<"errore, reinseisci il giorno\n";
		}while(giorno>30);
	do{
	cout<<"vuoi inserire un contatto?\n1) SI 0) NO\n";
	risp=selezione();
	if(risp==1){
		do{
			cout<<"-----selezionare cosa si desidera inserire-----"<<"\n"
				<<"|"<<setw(27)<<setfill(' ')<<"1) NOMINATIVO"<<setw(20)<<setfill(' ')<<"|\n"
				<<"|"<<setw(26)<<setfill(' ')<<"2) INDIRIZZO"<<setw(21)<<setfill(' ')<<"|\n"
				<<"|"<<setw(22)<<setfill(' ')<<"3) CITTA"<<setw(25)<<setfill(' ')<<"|\n"
				<<"|"<<setw(29)<<setfill(' ')<<"4) NUM TELEFONO"<<setw(18)<<setfill(' ')<<"|\n"
				<<"|"<<setw(22)<<setfill(' ')<<"5) EMAIL"<<setw(25)<<setfill(' ')<<"|\n"
				<<"|"<<setw(32)<<setfill(' ')<<"6) DATA DI NASCITA"<<setw(15)<<setfill(' ')<<"|\n"
				<<setw(48)<<setfill('-')<<"\n";
			cin>>scelta;
			switch(scelta){
				case 1:
					cout<<"inserisci il nominativo del contatto: "<<i+1<<endl;
					cin>>contatto[i].nominativo;
					break;
				case 2:
					cout<<"inserisci l'indirizzo del contatto: "<<i+1<<endl;
					cin>>contatto[i].indirizzo;
					break;
				case 3:
					cout<<"inserisci la citta' del contatto: "<<i+1<<endl;
					cin>>contatto[i].citta;
					break;
				case 4:
					cout<<"inserisci il numero del contatto: "<<i+1<<endl;
					cin>>contatto[i].n_tel;
					break;	
				case 5:
					cout<<"inserisci l'email del contatto: "<<i+1<<endl;
					cin>>contatto[i].e_mail;
					break;
				case 6:
					cout<<"inserisci la data di nascita del contatto: "<<i+1<<endl<<"Anno: ";
					cin>>contatto[i].nascita.anno;
					cout<<"Mese: ";
					do{
					cin>>contatto[i].nascita.mese;
					if(mese>12)
						cout<<"errore, reinseisci il mese\n";
					}while(mese>12);
					cout<<"Giorno: ";
					do{
					cin>>contatto[i].nascita.giorno;
					if(giorno>30)
						cout<<"errore, reinseisci il giorno\n";
					}while(giorno>30);
					break;
			}
			cout<<"vuoi inserire altre informazioni per il seguente contatto? 1) SI 0) NO\n";
			scelta2=selezione();
		}while(scelta2==1);		
	}
	else 
		break;
	i++;
	}while(risp==1);
	
	cout<<"vuoi visualizzare l'eta' dei contatti?1) SI 0)NO\n";
	risp=selezione();
	if(risp==1){
		for(int i=0;i<100;i++){
			if(contatto[i].nominativo[0]!='\0'){
				Rubrica eta=calcoloeta(contatto[i], anno,mese,giorno);
				cout<<"il contatto "<<contatto[i].nominativo<<" ha:\n"
					<<"Anni: "<<eta.nascita.anno<<endl
					<<"Mesi: "<<eta.nascita.mese<<endl
					<<"Giorni: "<<eta.nascita.giorno<<endl;	
			}
		}
	}
	
	return 0;
}

struct Rubrica calcoloeta (struct Rubrica contatto,int anno,int mese,int giorno){
	contatto.nascita.anno=anno-contatto.nascita.anno;
	if(mese<contatto.nascita.mese){
		contatto.nascita.mese=12+mese-contatto.nascita.mese;
		contatto.nascita.anno-=1;
	}else{
		contatto.nascita.mese=mese-contatto.nascita.mese;
	}		
	if(giorno<contatto.nascita.giorno){
		contatto.nascita.giorno=30+giorno-contatto.nascita.giorno;
		contatto.nascita.mese-=1;
	}else{
		contatto.nascita.giorno=giorno-contatto.nascita.giorno;
	}
	return contatto;
 }

int selezione(){
	int a;
	do{
		cin>>a;
		if(a!=0 && a!=1)
			cout<<"errore, reinserisci la tua scelta\n";
	}while(a!=0 && a!=1);
	return a;
}































































