#!/bin/bash -u

# ======================================================
#       QUESTO SCRIPT NON DEVE ESSERE MODIFICATO

# Se stai visualizzando questo file, non sei nella 
# cartella giusta. Per andare nei file della __LEZIONE__
# trovi tutto nella prima cartella nel menu alla 
# tua sinistra. 
# ======================================================


# costante colori
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
NC='\033[0m' # No Color

# controllo sul numero di parametri
if [ "$#" -ne 1 ]; then
    printf "${RED}Wrong directory${NC}\n\n"
    exit
fi

# elenco di file da spostare dalla lezione
files=`find __LEZIONE__ -maxdepth 1 -type f \( -iname \*.cpp -o -iname \*.c -o -iname \*.py -o -iname \*.java -o -iname \*.cs -o -iname \*.php -o -iname \*.h -o -iname \*.hpp \)`

# per ogni file individuato
while IFS= read -r line; do

  # controllo non sia una riga vuota
  if [ "$line" != "" ]; then

    filename=`basename $line`

    # verifico se il file esiste
    if [ ! -f "$1/$filename" ]
    then
        mv "$line" "$1/" && printf "${GREEN}[V]${NC} ${YELLOW}$filename${NC} moved successfully.\n\n"

    else
        printf "${RED}[X]${NC} ${YELLOW}$filename${NC} found. Not moved.\n\n"
    fi

  fi

done <<< "$files"