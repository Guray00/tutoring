#include <iostream>
using namespace std;

// 12. Scrivere l'algoritmo che, letto in input un valore numerico, dica se è positivo o negativo

int main(){
    int num;
    cout<<"inserisci num"<<endl;
    cin>>num;
    if (num>0){
        cout<<"il numero e' positivo";
    }
    else if (num==0)
        cout<<"il numero è 0";    
    else cout<<"il numero e' negativo";
      
	
	return 0;

}