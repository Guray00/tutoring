La codifica in binario dei numeri interi avviene in complemento a 2 sul PC. 
I numeri interi positivi vengono memorizzati nel seguente modo:

ES. +11

si codifica il numero 11 in binario facendo le divisioni successive per  2 fino ad azzerare il numero e prendendo i resti in ordine contrario.

```plaintext
11 : 2 = 5 e resto 1   ^
5  : 2 = 2 e resto 1   |
2  : 2 = 1 e resto 0   |
1  : 2 = 0 e resto 1   |

La codifica del numero 11 in binario è 1011.
Visto che il numero era positivo la codifica sul computer sarà 01011. L’ aggiunta del primo bit a 0 indica il segno +.

I numeri negativi invece nel seguente modo:

ES. -11

Quando il numero è negativo non basta anteporre 1 invece che 0, ma è necessario trasformare il numero in complemento a 2. Partendo dalla rappresentazione positiva del numero 01011 si deve fare il complemento a 1 ottenendo 10100 e poi si deve sommare 1 ottenendo 10101. 
Il numero 10101 sarà la codifica binaria del numero -11 sul PC.

Numeri tra -128 e +127 -> vettore di 8 celle

0 -> 0
1 -> 1
2 -> 10
3 -> 11
4 -> 100

256 -> 2^8 -> 1 byte ->  vettore di 8 elementi