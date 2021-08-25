
#include <iostream>
#include <cmath>
using namespace std;
float distanza(float a,float b);
int main(){
	float xa,xb,ya,yb;
	cout<<"inserisci l'ascissa di a\n";
	cin>>ya;
	cout<<"inserisci l'ordinata di a\n";
	cin>>xa;
	cout<<"inserisci l'ascissa di b\n";
	cin>>yb;
	cout<<"inserisci l'ordinata di b\n";
	cin>>xb;
	xa=xa-xb;
	ya=ya-yb;
	cout<<distanza(xa,ya);
	return 0;
}
float distanza(float a,float b){
	float distanza=0;
	distanza=sqrt(pow(a,2)+pow(b,2));
	return distanza;
}
