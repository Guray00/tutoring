//  - parti (velocità 0 inizialmente)
//	- accelera (aumento di 1 la velocità)
//	- frena (diminuisco di 1 la velocità)
//	- stop (termino la corsa, non posso più ripartire o accelerare o decelerare)
//	- calcolo metri (restituisce il numero di metri percorsi dalla partenza 
//    e il tempo totale della corsa)

public class Vettura {
    private int velocita1 = 15;
    private int velocita2 = 30;
    private int velocita3 = 45;
    int velocita;

    public Vettura(){
        velocita = 0;
    }

    public void parti(){
      velocita = 0;
    } 

    public void acellera(){
        if(velocita == velocita1){
            velocita = velocita2;
        }
        
        else if(velocita == velocita2){
            velocita = velocita3;
        }

        else if(velocita== 0){
            velocita = velocita1;
        }   
    }  

    public void frena(){
        if(velocita == velocita1){
            velocita = 0;
        }
        
        else if(velocita == velocita2){
            velocita = velocita1;
        }

        else if(velocita == velocita3){
            velocita = velocita2;
        }   
    } 

}
