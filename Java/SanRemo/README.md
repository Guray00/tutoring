# San Remo

## Classi
Si vogliono rappresentare i dischi prodotti dai cantanti presenti a San Remo
Date le seguenti classi:
Classe BranoMusicale
Con attirubuti:
- titolo del brano (String)
- anno di pubblicazione (int)
- duratain secondi (int)

Classe Disco
Con attirubuti:
• nome del disco (String)
• un Vector (o Array list) di oggetti di tipo BranoMusicale
Realizzare i seguenti punti:
1. Creare le due classi con i relativi costruttori con parametri
2. Realizzare per entrambe le classi i metodi get e set necessari
3. Nella classe BranoMusicale realizzare il metodo String toString() che restituisce
una stringa contenente tutte le informazioni relative all'oggetto
4. Nella classe Disco creare i seguenti metodi:
• boolean ricerca (String titolo) che restituisce true se il brano con un dato titolo
esiste e false se il brano non esiste
• boolean aggiungiBrano (BranoMusicale brano) aggiunge un brano alla lista, 
restituendo true se il brano passato come parametro non è già presente nella lista
(controllare il titolo). Se esiste già un brano con quel titolo, restituisce false
• int contaBraniAnno (int anno) che conteggia e restituisce il numero di brani 
prodotti in un certo anno
• BranoMusicale maxDurata() che ritorna il brano musicale con la durata maggiore
5. Scrivere un main che testi i metodi delle classi precedentemente definite