
#include<iostream>
#include<fstream>
using namespace std;

int main(){
	fstream f1,f2;
	int k,q;
	cin>>q;
	
	f1.open("C:\\ingresso.txt", ios::in);
	f2.open("C:\\uscita.txt", ios::out);
	
	f1>>k;
	
	while((!f1.eof()) && q>0){
		q--;
		cout<<k<<"\n";
		f2<<k;
		f1>>k;
	}
	
	f1.close();
	f2.close();
}

