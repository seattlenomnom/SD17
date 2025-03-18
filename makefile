# make file for SD17
#
sd17: sd17.cpp
	g++ -Wall -g sd17.cpp -o ./Build/DEBUG/sd17

.PHONY: clean
clean:
	rm Build/DEBUG/sd17


