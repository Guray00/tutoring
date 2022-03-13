#include <stdlib.h>
#include <stdio.h>

typedef unsigned short int boolean;
#define TRUE 1
#define FALSE 0

struct list {
    int value;
    struct list * next;
};

struct double_link {
    int value;
    struct double_link * next;
    struct double_link * prev;
};


void init(struct list ** ptr)
{
    *ptr = NULL;
}

boolean pre_insert(struct list **ptrptr, int value)
{
    struct list * tmp_ptr;
    tmp_ptr = (struct list *)malloc(sizeof(struct list));
    if ( tmp_ptr != NULL ) {
        tmp_ptr->value = value;
        tmp_ptr->next = *ptrptr;
        *ptrptr = tmp_ptr;
        return TRUE;
    }
    else
        return FALSE;

}

void visit(struct list * ptr)
{
    printf("\nList: ");
    while ( ptr != NULL ) {
        printf("%d ", ptr->value);
        ptr = ptr->next;
    }
}

void visit2(struct double_link * ptr)
{
    printf("\nList2: ");
    while ( ptr != NULL ) {
        printf("%d ", ptr->value);
        ptr = ptr->next;
    }
}


void init2(struct double_link ** ptr)
{
    *ptr = NULL;
}


boolean pre_insert2(struct double_link **ptrptr, int value, struct double_link * prev){
    struct double_link * tmp_ptr;
    tmp_ptr = (struct double_link*)malloc(sizeof(struct double_link));
  
    if ( tmp_ptr != NULL ) {
        tmp_ptr->value = value;
        tmp_ptr->next = NULL;
        tmp_ptr->prev = prev;

        *ptrptr = tmp_ptr;
        return TRUE;
    }
      
    else
        return FALSE;

}


void funzione(struct list **L, struct double_link **L1){

  // teniamo un puntatore al precedente
  struct double_link * prima = NULL;

  // creiamo un puntatore alla lista
  struct double_link ** pun = L1;
  struct list* backup;
  
  for(struct list* p = *L; p != NULL; p = backup){

    pre_insert2(pun, p->value, prima);
    
    // mantengo un puntatore all'elemento precedente
    prima = *pun;
    pun = &((*pun)->next); // scorro in avanti

    backup = (*L)->next;   // ricordo dove devo continuare
    free(*L);              // libero la memoria
    *L = backup;           // mi serve per continuare a eliminare
  }  

}




int main() {
    struct list * L;
    struct double_link * L1;
    int value;

    // init the list
    init(&L);
    init2(&L1);

    // test pre-insert
    pre_insert(&L, 5);
    pre_insert(&L, 3);
    pre_insert(&L, 1);

    visit(L);
    funzione(&L, &L1);
    visit(L);
    visit2(L1);

    return 0;
}