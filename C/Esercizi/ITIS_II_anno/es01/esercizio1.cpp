//es n 1
#include <iostream>
using namespace std;
int main(){
	float n;
	cout<<"inserisci il costo del prodotto"<<endl;
	cin>>n;
	
	if(n<100)
		n=n-n*0.1;
	
	else
		n=n-n*0.2;

	cout<<"il prezzo del prodotto ora e' "<<n<<endl;
	return 0;
}
