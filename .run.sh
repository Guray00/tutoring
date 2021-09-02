
# questo script si occupa di far partire diversi script
# a seconda del linguaggio di riferimento

# =======================================================
			MAIN="test.cpp"
			LOCATION="Test"
			LANGUAGE="C++"
# =======================================================

# JAVA CASE
if [ $LANGUAGE = "Java" ]
then
	cd /home/runner/tutoring/$LANGUAGE/$LOCATION && javac ./$MAIN.java && java $MAIN && rm *.class

# PYTHON CASE
elif [ $LANGUAGE = "Python" ]
then
	cd /home/runner/tutoring/$LANGUAGE/$LOCATION && python3 ./$MAIN.py

# C CASE - SPECIFY FILE EXTENSION 
elif [ $LANGUAGE = "C" ]
then
	st=""
	OUT=${MAIN/.cpp/$st}
	OUT=${OUT/.c/$st}

  cd /home/runner/tutoring/$LANGUAGE/$LOCATION && gcc $MAIN -o $OUT && ./$OUT && rm $OUT


elif [ $LANGUAGE = "C++" ]
then
	st=""
	OUT=${MAIN/.cpp/$st}
	OUT=${OUT/.c/$st}

  cd /home/runner/tutoring/C/$LOCATION && g++ $MAIN -o $OUT && ./$OUT && rm $OUT
fi