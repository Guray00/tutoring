
#include <iostream>
using namespace std;
int main (){
	int n,c;
	cout<<"inserisci la grandezza del vettore\n";
	cin>>n;
	c=n;
	float v[n],k;
	for(int i=0;i<n;i++){
		cout<<"inserisci il valore "<<i+1<<" del vettore\n";
		cin>>v[i];
	}
	cout<<"inserisci il valore da ricercare\n";
	cin>>k;
	for(int i=0;i<n;i++){
		if(k==v[i]){
			cout<<"valore trovato, il valore si trova nella cella numero "<<v[i]<<"\n";
			break;
		}
		else
		c--;
	}
	if(c==0)
		cout<<"il valore non e' stato trovato\n";
	return 0;
}

