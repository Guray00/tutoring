-- 1. Il numero totale di passeggeri nei voli di una certa data
SELECT volo.passeggeriV
FROM volo
WHERE DAY(dataV) = 21
AND MONTH(dataV) = 4
AND YEAR(dataV) = 2017;

-- 2. La lista delle Compagnie aeree e delle nazionalità, con il numero totale dei passeggeri in
-- ordine decrescente in base al totale dei passeggeri
SELECT compagniaaerea.nomeCA, compagniaaerea.nazionalitaCA, SUM(passeggeriV) as passeggeri
FROM compagniaaerea, volo
WHERE volo.compagniaAereaV = compagniaaerea.idCA
GROUP BY nomeCA
ORDER BY passeggeri DESC;

-- 3. La lista delle nazionalità (delle Compagnie aeree) insieme al totale dei passeggeri in ordine
-- decrescente in base al totale dei passeggeri
SELECT compagniaaerea.nazionalitaCA, SUM(passeggeriV) as passeggeri
FROM compagniaaerea, volo
WHERE volo.compagniaAereaV = compagniaaerea.idCA
GROUP BY nazionalitaCA
ORDER BY passeggeri DESC;

-- 4. La lista senza ripetizioni delle tratte di volo (aeroporto di partenza e di arrivo con relative
-- città e nazioni) percorse ad una certa data
SELECT DISTINCT trattadivolo.partenzaTDV, trattadivolo.arrivoTDV, AP.cittaA, AP.nazioneA, AA.cittaA, AA.nazioneA
FROM trattadivolo, aeroporto AP, aeroporto AA, Volo
WHERE partenzaTDV = AP.idA 
AND   arrivoTDV = AA.idA
AND   volo.trattaDiVoloV = trattadivolo.idTDV
AND   DAY(dataV) = 21
AND   MONTH(dataV) = 4
AND   YEAR(dataV) = 2017;

-- 5. La lista dei voli (partenza, arrivo, passeggeri e data) effettuati fra due date, ordinata per
-- nome dell'aeroporto di partenza 
SELECT volo.passeggeriV, volo.dataV, AP.cittaA,  AA.cittaA
FROM volo, trattadivolo, aeroporto AP, aeroporto AA
WHERE volo.trattaDiVoloV = trattadivolo.idTDV 
AND   dataV between '2017/03/21' and '2018/12/30'
AND trattadivolo.partenzaTDV = AP.idA
AND trattadivolo.arrivoTDV = AA.idA
ORDER BY AP.cittaA;

-- 6. Il numero dei voli effettuati da ciascuna Compagnia aerea, ordinata in modo decrescente
-- per numero dei voli
SELECT COUNT(volo.idV) AS voli, compagniaaerea.nomeCA
FROM volo, compagniaaerea
WHERE volo.compagniaAereaV = compagniaaerea.idCA
GROUP BY compagniaaerea.idCA
ORDER BY voli DESC;

-- 7. Il maggior numero di passeggeri a bordo di un volo partito dall’aeroporto “Amerigo
-- Vespucci”
SELECT MAX(volo.passeggeriV)
FROM volo, trattadivolo, aeroporto
WHERE aeroporto.nomeA = "Amerigo Vespucci"
AND volo.trattaDiVoloV = trattadivolo.idTDV
AND trattadivolo.partenzaTDV = aeroporto.idA;

-- 8. La lista delle tratte di volo (partenza e arrivo) che sono state percorse almeno 7 volte
-- nell’anno 2018
SELECT trattadivolo.partenzaTDV, trattadivolo.arrivoTDV, COUNT(volo.idV)
FROM trattadivolo, volo
WHERE volo.trattaDiVoloV = trattadivolo.idTDV
AND YEAR(dataV) = 2018
GROUP BY partenzaTDV, arrivoTDV
HAVING COUNT(volo.idV) >= 7;

-- 9. La lista delle Compagnie aeree che hanno trasportato in totale almeno 400 passeggeri nel
-- mese di marzo 2018
SELECT SUM(volo.passeggeriV), compagniaaerea.nomeCA
FROM volo, compagniaaerea
WHERE volo.compagniaAereaV = compagniaaerea.idCA
AND MONTH(dataV) = 3
AND YEAR(dataV) = 2018
GROUP BY compagniaaerea.idCA
HAVING SUM(volo.passeggeriV) >= 400