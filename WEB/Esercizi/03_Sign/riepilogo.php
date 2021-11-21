<?php 

    session_start();

    // controlliamo che sono passati i required
    if(!isset($_GET) or count($_GET) <= 3 ){
    // isset($_GET["nome"])
      header("location: ./registrazione.php");
    }


    if(!isset($_GET["nazionalita"])){
        $_GET["nazionalita"] = "";
    }

    if(!isset($_GET["patente"])){
        $_GET["patente"] = "";
    }
    else {
        $_GET["patente"] = implode(", ", $_GET["patente"]);
    }

    if(!isset($_GET["genere"])){
        $_GET["patente"] = "";
    }

    $_SESSION["nome"]        = $_GET["nome"];
    $_SESSION["cognome"]     = $_GET["cognome"];
    $_SESSION["email"]       = $_GET["email"];
    $_SESSION["password"]    = $_GET["password"];
    $_SESSION["nazionalita"] = $_GET["nazionalita"];
    $_SESSION["patente"]     = $_GET["patente"];
    $_SESSION["genere"]      = $_GET["genere"];

?>


<!-- log-in -->
<!DOCTYPE html>
<html>
	<head>

        <style>
            a:link, a:visited {
                text-decoration: none;
            }
        </style>
	</head>

	<body>
    <h1>Riepilogo dati</h1>

    <form>
        <span>Cognome: <?php echo $_GET["cognome"];?></span>
        <br>
        <span>Nome: <?php echo $_GET["nome"];?> </span>
        <br>
        <span>Sesso: <?php echo $_GET["genere"];?></span>
        <br>
        <span>Nazionalità: <?php echo $_GET["nazionalita"];?></span>
        <br>
        <span>Patente: <?php echo $_GET["patente"];?></span>
        <br>
        <span>e-Mail: <?php echo $_GET["email"];?></span>
        <br>
        <a href="./registrazione.php"><input type="button" value="Correggi"></a>
        
        <input type="submit" value="Conferma">
    </form>
	</body>
</html>