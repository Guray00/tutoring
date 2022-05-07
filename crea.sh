#!/bin/bash -u

# ======================================================
# QUESTO SCRIPT NON DEVE ESSERE IN ALCUN MODO MODIFICATO

# Se stai visualizzando questo file, non sei nella 
# cartella giusta. Per andare nei file della __LEZIONE__
# trovi tutto nella prima cartella nel menu alla 
# tua sinistra. 
# ======================================================

clear

# costante colori
RED='\033[0;31m'
NC='\033[0m' # No Color
YELLOW='\033[1;33m'

# controllo sul numero di parametri
if [ "$#" -gt 1 ]; then
    printf "${RED}Devi mettere le virgolette!${NC}\n"
    exit
fi

# controllo se e' specificato il nome della cartella
if [ $# -eq 0 ]
  then
    read -p "Nome cartella: " cartella
  else  
    cartella=$1
fi

mkdir "${cartella}" || exit

read -r -p "$(printf ${YELLOW}Titolo:${NC}) " title
read -r -p "$(printf ${YELLOW}Descrizione:${NC}) " description
read -r -p "$(printf ${YELLOW}Difficoltà:${NC}) " difficulty
read -r -p "$(printf ${YELLOW}Note:${NC}) " notes
read -r -p "$(printf ${YELLOW}Argomento:${NC}) " argoment


cat > "$cartella/info.json" <<- EOM
{
	"title":"${title}",
	"description":"${description}",
	"difficulty": ${difficulty},
	"requirements": [],
	"tags": [],
	"notes": "${notes}", 
	"argoment": "${argoment}"
}
EOM

cat > "$cartella/README.md" <<- EOM
Testo dell'esercizio non ancora disponibile.
EOM
