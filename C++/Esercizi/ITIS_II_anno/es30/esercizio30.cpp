
#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int n;
	cout<<"inserisci la grandezza del vettore\n";
	cin>>n;
	float temp;
	float NUM[n],QUADR[n];
	system ("cls");
	for(int i=0;i<n;i++){
		cout<<"inserisci il valore "<<i+1<<" del vettore\n";
		cin>>NUM[i];
		system ("cls");
	}
	for(int i=1;i<n;i++){
		for(int c=0;c<n;c++){
		if(NUM[i]<NUM[c]){
			temp=NUM[i];
			NUM[i]=NUM[c];
			NUM[c]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		QUADR[i]=NUM[i]*NUM[i];
	}
	cout<<setw(30)<<setfill('-')<<"\n"
		<<"|"<<setw(10)<<setfill(' ')<<"NUMERI"<<setw(12)<<setfill(' ')<<"QUADRATI"<<setw(7)<<setfill(' ')<<"|\n";
	for(int i=0;i<n;i++){
		cout<<"|"<<setw(10)<<setfill(' ')<<fixed<<setprecision(2)<<NUM[i]
		<<setw(12)<<setfill(' ')<<fixed<<setprecision(2)<<QUADR[i]<<setw(7)<<setfill(' ')<<"|\n";
	}
	cout<<setw(30)<<setfill('-')<<"\n";
	return 0;
}

