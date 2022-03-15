print("Inserisci un carattere")
c = input()
if c >= "a" and c <= "z":
    print("Carattere minuscolo")
else:
    if c >= "A" and c <= "Z":
        print("Carattere maiuscolo")
    else:
        print("Non è un carattere")
