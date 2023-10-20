import java.util.Scanner;

public class RandomCocktail {



        //array di 30 elementi
        int gradoAlcolico[] = new int[30];
        public void aggiungiCocktail() {
            //genero un grado alcolico casuale
            int tmp = (int) (Math.random() * 100) + 1;

            //aggiungo il cocktail all'array list nella prima posizione libera
            for (int i = 0; i < 30; i++) {
                if (gradoAlcolico[i] == 0) {
                    gradoAlcolico[i] = tmp;
                    break;
                }
                else {
                    continue;
                }
            }
        }

        public void stampaCocktail() {
            for (int i = 0; i < 30; i++) {
                if (gradoAlcolico[i] != 0) {
                    System.out.println(gradoAlcolico[i]);
                }
            }
        }

        public int mediaAlcolica() {
            int somma = 0;
            int div = 0;
            for (int i = 0; i < 30; i++) {
                if (gradoAlcolico[i] != 0) {
                    somma = somma + gradoAlcolico[i];
                    div++;
                }
            }
            return somma / div;
        }

        public void max() {
            int max = 0;
            int pos = 0;
            for (int i = 0; i < 30; i++) {
                if (gradoAlcolico[i] > max) {
                    pos = i;
                    max = gradoAlcolico[i];
                }
            }

            System.out.println("Il cocktail più alcolico è il numero:" + pos + " con una gradazione di " + max);
        }

        public void min() {
            int min = 100;
            int pos = 0;
            for (int i = 0; i < 30; i++) {
                if (gradoAlcolico[i] < min) {
                    pos = i;
                    min = gradoAlcolico[i];
                }
            }

            System.out.println("Il cocktail meno alcolico è il numero:" + pos + " con una gradazione di " + min);
        }

        public void cercaCocktail(int gradazione){
            boolean found = false;
            for (int i = 0; i < 30; i++) {
                if (gradoAlcolico[i] == gradazione) {
                    found = true;
                    System.out.println("Il cocktail con la gradazione " + gradazione + " è il numero " + i);
                }
            }
            if (!found) {
                System.out.println("Non esiste cocktail con la gradazione " + gradazione);
            }
        }


    public static void main(String[] args) {

        RandomCocktail cocktail = new RandomCocktail();

        Scanner scanner = new Scanner(System.in);

        int choice = 0;

        do {
            System.out.println();
            System.out.println("Scelta 0: chiudi il programma");
            System.out.println("Scelta 1: aggiungi dei cocktail");
            System.out.println("Scelta 2: visualizza i cocktail");
            System.out.println("Scelta 3: stampa la media alcolica");
            System.out.println("Scelta 4: stampa il cockail più alcolico");
            System.out.println("Scelta 5: stampa il cocktail meno alcolico");
            System.out.println("Scelta 6: stampa tutti i cocktail con una data gradazione");

            choice = scanner.nextInt();

            switch (choice) {
                case 0:
                    break;

                case 1: {
                    System.out.println("Quanti ne vuoi aggiungere?");
                    int n = scanner.nextInt();

                    if (n > 30){
                        System.out.println("Puoi aggiungere al massimo 30 cocktail");
                        continue;
                    }
                    while (n > 0) {
                        cocktail.aggiungiCocktail();
                        n--;
                    }
                    break;
                }

                case 2: {
                    cocktail.stampaCocktail();
                    break;
                }

                case 3: {
                    int media = cocktail.mediaAlcolica();
                    System.out.println("Media alcolica: " + media);
                    break;
                }
                case 4: {
                    cocktail.max();
                    break;
                }
                case 5: {
                    cocktail.min();
                    break;
                }
                case 6: {
                    System.out.println("Inserisci la gradazione");
                    int gradazione = scanner.nextInt();

                    cocktail.cercaCocktail(gradazione);
                    break;
                }
                default:
                    System.out.println("Scelta non valida");


                }



        } while (choice != 0);

        System.out.println("Alla prossima!");
    }


}
