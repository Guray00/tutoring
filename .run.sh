
# questo script si occupa di far partire diversi script
# a seconda del linguaggio di riferimento

# =======================================================
			MAIN="lezione"
			LOCATION="../__LEZIONE__"
#			LOCATION="HelloWorld"
			LANGUAGE="Java"
# =======================================================

# JAVA CASE
if [ $LANGUAGE = "Java" ]
then
	cd /home/runner/tutoring/$LANGUAGE/$LOCATION && javac *.java && java $MAIN
	rm *.class

# PYTHON CASE
elif [ $LANGUAGE = "Python" ]
then
	cd /home/runner/tutoring/$LANGUAGE/$LOCATION && python3 ./$MAIN.py

# C CASE
elif [ $LANGUAGE = "C" ]
then
  cd /home/runner/tutoring/$LANGUAGE/$LOCATION && gcc $MAIN.c -o $MAIN && ./$MAIN && rm $MAIN

# C# CASE
elif [ $LANGUAGE = "C#" ]
then
  cd /home/runner/tutoring/$LANGUAGE/$LOCATION && mcs *.cs && mono ./$MAIN.exe && rm $MAIN.exe


elif [ $LANGUAGE = "C++" ]
then
  cd /home/runner/tutoring/$LANGUAGE/$LOCATION && g++ $MAIN.cpp -o $MAIN && ./$MAIN && rm $MAIN && echo ""
fi