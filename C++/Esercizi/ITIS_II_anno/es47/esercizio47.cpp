
#include <iostream>
using namespace std;



int main(){
	const int n_righe=5;
	string riga;
	int v1[25]={0};
	int n=0;
	cout<<"il numero di stringhe massime che puoi inserire sono: "<<n_righe<<"\n";
	cout<<"per terminare la riga premi il tasto ' . '\n";
	for(int s=0;s<n_righe;s++){
		getline(cin,riga);
		for(int i=0;riga[i]!='.';i++){
			for(int j=97;j<123;j++){
				if(riga[i]==j){
				 v1[n]++;
				 break;
				}
				n++;
			}
			n=0;
		}
		riga.clear();
	}
	int i=0;
	for(int j=97;j<123;j++){
		cout<<"la lettera "<<(char)j<<" nel testo e' presente "<<v1[i]<<" volte\n";
		i++;
	}
	return 0;
}
