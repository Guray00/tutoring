#include <stdio.h>
#include <stdlib.h>


int main(){
int n;
  printf("Inserisci dimensione: ");
  scanf("%d", &n);

  int v[n];

  for(int i=0;i<n;i++){
    int tmp;
    printf("Inserisci valore: ");
    scanf("%d", &tmp);
    v[i] = tmp;
  }

  // 4 => 3...0 
  for(int i=n-1; i>=0; i--){
    printf("%d ", v[i]);
  }
  
	return 0;
}