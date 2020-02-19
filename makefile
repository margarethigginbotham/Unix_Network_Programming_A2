#
# PROGRAM:    assignment2.cc
# PROGRAMMER: Margaret Higginbotham
# LOGON ID:   Z1793581
# DATE DUE:   February9, 2018
#

# Complier Variables
CCFLAGS = -ansi -Wall -std=c++11

# Rule to link object code files to create executable file
assignment2.exe: assignment2.cc
	g++ $(CCFLAGS) assignment2.cc -o assignment2.exe

# Rule to link object code to a.out
	g++ assignment2.cc -o a.out

# Pseudo-target to remove object code and executable files
clean:
	-rm assignment2.exe
	-rm a.out
