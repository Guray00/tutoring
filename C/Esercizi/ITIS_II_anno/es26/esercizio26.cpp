
#include <iostream>
using namespace std;
int main (){
	int n;
	cout<<"inserisci il numero di alunni\n";
	cin>>n;
	string v_nomi[n];
	int v_voti[n],v_nvoti[7]{0};
	for(int i=0;i<n;i++){
		cout<<"inserisci il nome dell'alunno numero "<<i+1<<"\n";
		cin>>v_nomi[i];
		cout<<"inserisci il relativo voto\n";
		cin>>v_voti[i];
		switch(v_voti[i]){
			case 4: v_nvoti[1]++;
					break;
			case 5: v_nvoti[2]++;
					break;
			case 6: v_nvoti[3]++;
					break;
			case 7: v_nvoti[4]++;
					break;
			case 8: v_nvoti[5]++;
					break;
			case 9: v_nvoti[6]++;
					break;
			default:v_nvoti[0]++;
		}
	}
		int c=4;
		for(int i=1;i<7;i++){
			cout<<"il numero di alunni con voto "<<c<<" sono:"<<v_nvoti[i]<<"\n";
			c++;
		}
		cout<<"gli alunni insufficenti sono: "<<v_nvoti[0];
	return 0;
}

