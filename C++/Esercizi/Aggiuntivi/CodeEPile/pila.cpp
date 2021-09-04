#include <stdlib.h>
#define MAXDIM 100


typedef struct{
			int v[MAXDIM];
			int pos;
} piBase;
		
typedef piBase* pila;


pila creaPila()
{
	pila p;
	p=(piBase*)malloc(sizeof(piBase));
	(*p).pos=-1;	
	return p;
}

int isEmpty(pila p)
{
    if((*p).pos!=-1)
         return 0;          
    return 1;
}


void push(pila p, int ele)
{
    if((*p).pos==MAXDIM){
		return;
    }

	(*p).pos++;
	(*p).v[(*p).pos] = ele;
}

int pop(pila p)
{
	if((*p).pos == -1){
		return -1;
	}

	(*p).pos--;
	return (*p).v[(*p).pos+1];
}

