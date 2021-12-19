
#include <iostream>
#include <iomanip>
using namespace std;

int cod_dec(char v1[],int n){
	for(int i=0;v1[i]!='\0';i++){
		(int)v1[i];
		if(n==1)
			v1[i]+=13;
		else
			v1[i]-=13;
		if(v1[i]>122)
			v1[i]-=26;
		else if(v1[i]<97)
			v1[i]+=26;
	}
}

int main(){
	int risp;
	char v1[100];
	do{
		
	cout<<setw(25)<<setfill('-')<<"\n"
		<<"|"<<setw(16)<<setfill(' ')<<"1) CODIFICA"<<setw(7)<<setfill(' ')<<"|"<<endl
		<<"|"<<setw(18)<<setfill(' ')<<"2) DECODIFICA"<<setw(5)<<setfill(' ')<<"|"<<endl
		<<"|"<<setw(12)<<setfill(' ')<<"0) ESCI"<<setw(11)<<setfill(' ')<<"|"<<endl
		<<setw(25)<<setfill('-')<<"\n";
	cout<<"selezionare una scelta\n";
	cin>>risp;
	if(risp==0)
		break;
	cout<<"inserisci la stringa\n";
	cin>>v1;
	
	cod_dec(v1,risp);
	
	for(int i=0;v1[i]!='\0';i++){
		(char)v1[i];
		cout<<v1[i];
	}
	cout<<endl;
	}while(risp!=0);
	
	cout<<endl;
	
}
