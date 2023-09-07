# inserisco il numero delle chiamate
n = int(input("inserire il numero di chiamate: "))
p = 0

# se il numero è minore di 80
if n<80:
  # imposto che il prezzo è di 5 euro (fisso)
  p = 5

# se invece è compreso tra 80 e 140
elif 80 < n < 140:

  # calcolo il prezzo
  p = 5 + (n-80)*0.10

  
# altrimenti
else: 
  # calcolo il prezzo 
  p= 5 + (60)*0.10 + (n - 80 - 60)*0.07


# calcolo il prezzo medio a chiamata
media = p / n

# faccio vedere all'utente il prezzo da pagare
print("il prezzo totale da pagare vale " + str(p))
print("Il costo medio a chiamata vale " + str(media))
