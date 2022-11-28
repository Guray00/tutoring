prezzoTrote = float(input("Inserisci il prezzo delle trote: "))
prezzoCarpe = float(input("Inserisci il prezzo delle carpe: "))

PesoMinimo = 500 # grammi
sconto = 0.2     # 20%

#while True è un ciclo infinito
while True:
    #chiedo se ci sono clienti
    cliente = input("C'è un cliente? (s/n) ")
    if cliente == "n":
        #se non ci sono clienti esco dal ciclo e dunque termino il programma
        break
    #chiedo il numero di trote
    numTrote = int(input("Quante trote? "))
    #inizializzo una variabile per il totale dei due tipi di pesce
    #devo farlo prima del ciclo perchè altrimenti non sarebbe consistente
    totTrote = totCarpe = 0
    #ciclo pr le trote
    for i in range(numTrote):
        peso = float(input("Quanto pesa la trota[IN GRAMMI]? "))
        #controllo che il peso sia maggiore del peso minimo
        #in modo da applicare lo sconto
        if peso > PesoMinimo:
            totTrote += prezzoTrote*(1-sconto)*peso/1000
        else:
            totTrote += prezzoTrote*peso/1000
    #stesso ragionamento per le carpe
    numCarpe = int(input("Quante carpe? "))
    for i in range(numCarpe):
        peso = float(input("Quanto pesa la carpa[IN GRAMMI]? "))
        totCarpe += prezzoCarpe*peso/1000
    #stampo il totale dopo i due cicli ma sempre all'interno del while
    print("Il totale per le trote è", totTrote)
    print("Il totale per le carpe è", totCarpe)

