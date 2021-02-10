import java.lang.reflect.Array;
import java.util.ArrayList;

public class AgenziaViaggi {

    public static void main(String[] args){

        ArrayList<Giorno> giorni  = new ArrayList<Giorno>();
        ArrayList<Giorno> giorni2 = new ArrayList<Giorno>();
        ArrayList<Giorno> giorni3 = new ArrayList<Giorno>();


        Giorno gg1 = new Giorno (4, "Ponte Vecchio", "Ponte molto antico");
        Giorno gg2 = new Giorno (3, "Palazzo Vecchio", "Palazzo molto antico");
        Giorno gg3 = new Giorno (3, "Colosseo", "Colosseo molto antico");

        giorni.add(gg1);
        giorni.add(gg2);

        giorni2.add(gg2);

        giorni3.add(gg2);
        giorni3.add(gg3);


        ViaggioPerSingoli v1 = new ViaggioPerSingoli("Firenze", 350, giorni);
        ViaggioPerSingoli v2 = new ViaggioPerSingoli("Roma", 250, giorni3);
        ViaggioPerGruppi  v3 = new ViaggioPerGruppi ("Firenze", 300, giorni2, 5, 2);
        ViaggioPerGruppi  v4 = new ViaggioPerGruppi ("Firenze 2", 390, giorni, 5, 2);


        v1.setQuotaFissa(5);

        ArrayList<Viaggio> viaggi = new ArrayList<>();
        viaggi.add(v1);
        viaggi.add(v2);
        viaggi.add(v3);
        viaggi.add(v4);

        Agenzia a = new Agenzia("Test", viaggi);

        //ArrayList<Viaggio> test = a.viaggiCostoInferiore(800);

        ArrayList<ViaggioPerGruppi> test = a.giorniSuperati(1);
        for (int i = 0; i < test.size(); i++){
            System.out.println(test.get(i).toString());
        }


    }
}
