Scrivere la classe Prodotto con i seguenti dati membri:

- Codice (stringa)
- Descrizione (stringa)
- Data di scadenza

ed i metodi:

- Costruttore
- Get e Set
- il metodo (override) equals per confrontare due prodotti in base al codice

Derivare da questa la classe ProdottoPezzo che rappresenta un prodotto venduto al pezzo, con i dati:

- Prezzo (float)

Derivare inoltre la classe Prodotto Peso che rappresenta un prodotto venduto a peso, con i dati:

- PrezzoAlKg (float)
- PesoKg (float)

ed il metodo:

- Prezzo che effettua la moltiplicazione del peso per il prezzo al kg

Scrivere la classe Prodotti che contiene due liste di oggetti, una di tipo ProdottoPrezzo e una di tipo ProdottoPeso con i metodi:

- void Aggiungi (Prodotto Pezzo) che permette di aggiungere un prodotto alla lista

- void Aggiungi(ProdottoPeso) che permette di aggiungere un prodotto alla lista
- 2 metodi Prodotto Ricerca che ricerca il prodotto in base al codice e lo restituisce (altrimenti restituisce null)
- 2 motodi boolean Rimuovi che effettua la rimozione del prodotto dalla lista
- 2 motodi float Prezzo che restituisce il prezzo totale di tutti i prodotti della lista
- 2 motodi Prodotti ScadutiAl (GregorianCalendar) che restituisce un oggetto di tipo Prodotti contenente tutti i prodotti scaduti ad una certa data, passata come parametro.

Creare un Main di test che verifica tutte le funzionalità delle classi.