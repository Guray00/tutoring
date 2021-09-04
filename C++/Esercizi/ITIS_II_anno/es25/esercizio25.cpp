
#include <iostream>
using namespace std;
int main (){
	int n, alunno_max, alunno_min;;
	cout<<"inserisci il numero di persone della classe\n";
	cin>>n;
	string v_nomi[n];
	float v_voti[n],voto, media=0;
	for(int i=0;i<n;i++){
		cout<<"inserisci il nome dell'alunno numero "<<i+1<<"\n";
		cin>>v_nomi[i];
		cout<<"inserisci il rispettivo voto\n";
		cin>>v_voti[i];
		media+=v_voti[i];
	}
	media/=n;
	float v_max=v_voti[0];
	float v_min=v_voti[0];	
	for(int i=0;i<n;i++){
		if(v_voti[i]>=v_max){
			v_max=v_voti[i];
			alunno_max=i;
		}	
	}
	for(int i=0;i<n;i++){
		if(v_voti[i]<=v_min){
			v_min=v_voti[i];
			alunno_min=i;
		}	
	}
	cout<<"l'alunno con il voto maggiore e' "<<v_nomi[alunno_max]<<" con voto "<<v_max<<"\n";
	cout<<"l'alunno con il voto minore e' "<<v_nomi[alunno_min]<<" con voto "<<v_min<<"\n";
	cout<<"la media dei voti della classe e' "<<media;
	return 0;
}
