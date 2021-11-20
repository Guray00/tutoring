<?php
    session_start();

    // controllo se è passato un numero nella get, e nel caso
	// vedo se uno tra il giocatore e il computer ha vinto.
	// se ha vinto, reindirizzo alla pagina dei risultati
       // se il turno non è ancora stato creato, inizializzo a 1
	

	if(isset($_POST["numero"])){
        $random = rand(1, 9);

        if($_SESSION["vittorie"] >= 3 or $_SESSION["sconfitte"] >= 3){
          header("location: ./risultati_partita.php");
          return;
        }

        // vediamo se ha vinto il turno l'utente
        if($random == $_POST["numero"] or $_POST["numero"] == ($random+1)){
            // rimando alla pagina dei risultati
            $_SESSION["vittorie"]++;
            $frase = "Hai vinto questo turno";
        }

        // vediamo se ha vinto il turno il computer
        else if($random == ($_POST["numero"] + 1)){
            $_SESSION["sconfitte"]++;
            $frase = "Hai perso questo turno";
        }

        else{
            $frase = "Pareggio, nessuno ha vinto";
        }

        $_SESSION["turno"]++;

        if($_SESSION["vittorie"] >= 3 or $_SESSION["sconfitte"] >= 3){
          header("location: ./risultati_partita.php");
          return;
        }
    }

    else {
        echo "Errore: devi fornire un numero giocato!";
        return;
    }
?>


<html>
	<body>
        <h1>Gioco del numero più alto</h1>
        <div>Nome: <?php echo $_SESSION["nome"];?></div>
        <br>
        <div><b><?php echo $frase; ?></b></div>
        <br>
        <div>Turno: <?php echo ($_SESSION["turno"]-1);?></div>
        <div>Valore giocato: <?php echo $_POST["numero"];?></div>
        <div>Valore giocato dal computer: <?php echo $random; ?></div>
        <div>Vincite: <?php echo $_SESSION["vittorie"];?></div>
	</body>
</html>