
#include <iostream>
using namespace std;
int main (){
	int c=10;
	float n, max1,max2,temp;
	cout<<"inserisci un numero\n";
	cin>>n;
	max1=n;
	cout<<"inserisci un numero\n";
	cin>>n;
	max2=n;
	if (max1>max2){	}
	else{
		temp=max2;
		max2=max1;
		max1=temp;
	}
	while(c>2){
		cout<<"inserisci un numero\n";
		cin>>n;
		if(n>max1){
			max2=max1;
			max1=n;
		}
		else if(n>max2)
		max2=n;
		c--;	
	}
	cout<<"i due numeri piu' grandi sono: "<<max1<< " e "<<max2;
	return 0;
}

