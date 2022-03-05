#!/bin/bash -u

# ======================================================
# QUESTO SCRIPT NON DEVE ESSERE IN ALCUN MODO MODIFICATO

# Se stai visualizzando questo file, non sei nella 
# cartella giusta. Per andare nei file della __LEZIONE__
# trovi tutto nella prima cartella nel menu alla 
# tua sinistra. 
# ======================================================


clear

read -p "Nome cartella: " cartella
mkdir $cartella


cat > $cartella/info.json <<- EOM
{
	"title":"",
	"description":"",
	"difficulty": ,
	"requirements": [],
	"tags": [],
	"notes": "", 
	"argoment" : ""
}
EOM

cat > $cartella/README.md <<- EOM
Testo esercizio non ancora disponibile
EOM