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


void rotazione(struct list * ptr){
  int *last, moved, *p;
  p=&(ptr->first);
  

  while(*p != ptr->size){
    last = p;
    p=&(ptr->buffer[*p].next);    
  }

  for(int i=0; i <= 2;i++){
    moved=*last;
    ptr->buffer[moved].next = ptr->first;         // l'ultimo punta al vecchio primo
    ptr->first = ptr->buffer[ptr->first].next;    // aggiorniamo il primo
  
    last=&(ptr->buffer[*last].next);
    ptr->buffer[*last].next=ptr->size;
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
    rotazione(&ptr);
    visit(&ptr);

    return 0;
}