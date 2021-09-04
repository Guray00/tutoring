
#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"inserisci la grandezza del vettore\n";
	cin>>n;
	int a1[n],a2[n];	
	for(int i=0;i<n;i++){
		cout<<"inserisci il valore della cella numero "<<i+1<<endl;
		cin>>a1[i];
		a2[n-1-i]=a1[i];
	}
	for(int i=0;i<n;i++){
		cout<<"cella"<<i+1<<"\t"<<a1[i]<<"\t"<<a2[i]<<endl;
	}
	return 0;
}
