
#include <iostream>
using namespace std;



int main(){
	string parola;
	string soundex;
	cout<<"inseirsci la stringa\n";
	getline(cin,parola);
	soundex=parola[0];
	for(int i=1;parola[i]!='\0';i++){
		if(parola[i]!=parola[i-1]){
			if(parola[i]=='b' || parola[i]=='f' || parola[i]=='p' || parola[i]=='v')
				soundex+="1";
			else if(parola[i]=='c' || parola[i]=='g' || parola[i]=='j' || parola[i]=='k' || parola[i]=='q' || parola[i]=='s' || parola[i]=='x' || parola[i]=='z')	
				soundex+="2";
			else if(parola[i]=='d' || parola[i]=='t')
				soundex+="3";
			else if(parola[i]=='l')
				soundex+="4";
			else if(parola[i]=='m' || parola[i]=='n')
				soundex+="5";
			else if(parola[i]=='r')
				soundex+="6";
		}
		if(soundex.size()==4)
			break;
	}
	while(soundex.size()<4)
		soundex+="0";
	
	cout<<"la stringa "<<parola<<" convertita attraverso l'algoritmo soundex e': "<<soundex;
	
	return 0;
}

