#include "prodottoForno.h"
#include <string>

using namespace std;

// coststruttore di default
ProdottoForno::ProdottoForno(){
    scadenza=0; 
    codice=""; 
    nome="";  
}

// costruttore con parametri
ProdottoForno::ProdottoForno(string p_codice, string p_nome, int p_scadenza){
  scadenza=p_scadenza; 
  codice=p_codice; 
  nome=p_nome;  
}

int ProdottoForno::getScadenza()
{
  return scadenza; 
}

string ProdottoForno::getNome()
{
  return nome; 
}

string ProdottoForno::getCodice(){
    return codice; 
}

void ProdottoForno::setScadenza(int p_scadenza){
    scadenza=p_scadenza; 
}

void ProdottoForno::setNome(string p_nome){
  nome=p_nome; 
}

void ProdottoForno::setCodice(string p_codice){
  codice=p_codice; 
}