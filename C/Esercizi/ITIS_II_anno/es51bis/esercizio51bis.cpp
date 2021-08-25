
#include <iostream>
#include <iomanip>
using namespace std;

struct classe{
	string nome;
	string cognome;
	string materia[5];
	struct{
		float voti[3];
	}materie[5];
};

struct classe leggi(struct classe alunno);

float media_alunno(struct classe alunno[], int n);

string alunno_migliore(struct classe alunno[], int n);

float media_materia(struct classe alunno[], int i, int n);

float media_mat_alunno(struct classe alunno[], int i, int j);

float media_classe(struct classe alunno[], int n);

int main(){
	int n,scelta;
	cout<<"inserisci il numero di alunni della classe\n";
	cin>>n;
	classe alunno[n];
	cout<<"inserisci le materie della classe\n";
	for(int i=0;i<5;i++){
		cin>>alunno[0].materia[i];
	}
	for(int i=1;i<n;i++){
		for(int j=0;j<5;j++)
			alunno[i].materia[j]=alunno[0].materia[j];
	}
	for(int i=0;i<n;i++){
		cout<<"inserisci i dati dell'alunno "<<i+1<<endl;
		alunno[i]=leggi(alunno[i]);
	}
	
		cout<<"-----------SELEZIONE-----------\n"
			<<"|"<<setw(21)<<setfill(' ')<<"1) MEDIA ALUNNO"<<setw(9)<<setfill(' ')<<"|"<<endl
			<<"|"<<setw(23)<<setfill(' ')<<"2) ALUNNO MIGLIORE"<<setw(7)<<setfill(' ')<<"|"<<endl
			<<"|"<<setw(22)<<setfill(' ')<<"3) INSUFFICIENTI"<<setw(8)<<setfill(' ')<<"|"<<endl
			<<"|"<<setw(24)<<setfill(' ')<<"4) MEDIA PER MATERIA"<<setw(6)<<setfill(' ')<<"|"<<endl
			<<"|"<<setw(21)<<setfill(' ')<<"5) MEDIA MATERIE ALUNNO"<<setw(9)<<setfill(' ')<<"|"<<endl
			<<"|"<<setw(21)<<setfill(' ')<<"6) MEDIA CLASSE"<<setw(9)<<setfill(' ')<<"|"<<endl
			<<setw(32)<<setfill('-')<<"\n";
		do{
			cin>>scelta;
			if(scelta>6)
				cout<<"errore, reinserisci la tua scelta\n";
		}while(scelta>6);
		
		switch(scelta){
			case 1:
				int n;
				float media;
				cout<<"seleziona l'alunno di cui visualizzare la media\n";
				cin>>n;
				n--;
				media=media_alunno(alunno,n);
				cout<<"la media dell'alunno "<<alunno[n].cognome<<" e' "<<media;
			break;
			case 2:
				cout<<"l'alunno migliore e' "<<alunno_migliore(alunno,n);
			break;
			case 3:
				for(int i=0;i<n;i++){
					if(media_alunno(alunno,i)<6)
						cout<<"l'alunno "<<alunno[i].cognome<<" e' insufficente\n";
				}
			break;
			case 4:
				for(int i=0;i<5;i++){
					cout<<"la media della materia "<<alunno[0].materia[i]<<" nella classe e':\n";
					cout<<media_materia(alunno,i,n)<<endl;
				}
			break;
			case 5:
				for(int i=0;i<n;i++){
					cout<<"alunno "; 
					for(int j=0;j<5;j++)
						cout<<"la media in "<<alunno[i].materia[j]<<" e' "<<media_mat_alunno(alunno,i,j);
				}
			case 6:
				cout<<"la media della classe e':\n";
				cout<<media_classe(alunno,n); 	
			break;
		}
	
		
}

struct classe leggi(struct classe alunno){
	cout<<"inserire il nome\n";
	getline(cin,alunno.nome);
	getline(cin,alunno.nome);
	cout<<"inserire il cognome\n";
	getline(cin,alunno.cognome);
	for(int i=0;i<5;i++){
		cout<<"inserisci i voti della materia:\n"<<alunno.materia[i]<<endl;
		for(int j=0;j<3;j++)
			cin>>alunno.materie[i].voti[j];
	}
	return alunno;
}

string alunno_migliore(struct classe alunno[], int n){
	string migliore=alunno[0].cognome+" "+alunno[0].nome;
	for(int i=1;i<n;i++){
		if(media_alunno(alunno,i)>media_alunno(alunno,i-1)){
			migliore.clear();
			migliore=alunno[i].cognome+" "+alunno[i].nome;
		}
	}
	return migliore;
}

float media_alunno(struct classe alunno[], int n){
	float media=0, temp=0;
	for(int i=0;i<5;i++){
		for(int j=0;j<3;j++){
			temp+=alunno[n].materie[i].voti[j];
		}
		temp/=3;
		media+=temp;
		temp=0;	
	}
	media/=5;
	return media;
}

float media_materia(struct classe alunno[], int i, int j){
	float temp=0,media=0;
	for(int k=0;k<3;k++){
		media+=alunno[i].materie[j].voti[k];
	}
	media/=3;
	return media;
}

float media_mat_alunno(struct classe alunno[], int i, int n){
	float temp=0,media=0;
	for(int j=0;j<n;j++){
		for(int k=0;k<3;k++){
			temp+=alunno[j].materie[i].voti[k];
		}
		temp/=3;
		media+=temp;
		temp=0;
	}
	media/=n;
	return media;
}

float media_classe(struct classe alunno[], int n){
	float media=0;
	for(int i=0;i<n;i++)
		media+=media_alunno(alunno,i);
	media/=n;
	return media;
}

