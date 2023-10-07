stringa = input("Inserire una stringa: ")
stringa2 = input("Inserire una stringa: ")

l = len(stringa)
m = len(stringa2)

if l != m:
    print("Le stringhe sono diverse")
  
else:
    for i in range(l):
        if stringa[i] != stringa2[i]:
            print("Le stringhe sono diverse")
            return
    print("Le stringhe sono uguali")