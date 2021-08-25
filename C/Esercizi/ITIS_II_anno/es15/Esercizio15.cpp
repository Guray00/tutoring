#include <iostream>
using namespace std;
int main (){
	int n,s2,r,c,s;
	cout<<"inserisci un numero\n";
	cin>>n;
	s=2;
	if(n>0)
	cout<<"1\n";
	while(n>1){
	s2=s-1;
	c=s-2;
	while(s2>1){
		r=s%s2;
		if(r==0){
		break;
		}
		else
		s2=s2-1;
		c--;
	}
	if(c==0){
		cout<<s<<"\n";
		n--;	
	}
	s++;
	}
	return 0;
}
