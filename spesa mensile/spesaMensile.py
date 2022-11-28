


x = int(input("Quante categorie di spesa? "))
#creo due liste vuote, una per i nomi e una per i valori
vettCategorie = list(range(x))
vettImporti = list(range(x))

#riempio le due liste
for i in range(x):
    vettCategorie[i] = input("Inserisci il nome della categoria: ")
    vettImporti[i] = int(input("Inserisci importo relativo: "))

#ciclo infinito
while True:
    print("Seleziona dal menu::")
    print("1) Visualizzazione categorie spesa con relativi importi;")
    print("2) Inserimento spesa in base alla categoria;")
    print("3) uscita dal programma;")
    x = int(input("Seleziona: "))

    if x == 1:
        for i in range(len(vettCategorie)):
            print(vettCategorie[i], "->", vettImporti[i])
            continue
    elif x == 2:
        #ci serve un altro ciclo infinito
        while True:
            a = input("Inserisci la categoria: ")
            #la funzione restituisce l'indice della prima occorrenza
            i = vettCategorie.index(a)
            print("Hai ancora a disposizione", vettImporti[i], "euro")
            b = int(input("Inserisci quanto hai speso: "))
            if vettImporti[i]-b < 0:
                print("Non hai abbstanza soldi!")
                #esco dal ciclo interno e torno al ciclo esterno
                break
            vettImporti[i] -= b
            print("Hai ancora a disposizione", vettImporti[i], "euro")
        continue
    elif x == 3:
        #termino il programma
        break
    else:
        print("Hai inserito un valore non valido.")
