def leggi_valuta(nome_file):
  cambio={}
  
  with open(nome_file, 'r', encoding='utf-8') as file:
    
    for line in file:
      campi  = line.strip().split('	')
      valuta = campi[0]
      valore = campi[1]
      
      cambio[valuta] = float(valore)
      
  cambio["EUR"] = 1.0
  return cambio
  
def leggi_paesi(nome_file):
  paesi= {}
  
  with open(nome_file, 'r', encoding='utf-8') as file:
    for line in file:
      campi= line.strip().split(';')
      valuta= campi[1]
      paese=campi[0]
      prezzo= float(campi[2])
      paesi[valuta]= [paese, prezzo]
      
  return paesi


def main():
  cambio = leggi_valuta("exchange.txt")
  paesi = leggi_paesi("iphone13mini.txt")

  prezzo_min = 999999
  paese_min  = ""
    
  for valuta in paesi:
    prezzo_euro = cambio[valuta] * paesi[valuta][1]

    if prezzo_euro < prezzo_min:
      prezzo_min = prezzo_euro
      paese_min = paesi[valuta][0]
  
  print(f'il paese dove il prodotto costa meno é:{paese_min}\nprezzo in Euro:{prezzo_min:.2f}')
main()