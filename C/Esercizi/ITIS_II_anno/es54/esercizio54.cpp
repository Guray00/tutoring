
#include <iostream>
using namespace std;
int main(){
	int n,m,c=0;
	cout<<"insersci la grandezza del primo vettore\n";
	cin>>n;
	cout<<"inserici la grandezza del secondo vettore\n";
	cin>>m;
	int A[n],B[m],controllo[n+m];
	cout<<"inserisci i valori del primo vettore\n";
	for(int i=0;i<n;i++)
		cin>>A[i];
	cout<<"inserisci i valori del secondo vettore\n";
	for(int i=0;i<m;i++)
		cin>>B[i];
	for(int i=0;i<n;i++){
		for(int j=0;j<m
		;j++)
			if(A[i]==B[j]){
				controllo[c]=A[i];
				c++;
			}
	}
	cout<<"i valore ugali ad entrambi i vettori sono: "<<c<<endl;
	for(int i=0;i<c;i++)
		cout<<"num"<<i+1<<": "<<controllo[i]<<endl;
	
}
