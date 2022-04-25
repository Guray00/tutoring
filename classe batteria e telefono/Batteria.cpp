#include "Batteria.h"

// costruttore di default
Batteria::Batteria()
{
  capacita=100; 
  livello=0; 
}

// costruttore con parametri
Batteria::Batteria(int p_capacita, int p_livello)
{
    capacita=p_capacita; 
    livello=p_livello; 
}

int Batteria::getCapacita()
{
  return capacita; 
}

int Batteria::getLivello()
{
  return livello; 
}

void Batteria::carica(int p_unita)
{
  livello = livello + p_unita; 
}

void Batteria::consuma()
{
  livello=livello-1; 
}

int Batteria::setCapacita(int p_capacita){
  capacita = p_capacita;
}

int Batteria::setLivello(int p_livello){
  livello = p_livello;
}
