<html>

    <head>

    </head>

    <style>
        body {
            background-color: lightgreen;
        }

    </style>

    <body>
        <form action="./tabellone.php" method="get">
            <label for="name">Nominativo</label>
            <input type='text' name='nome' id="name"><br>

            <label>Genere</label>
            <label for="maschio">M</label>
            <input id="maschio" type='radio' name='genere' value='M'>

            <label for="femmina">F</label>
            <input id="femmina" type='radio' name='genere' value='F'>
            <br>
            
            <label>Debiti</label>
            <input id='d1' type='checkbox' name='debito[]' value='ITA'>
            <label for='d1'>ITA</label>
            <input id='d2' type='checkbox' name='debito[]' value='MAT'>
            <label for='d2'>MAT</label>
            <input id='d3' type='checkbox' name='debito[]' value='TEL'>
            <label for='d3'>TEL</label>
            <input id='d4' type='checkbox' name='debito[]' value='INF'>
            <label for='d4'>INF</label>
            <br>

            <input type='submit' value='Esito scrutinio'>
        </form>
    </body>

</html>