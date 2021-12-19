
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

void scambio (int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

void ordinamento(int v[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n;j++){
			if(v[i]>v[j])
				scambio(v[i],v[j]);
		}
	}
}

int ricerca(int v[], int t, int k){
	int f=t-1, c, i=0;
	while(i<=f){
		c=(i+f)/2;
		if(v[c]==k)
			return c;
		else if(v[c]<k)
			f=c-1;
		else
			i=c+1;
	}
	return -1;
}

int main(){
	int n,m,k,c=0,t,s=0;
	fstream in;
	in.open("input.txt",ios::in);
	cout<<"inserisci la dimesione della matrice\nnumero di righe\n",
	cin>>n;
	cout<<"numero di colonne\n";
	cin>>m;
	int M[n][m]{0};
	t=n*m;
	int v[t]{0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(!in.eof()){
				in>>k;
				M[i][j]=k;
				v[c]=k;
				c++;
			}
		}
	}
	ordinamento(v,t);
	int Mordinata[n][m]{0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			Mordinata[i][j]=v[s];
			s++;
		}
	}	
	s=0;
	bool risp;
	do{
		int scelta=0, temp=c,indice, indiceM=0, d=0;
		cout<<"seleziona un'opzione\n"
			<<"1)visualizzare la matrice\n"
			<<"2)visualizzare la matrice ordinata\n"
			<<"3)trova un valore k nella matrice\n"
			<<"4)visualizzare i valori della diagonale principale\n";
		cin>>scelta;
		switch(scelta){
			case 1:
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(temp!=0){
							cout<<setw(5)<<M[i][j]<<"|";
							temp--;
						}
						else
							cout<<setw(6)<<"0|";
					}
					temp=c;
					cout<<"\n";
				}	
			break;
			case 2:
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(temp!=0){
							cout<<setw(5)<<Mordinata[i][j]<<"|";
							temp--;
						}
						else
							cout<<setw(6)<<"0|";
					}
					temp=c;
					cout<<"\n";
				}
				s=0;
			break;
			case 3:
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(temp!=0){
							cout<<setw(5)<<Mordinata[i][j]<<"|";
							temp--;
						}
						else
							cout<<setw(6)<<"0|";
					}
					temp=c;
					cout<<"\n";
				}
				cout<<"inserisci il valore da ricercare\n";
				cin>>k;
				indice=ricerca(v,t,k);
				if(indice==-1){
					cout<<"il valore "<<k<<" non è presente nella matrice\n";
				}
				else{
					while(indice>=m){
						indiceM++;
						indice-=m;	
					}
					cout<<"il valore "<<k<<" si trova nella cella ["<<indiceM<<"]["<<indice<<"]\n";
				}
			break;
			case 4:
				for(int i=0;i<n;i++){
					for(int j=0;j<m;j++){
						if(temp!=0){
							cout<<setw(5)<<Mordinata[i][j]<<"|";
							temp--;
						}
						else
							cout<<setw(6)<<"0|";
					}
					temp=c;
					cout<<"\n";
				}
				if(n!=m){
					cout<<"la matrice non e' quadrata, percio' non e' presente una diagonale principale\n";
				}
				else{
					cout<<"diagonale principale\n";
					for(int i=0;i<n;i++)
						cout<<Mordinata[i][i]<<" ";
					cout<<"diagonale secondaria\n";
					for(int i=n-1;i>-1;i--){
						cout<<Mordinata[d][i]<<" ";
						d++;
					}
				}

		}	
		cout<<"vuoi inserire un altra opzione? 1) si 0) no\n";
		cin>>risp;
	}while(risp==true);


	return 0;
}

