
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

if [ $MODE = "true" ]
then
	LOCATION="../__LEZIONE__/"
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
	cd $INIT/"Java"/$LOCATION && javac *.java && preload && java $MAIN
	rm *.class

# PYTHON CASE
elif [ $LANGUAGE = "python" ]
then
	cd $INIT/"Python"/$LOCATION && preload && python3 ./$MAIN.py

# C CASE
elif [ $LANGUAGE = "c" ]
then
  cd $INIT/"C"/$LOCATION && gcc $MAIN.c -o $MAIN && preload && ./$MAIN && rm $MAIN

# C# CASE
elif [ $LANGUAGE = "c#" ]
then
  cd $INIT/"C#"/$LOCATION && mcs *.cs && preload && mono ./$MAIN.exe && rm $MAIN.exe

# C++ CASE
elif [ $LANGUAGE = "c++" ]
then
  cd $INIT/"C++"/$LOCATION && g++ $MAIN.cpp -o $MAIN && preload && ./$MAIN && rm $MAIN && echo ""

# WEB CASE
elif [ $LANGUAGE = "web" ]
then
  cd /$INIT/"WEB"/$LOCATION && preload && php -S 0.0.0.0:8000 -t .
fi