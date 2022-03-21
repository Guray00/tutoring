#include <iostream>
using namespace std;


int calcolaArea(int base, int altezza) {
  int area;
  area = base*altezza;

  return area;
}

//                       formali
void calcolaArea2(int base, int altezza){
  int area;
  area = base*altezza;
  cout<<"L'area risultante e' "<<area;
}


int main(){

  int a;
  
  //          attuali/reali
  a = calcolaArea(5, 6);

  //cout<<"L'area risultante e' "<<a<<endl;


	return 0;

}

