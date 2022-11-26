grado = input("Inserisci il grado: ")

if grado == "A" or grado == 'a':
    print("il voto è ottimo")
elif grado == "B" or grado == 'b':
    print("il voto è buono")
elif grado == "C" or grado == 'c':
    print("il voto è sufficiente")
elif grado == "D" or grado == 'd':
    print("il voto è insufficiente")
elif grado == "E" or grado == 'e':
    print("il voto è gravemente insufficiente")
else:
    print("il voto è non valido")