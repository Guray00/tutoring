<?php


    function printStudenti(){
        foreach($_SESSION as $key => $value){
            //echo "ho salvato utente " . $key . "<br>";   
            
            if ($value["debito"] == [])
                $c = 0;
            else
                $c = count($value["debito"]);
            
            echo "Risultati di: ";
            if($c == 0){
                if ($value["genere"] == "M")
                    echo $key . " <b>ammesso</b>.";
                else
                    echo $key . " <b>ammessa</b>.";
            }
    
            else if($c > 0 and $c < 3){
    
                if ($value["genere"] == "M")
                    echo $key . " <b>ammesso</b> con debiti in ";
                else
                    echo $key . " <b>ammessa</b> con debiti in ";
                
    
                foreach($value["debito"] as $indice => $v){
                    if      ($v == "MAT") echo "Matematica";
                    else if ($v == "ITA") echo "Italiano";
                    else if ($v == "TEL") echo "Telecomunicazioni";
                    else if ($v == "INF") echo "Informatica";
    
                    if ($indice < ($c-1)) echo ", ";
                }
    
                echo ".";
            }
    
            else {
                if ($value["genere"] == "F")
                    echo $key . " <b>non ammesso</b>.";
                else
                    echo $key . " <b>non ammessa</b>.";
            }
    
            echo "<br>";
        }

    }
    session_start();

    if(!isset($_GET) or count($_GET) < 1){
        echo "<h1>TABELLONE SCRUTINIO</h1>";
        printStudenti();
        return;
    }

    // viene gestito l'errore sull'inserimento del nome
    if (!isset($_GET["nome"]) or $_GET["nome"] == ""){
        echo "<h1>Errore, manca il nome dello studente.</h1>";
        echo '<a href="./index.php">Reinserisci lo studente</a>';
        return;
    }

    // se il nome viene passato, viene memorizzato
    $nome   = $_GET["nome"];

    // gestione del genere
    if (!isset($_GET["genere"]))
        $genere = "M";
    else 
        $genere = $_GET["genere"];

    // gestione del debito
    if (!isset($_GET["debito"]))
        $debito = [];
    else
        $debito = $_GET["debito"];

    // se non è presente uno studente con il nome stabilito nella sessione lo aggiungo
    if(!isset($_SESSION[$nome])){
        $_SESSION[$nome] = [
            "genere" => $genere,
            "debito" => $debito
        ];
    }

    printStudenti();

?>


<html>

    <head>
        <title>Scrutinio</title>

    </head>

    <body>
        <a href="./index.php">Inserisci un nuovo utente</a><br>
        <a href="./tabellone.php">Termina scrutinio</a>
    </body>

</html>