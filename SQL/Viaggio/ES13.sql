-- 1. Trovare le informazioni dei viaggi di durata inferiore ai 15 giorni
SELECT viaggio.*
FROM viaggio
WHERE viaggio.DurataGiorni < 15;


-- 2. Trovare le diverse località dei viaggi di durata tra i 7 e i 10 giorni e di costo inferiore a 500 €
SELECT viaggio.NomeLocalità
FROM viaggio
WHERE viaggio.DurataGiorni BETWEEN 7 AND 10
AND viaggio.Costo < 500;

-- 3. Trovare le informazioni anagrafiche dei clienti il cui cognome inizia con “Ro” ordinate in ordine
-- alfabetico
SELECT *
FROM turista
WHERE cognome like "Ro%";

-- 4- Trovare le località dei viaggi prenotate dal cliente Mario Rossi
SELECT viaggio.NomeLocalità
FROM viaggio, turista, prenotazione
WHERE turista.Id_Turista = prenotazione.Id_Turista
AND viaggio.Id_Viaggio = prenotazione.Id_Viaggio
AND turista.Nome = "Mario"
AND turista.Cognome = "Rossi";

