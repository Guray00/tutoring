import java.util.ArrayList;
import java.time.LocalDate;
import java.util.Scanner;
import java.time.format.DateTimeFormatter;
import java.time.format.FormatStyle;

public class ContoCorrente {
	public ArrayList<Movimento> transazioni;

	// costruttore del conto corrente
	public ContoCorrente(){
		transazioni = new ArrayList<Movimento>();
	}

    // consente di fare il deposito
	public void deposita(double importo, LocalDate data){
		Movimento tmp = new Movimento(importo, data, "deposito");
		transazioni.add(tmp);
	}

    // consente di fare il prelievo
	public boolean prelievo(double importo, LocalDate data){	
		// saldo >= importo
		if (this.getSaldo() >= importo){
			Movimento tmp = new Movimento(importo, data, "prelievo");
			transazioni.add(tmp);

			return true;
		}

		else {
			System.out.println("Mi dispiace, prelievo di "+ importo + " non consentito in quanto il saldo è di solo " + getSaldo());
			return false;
		}

	}

    // stampa a schermo la lista dei movimenti
	public void elencoMovimenti(){
		for (Movimento m : transazioni){
			m.print();
		}
	}


    // restituisce 
	public double getSaldo(){

		double saldo = 0;
		for(Movimento m : transazioni){
			switch(m.tipologia){
				case "deposito":
					saldo += m.importo;
					break;
				case "prelievo":
					saldo -= m.importo;
					break;
                case "ricarica":
                    saldo -= m.importo;
                    break;
			}
		}

        return saldo;
	}

    // metodo che aggiunge una ricarica alla lista dei movimenti
    public boolean ricaricaTel(double importo, LocalDate data){
        if(getSaldo() >= importo){
            Movimento tmp = new Movimento(importo, data, "ricarica");
            transazioni.add(tmp);

            return true;
        }
       	
        System.out.println("Mi dispiace, ricarica di "+ importo + " non effettuata perchè il saldo è di solo " + getSaldo());
        return false;
        
    }
    
    public void saldo(){
        System.out.println("Saldo: " + getSaldo());
    }

    private double inserimentoImporto(){
        Scanner scan = new Scanner(System.in);
        System.out.print("Inserisci l'importo: ");
        double importo = scan.nextDouble();
        System.out.println("");
        return importo;
    }

    private LocalDate inserimentoData(){
        Scanner scan = new Scanner(System.in);
        System.out.print("Inserisci la data: ");
        String d = scan.next();

        DateTimeFormatter dtf = DateTimeFormatter.ofPattern("dd-MM-yyyy");
        LocalDate data = LocalDate.from(dtf.parse(d));
        System.out.println("");
        return data;
    }

    // questa funzione deve mostrare a schermo tutti i comandi che l'utente può scegliere
    // identificati da un valore numerico intero (1. deposito 2. prelievo etc...) tra le scelte
    // voglio includere "0" che dice al programma che non voglio continuare a fare le operazioni
    public boolean menu(){

        System.out.println("\n -----Applicazione avviata----- ");
		System.out.println("Digitare una delle seguenti opzioni del menu' ");
		System.out.println("1) deposita");
		System.out.println("2) preleva");
		System.out.println("3) Elenco Movimenti");
		System.out.println("4) Saldo");
		System.out.println("5) Ricarica");
		System.out.println("0) Esci \n");
            
        System.out.print("Inserisci la scelta: ");
        Scanner scan = new Scanner(System.in);
        int scelta = scan.nextInt();
        System.out.print("");

        
        switch(scelta){
            case 1:
                double importo = inserimentoImporto();
                LocalDate data = inserimentoData();

                deposita(importo, data);
                break;

            case 2:
                double importo2 = inserimentoImporto();
                LocalDate data2 = inserimentoData();

                prelievo(importo2, data2);
                break;

            case 3:
                elencoMovimenti();
                break;
            
            case 4:
                saldo();
                break;
            
            case 5: 
                double importo3 = inserimentoImporto();
                LocalDate data3 = inserimentoData();
                ricaricaTel(importo3, data3);
                break;

            default:
                return false;

        }

        return true;
    }
            

}
