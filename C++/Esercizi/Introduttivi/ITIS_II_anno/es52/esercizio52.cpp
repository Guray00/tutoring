
#include <iostream>
#include <iomanip>
using namespace std;
struct torneo{
	string nome_s;
	string nome_a;
	string cognome_a;
	int numero_a;
	struct squadre{
		string nome_g;
		string cognome_g;
		int num_g;
	}calciatore[1];
	int punteggio=0;
}squadra[4];

struct p_giocate{
	torneo locale;
	torneo ospite;
	int goal_locale;
	int goal_ospite;
	struct n_goal{
		int minuto[10];
		torneo marcatore[10];		
	}squadre[2]; 
}partite[12];

int main (){
	cout<<"inserisci le squadre e i giocatori di ogni squadra che partecipa al torneo\n";
	for(int i=0;i<4;i++){
		cout<<"inserire il nome della squadra "<<i+1<<endl;
		cin>>squadra[i].nome_s;
		cout<<"inserisci il nome dell'allenatore dell' "<<squadra[i].nome_s<<endl;
		cin>>squadra[i].nome_a;
		cout<<"inserisci il cognome dell'allenatore dell' "<<squadra[i].nome_s<<endl;
		cin>>squadra[i].cognome_a;
		cout<<"inserisci il numero del dell'allenatore dell' "<<squadra[i].nome_s<<endl;
			cin>>squadra[i].numero_a;
		for(int j=0;j<1;j++){
			cout<<"inserisci il nome del giocatore "<<j+1<<endl;
			cin>>squadra[i].calciatore[j].nome_g;
			cout<<"inserisci il cognome del giocatore "<<j+1<<endl;
			cin>>squadra[i].calciatore[j].cognome_g;
			cout<<"inserisci il numero del giocatore "<<j+1<<endl;
			cin>>squadra[i].calciatore[j].num_g;
		}
	}
	cout<<"quando verranno inserite le squadre, la prima sarà la squadra in casa, la seconda quella ospite\n";
	int i=0;
	for(int cont_l=0;cont_l<4;cont_l++){
		for(int cont_o=0; cont_o<4;cont_o++){
			if(cont_l==cont_o){
				cont_o++;
			}
			cout<<"partita "<<i+1<<endl;
			cout<<"inserisci il numero di goal della squadra "<<squadra[cont_l].nome_s;
			partite[i].locale.nome_s=squadra[cont_l].nome_s;
			cin>>partite[i].goal_locale;
			for(int j=0;j<partite[i].goal_locale;j++){
				cout<<"inserisci il numero del giocatore che ha segnato\n";
				cin>>partite[i].squadre[0].marcatore[j].numero_a;
				cout<<"inserisci il minuto al quale è stato segnato il goal\n";
				cin>>partite[i].squadre[0].minuto[j];
			}
			cout<<"inserisci il numero di goal della squadra "<<squadra[cont_o].nome_s;
			partite[i].ospite.nome_s=squadra[cont_o].nome_s;
			cin>>partite[i].goal_ospite;
			for(int j=0;j<partite[i].goal_ospite;j++){
				cout<<"inserisci il numero del giocatore che ha segnato\n";
				cin>>partite[i].squadre[1].marcatore[j].numero_a;
				cout<<"inserisci il minuto al quale è stato segnato il goal\n";
				cin>>partite[i].squadre[1].minuto[j];
			}
			if(partite[i].goal_locale>partite[i].goal_ospite)
				squadra[cont_l].punteggio+=3;
			else if(partite[i].goal_ospite>partite[i].goal_locale)
				squadra[cont_o].punteggio+=3;
			else{
				squadra[cont_l].punteggio++;
				squadra[cont_o].punteggio++;
			}
			i++;
			if(i==12){
				break;
			}
		}
	}
	cout<<"---------PARTITE--------\n";
	for(int i=0;i<12;i++){
		cout<<setw(16)<<setfill('-')<<"PARTITA "<<i<<"\n"
			<<partite[i].locale.nome_s<<partite[i].goal_locale<<endl
			<<partite[i].ospite.nome_s<<partite[i].goal_ospite<<endl
			<<"\n";					
	}
	
	for(int i=0;i<3;i++){
		for(int j=i+1;j<4;j++){
			if(squadra[j].punteggio>squadra[i].punteggio){
				swap(squadra[i],squadra[j]);
			}
		}
	}
	
	cout<<"-----CLASSIFICA------\n";
	for(int i=0;i<4;i++){
		cout<<squadra[i].nome_s<<"\t"<<squadra[i].punteggio<<endl;	
	}
		
	return 0;
}

