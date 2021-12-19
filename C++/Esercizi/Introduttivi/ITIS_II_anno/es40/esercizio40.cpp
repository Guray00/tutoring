
#include <iostream>
using namespace std;
int main (){
	char parola[100];
	int v2[26]={0};
	cout<<"inserisci una stringa\n";
	cin>>parola;
	int n=0;
	for(int i=97;i<122;i++){
		for(int k=0;parola[k]!='\0';k++){
			if(parola[k]==i)
				v2[n]++;
		}
		n++;
	}
	int c=97;
	cout<<"LETTERA | NUMERO"<<endl;
	for(int i=0;i<26;i++){
		if(v2[i]!=0)
			cout<<"|    "<<(char)c<<"    |    "<<v2[i]<<"   |"<<endl;
		c++;
	}
	
	return 0;
}

