
import java.util.Scanner;
public class contaZeriMatrice {

    public static Integer[][] randomMatrice(Integer[][] matrice){
        for (int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                //calcolo numero casuale tra 0 e 9
                matrice[i][j] = (int)(Math.random() * 10);
            }
    }
    return matrice;
}

    public static void stampaMatrice(Integer[][] matrice){
        for (int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                System.out.print(matrice[i][j] + "  ");
            }
            System.out.println();
        }
    }

    public static int contaZeri(Integer[][] matrice){
        int zeri = 0;
        for (int i = 0; i < 10; i++){
            for(int j = 0; j < 10; j++){
                if (matrice[i][j] == 0){
                    zeri++;
                }
            }
        }
        return zeri;
    }
    
    public static void main(String[] args) {
        
        //creo una matrice 10x10
        Integer[][] matrice = new Integer[10][10];

        matrice = randomMatrice(matrice);

        stampaMatrice(matrice);        

        System.out.println("Il numero di zeri è: " + contaZeri(matrice));

    }
}

