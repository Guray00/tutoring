
#include <iostream>
#include <iomanip>
using namespace std;
int MCD(int m,int n){
		int r=1;
	if(n>m)
		swap(n,m);
	while(r!=0){
	r=m%n;
	if(r==0){
		return n;
		break;
	}
	m=n;
	n=r;	
	}
}
int main(){
	int a,b;
	cout<<"inserisci il primo valore\n";
	cin>>a;
	cout<<"inserisci il secondo valore\n";
	cin>>b;
	cout<<setw(10)<<setfill('-')<<"\n"
		<<"|"<<setw(5)<<setfill(' ')<<"mcm"<<setw(4)<<setfill(' ')<<"|\n"
		<<"|"<<setw(5)<<setfill(' ')<<a*b/MCD(a,b)<<setw(4)<<setfill(' ')<<"|\n"
		<<setw(10)<<setfill('-')<<"\n";
	
}

