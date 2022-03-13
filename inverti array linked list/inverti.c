#include <stdlib.h>
#include <stdio.h>

typedef unsigned short int boolean;
#define TRUE 1
#define FALSE 0

struct record {
    int value;
    int next;
};

struct list {
    struct record * buffer;
    int size;
    int first;
    int free;
};

/*

*/


void init(struct list * ptr, int size){
    int i;
    ptr->buffer = (struct record *)malloc(sizeof(struct record)*size);
    ptr->size = size;
    ptr->first = size;
    ptr->free = 0;
    for (i=0;i<size;i++)
        ptr->buffer[i].next = 	i+1;
}

boolean pre_insert(struct list * ptr, int value)
{
    int moved;

    if ( ptr->free != ptr->size ) { // not full
        
        moved = ptr->free;
        ptr->free = ptr->buffer[ptr->free].next;
        // insert new value
        ptr->buffer[moved].value = value;
        ptr->buffer[moved].next = ptr->first;
        ptr->first = moved;
        return TRUE;
    }
    return FALSE;
}

void visit(struct list * ptr)
{
    int position;
    printf("\nList: ");
    position = ptr->first;
    while( position != ptr->size ) {
        printf("%d ",ptr->buffer[position].value);
        position = ptr->buffer[position].next;
    }
}

void inverti(struct list * ptr){
  int *p, *last, moved;
  last=&(ptr->first);
  
  //cerco ultimo e penultimo
  while(ptr->buffer[*last].next != ptr->size){
    p = last; // sarà il penultimo
    last=&(ptr->buffer[*last].next);    
  }

  moved = ptr->buffer[*p].next;
  for(int i=ptr->size-2; i >= 0; i--){ //size-2 perché fino a penultimo elemento.
    int* position = &(ptr->first);

    for (int j = 0; j < i; j++){
      position = &(ptr->buffer[*position].next);
    }

    ptr->buffer[*last].next = *position;
    last=&(ptr->buffer[*last].next);       // facciamo scorrere l'ultimo
  }
    
  ptr->buffer[*last].next = ptr->size;
  ptr->first = moved;//moved è indirizzo ultimo elemento(all'inizio del codice).
}



int main() {
    struct list ptr;
    int size = 4;
    int value;

    init(&ptr,size);

    
    pre_insert(&ptr, 7);
    pre_insert(&ptr, 5);
    pre_insert(&ptr, 3);
    pre_insert(&ptr, 1);

    visit(&ptr);
    inverti(&ptr);
    visit(&ptr);

    return 0;
}