#include <iostream>
using namespace std;
int main(){
	int v[10];
	cout<<"insrisci un valore del vettore\n";		
	cin>>v[0];													int max=v[0], min=v[0];										float media;
	for(int i=1;i<=9;i++){											cout<<"insrisci un valore del vettore\n";
		cin>>v[i];
	}
	for(int i=0;i<=9;i++)										media+=v[i];											
	media=media/10;												for(int i=1;i<=9;i++){									
		if(v[i]>max)												max=v[i];
	}
	for(int i=1;i<=9;i++){									
		if(v[i]<min)												min=v[i];
	}
	cout<<"il valore massimo del vettore e' "<<max<<"\n";		cout<<"il valore medio del vettore e' "<<media<<"\n";		cout<<"il valore minimo del vettore e' "<<min<<"\n";		return 0;
}
