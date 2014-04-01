OUTPUT=bin
MAIN1A=main1a
MAIN1B=main1b

main1a: $(MAIN1A).cpp
	g++ -o $(MAIN1A)  $(MAIN1A).cpp EventA/EventA.cpp Event.cpp Time/Time.cpp Date/Date.cpp DateTime/DateTime.cpp -IDate -IDateTime -ITime -IQueue -ITellerA  -IEventA
main1b: $(MAIN1B).cpp
	g++ -o $(MAIN1B)  $(MAIN1B).cpp EventA/EventA.cpp Event.cpp Time/Time.cpp Date/Date.cpp DateTime/DateTime.cpp -IDate -IDateTime -ITime -IQueue -ITellerA  -IEventA	


pwd:
		pwd