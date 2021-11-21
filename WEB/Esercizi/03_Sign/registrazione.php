
<!-- registrazione -->
<!DOCTYPE html>
<html>

	<head>
        <!-- stile -->
        <style>
            #nome, #cognome, #email, #password {
                display: inline-block;
                width: 70px;
                margin-top: 5px;
                margin-bottom: 5px;
            }

            a:visited, a:link {
                text-decoration: none;
            }

        </style>   
	</head>

	<body>
        <!-- titolo -->
        <h1>Modulo di iscrizione</h1>

        <!-- form per invio dei dati -->
        
        <form action="./riepilogo.php">
            <label id="cognome">Cognome:</label>
            <input type="text" name="cognome" required> <br>

            <label id="nome">Nome:</label>
            <input type="text" name="nome" required> <br>

            <label>Sesso:</label>
            <input type="radio" name="genere" id="maschile" value="maschile">
            <label for="maschile">Maschile</label>
            <input type="radio" name="genere" id="femminile" value="femminile">
            <label for="femminile">Femminile</label> <br>

            <label for="nazionalita">Nazionalità:</label>
            <select name="nazionalita" id="nazionalita">
                <option value="Italiana">Italiana</option>
                <option value="Francese">Francese</option>
                <option value="Inglese" >Inglese </option>
            </select>
            <br>

            <label>Patente:</label>
            <input type="checkbox" name="patente[]" id="catA" value="catA">
            <label for="catA">cat. A</label>
            <input type="checkbox" name="patente[]" id="catB" value="catB">
            <label for="catB">cat. B</label>
            <br>

            <label id="email">e-Mail:</label>
            <input type="email" name="email" required>
            <br>

            <label id="password">Password:</label>
            <input type="password" name="password" required>
            
            <br>

            <a href="./index.php">
                <input type="button" value="Annulla">
            </a>
            
            <input type="submit" value="Conferma">
    </form>
	</body>
</html>