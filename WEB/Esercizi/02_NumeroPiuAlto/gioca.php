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
	

	// se il nome è stato è stato ancora passato ed è stato 
	// inviato nella get
	if(isset($_GET["nome"]) and !isset($_SESSION["nome"])){
        $_SESSION["nome"] = $_GET["nome"];
	}

    if(!isset($_SESSION["turno"])){
        $_SESSION["turno"] = 1;
    }
  
?>


<html>
	<body>
    <h1>Gioco del numero più alto</h1>
		<span>Nome: <?php echo $_SESSION["nome"];?></span><br>
        <span>Turno: <?php echo $_SESSION["turno"];?> </span><br>

		<!-- Form per giocare -->
        <form action="./risultati_turno.php" method="post">
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