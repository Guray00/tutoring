#include <stdio.h>
#include <stdlib.h>

typedef unsigned int boolean;
#define TRUE 1
#define FALSE 0


struct record{
  int value;
  int next;
};

struct list {
  int size;
  int first;
  int free;
  struct record *buffer;
};


void init(struct list* ptr, int size){
  ptr->size=size;
  ptr->first=size;
  ptr->free=0;
  ptr->buffer=(struct record*)malloc(sizeof(struct record)*size);

  for(int position=0; position<size; position = position + 1){
    ptr->buffer[position].next=position+1;
  }
}

void visit(struct list *ptr){
  for(int position=ptr->first; position!=ptr->size; position=ptr->buffer[position].next)
    printf("%d\n", ptr->buffer[position].value);

}

//[  xx x - - ]

boolean suf_insert(struct list *L, int value){
  int moved, *position;

  if(L->free!=L->size){

    // scriviamo nella prima cella disponibile
    moved=L->free;
    L->free=L->buffer[moved].next; // per il prossimo disponibile
    
    L->buffer[moved].value=value;  // sto scrivendo nel primo disponibile
    position=&(L->first);          // iniziamo a scorrere dal primo inserito

    // scorri fino a quando non punti a quello dopo la fine 
    // ultimo->next = position
    while(*position!=L->size){
      position=&(L->buffer[*position].next);
    }

    L->buffer[moved].next=L->size;
    *position=moved;   // l'ultimo punta a quello appena inserito (che era nell
                       // nella prima cella disponibile)
    
    return TRUE;
  }
    
  else
    return FALSE;
}



boolean move_element_to_tail(struct list * ptr, float target) {
  int * position, *tail, moved, count, N;
  
  boolean found = FALSE;
  tail = &ptr->first;
  N = 0;

  // tail punta alla coda
  while( *tail != ptr->size ) { 
    tail = &ptr->buffer[*tail].next;
    N++;
  }
  
  position = &ptr->first;
  count = 0;

  // count < N server a fare massimo N controlli e reinserimenti (con N che sarebbe size)
  while( *position != ptr->size && count < N ) {

    
    if(ptr->buffer[*position].value==target) {
      found = TRUE;

      // attenzione: se una cosa è già in coda non serve spostarla
      if( ptr->buffer[*position].next != ptr->size ) { // disconnect
        moved = *position;
        *position = ptr->buffer[*position].next; //come fosse per le liste puntatori (*L)->next per saltare un elemento
        
        
        // la coda ora diventa l'lemento target
        *tail = moved;
        
        tail = &ptr->buffer[moved].next;
        ptr->buffer[moved].next = ptr->size;
      }
    }
    
    else
      position = &(ptr->buffer[*position].next);
   
    count++;  
  }
  
   return found;
}


boolean search(struct list *L, int target, int index){
  int position=L->first;
  boolean found=FALSE;
  int count = 0;

  while(position!=L->size && found==FALSE && count < index){
    if(L->buffer[position].value==target)
      found=TRUE;
    else
      position=L->buffer[position].next;
  
    count++;  
  }
  
  return found;
}





int main(){

  struct list a;
  init(&a, 10);

  suf_insert(&a, 3);
  suf_insert(&a, 1);
  suf_insert(&a, 6);
  suf_insert(&a, 1);
  suf_insert(&a, 2);

  
  visit(&a);
  move_element_to_tail(&a, 1);
  printf("==========\n");
  visit(&a);

	return 0;

}