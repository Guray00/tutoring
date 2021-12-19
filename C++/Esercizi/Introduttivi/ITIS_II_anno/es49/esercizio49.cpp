

#include <iostream>
#include <iomanip>
using namespace std;

struct FRAZIONE{
	int num;	int den;};

struct FRAZIONE input(struct FRAZIONE f);

struct FRAZIONE semplificata(struct FRAZIONE f);

struct FRAZIONE somma(struct FRAZIONE f1, struct FRAZIONE f2);

struct FRAZIONE prodotto(struct FRAZIONE f1, struct FRAZIONE f2);

struct FRAZIONE inversa(struct FRAZIONE f);

struct FRAZIONE opposta(struct FRAZIONE f);

int f_MCD (int a,int b);

int f_mcm (int a,int b);

int main()
{
	FRAZIONE f,f2,output;
	int scelta,a,b;
	do{
	cout<<setw(20)<<setfill('-')<<"SCELTA"<<setw(20)<<setfill('-')<<"\n"
		<<" (1) SEMPLIFICATA\n"
		<<" (2) SOMMA\n"
		<<" (3) PRODOTTO\n"
		<<" (4) INVERSA\n"
		<<" (5) OPPOSTA\n"
		<<" (6) MCD\n"
		<<" (7) mcm\n"
		<<" (0) FINE\n";
	cin>>scelta;
	switch(scelta){
		case 1:
			f=input(f);
			output=semplificata(f);
			if(output.den==f.den)
				cout<<"la frazione e' gia semplificata\n";
			else{
				cout<<"la frazione semplificata e':\n"<<output.num<<endl<<"-\n"<<output.den<<endl;
			}
			break;
		case 2:
			f=input(f);
			f2=input(f2);
			output=somma(f,f2);
			cout<<"la somma delle due frazioni e':\n"<<output.num<<endl<<"-\n"<<output.den<<endl;		
			break;
		case 3:
			f=input(f);
			f2=input(f2);
			output=prodotto(f,f2);
			cout<<"il prodotto delle due frazioni e':\n"<<output.num<<endl<<"-\n"<<output.den<<endl;
			break;
		case 4:
			f=input(f);
			output=inversa(f);
			cout<<"l' inverso della frazione e':\n"<<output.num<<endl<<"-\n"<<output.den<<endl;
			break;
		case 5:
			f=input(f);
			output=opposta(f);
			cout<<"l'opposto della frazione e':\n"<<output.num<<endl<<"-\n"<<output.den<<endl;
			break;
		case 6:
			cout<<"inserisci 2 numeri\n";
			cin>>a;
			cin>>b;
			cout<<"il MCD dei due numeri e':\n"<<f_MCD(a,b)<<endl;
			break;
		case 7:
			cout<<"inserisci 2 numeri\n";
			cin>>a;
			cin>>b;
			cout<<"il mcm dei due numeri e':\n"<<f_mcm(a,b)<<endl;
			break;
		case 0:
			break;
	}
	}while(scelta!=0);
	return 0;
}

int f_mcm(int a,int b){
	return ((a*b)/f_MCD(a,b));
}

int f_MCD(int a,int b){
	do{
        if(a>b)
          	a = (a-b);
        else if(a<b)
        	b = (b-a);
    }while(a!=b);
    return a;
}

struct FRAZIONE input(struct FRAZIONE f){
	cout<<"inserisci il numeratore della frazione\n";
			cin>>f.num;
			cout<<"inserisci il denominatore della frazione\n";
			cin>>f.den;
	return f;	
}

struct FRAZIONE semplificata(struct FRAZIONE f){
	int c=2;
	while(c<=19){
	if(f.num%c==0)
		if(f.den%c==0){
			f.den/=c;
			f.num/=c;
			c--;
		}
		c++;
	};
	return f;
}

struct FRAZIONE somma(struct FRAZIONE f, struct FRAZIONE f2){
	int c=f_mcm(f.den,f2.den);
	f.num=c/f.den*f.num;
	f2.num=c/f2.den*f2.num;
	f.num+=f2.num;
	f.den=c;
	f=semplificata(f);
	return f;
}

struct FRAZIONE prodotto(struct FRAZIONE f, struct FRAZIONE f2){
	f.num*=f2.num;
	f.den*=f2.den;
	f=semplificata(f);
	return f;
}

struct FRAZIONE inversa(struct FRAZIONE f){
	swap(f.num,f.den);
	return f;
}

struct FRAZIONE opposta(struct FRAZIONE f){
	f.num=-f.num;
	return f;
}

