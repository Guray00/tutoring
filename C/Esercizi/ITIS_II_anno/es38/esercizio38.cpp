
#include <iostream>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
using namespace std;

int car(int v[], int n, int v_max);

int controllo(int v[],int n,int v2[],int k);

int out(int v[], int n);

int main (){
	srand(time(0));
	int n,risp;
	cout<<"inserire la grandezza del vettore\n";
	cin>>n;
	int v[n],v_max,k;
	cout<<"inserisci il valore massimo da inserire nel vettore\n";
	cin>>v_max;
	v_max++;
		cout<<"inserire la grandezza del sub-arrey, minore della grandezza del vettore\n";
		do{
		cin>>k;
		}while(k>=n);
	
		car(v,n,v_max);
	
	cout<<setw(45)<<setfill('-')<<"\n"
		<<"1) SCEGLIERE IL SUB-ARREY"<<setw(19)<<setfill(' ')<<"|"<<endl
		<<"2) TROVARE TUTTI I SUB-ARREY PERIODICI"<<setw(6)<<setfill(' ')<<"|"<<endl
		<<setw(45)<<setfill('-')<<"\n";	
	do{
		cin>>risp;
		if(risp!=1 && risp!=2)
		cout<<"errore, reinserisci una scelta\n";
	}while(risp!=1 && risp!=2);
	int v2[k];
	int v3[n];
	switch(risp){
	case 1:
		for(int i=0;i<k;i++){
			cout<<"inserisci il valore "<<i+1<<" del sub-arrey\n";
			cin>>v2[i];
		}
	
		if(controllo(v,n,v2,k)>1)
			cout<<"il vettore e' periodico con periodo "<<controllo(v,n,v2,k)-1<<endl;
		else
			cout<<"il vettore non e' periodico\n";
		break;
	case 2:
		int c_vett=0;
		cout<<"il vettore e' "<<out(v,n);
		for(int i=0;i<n;i++){
		for(int i=0;i<k;i++){
			v2[i]=v[c_vett];
			c_vett++;
		}
		if(controllo(v,n,v2,k)>1){
			cout<<"il vettore ";
			for(int i=0;i<k;i++)
				cout<<v2[i];
			cout<<" e periodico con periodo "<<controllo(v,n,v2,k)-1<<endl;	
		}	
		c_vett-=k-1;
		}
		
		break;	
	}
	
	return 0;
}

int car(int v[], int n, int v_max){
	for(int i=0;i<n;i++){
		v[i]=rand()%v_max;
	}
}

int out(int v[], int n){
	for(int i=0;i<n;i++){
		cout<<"valore "<<i+1<<" del vettore: "<<v[i]<<endl;
	}
}

int controllo(int v[],int n,int v2[],int k){
	int c_vet=0, cont_p=0; 
	for(int i=0;i<n;i++){
		if(v2[c_vet]==v[i])
			c_vet++;
			else
				c_vet=0;
		if(c_vet==k){
			c_vet=0;
			cont_p++;
		}
	}	
	return cont_p;
	
}















