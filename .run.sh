
# =======================================================
			MAIN="Es"
			LOCATION="Esercizi/ProdottiNegoziOnline"
			LANGUAGE="Java"
# =======================================================

# JAVA CASE
if [ $LANGUAGE = "Java" ]
then
	cd /home/runner/tutoring/$LANGUAGE/$LOCATION && javac ./$MAIN.java && java $MAIN && rm *.class

# PYTHON CASE
elif [ $LANGUAGE = "Python" ]
then
	cd /home/runner/tutoring/$LANGUAGE/$LOCATION && python3 ./$MAIN.py

# C CASE
elif [ $LANGUAGE = "C" ]
then
	cd /home/runner/tutoring/$LANGUAGE/$LOCATION && gcc $MAIN.c -o $MAIN && ./$MAIN && rm $MAIN
fi
