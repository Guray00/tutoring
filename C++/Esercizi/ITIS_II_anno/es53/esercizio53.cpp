
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main (){
	int n;
	cout<<"inserisci la grandezza del vettore\n";
	cin>>n;
	int v[n];
	srand(time(0));
	for(int i=0;i<n;i++){
		v[i]=rand()%101+1;
	}
	for(int i=0;i<n-1;i++){
		for(int j=i+1;i<n;i++)
			if(v[i]>v[j])
				swap(v[i],v[j]);
	}
	cout<<"il valore minore e' "<<v[0]<<endl;
	cout<<"il valore maggiore e' "<<v[n-1]<<endl;
	return 0;
}

