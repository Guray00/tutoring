Scrivere un programma in linguaggio C++ che carichi i dati contenuti nel file
VincitoriF1.txt e li memorizzi in un opportuno vettore di record. 

Il file contiene la lista dei vincitori del mondiale piloti di F1 e su ogni riga è
riportato:
- l’anno in cui è stata conseguita la vittoria
- il nome del vincitore
- la sua nazionalità
- la scuderia di appartenenza.

Dopo avere letto il file e caricato i dati è necessario sviluppare le
seguenti funzionalità:
1. Visualizzare a video tutti i dati caricati in modo leggibile

2. Dato un anno, inserito da tastiera, individuare chi è stato il vincitore in
quell’annata e la sua scuderia. Dopodichè indicare anche il vincitore 
dell’anno precedente

3. Dato il nome di un pilota, inserito da tastiera, verificare se abbia mai 
vinto un campionato e se si indicare il numero di volte (solo in questo 
caso occorre elencare in un file tutti gli anni in cui ha vinto, dal meno 
recente al più recente, e nominare il file con il suo nome)

4. Dato il nome di una scuderia è necessario scrivere in un file l’elenco 
di tutti i piloti vincitori di almeno un mondiale alla guida di un’auto della 
scuderia in questione (attenzione a non ripetere il nome dei piloti 
all’interno del file)

Si faccia ricorso alle funzioni per implementare le principali operazioni
  richieste. Non inserire istruzioni di input (cin) e output (cout) all’interno delle funzioni sviluppate per i punti 2), 3). Input e output a video devono essere gestiti n