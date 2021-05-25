#include "coda.cpp"
#include "pila.cpp"

/*
int codaCompare(coda c1, coda c2)
{
	coda cA=creaCoda(), cB=creaCoda();
	int tmp1, tmp2, uguali=1;
	
	while(!isEmpty(c1) && !isEmpty(c2))
	{
		tmp1=dequeue(c1);
		tmp2=dequeue(c2);
		if(tmp1!=tmp2)
			uguali=1;
		enqueue(ca,tmp1);
		enqueue(c2,tmp2);
	}
	while(!isEmpty(c1))
	{
		//se entra qui, � sicuro che c1 ha ancora elementi, se non fosse entrata avrebbe significato che fosser gi� vuota
		uguali=0;
		enqueue(ca,dequeue(c1));
	}	
	
	while(!isEmpty(c1))
	{
		//se entra qui, ragionamento analogo
		uguali=0;
		enqueue(cb,dequeue(c2));
	}	
	
	while(!isEmpty(ca))
	{
		//rimetto a posto la prima coda
		enqueue(c1,dequeue(ca));
	}	
	while(!isEmpty(cb))
	{
		//rimetto a posto la seconda coda
		enqueue(c2,dequeue(cb));
	}	
	free(ca);
	free(cb);
	return uguali;
}




//usando size
int codaCompare(coda c1, coda c2)
{
	if(size(c1!=size(c2)))
		return 0;
	coda cA=creaCoda(), cB=creaCoda();
	int tmp1, tmp2, uguali=1;

	while(!isEmpty(c1) && !isEmpty(c2))
	{
		tmp1=dequeue(c1);
		tmp2=dequeue(c2);
		if(tmp1!=tmp2)
			uguali=1;
		enqueue(ca,tmp1);
		enqueue(c2,tmp2);
	}
	
	while(!isEmpty(ca))
	{
		enqueue(c1,dequeue(ca));
		enqueue(c2,dequeue(cb));
	}	
	free(ca);
	free(cb);
	return uguali;
}

//creare una funzipone in grado di verifica che un elemno q sia preente in una oila (senza alternarne il contenuto)

int cercaQ(pila p, int q)
{
	pila p2=creaPila();
	int tmp, presente=0;
	
	while(!isEmpty(p))
	{
		tmp=pop(p);
		if(tmp=q)
			presente=1
			push(p2,tmp);
	}
	while(!isEmpty(p2))
	{
		push(p,pop(p2));
	}
	free(p2);
	return presente;
}
*/

//funzione in grado di restituire la prima metà della coda, mentre nella coda originale rimane la seconda met�
coda shoeHalfC(coda c) //restituisce un'altra coda
{
	coda c2 = creaCoda();
	int conto=0;
	int limite = 0;

	// conto quante volte posso fare il dequeue, perciò il numero di elementi
	while(!isEmpty(c)){
		enqueue(c2, dequeue(c));
		limite++;
	}

	// ripristino il valore di c 
	while(!isEmpty(c2)){
		enqueue(c, dequeue(c2));
	}


	while(conto < limite/2){	
		enqueue(c2, dequeue(c));
		conto++;
	}

	return c2;
}


//funzione che restituisce la somma tra il primo e l'ultimo elemento (in ordine di uscita) di una coda. Il contenuto della coda deve restare in alterato

int sommaPrimoEultimo(coda c){

	coda c2 = creaCoda();
	
	int primo = dequeue(c);

	enqueue(c2, primo);

	int ultimo = 0;            
	while(!isEmpty(c)){
		ultimo = dequeue(c);
		enqueue(c2, ultimo);		
	}

	while(!isEmpty(c2)){
		enqueue(c, dequeue(c2));
	}
	
	return primo + ultimo;
}


//funzione che restituisce la somma tra il primo e l'ultimo elemento (in ordine di uscita) di una pila. Il contenuto della coda deve restare in alterato	

int sommaPrimoEultimo(pila c){

	pila c2 = creaPila();
	
	int primo = pop(c);

	push(c2, primo);

	int ultimo = 0;            
	while(!isEmpty(c)){
		ultimo = pop(c);
		push(c2, ultimo);		
	}

	while(!isEmpty(c2)){
		push(c, pop(c2));
	}
	
	return primo + ultimo;
}














