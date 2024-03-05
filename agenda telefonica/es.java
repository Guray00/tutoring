/*
Un oggetto della classe AgendaTelefonica permette di gestire una semplice agenda (rubrica) telefonica. 

Ogni utenza dell’agenda ha: 

- un nome
- un cognome
- un numero di telefono

L’agenda può gestire un numero limitato di utenze. Tale numero deve essere scelto all’atto della creazione di un oggetto della classe AgendaTelefonica.

Gestire l'agenda telefonica come contenente 3 vettori:

- un vettore di nomi
- un vettore di cognomi
- un vettore di numeri di telefono

a cui ogni i-esima cella fa riferimento a un singolo utente.k

Implementare nella classe i seguenti metodi:

- `public AgendaTelefonica(int dim)`: costruttore crea un’agenda che gestisce al massimo dim utenze.
- `public boolean inserisci(String n, String c, String t)`: se l’agenda non è piena, inserisce in agenda una nuova utenza con nome n, cognome c e numero di telefono t; poi restituisce true. Se l’agenda è piena restituisce false.
- `public String trova (String n, String c)`: restituisce il numero di telefono di un’utenza con nome n e cognome c, se una tale utenza è presente in agenda; altrimenti restituisce null.
- `public void listaUtenze()`: visualizza sullo standard output la lista completa delle utenze in agenda.

Esempio

Lista utenti:

- Mario Rossi 12345
- Luigi Verdi 12345
- Antonio Bianchi 54321


==========================================================


Scrivere inoltre una classe di test che:

- Permette all’utente di creare un’agenda di dimensione a sua scelta;
- Mostra ripetutamente all’utente un menù dal quale sia possibile scegliere una tra le

seguenti opzioni:
1. Inserimento di una nuova utenza nell’agenda;
2. Ricerca di una nuova utenza nell’agenda;
3. Visualizzazione di tutte le utenze dell’agenda sullo standard output;
4. Uscita dal menù.
Ogni volta che tale menù viene presentato all’utente, la classe di test dovrà effettuare sull’agenda
l’azione corrispondente a quella che l’utente selezionerà, chiedendo ove necessario l’inserimento
di ulteriori dati (ad esempio nel caso l’utente selezioni l’opzione 1 o 2). Se l’utente seleziona
l’opzione 4, il test deve terminare.

*/

public class es{

	public static void main(String[] args){

		System.out.println("Hello World!");

	}
}