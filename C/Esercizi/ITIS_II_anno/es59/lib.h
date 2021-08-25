#include <iostream>
using namespace std;

struct concorso{
	string nome;
	int p1=0;
	int p2=0;
	int tot;
};

void scambio(struct concorso &a, struct concorso &b){
	concorso temp=b;
	b=a;
	a=temp;
}

void ordinamento(struct concorso v[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(v[i].tot<v[j].tot){
				scambio(v[i],v[j]);
			}
		}
	}
}

