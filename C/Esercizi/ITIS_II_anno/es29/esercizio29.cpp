
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main (){
	int scelta;
	do{
	int bin[8], dec=0, c=0;
	cout<<setw(42)<<setfill('-')<<"\n"
		<<"|"<<setw(25)<<setfill(' ')<<"CONVERSIONI"<<setw(15)<<setfill(' ')<<"|"<<endl
		<<"|"<<setw(40)<<setfill(' ')<<"|"<<endl
		<<"|"<<" 1) BINARIO-DECIMALE"<<setw(20)<<setfill(' ')<<"|"<<endl
		<<"|"<<setw(40)<<setfill(' ')<<"|"<<endl
		<<"|"<<" 2) DECIMALE-BINARIO"<<setw(20)<<setfill(' ')<<"|"<<endl
		<<"|"<<setw(40)<<setfill(' ')<<"|"<<endl
		<<"|"<<" 0) FINE"<<setw(32)<<setfill(' ')<<"|"<<endl
		<<"|"<<setw(40)<<setfill(' ')<<"|"<<endl
		<<setw(42)<<setfill('-')<<"\n";
	do{
		cin>>scelta;
	}while(scelta!=1 && scelta!=2 && scelta!=0);
	switch(scelta){
		case 1: cout<<"inserisci le cifre una alla volta\n";
				for(int i=0;i<8;i++){
					cin>>bin[i];
					while(bin[i]!=0 && bin[i]!=1){
						cout<<"puoi inserire solamente 0 o 1\n";
						cin>>bin[i];
					}
				}
				for(int i=7;i>-1;i--){
					dec=dec+bin[i]*pow(2,c);
					c++;
				}
				cout<<setw(20)<<setfill('-')<<"\n"
					<<"|"<<setw(13)<<setfill(' ')<<"RISULTATO"<<setw(5)<<setfill(' ')<<"|"<<endl
					<<"|"<<setw(9)<<setfill(' ')<<dec<<setw(9)<<setfill(' ')<<"|"<<endl
					<<setw(20)<<setfill('-')<<"\n";
				break;
		case 2: do{
					cout<<"inserisci il numero decimale\n";
					cin>>dec;
					if(dec>=256)cout<<"numero maggiore di 255\n";	
				}while(dec>=256);
					for(int i=7;i>-1;i--){
						bin[i]=dec%2;
						dec=int(dec/2);
					}
					cout<<setw(20)<<setfill('-')<<"\n"
					<<"|"<<setw(13)<<setfill(' ')<<"RISULTATO"<<setw(5)<<setfill(' ')<<"|"<<endl;
					cout<<"|"<<setw(5)<<setfill(' ');
					for(int i=0;i<8;i++){
						cout<<bin[i];
					}
					cout<<setw(6)<<setfill(' ')<<"|"<<endl<<setw(20)<<setfill('-')<<"\n";
				break;
		default: break;	
	}
	}while(scelta==1 || scelta==2);
	cout<<"Programma terminato";
	return 0;
	}

