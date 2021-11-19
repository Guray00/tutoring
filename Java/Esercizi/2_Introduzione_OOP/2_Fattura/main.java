import java.time.LocalDate;
import java.util.ArrayList;
import java.util.Scanner;

//ESERCITAZIONE IN AUTONOMIA/GRUPPO
//creare un'applicazione in grado di gestire un archivio di fatture
//ogni fattura � composta da
//	numero fattura (deve essere un progressivo per anno di riferimento es. 01/2021, 02/2021, etc..)
//	data fattura
//	cliente di riferimento (codice, denominazione, piva, indirizzo)
//	importo fattura
//
//l'applicazione deve mettere a disposizione le seguenti operazioni
//	registrazione di una nuova fattura
//	elenco di tutte le fatture registrate
//	calcolo del totale fatture
//	lista delle fatture di un determinato cliente
//	elenco dei clienti
public class main {

	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);

		int contafatture = 0;
		int totale=0;

		// TODO Auto-generated method stub

		Archivio archivio = new Archivio();

		while (true) {

			Cliente cliente = new Cliente();
			Fattura fattura = new Fattura();

			System.out.println("inserisci la scelta \n");
			System.out.println("1 nuova fattura");
			System.out.println("2 elenco fatture");
			System.out.println("3 totale fatture");
			System.out.println("4 elenco di fatture per cliente");
			System.out.println("5 elenco clienti");
			System.out.println("6 esci");
            
			int scelta = Integer.parseInt(scan.nextLine());
			switch (scelta) {
			case 1:
				System.out.println("inserisci denominazione");
				cliente.setDenominazione(scan.nextLine());
				System.out.println("inserisci codice fiscale"); // codice fiscale
				cliente.setCodice(scan.nextLine());
				System.out.println("inserisci partita iva");
				cliente.setPartitaIva(scan.nextLine());
				System.out.println("inserisci indirizzo");
				cliente.setIndirizzo(scan.nextLine());

				fattura.setCliente(cliente);
				fattura.setDataFattura(LocalDate.now());
				System.out.println("inserisci importo");
        
				fattura.setImporto(Integer.parseInt(scan.nextLine()));
				fattura.setNumeroFattura(contafatture++);

				archivio.registrac(cliente);
				archivio.registraf(fattura);

				break;
			case 2:
				    archivio.stampaFatture();
				break;
			case 3:
				for(Fattura obj : archivio.getListf()) {
					totale= totale+obj.getImporto();
					System.out.println("il totale delle fatture e':"+totale);
				}
				break;
			case 4:
				String codice = scan.nextLine();
				for (Fattura obj : archivio.getListf()) {
					if (obj.getCliente().getCodice().equals(codice)) {
						System.out.println(obj.toString()); }
					}
				break;
			case 5:
				for(Cliente obj : archivio.getListc()) {
					System.out.println(obj.toString());
				}
				break;
				
			default:
				
				return;
			}
		}
		/*
		 * Cliente cliente = new Cliente(); cliente.setCodice(codicecliente++);
		 * cliente.setDenominazione("andre");
		 * cliente.setIndirizzo("via a modigliani 10"); cliente.setPartitaIva("5000");
		 * archivio.registrac(cliente);
		 * 
		 * Fattura f1 = new Fattura(); f1.setCliente(cliente);
		 * f1.setDataFattura(LocalDate.now()); f1.setImporto(100);
		 * f1.setNumeroFattura(contafatture++);
		 * 
		 * archivio.registra(f1); // System.out.println(f1);
		 * 
		 * Cliente cliente2 = new Cliente(); cliente2.setCodice(codicecliente++);
		 * cliente2.setDenominazione("giacomo");
		 * cliente2.setIndirizzo("via del sangue 10"); cliente2.setPartitaIva("1111");
		 * archivio.registrac(cliente2);
		 * 
		 * Fattura f2 = new Fattura(); f2.setCliente(cliente2);
		 * f2.setDataFattura(LocalDate.now()); f2.setImporto(200);
		 * f2.setNumeroFattura(contafatture++);
		 * 
		 * archivio.registra(f2);
		 * 
		 * ArrayList<Fattura> lista = archivio.getList();
		 * 
		 * for (Fattura obj : lista) { System.out.println(obj.toString()); }
		 * 
		 * System.out.println(" il totale fatture : " + (f1.getImporto() +
		 * f2.getImporto()));
		 * 
		 * int cod = 1; for (Fattura obj : archivio.getList()) { if (cod ==
		 * obj.getCliente().getCodice()) { System.out.println(obj.toString()); } }
		 */
	}

}
