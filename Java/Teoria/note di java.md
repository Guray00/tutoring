# Note riassuntive Java
Note riassuntive per lo sviluppo rapido nel linguaggio Java.

## Date 

### LocalDate
Viene utilizzato per instanziare una data. Per passare i parametri inererenti alla data come anno, mese, giorno si utilizza il metodo `of` della suddetta classe.

```Java
LocalDate data = LocalDate.of(2020, Month.OCTOBER, 20);
```

#### .now()
`LocalDate.now()` restituisce la data locale corrente.

### LocalTime
viene utilizzato per salvere un oggetto di tipo "ora", ovvero salvere in una variabile un orario i cui parametri sono passati mediante il metodo `of`
```Java
LocalTime orario = LocalTime.of(10, 50);
```
### LocalDateTime

```Java
LocalDateTime dataOra = LocalDateTime.of(2020, 10, 20, 10, 50);
```
Istanzia un oggetto che consente la memorizzazione sia di una data che di un orario. Come per localTime e localDate, utilizzare il metodo of per specificare la data.

#### DateTimeFormatter

```Java
DateTimeFormatter formatter = DateTimeFormatter.ofPattern("dd/MM/yyyy HH:mm:ss");

// data e ora è un oggetto localDateTime
System.out.println(formatter.format(dataOra));
```
Consente di specificare il formato con il quale si desidera mostrare a schermo. Se si vuole utilizzare gli stili predefiniti è possibile mediante:

```java
DateTimeFormatter formatterShort = DateTimeFormatter.ofLocalizedDateTime(FormatStyle.SHORT);
		System.out.println("dataora formattata SHORT: " + formatterShort.format(dataOra));
```

E' inoltre possibile definire un dateTimeFormatter per fare il parsing dell'input:
```Java 
DateTimeFormatter dtf = DateTimeFormatter.ofPattern("dd/MM/yyyy");
LocalDate dataUtente = LocalDate.from(dtf.parse(dataUtenteStr));
```