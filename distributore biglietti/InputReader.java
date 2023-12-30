import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class InputReader {

  private static BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

  public InputReader() {

  }

  public static String readString(String messaggio) {
    String input;
    while (true) {
      try {
        System.out.print(messaggio);
        input = bufferedReader.readLine();
        return input.trim();
      } catch (IOException e) {
        System.out.println("Dato non corretto, inserire nuovamente");
      } catch (NumberFormatException e) {
        System.out.println("Dato non corretto, inserire nuovamente");
      }
    }
  }

  public static char readCharacter(String messaggio) {
    String input;
    while (true) {
      try {
        System.out.print(messaggio);
        input = bufferedReader.readLine();
        input = input.trim();
        if (input.length() == 1) {
          return input.charAt(0);
        }else {
          System.out.println("Dato non corretto, inserire nuovamente");
        }				
      } catch (IOException e) {
        System.out.println("Dato non corretto, inserire nuovamente");
      } catch (NumberFormatException e) {
        System.out.println("Dato non corretto, inserire nuovamente");
      }
    }
  }

  public static int readInteger(String messaggio) {

    String input;
    while (true) {
      try {
        System.out.print(messaggio);
        input = bufferedReader.readLine();
        int numero = Integer.parseInt(input.trim());
        return numero;
      } catch (IOException e) {
        System.out.println("Dato non corretto, inserire nuovamente");
      } catch (NumberFormatException e) {
        System.out.println("Dato non corretto, inserire nuovamente");
      }
    }

  }

  public static double readDouble(String messaggio) {
    String input;
    while (true) {
      try {
        System.out.print(messaggio);
        input = bufferedReader.readLine();
        double numero = Double.parseDouble(input.trim());
        return numero;
      } catch (IOException e) {
        System.out.println("Dato non corretto, inserire nuovamente");
      } catch (NumberFormatException e) {
        System.out.println("Dato non corretto, inserire nuovamente");
      }
    }
  }

  public static float readFloat(String messaggio) {
    String input;
    while (true) {
      try {
        System.out.print(messaggio);
        input = bufferedReader.readLine();
        float numero = Float.parseFloat(input.trim());
        return numero;
      } catch (IOException e) {
        System.out.println("Dato non corretto, inserire nuovamente");
      } catch (NumberFormatException e) {
        System.out.println("Dato non corretto, inserire nuovamente");
      }
    }
  }
}