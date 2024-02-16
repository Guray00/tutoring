# Mappa Laser

Un sistema di rilevazione laser è in grado di rilevare le altezze di una superficie. Il sistema è in grado di produrre
una matrice di altezze in millimetri.

## Esempio mappa.txt:

    77 71 78 84 73 82 77 73 80 70 70 80 77 86 78
    82 86 75 83 85 88 82 70 82 76 75 75 87 74 71
    81 80 92 78 79 85 80 78 72 70 73 71 90 81 87
    81 81 86 87 71 84 90 85 87 73 84 70 77 88 77
    79 72 78 88 78 89 82 80 81 78 77 78 89 82 71
    74 73 77 83 76 87 88 90 73 78 75 92 77 89 76
    76 75 76 90 76 81 70 75 82 76 71 70 74 73 76
    75 87 78 72 84 90 73 89 80 79 81 77 79 71 76
    75 77 83 84 86 73 83 84 84 82 82 76 88 77 86
    74 84 74 81 89 86 76 79 73 81 72 79 88 77 83
    82 81 83 83 87 90 70 70 84 71 75 84 78 87 97
    87 80 86 79 75 79 78 90 85 76 89 76 76 88 78
    75 83 84 79 79 80 90 78 78 71 86 75 77 74 79
    89 76 81 78 87 89 70 86 85 72 86 76 77 87 82
    85 74 70 77 87 88 81 78 75 77 86 76 81 85 87

Per ogni zona analizzata, il sistema laser produce una matrice di valori interi positivi di dimensione `n` righe ed `m`
colonne, dove ogni valore corrisponde alla quota di una porzione del piano analizzato, la cui dimensione dipende dalla
risoluzione del sistema laser. Nell'esempio sopra, il sistema cattura 15X15 valori.

Il programma in Python richiesto deve identificare i punti di quota massima, cioè i punti con un valore di altezza
strettamente maggiore delle porzioni circostanti ad una distanza `D`, cioè i numeri che nella matrice rappresentano il
valore strettamente massimo in un quadrato di lato `2*D+1` (non necessariamente contenuto nella matrice data) avente la
posizione stessa del numero come centro. Per esempio, una quota massima con distanza `D=2` estratta dalla matrice è
mostrata nell’esempio sotto:

## Esempio di quota massima con D=2

    77 71 78 84 73
    82 86 75 83 85
    81 80 92 78 79
    81 81 86 87 71
    79 72 78 88 78

Il programma deve aprire il file `mappa.txt` contenente la matrice (si assuma che il file non contenga errori di formato),
mentre la dimensione `D` deve essere definita come costante. Si stampi a schermo la matrice con tutti i valori sostituiti
dal carattere `'-'` (trattino), tranne quelli degli hot-spot.

## Output programma

    -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
    -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
    -  -  92 -  -  -  -  -  -  -  -  -  90 -  - 
    -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
    -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
    -  -  -  -  -  -  -  -  -  -  -  92 -  -  - 
    -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
    -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
    -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
    -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
    -  -  -  -  -  -  -  -  -  -  -  -  -  -  97
    -  -  -  -  -  -  -  -  -  -  89 -  -  -  - 
    -  -  -  -  -  -  -  -  -  -  -  -  -  -  -
    89 -  -  -  -  -  -  -  -  -  -  -  -  -  - 
    -  -  -  -  -  -  -  -  -  -  -  -  -  -  -