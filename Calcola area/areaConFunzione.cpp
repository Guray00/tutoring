#include <iostream>
using namespace std;


int calcolaArea(int base, int altezza) {
  int area;
  area = base*altezza;

  return area;
}



int main(){

  int a;  
  a = calcolaArea(5, 6);
  cout<<"L'area risultante e' "<<a<<endl;

	return 0;

}

