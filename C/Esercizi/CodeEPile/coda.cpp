#include <stdlib.h>
#define MAXDIM 100


       
typedef struct {
       int v[MAXDIM];
       int pos;
       } coBase;

typedef coBase* coda;

coda creaCoda()
{
     coda c = (coda) malloc(sizeof(coBase));
     (*c).pos=-1;
     return c;
}

void enqueue(coda c, int ele)
{
    if((*c).pos<MAXDIM)
    {
        (*c).pos++;
        (*c).v[(*c).pos]=ele;
    }
}

int isEmpty(coda c)
{
    if((*c).pos!=-1)
         return 0;          
    return 1;
}

int dequeue(coda c)
{
    int r;
    if((*c).pos==-1)
        return -1;
        
    r=(*c).v[0];
    for(int i=0;i<(*c).pos;i++)
        (*c).v[i]=(*c).v[i+1];
    (*c).pos--;    
    return r;
}
