#include <iostream>
#include <cstring>
using namespace std;

int main(){
 char x;
  cout<<"inserire un carattere: ";
  cin>>x;
  
  // trasformiamo i maiuscoli in minuscoli
  if(x>='A'&&x<='Z'){
    x = x + 32;
  }
  
  if(x>='a'&&x<='z'){
    cout<<"la posizione di "<<x<<" e' "<<(int)(x - 'a' + 1)<< endl;
  }
  
	return 0;
}