#include <iostream>
#include <string>
using namespace std;

int main(){
  string f;
  int contavoc=0;

  cout<<"Inserisci la frase: ";
  getline(cin, f);
  
  for(int i = 0; i< f.length(); i++){
    // devo vedere se ci sono vocali
    if( f[i]=='A'|| f[i]=='E' || f[i]=='I'||
        f[i]=='O'||f[i]=='U'||
        f[i]=='a' || f[i] == 'e' || 
        f[i]=='i' || f[i]=='o' || f[i]=='u'){
      contavoc++;
    }
  }

  cout<< "Il numero di vocali e' "<<contavoc<< endl;
    
  return 0;
}