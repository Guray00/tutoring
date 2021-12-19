
#include <iostream>
using namespace std;
void uselocal(void);
void useglobal(int);
int main(){
	int x=5;
	cout<<"il valore della variabile x e'"<<x<<endl;
		{
			int x=7;
			cout<<"il valore della variabile x e'"<<x<<endl;
		}
	cout<<"il valore della variabile x e'"<<x<<endl;
	uselocal();
	useglobal(x);
	cout<<"il valore della variabile x e'"<<x<<endl;
	return 0;
}
void uselocal(void){
	int x=25;
	cout<<"il valore della variabile x e'"<<x<<endl;
}
void useglobal(int x){
	cout<<"il valore della variabile x e'"<<x<<endl;
}
