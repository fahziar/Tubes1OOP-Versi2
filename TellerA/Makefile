# 	ADT : queue
#	Author : 13512012 - Fahziar Riesad Wutono

OUTPUT=bin
ADT=TellerA
MAIN=mTellerA

compile-test: $(MAIN).cpp
	g++ -o $(MAIN) $(MAIN).cpp -I ../Queue -I ../

tc1:
	./$(MAIN) < tc1.txt > output1.txt
	diff output1.txt result1.txt

tc2:
	./$(MAIN) < tc2.txt > output2.txt
	diff output2.txt result2.txt