#include <iostream>
#include <cmath>
using namespace std;
int main(){
	int a,b,c;
	float x1,x2,d;
	cout<<"inserisci il coefficente di a"<<endl;
	cin>>a;
	cout<<"inserisci il coefficente di b"<<endl;
	cin>>b;
	cout<<"inserisci il coefficente di c"<<endl;
	cin>>c;
		if(a!=0 && b!=0 && c!=0){
		cout<<"l'equazione e' completa"<<endl;
		d=b^2-4*a*c;
			if (d<0)
			cout<<"impossibile"<<endl;
			else{
			if (d==0){
			cout<<"x1=x2"<<endl;}
			else{
			cout<<"x1!=x2"<<endl;}
			x1=(-b+sqrt(d))/2*a;
			x2=(-b-sqrt(d))/2*a;
			cout<<"l' incognita x1 e' "<<x1<<", l'incognita x2 e'"<<x2<<endl;
			}
		}
		else{
			if(b==0){
				cout<<"l'equazione e' pura"<<endl;
				x1=-sqrt(-c/a);
				x2=sqrt(-c/a);
			}
			else{
				cout<<"l'equazione e' spuria"<<endl;
				x1=0;
				x2=-b/a;
			}
			cout<<"l' incognita x1 e' "<<x1<<", l'incognita x2 e'"<<x2<<endl;
		}
	return 0;
}


