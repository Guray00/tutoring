
#include <iostream>
#include <fstream>
using namespace std;
int main (){
	fstream in,min,mag;
	in.open("numeri.txt",ios::in);
	min.open("minori.txt",ios::out);
	mag.open("maggiori.txt",ios::out);
	cout<<"inseirci il valore di confronto\n";
	int n,k;
	cin>>n;
	while(in.eof()==false){
		in>>k;
		if(k>n)
			mag<<k<<" ";
		else if(k<n)
			min<<k<<" ";
	}
	return 0;
}

