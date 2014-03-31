
OUTPUT=bin
ADT=EventB
MAIN=mEventB

compile-test: $(MAIN).cpp $(ADT).cpp
	g++ -g -o $(MAIN) $(MAIN).cpp $(ADT).cpp ../Event.cpp ../Time/Time.cpp ../Date/Date.cpp ../DateTime/DateTime.cpp -I .. -I ../Queue -I ../DateTime -I ../Date -I ../Time  -I ../TellerB
tc1:
	./mEventB < tc1.txt > output1.txt
	diff output1.txt result1.txt

tc2:
	./mEventB < tc2.txt > output2.txt
	diff output2.txt result2.txt