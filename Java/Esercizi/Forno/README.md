# Forno
Si vogliono rappresentare i prodotti venduti da un forno.
Ogni ProdottoForno hai i seguenti dati:
- Codice (string)
- Nome (stringa)
- GiorniDaturata (int)
ed i metodi:
- Costruttore()
- Get e Set
- PrezzoFinale

I prodotti da forno si dividono in prodotti venduti al pezzo e prodotti venduti a peso
La classe ProdottoPezzo che rappresenta un prodotto venduto al pezzo, ha i dati:
- Prezzo (float)
- Iva (float)

Ed il metodo:
- PrezzoFinale che calcola il prezzo finale del prodotto (prezzo=prezzo+prezzo*iva/100)

La classe ProdottoPeso che rappresenta un prodotto venduto a peso, ha i dati:
- PrezzoAlKg (float)
- PesoKg (float)
- Iva (float)

ed il metodo:
- PrezzoFinale che calcola il prezzo finale del prodotto
(prezzo=prezzoAlKg*PesoKg+PrezzoAlKg*PesoKg *iva/100)
Scrivere la classe Forno che contiene una lista di oggetti di tipo ProdottoForno con i 
dati:
- Nome (stringa)
- Indirizzo (stringa)
Ed i metodi:
- Metodo che aggiunge un prodotto alla lista dei prodotti del forno (solo se non è 
già presente, controllare il codice)
- Metodo che restituisce il numero di prodotti venduti a peso
- Metodo che restituisce una lista di prodotti venduti al pezzo con prezzo maggiore 
di un valore passato come parametro
- Metodo che restituisce il prodotto venduto a peso con la durata maggiore
- Metodo che restituisce una stringa con tutti i dati dei prodotti del forno
Creare un Main di test che verifica tutte le funzionalità delle classi.
Metodo opzionale:Metodo che restituisce una lista di prodotti con il prezzo maggiore del prezzo medio di tutti i prodotti del forno ordinati in ordine decrescente di durat