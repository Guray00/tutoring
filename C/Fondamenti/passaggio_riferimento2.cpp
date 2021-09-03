#include <iostream>
using namespace std;


// ATTENTO: SOLO NELLA DICHIARAZIONE DEGLI ARGOMENTI
// int* parametro = &a; <- &parametro
void funzione(int &parametro){

	cout<<"parametro vale: "<<parametro<<endl;
	parametro = 3;
	cout<<"parametro vale: "<<parametro<<endl;

}


void prova(int n1, int n2, int n3){
	cout<<"primo valore: "	<<n1<<endl;
	cout<<"Secondo valore: "<<n2<<endl;
	cout<<"Terzo valore: "	<<n3<<endl;
}

int main(){
	// creo una variabile a e la imposto a 5
	int a = 5;

	// passaggio per valore
	funzione(a);

	//prova(a, 2, 3);

	cout<<"a vale: "<<a<<endl;
	
	/*
	int b = 3;

	int* puntatore = &b;

	cout<<*puntatore<<endl;

	b = 233;

	cout<<*puntatore<<endl;
	*/
	
	return 0;
}