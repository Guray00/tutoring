#- Recupera un paragrafo (di almeno 10 frasi) 
#  della divina commedia ed inseriscilo in una variabile
#- per ogni vocale, conta quante volte e' stata usata


#NB! I tre doppi apici consentono di scrivere una stringa su più righe


stringa = """
Nel mezzo del cammin di nostra vita
mi ritrovai per una selva oscura,
ché la diritta via era smarrita.

Ahi quanto a dir qual era è cosa dura
esta selva selvaggia e aspra e forte
che nel pensier rinova la paura!

Tant' è amara che poco è più morte;
ma per trattar del ben ch'i' vi trovai,
dirò de l'altre cose ch'i' v'ho scorte.

Io non so ben ridir com' i' v'intrai,
tant' era pien di sonno a quel punto
che la verace via abbandonai.

Ma poi ch'i' fui al piè d'un colle giunto,
là dove terminava quella valle
che m'avea di paura il cor compunto,

guardai in alto e vidi le sue spalle
vestite già de' raggi del pianeta
che mena dritto altrui per ogne calle.

Allor fu la paura un poco queta,
che nel lago del cor m'era durata
la notte ch'i' passai con tanta pieta.

E come quei che con lena affannata,
uscito fuor del pelago a la riva,
si volge a l'acqua perigliosa e guata,

così l'animo mio, ch'ancor fuggiva,
si volse a retro a rimirar lo passo
che non lasciò già mai persona viva.

Poi ch'èi posato un poco il corpo lasso,
ripresi via per la piaggia diserta,
sì che 'l piè fermo sempre era 'l più basso.

Ed ecco, quasi al cominciar de l'erta,
una lonza leggiera e presta molto,
che di pel macolato era coverta;

e non mi si partia dinanzi al volto,
anzi 'mpediva tanto il mio cammino,
ch'i' fui per ritornar più volte vòlto.

Temp' era dal principio del mattino,
e 'l sol montava 'n sù con quelle stelle
ch'eran con lui quando l'amor divino

mosse di prima quelle cose belle;
sì ch'a bene sperar m'era cagione
di quella fiera a la gaetta pelle

l'ora del tempo e la dolce stagione;
ma non sì che paura non mi desse
la vista che m'apparve d'un leone.
"""

#a = stringa.count("a")
#e = stringa.count("e")
#i = stringa.count("i")
#o = stringa.count("o")
#u = stringa.count("u")

#print(f"Numero vocale a: {a}")
#print(f"Numero vocale e: {e}")
#print(f"Numero vocale i: {i}")
#print(f"Numero vocale o: {o}")
#print(f"Numero vocale u: {u}")

vocali =  ["a", "e", "i", "o", "u"]
for i in vocali:
	print(f"Numero vocale {i}: " + str(stringa.count(i)) )


# "ciao" + 1 	<= NON HA SENSO! Stai sommando stringa
# "ciao" + "1" 	<= "ciao1"

# 1 + 1 = 2
# "1" + "1" = "11" 