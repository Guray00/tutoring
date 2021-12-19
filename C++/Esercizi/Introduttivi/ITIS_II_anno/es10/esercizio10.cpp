
#include <iostream>
using namespace std;
int main() {
	char carattere;
	string normale, inverso;
	cout<<"inserisci un carattere alla volta\n inserisci '*' per interrompere il programma\n";
	do{
	cin>>carattere;
		if(carattere!='*'){
		normale= normale+carattere;
		inverso= carattere+inverso;}
	
	}while (carattere!='*');
	if(normale==inverso)
	cout<<"la parola e' palindroma\n";
	else
	cout<<"la parola non e' palindroma\n";
	return 0;
}
