#!/bin/bash -u

# ======================================================
# QUESTO SCRIPT NON DEVE ESSERE IN ALCUN MODO MODIFICATO

# Se stai visualizzando questo file, non sei nella 
# cartella giusta. Per andare nei file della __LEZIONE__
# trovi tutto nella prima cartella nel menu alla 
# tua sinistra. 
# ======================================================


clear

INIT="/home/runner/tutoring"
MAIN=$(cat $INIT/runner.json | jq '.main' | sed 's/"//g')
LOCATION=$(cat $INIT/runner.json | jq '.location' | sed 's/"//g')
LANGUAGE=$(cat $INIT/runner.json | jq '.language' | sed 's/"//g')
LANGUAGE=$(echo ${LANGUAGE,,})
MODE=$(cat $INIT/runner.json | jq '.tutor_mode' | sed 's/"//g')
MODE=$(echo ${MODE,,})

if [[ "$MODE" == "true" ]]
then
	LOCATION="/__LEZIONE__/"

    if [[ "$LANGUAGE" == "java" ]] && [[ ! -f $INIT/__LEZIONE__/$MAIN.java ]]; then
        echo  -en 'public class '${MAIN}'{\n\n\tpublic static void main(String[] args){\n\n\t\tSystem.out.println("Hello World!");\n\n\t}\n}' > $INIT/__LEZIONE__/$MAIN.java

    elif [[ "$LANGUAGE" == "c" ]] && [[ ! -f $INIT/__LEZIONE__/$MAIN.c ]]; then
        echo  -en '#include <stdio.h>\n#include <stdlib.h>\n\n// utility to print an array\nvoid printArray(int* v, int n){\n\tprintf("[");\n\tfor (int i = 0; i < n; i++)\n\t\tprintf(" %d", v[i]);\n\tprintf(" ]\\n");\n}\n\nint main(){\n\n\tprintf("Hello World!");\n\treturn 0;\n\n}' > $INIT/__LEZIONE__/$MAIN.c
    
    elif [[ "$LANGUAGE" == "c++" ]] && [[ ! -f $INIT/__LEZIONE__/$MAIN.cpp ]]; then
        echo  -en '#include <iostream>\nusing namespace std;\n\n// utility to print an array\nvoid printArray(int* v, int n){\n\tcout<<"[ ";\n\tfor (int i = 0; i < n; i++)\n\t\tcout<<v[i]<<" ";\n\tcout<<"]\\n";\n}\n\nint main(){\n\n\tcout<<"Hello World!";\n\treturn 0;\n\n}' > $INIT/__LEZIONE__/$MAIN.cpp
    
    
    elif [[ "$LANGUAGE" == "python" ]] && [[ ! -f $INIT/__LEZIONE__/$MAIN.py ]]; then
        echo  -en 'print("Hello World!")' > $INIT/__LEZIONE__/$MAIN.py
        

    elif [[ "$LANGUAGE" == "web" ]] && [[ ! -f $INIT/__LEZIONE__/index.php ]]; then
        echo  -en '<!DOCTYPE html>\n<html>\n\t<head>\n\t</head>\n\n\t<body>\n\t</body>\n</html>' > $INIT/__LEZIONE__/index.php
    fi
fi

echo -e "\e[7m[Preparazione del file $MAIN in corso]\e[0m"

preload () {
    clear
	echo -e "\e[2m[Esecuzione del file $MAIN]\e[0m"
	echo -e ""
}

# JAVA CASE
if [ $LANGUAGE = "java" ]
then
	cd $INIT/$LOCATION && javac *.java && preload && java $MAIN
	rm *.class

# PYTHON CASE
elif [ $LANGUAGE = "python" ]
then
	cd $INIT/$LOCATION && preload && python3 ./$MAIN.py

# C CASE
elif [ $LANGUAGE = "c" ]
then
  cd $INIT/$LOCATION && preload && gcc $MAIN.c -o $MAIN  && ./$MAIN && echo "" && rm $MAIN

# C# CASE
elif [ $LANGUAGE = "c#" ]
then
  cd $INIT/$LOCATION && mcs *.cs && preload && mono ./$MAIN.exe && rm $MAIN.exe

# C++ CASE
elif [ $LANGUAGE = "c++" ]
then
  cd $INIT/$LOCATION && g++ *.cpp -o $MAIN && preload && ./$MAIN && rm $MAIN && echo ""

# WEB CASE
elif [ $LANGUAGE = "web" ]
then
  cd /$INIT/$LOCATION && preload && php -S 0.0.0.0:8000 -t .
fi