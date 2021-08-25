
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <time.h>
using namespace std;

int contaparole(string frase);

string parola_max(string frase);

string parola_min(string frase);

string comune_diverse(string frase1, string frase2,int controllo);

int main(){
	string frase1;
	string frase2;
	cout<<"inserisci la prima frase\n";
	getline(cin,frase1,'\n');
	frase1+=32;
	cout<<"inserisci la seconda frase\n";
	getline(cin,frase2,'\n');
	frase2+=32;
	int cont1=contaparole(frase1);
	int cont2=contaparole(frase2);
	if(cont1>cont2){
		cout<<"la frase:\n"<<frase1<<endl<<"contiene piu' parole della frase:\n"<<frase2<<endl;
	}else if(cont2>cont1){
		cout<<"la frase:\n"<<frase2<<endl<<"contiene piu' parole della frase:\n"<<frase1<<endl;	
	}else
		cout<<"le frasi:\n"<<frase1<<endl<<"e:\n"<<frase2<<endl<<"hanno le stesse parole\n";
	string max1=parola_max(frase1);
	string max2=parola_max(frase2);
	string min1=parola_min(frase1);
	string min2=parola_min(frase2);
	if(max1.size()>=max2.size())
		cout<<"la prola piu' lunga e': "<<max1<<endl;
	else if(max1.size()<max2.size())
		cout<<"la prola piu' lunga e': "<<max2<<endl;
	
	if(min1.size()<=min2.size())
		cout<<"la prola piu' corta e': "<<min1<<endl;
	else if(min1.size()>min2.size())
		cout<<"la prola piu' corta e': "<<min2<<endl;
	int controllo=0;	
	cout<<"la parole in comune sono:\n"<<comune_diverse(frase1,frase2,controllo)<<endl;
	controllo++;
	cout<<"le parole diverse sono:\n"<<comune_diverse(frase1,frase2,controllo)<<comune_diverse(frase2,frase1,controllo)<<endl;
	
	return 0;
}

int contaparole(string frase){
	int cont=0;
	for(int i=0;frase[i]!='\0';i++){
		if(frase[i]==32)
			cont++;
	}
	return cont;
}

string parola_max(string frase){
	int cont=0;
	string max,temp;
	for(int i=0;frase[i]!='\0';i++){		
		if(frase[i]!=32){
			temp+=frase[i];
		}else if (temp.size()>cont){
			max=temp;
			cont=temp.size();
			temp.clear();
		}else
			temp.clear();
	}
	return max;
}

string parola_min(string frase){
	int cont=0;
	string min,temp;
	for(cont;frase[cont]!=32;cont++){min+=frase[cont];}
	for(int i=0;frase[i]!='\0';i++){		
		if(frase[i]!=32){
			temp+=frase[i];
		}else if (temp.size()<cont){
			min=temp;
			cont=temp.size();
			temp.clear();
		}else
			temp.clear();
	}
	return min;
}

string comune_diverse(string frase1, string frase2,int scelta){
	
	string temp,temp2,comune, diverse;
	int c=0,controllo=0;
	
	for(int i=0;frase1[i]!='\0';i++){
		if(frase1[i]!=32){
			temp+=frase1[i];
		}else{
			for(int j=0; frase2[j]!='\0';j++){
				if(frase2[j]!=32){
					temp2+=frase2[j];
				}
				else{
					if(temp==temp2){
						comune+=" "+temp;
						temp2.clear();
						controllo++;
						break;
					}else
						temp2.clear();
				}		
			}
			if(controllo==0)
				diverse+=" "+temp;
			controllo=0;
			temp.clear();
		}
	}
	if(scelta==0)
		return comune;
	else
		return diverse;
}



































