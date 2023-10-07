#include <iostream>
using namespace std;

int main(){
  int N = 100, i = 0, conta=0;
  char stringa[N];
  
  cout<<"Inserire una stringa: ";
  cin.getline(stringa, N);

  // scorro fino a quando la stringa non termina
  while(stringa[i] != '\0'){
    if(stringa[i] == ' ') {
      conta=conta+1;
    }
    i++;
  }
  
  cout<<"Gli spazi sono "<<conta<<endl;
  

	return 0;
}