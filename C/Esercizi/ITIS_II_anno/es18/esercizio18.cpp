#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"inserisci la grandezza del vettore\n";				cin>>n;
	int v[n];
	cout<<"insrisci un valore del vettore\n";					cin>>v[0];
	int max=v[0],min=v[0];										float media=0;
	for(int i=n-1;i>=1;i--){										cout<<"insrisci un valore del vettore\n";
		cin>>v[i];
	}
	for(int i=n-1;i>=0;i--)										media+=v[i];
	media=media/n;												for(int i=n-1;i>=1;i--){
		if(v[i]>max)												max=v[i];
	}
	for(int i=n-1;i>=1;i--){
		if(v[i]<min)												min=v[i];
	}
	cout<<"il valore massimo del vettore e' "<<max<<"\n";		cout<<"il valore medio del vettore e' "<<media<<"\n";		cout<<"il valore minimo del vettore e' "<<min<<"\n";		return 0;
}
