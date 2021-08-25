
#include <iostream>
#include <iomanip>
using namespace std;

struct classe{
	char nome[20];
	char cognome[20];
	float voto;
};

struct classe leggi();

float media(struct classe alunno[], int n);

string max(struct classe alunno[], int n);

string debito(struct classe alunno);

int main(){
	int n;
	cout<<"inserisci il numero di alunni della classe\n";
	cin>>n;
	classe alunno[n];
	for(int i=0;i<n;i++){
		alunno[i]=leggi();
	}
	cout<<"la media dei voti degli alunni e': "<<media(alunno,n)<<endl;
	cout<<"l'alunno con il voto piu' alto e': "<<max(alunno,n)<<endl;
	cout<<"gli alunni non sufficenti sono: "<<endl;
	for(int i=0;i<n;i++){
		cout<<debito(alunno[i])<<endl;
	}
}

struct classe leggi(){
	classe alunno;
	cout<<"inserire il nome\n";
	cin.getline(alunno.nome,20,'\n');
	cin.getline(alunno.nome,20,'\n');
	cout<<"inserire il cognome\n";
	cin.getline(alunno.cognome,20,'\n');
	cout<<"inserisci il voto dell'alunno\n";
	cin>>alunno.voto;
	return alunno;
}

float media(struct classe alunno[], int n){
	float media;
	for(int i=0;i<n;i++){
		media+=alunno[i].voto;
	}
	media/=n;
	return media;
}

string max(struct classe alunno[], int n){
	string max=alunno[0].nome;
	float voto=alunno[0].voto;
	for(int i=1;i<n;i++){
		if(alunno[i].voto>voto){
			voto=alunno[i].voto;
			max=alunno[i].nome;	
		}
	}
	return max;
}

string debito(struct classe alunno){
	if(alunno.voto<6)
		return alunno.nome;
	else
		return " ";
}
