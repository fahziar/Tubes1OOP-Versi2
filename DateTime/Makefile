# 	ADT : queue
#	Author : 13512012 - Fahziar Riesad Wutono

OUTPUT=bin
ADT=DateTime
MAIN=mDateTime

compile-test: $(MAIN).cpp 
	g++ -o $(MAIN) $(MAIN).cpp $(ADT).cpp ../Date/Date.cpp ../Time/Time.cpp -I ../Date -I ../Time

tc1:
	./$(MAIN) < tc1.txt > output1.txt
	diff output1.txt result1.txt

tc2:
	./$(MAIN) < tc2.txt > output2.txt
	diff output2.txt result2.txt