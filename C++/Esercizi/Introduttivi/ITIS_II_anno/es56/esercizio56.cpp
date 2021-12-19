
#include <iostream>
using namespace std;

void exchange_sort(string a[], int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j])
				swap(a[i],a[j]);
		}
	}
}

int main (){
	int n;
	cout<<"inserisci il numero di province da inserire\n";
	cin>>n;
	string v[n],k;
	cout<<"inserisci le provincie\n";
	for(int i=0;i<n;i++)
		cin>>v[i];
	cout<<"inserisci la provincia che vuoi ricercare\n";
	cin>>k;
	exchange_sort(v,n);
	bool flag=false;
	int i=0,f=n-1,c,cont=0;
	while(i<=f){
		cont++;
		c=(i+f)/2;
		if(v[c]==k){
			cout<<"la sigla "<<k<<" e' stata ritrovata in posizione "<<c+1<<"\n";
			cout<<"il numero di iterazioni eseguite e' stato: "<<cont<<"\n";
			flag=true;
			break;
		}else if(v[c]<k)
			i=c+1;
			else
				f=c-1;
	}
	if(!flag)
		cout<<"la sigla "<<k<<" non e' presente nel vettore\n";
	return 0;
}

