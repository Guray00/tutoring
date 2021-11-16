# Rimuovi zeri

Scrivere la funzione C che riceve in ingresso un array 
di interi A e la sua dimensione N, ed opera nel modo 
seguente: 
-  Conta il numero M di valori di A diversi da zero;

- Rimuove da A gli elementi con valore zero e rialloca
  l’array A con dimensione uguale al numero dei soli 
  elementi diversi da 0. L’array A così riallocato 
  deve essere visibile dalla funzione chiamante.
    (suggerimento: copiare prima i valori di A diversi 
    da zero in un vettore di appoggio V);

- Restituisce la nuova dimensione di A come valore di ritorno.



## FAQ

### 1) Perchè hai creato un vettore dinamico nel main?

Ho usato un vettore dinamico nel main perchè noi vogliamo
passare un vettore alla funzione, ma su questo vettore
è richiesto di eseguire modifiche che comportano
la variazione del numero di elementi che vi
sono contenuti ed è scritto espressamente che la memoria 
va liberata, questo ci fa intuire la necessità di un vettore 
dinamico.