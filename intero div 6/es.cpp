int contaDiv6(float* v, int dim){
  int count = 0;
  for (int i = 0; i < dim; i++) {
    int parte_intera = (int) v[i];
    if ( parte_intera %6 == 0){
      count++;
    }
  }
  return count;
}


int main(){
  int dim;

  cout << "Inserire la dimensione del vettore: ";
  do {
    cin >> dim;
  } while (dim <= 0);

  // creo il vettore dinamicamente della dimensione corretta
  float* v = new float [dim];
  
  cout << "Inserisci un valore: "; 
  for (int i = 0; i < dim; i++){
    cin >> v[i];
  }

  int risultato = contaDiv6(v, dim);
  cout << "Sono stati trovati " << risultato << " elementi"<<endl;

  // liberiamo la memoria prima della chiusura del programma
  delete[] v;
  
  return 0;
}