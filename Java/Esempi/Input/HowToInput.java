import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class inputTest {
    public static void main(String[] args) throws IOException {

        
        InputStreamReader r = new InputStreamReader(System.in);
        BufferedReader    br= new BufferedReader(r);

        System.out.print("Inserisci il tuo nome: ");
        String name = br.readLine();
        System.out.println("Benvenuto "+name);   

    }
}
