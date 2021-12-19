
#include <iostream>
#include <fstream>
using namespace std;

struct classe{
	string nome;
	string cognome;
	int matricola;
	int eta;
	int voto;
};

void ordinamento(struct classe alunno[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(alunno[i].voto<alunno[j].voto)
				swap(alunno[i],alunno[j]);
		}
	}
}
int main(){
	cout<<"inserisci il numero di alunni\n";
	int n;
	cin>>n;
	classe alunno[n];
	ifstream in("input.txt");
	ofstream out("output.txt");
	char c;
	for(int i=0;i<n;i++){
		getline(in,alunno[i].nome,';');
		getline(in,alunno[i].cognome,';');
		in>>alunno[i].matricola;
		in>>c;
		in>>alunno[i].eta;
		in>>c;
		in>>alunno[i].voto;
		in>>c;
	}
	ordinamento(alunno,n);
	out<<alunno[0].nome<<";"<<alunno[0].cognome<<";"<<alunno[0].matricola<<";"<<alunno[0].eta<<";"<<alunno[0].voto<<";\n";
	for(int i=1;i<n;i++){
		out<<alunno[i].nome<<";"<<alunno[i].cognome<<";"<<alunno[i].matricola<<";"<<alunno[i].eta<<";"<<alunno[i].voto<<";";
	}
}
