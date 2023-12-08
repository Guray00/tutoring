scrivere una funzione ricorsiva che consenta di calcolare la seguente formula: dato un numero a e un numero n, per ogni i da 1 a n calcolare: sum(a - i/a).

```pseudocode
// si vuole trovare l'analogo di 
totale = 0
per ogni i da 1 a n:
  totale = totale + a - (i/a)
```

## Esempio

```plaintext
Inserire il valore di a: 2
Inserire il valore di n: 3
Il risultato vale 3.0
```

Spiegazione:

```plaintext
2 - 1/2                => 1.5
  + 2 - 2/2            => 1
         +   2 - 3/2   => 0.5
            2 - 4/2    => 0
```