package tris;

public class GiocoTris {

	private static final int[][] POSIZIONI = 
		{
			{0,0}, // 1
			{0,1}, // 2
			{0,2}, // 3
			{1,0}, // 4
			{1,1}, // 5
			{1,2}, // 6
			{2,0}, // 7 
			{2,1}, // 8
			{2,2}, // 9
		};

	private static final char[] SIMBOLI = {'X', 'O'};
	
	private static final int[][] COMBINAZIONI_VINCENTI = 
		{
			{1, 2, 3}, // 1-2-3
			{4, 5, 6}, // 4-5-6
			{7, 8, 9}, // 7-8-9
			{1, 5, 9}, // 1-5-9
			{7, 5, 3}, // 7-5-3
			{1, 4, 7}, // 1-4-7
			{2, 5, 8}, // 2-5-8
			{3, 6, 9}  // 3-6-9
		};
	
	private int turno; // può valere 0/1
	private char[][] campo; // rappresenta il campo da gioco
	private boolean partitaInCorso = false; // indica se la partita è ancora in corso
	private String[] giocatori = new String[2]; // contiene i 2 giocatori
	private String vincitore; // contiene il nome del vincitore
	private int numeroGiocate; // conto il numero totale di giocate
	
	public void impostaGiocatori(String nome1, String nome2) {
		
		this.giocatori[0] = nome1;
		this.giocatori[1] = nome2;
	}
	
	public void iniziaPartita() {
		
		this.campo = new char[3][3];
		this.partitaInCorso = true;
		this.turno = 0;
	}

	public int getTurno() {
		return this.turno;
	}
	
	public String getGiocatoreTurno() {
		return this.giocatori[this.turno];
	}
	
	public char getSimbolo() {
		return SIMBOLI[this.turno];
	}
	
	public boolean isPartitaInCorso() {
		return partitaInCorso;
	}
	
	public boolean gioca(int posizione) {
		
		if (!this.partitaInCorso) {
			return false;
		}
		return gioca(posizione, SIMBOLI[this.turno]);
	}
	
	public String getVincitore() {
		return this.vincitore;
	} 
	
	
	private boolean gioca(int posizione, char simbolo) {

		int x = POSIZIONI[posizione - 1][0];
		int y = POSIZIONI[posizione - 1][1];
		
		if (this.campo[x][y] != 0) {

			System.out.println("Giocata non valida, posizione già usata");
			
		} else {
			
			this.campo[x][y] = simbolo;
			if (verificaVittoria()) {
				this.partitaInCorso = false;
				this.vincitore = this.giocatori[this.turno];
			} else {
				this.numeroGiocate++;
				if (this.numeroGiocate == 9) {
					this.partitaInCorso = false;
					this.vincitore = "Parità";
				}
			}
			if (this.partitaInCorso) {
				this.turno++;
				if (this.turno > 1) {
					this.turno = 0;
				}
			}
		}
		
		return this.partitaInCorso;
	}
	
	private boolean verificaVittoria() {
		
		for(int i = 0;i < COMBINAZIONI_VINCENTI.length;i++) {
			
			int[] combinazione = COMBINAZIONI_VINCENTI[i];
//			controllo che tutti i simboli siano uguali
			int[] coord1 = POSIZIONI[combinazione[0] - 1];
			int[] coord2 = POSIZIONI[combinazione[1] - 1];
			int[] coord3 = POSIZIONI[combinazione[2] - 1];
			if (this.campo[coord1[0]][coord1[1]] != 0 && 
					this.campo[coord1[0]][coord1[1]] == this.campo[coord2[0]][coord2[1]] &&
					this.campo[coord2[0]][coord2[1]] == this.campo[coord3[0]][coord3[1]]) {
//				ho trovato la combinazione
				return true;
			}
		}
		return false;
	}
	
	public void stampaCampo() {
		
		System.out.println("--------------");
		for(int i = 0;i < this.campo.length;i++) {
			
			char row[] = this.campo[i];
			for(int j = 0;j < row.length; j++) {
				
				System.out.print(this.campo[i][j]);
				System.out.print(" | ");
			}
			System.out.println();
		}
		System.out.println("--------------");		
	}
	
}
