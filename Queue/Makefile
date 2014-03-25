# 	ADT : queue
#	Author : 13512012 - Fahziar Riesad Wutono

OUTPUT=bin
ADT=point
MAIN=mQueue

compile-test: $(MAIN).cpp Queue.h
	g++ -o $(MAIN) $(MAIN).cpp

tc1:
	./mQueue < tc1.txt > output1.txt
	diff output1.txt result1.txt

tc2:
	./mQueue < tc2.txt > output2.txt
	diff output2.txt result2.txt