<?php
	/*
	CONSIDERAZIONI:
	- quando vinco un turno, mostro i risultati?
	- quando vinco un turno, azzero i turni?
	- quando vince il computer?
	*/

	session_start();

	// se non esiste il valore vittorie, lo inizilizziamo noi
	if (!isset($_SESSION["vittorie"])){
		$_SESSION["vittorie"] = 0;
	} 

	if (!isset($_SESSION["sconfitte"])){
		$_SESSION["sconfitte"] = 0;
	} 
	
	// controllo se è passato un numero nella get, e nel caso
	// vedo se uno tra il giocatore e il computer ha vinto.
	// se ha vinto, reindirizzo alla pagina dei risultati
	if(isset($_GET["numero"])){
    $random = rand(1, 9);
		

		// vediamo se ha vinto il turno l'utente
		if($random == $_GET["numero"] or $_GET["numero"] == ($random+1)){
			// rimando alla pagina dei risultati
			$_SESSION["vittorie"]++;
		}

		// vediamo se ha vinto il turno il computer
		else if($random == ($_GET["numero"] + 1)){
			$_SESSION["sconfitte"]++;
		}

		// vediamo se la partita è terminata
		if ($_SESSION["vittorie"] >= 3 or $_SESSION["sconfitte"] >= 3){
				
				// serve a memorizzare i valori giocati
				$_SESSION["giocato"]  = $_GET["numero"];
				$_SESSION["computer"] = $random;
				header("location:  ./risultati.php");
		}

		/*
			var_dump($_SESSION);
			var_dump($_GET);
			var_dump($random);
		*/
  }


	// se il nome è stato è stato ancora passato ed è stato 
	// inviato nella get
	if(isset($_GET["nome"]) and !isset($_SESSION["nome"])){
    $_SESSION["nome"] = $_GET["nome"];
	}

	// se il turno non è ancora stato creato, inizializzo a 1
	if(!isset($_SESSION["turno"])){
    $_SESSION["turno"] = 1;
  }

  else if (isset($_GET["numero"])){
    $_SESSION["turno"]++;
  }
  
?>


<html>
	<body>
    <h1>Gioco del numero più alto</h1>
		<span>Nome: <?php echo $_SESSION["nome"];?></span><br>
    <span>Turno: <?php echo $_SESSION["turno"];?> </span><br>

		<!-- Form per giocare -->
    <form>
			<label for="num">Scegli quanto vuoi giocare: </label>
			<select name="numero" id="num">
        <?php   
          for($i = 1; $i <= 9; $i++){
						echo '<option value="' . $i . '">' . $i . '</option>';
          }
				?>
			</select><br>
      <input type="submit" value="GIOCA">
		</form>

	</body>
</html>