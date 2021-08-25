
#include <iostream>
using namespace std;

int somma(int a,int b){
	if(b==1)
		return a;
	return a+somma(a,b-1);
}
int main(){
	int a,b;
	cout<<"inserisci il primo numero\n";
	cin>>a;
	cout<<"inserici il secondo numero\n",
	cin>>b;
	cout<<somma(a,b);
}
