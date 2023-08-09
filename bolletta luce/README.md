Scrivere un programma che calcoli la bolletta della luce in accordo con le seguenti condizioni:

- Per le prime **50** unità costa 0.50 euro per unità
- Da **50 a **150** unità costa 0.75 euro per unità
- Da **150** a **250** unità costa 1.20 euro per unità
- Dopo le **250** unità => 1.50 euro per unità

Viene applicata infine una tassa aggiuntiva del 20% sul totale. Mostrare il fine il prezzo a schermo

## Esempio

```plaintext
300 unità => 50*(0.50) + 100*(0.75) + 100*(1.20) + 50*(1.50)
200 unità => 50*(0.50) + 100*(0.75) + 50*(1.20)
125 unità => 50*(0.50) + 75(0.75)
35  unità => 35*(0.50)
-5  unità => 0
```