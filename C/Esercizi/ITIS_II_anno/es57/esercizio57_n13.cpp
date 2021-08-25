
#include <iostream>
using namespace std;

int power(float a, unsigned int b){
	if(b==1)
		return a;
	return a*power(a,b-1);
}

int main(){
	int a,b;
	cout<<"inserisci il primo numero\n";
	cin>>a;
	cout<<"inserisci il secondo numero\n";
	cin>>b;
	cout<<power(a,b);
}
