<?php
  session_start();

    if($_SESSION["vittorie"] < 3 and $_SESSION["sconfitte"] < 3){
          header("location: ./risultati_turno.php");
          return;
    }

    if($_SESSION["vittorie"] == 3){
      $frase = "Hai vinto la partita";
    }
    else{
      $frase = "Hai perso la partita";
    }
?>


<html>
	<body>
    <h1>Gioco del numero più alto</h1>
    <div><b> <?php echo $frase; ?></b></div>
    <div>In <?php echo $_SESSION["turno"];?> turni</div>
	</body>
</html>