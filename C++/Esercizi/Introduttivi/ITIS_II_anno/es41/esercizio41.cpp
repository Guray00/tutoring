
#include <iostream>
using namespace std;

int main (){
	char parola1[100], parola2[100];
	cout<<"inserisci la prima stringa\n";
	cin>>parola1;
	cout<<"inserisci la seconda stringa\n";
	cin>>parola2;
	int c=0,cont=0,controllo=0;
	for(cont;parola2[cont]!='\0';cont++){};
	for(int i=0; parola1[i]!='\0';i++){
		if(parola1[i]==parola2[c])
			c++;
		else if(c==cont){
			cout<<"la parola 2 e' contenuta nella prima parola\n";
			controllo++;
			break;
		}else
			c=0;
	}
	if(controllo==0){
		cout<<"la seconda parola non e' contenuta nella prima\n";
	}
	return 0;
}

