
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int num_parole(string a){
	int cont=0;
	char b[a.size()];
	strcpy(b,a.c_str());
	for(int i=0;b[i]!='\0';i++){
		if(b[i]==' ' || b[i]==',' || b[i]=='.' || b[i]=='!' || b[i]=='?' || b[i]==';' || b[i]==':')
			cont++;
	}
	return cont+1;
}

int main(){
	string parola;
	cout<<"inserisci una stringa\n";
	getline(cin,parola);
	cout<<"la stringa e' formata da "<<parola.size()<<" carattere(i)\n";
	if(parola.empty())
		cout<<"la stringa e' vuota\n";
	else
		cout<<"la stringa non e' vuota\n";
	
	cout<<"la stringa e' formata da "<<num_parole(parola)<<" parola(e)\n";	
	
	return 0;
}
