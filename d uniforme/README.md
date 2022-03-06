# Definizione
Un array di numeri interi positivi si dice d-uniforme, per qualche d > 0, se è ordinato in modo non crescente e se ogni valore appare esattamente d volte. 

Ad esempio: l’array `{13,13,13,8,8,8,6,6,6}` è 3-uniforme. La distribuzione di un array d-uniforme contenente n elementi, è l’array ottenuto ponendo le d copie di ciascun valore in n/d gruppi ordinati in modo decrescente, uno di seguito all’altro. Ad esempio la distribuzione dell’array {13,13,13,8,8,8,6,6,6} è l’array {13,8,6,13,8,6,13,8,6}.
Scrivere un metodo in Java--, detto distribuisci, che, dato in input un array a di numeri interi positivi ordinato in modo non crescente, restituisca la distribuzione di a, se a è d-uniforme per 
qualche d > 0, altrimenti restituisca l’array a stesso. 
Ad esempio, con input l’array {13,13,13,8,8,8,6,6,6} che è 3-uniforme, il metodo deve restituire l’array {13,8,6,13,8,6,13,8,6}, mentre con input l’array {13,13,13,8,8,8,6,6} che non è d-uniforme 
