# AutoMoto

## Classi auto e modo
Implementare le classi Auto e Moto contenenti:
- i parametri marca, modello, cilindrata, matricola, potenza (implementare i metodi get e set per un solo 
attributo a scelta)
- un costruttore con tutti i parametri sopra citati tranne matricola
- il metodo … generaMatricola(…) che le due classi dovranno essere obbligate a implementare e che 
dovrà essere utilizzato nei rispettivi costruttori per generare la matricola così composta:
- per le auto sarà un progressivo preceduto dalla lettera A (es. A1, A2 ecc.)
- per le moto sarà un progressivo (diverso da quello delle auto) preceduto dalla lettera M (es. 
M1, M2 ecc.)

## Classe rivenditore
Implementare la classe Rivenditore contenente il solo attributo nome nella quale:
- creare una struttura dati capace di contenere sia auto che moto
- implementare un metodo ... addMezzo(...) che permetta di aggiungere indistintamente sia auto che moto alla struttura dati
- implementare un metodo ... removeMezzo(...) che permetta di rimuovere un mezzo ricevuta la sua matricola come parametro di input
- implementare un metodo che restituisca la quantità di moto 
 
## Main
In una classe contenente un main, creare un oggetto di tipo Rivenditore, inserire almeno una moto e un’auto è fare un test utilizzo di tutti i metodi implementati.
 D a fare solo dopo aver implementato quanto chiesto prima:
- Nella classe Rivenditore implementare un metodo che stampi tutte le auto e le moto specificando i dettagli nel seguente modo:
```
MOTO Matr. M002; Marca: Yamaha; Mod: R1; Cilindrata 1000
AUTO Matr. A023; Marca: FIAT; Mod: Panda; Cilindrata 1200
MOTO Matr. M003; Marca: Honda; Mod: CBR; Cilindrata 1000 
```
- per le moto, un metodo … tipoPatenteMinima(…) che restituisca:
	- la stringa “A” se la potenza è superiore a 35kW
	- a stringa “A2” se la cilindrata è superiore a 125 o la potenza è superiore a 11 kW
- la stringa “A1” se la cilindrata è superiore a 50 potenza è superiore a 4 kW
- la stringa “AM” per tutti gli altri casi
