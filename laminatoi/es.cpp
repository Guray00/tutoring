#include <iostream>
using namespace std;


// funzione del punto A
float spessore(float sl, float m){
  float sl2;
  
  for(int i=0;i<m;i++){
    sl2=(sl/100)*10;
    sl=sl-sl2;
  }
  
  return sl;  
}

// funzione del punto B
float spessore2(float si, float sf){
  float i=0, si2;
  
  while(si>sf){
    si2=(si/100)*10;
    si=si-si2;
    i++;
  }
  
  return i;
}

int main(){
  float sl, spessorefinale, sp;
  int m, n;
  
  cout<<"Inserire lo spessore del semilavorato:\n";
  cin>>sl;

  cout<<"Inserire il numero di laminatoi: \n";
  cin>>m;

  spessorefinale = spessore(sl, m);
  cout<<"Lo spessore finale saraì di "<<spessorefinale<<" cm\n\n";

  cout<<"Inserire lo spessore finale: \n";
  cin>>sp;
  
  n = spessore2(sl, sp);
  cout<<"Saranno necessari "<<n<<" laminatoi\n";
  
  return 0;

}