#include <iostream>
using namespace std;


int* funzione(){

	int* p2 = new int[5];
	p2[0] = 1;

	return p2;

}

int main(){
	int* p = NULL;
	p = new int[10];

	p[0] = 5;


	cout<<p[0]<<endl;

	p = funzione();

	cout<<p[0]<<endl;

	return 0;
}