-- 1. Targa e Marca delle auto di potenza superiore a 90kW coinvolte in incidenti nel mese di marzo 
SELECT A.Targa, A.Marca
FROM automobile AS A, sinistro AS S, autocoinvolte AS C
WHERE 	A.potenza > 90 AND MONTH(data) = 3 AND S.id = C.id_sinistro AND A.targa = C.targa;

-- 2
SELECT COUNT(distinct automobile.targa)
FROM automobile, sinistro, autocoinvolte
WHERE automobile.marca = "Audi" AND sinistro.id = autocoinvolte.id_sinistro AND YEAR(data) = 2019 AND sinistro.localita = "Firenze";

-- 3
SELECT distinct p.*, potenza
FROM sinistro S, autocoinvolte A, automobile AM, proprietario P
WHERE 
	S.localita = "Firenze" AND 
    A.id_sinistro = S.id and 
    A.targa = AM.targa AND
    P.codice_fiscale = AM.cf_proprietario 
GROUP BY AM.targa HAVING potenza = max(AM.potenza) order by potenza desc LIMIT 1 ;

-- 4
SELECT proprietario.*
FROM proprietario, sinistro, autocoinvolte, automobile
WHERE sinistro.id = autocoinvolte.id_sinistro
AND autocoinvolte.targa = automobile.targa
AND automobile.cf_proprietario = proprietario.codice_fiscale
AND sinistro.localita = "Milano"
AND YEAR(data) = YEAR(now())-1
GROUP BY proprietario.codice_fiscale 
	having count(DISTINCT sinistro.id) = 1;
    
-- 5
SELECT proprietario.*
FROM proprietario, automobile, polizza, assicurazione, autocoinvolte
WHERE automobile.cf_proprietario = proprietario.codice_fiscale
AND automobile.codice_polizza = polizza.codice
AND polizza.codice = assicurazione.codice
AND assicurazione.nome = "Linear"
AND autocoinvolte.targa = automobile.targa
GROUP BY proprietario.codice_fiscale HAVING count(DISTINCT autocoinvolte.id_sinistro) = 0;

-- 6
SELECT SUM(autocoinvolte.importo_danno)
FROM autocoinvolte, sinistro
WHERE sinistro.localita = "Firenze"
AND sinistro.id = autocoinvolte.id_sinistro
AND YEAR(sinistro.data) = 2018
AND MONTH(sinistro.data) = 10
AND DAY(sinistro.data) = 20
GROUP BY sinistro.id;

-- 7
SELECT assicurazione.nome, COUNT(sinistro.id)
FROM sinistro, autocoinvolte, automobile, polizza, assicurazione
WHERE sinistro.id = autocoinvolte.id_sinistro
AND autocoinvolte.targa = automobile.targa
AND automobile.codice_polizza = polizza.codice
AND polizza.codice_assicurazione = assicurazione.codice
GROUP BY assicurazione.nome;

-- 8
SELECT Distinct proprietario.*, polizza.data_scadenza , now()
FROM proprietario, autocoinvolte, automobile, polizza
WHERE autocoinvolte.targa = automobile.targa
AND automobile.cf_proprietario = proprietario.codice_fiscale
AND automobile.codice_polizza = polizza.codice
AND polizza.data_scadenza < NOW();