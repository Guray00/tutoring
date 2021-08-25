
#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int n,cont_pos=0,cont_neg=0,cont_nul=0;
	cout<<"inserisci la grandezza del vettore\n";
	cin>>n;
	float vettore[n],pos[n]{0},neg[n]{0};
	for(int i=0;i<n;i++){
		cout<<"inserisci il valore "<<i+1<<" del vettore\n";
		cin>>vettore[i];
		if(vettore[i]>0){
			pos[cont_pos]=vettore[i];
			cont_pos++;
		}
		if(vettore[i]<0){
			neg[cont_neg]=vettore[i];
			cont_neg++;
		}
		if(vettore[i]==0){
			cont_nul++;
		}
	}
	cont_pos=0;
	cout<<setw(12)<<setfill('-')<<"\n"
		<<"|"<<setw(8)<<setfill(' ')<<"POSTIVI"<<setw(3)<<setfill(' ')<<"|\n";
	for(int i=0;i<n;i++){
		if(pos[i]>0){
			cout<<"|"<<setw(8)<<setfill(' ')<<pos[cont_pos]<<setw(3)<<setfill(' ')<<"|\n";
			cont_pos++;
		}
	}
	cout<<setw(12)<<setfill('-')<<"\n"
		<<endl
		<<setw(12)<<setfill('-')<<"\n"
		<<"|"<<setw(8)<<setfill(' ')<<"NEGATIVI"<<setw(3)<<setfill(' ')<<"|\n";
	cont_neg=0;
	for(int i=0;i<n;i++){
		if(neg[i]<0){
			cout<<"|"<<setw(8)<<setfill(' ')<<neg[cont_neg]<<setw(3)<<setfill(' ')<<"|\n";
			cont_neg++;
		}
	}
	cout<<setw(12)<<setfill('-')<<"\n"
		<<endl
		<<setw(25)<<setfill('-')<<"\n"
		<<"|"<<setw(15)<<setfill(' ')<<"N_NULLI"<<setw(9)<<setfill(' ')<<"|\n"
		<<"|"<<setw(15)<<setfill(' ')<<cont_nul<<setw(9)<<setfill(' ')<<"|\n"
		<<"|"<<setw(15)<<setfill(' ')<<"POS_NULLI"<<setw(9)<<setfill(' ')<<"|\n";
		for(int i=0;i<n;i++){
		if(vettore[i]==0){
			cout<<"|"<<setw(15)<<setfill(' ')<<i+1<<setw(9)<<setfill(' ')<<"|\n";
		}
	}
	cout<<setw(25)<<setfill('-')<<"\n";
	return 0;
}

