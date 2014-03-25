# 	ADT : queue
#	Author : 13512012 - Fahziar Riesad Wutono

OUTPUT=bin
ADT=Time
MAIN=mTime

compile-test: $(MAIN).cpp $(ADT).o
	g++ -o $(MAIN) $(MAIN).cpp $(ADT).o

tc1:
	./$(MAIN) < tc1.txt > output1.txt
	diff output1.txt result1.txt

tc2:
	./$(MAIN) < tc2.txt > output2.txt
	diff output2.txt result2.txt