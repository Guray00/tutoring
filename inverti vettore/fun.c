#include <stdio.h>
#include <stdlib.h>

void inverti(int n, int v[]){
  for(int i=n-1; i>=0; i--){
    printf("%d ", v[i]);
  }
}

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

  inverti(n, v);
  
	return 0;
}