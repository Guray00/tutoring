<?php
	session_start();
	session_destroy();
?>


<html>
	<body>
		<h1>Gioco del numero più alto</h1>

		<form action="./gioca.php">
      <label>Nome:</label>
      <input type="text" name="nome">
      <input type="submit" value="Invia">
		</form>
		
	</body>
</html>