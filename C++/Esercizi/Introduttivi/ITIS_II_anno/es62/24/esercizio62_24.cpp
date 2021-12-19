
#include <iostream>
#include <fstream>
using namespace std;
int main (){
	fstream in,out;
	in.open("alfa.txt",ios::in);
	out.open("beta.txt",ios::out);
	cout<<"inserisci il valore da inserire nella sequanza\n";
	int n,k,c=0;
	cin>>n;
	while(in.eof()==false){
		in>>k;
		if(n<k && c==0){
			out<<n<<" ";
			c++;
		}
		out<<k<<" ";
	}
	return 0;
}

