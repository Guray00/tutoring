#include <iostream>
using namespace std;

/*
Creare una classe televisore con la quale si possa
interagire per:
- accendere la tv
- spegnere la tv
- cambiare canale
- alzare il volume
*/

class Televisore {
  private:
    bool stato; // true => accesa, false => spenta
    int canale; 
    int volume;
    bool mute;
  
  public:

    // costruttore di default (senza parametri)
    Televisore(){
      canale = 0;
      volume = 0;
      stato  = false;
      mute   = false;
    }

    // costruttore con parametri
    Televisore(bool stato, int canale, int volume, bool mute){
      this->stato  = stato;
      this->canale = canale;
      this->volume = volume;
      this->mute   = mute;
    }

    void print(){
      cout<<"La televisione ha le seguenti caratteristiche:"<<endl;
      cout<<"- Stato: "<<stato<<endl;
      cout<<"- Canale: "<<canale<<endl;
      cout<<"- Volume: "<<volume<<endl;
      cout<<"- Mute: "<<mute<<endl;
    }    

    void switchStato(){
      if (stato == true){
        stato = false;
      }
        
      else {
        stato = true;
      }
    }

    // la funzione mi dice se la tv è attualmente accesa o spenta
    bool isAcceso(){
     return stato;
    }

    // funzione che consente di alzare il volume
    bool incVolume(){

      if(volume == 100){
        // non fare nulla, esci
        return false; 
      }

      else {
        // incrementa il volume solo se è minore di 100
        volume = volume + 1;
        return true;
      }
    }

  bool decVolume(){
    if(volume <= 0){
      return false;
    }
    else {
      volume = volume - 1;
      return true;
    }
  }

  // funzione che mi dice il canale in cui sono
  int getCanale(){
    return canale;
  }

  // funzione che mi cambia il canale
  void setCanale(int c){
    canale = c;
  }

  // mi dice se attualmente la tv è in muto
  bool isMute(){
    return mute;
  }

  void decCanale(){
    canale = canale - 1;
  }

  void incCanale(){
    canale = canale + 1;
  }

  int getVolume(){
    return volume;
  }

  void switchMute(){
    if(mute == true){
      mute = false;
    }
      
    else {
      mute = true;
    }
  }

};

int main(){

  Televisore tv(true, 15, 18, false);
  tv.print();

  tv.incVolume();
  tv.incVolume();

  tv.decVolume();
  tv.decVolume();

  tv.print();

  return 0;
}
