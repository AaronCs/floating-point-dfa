CC=g++
CFLAGS=-Wall -Wpedantic -Wextra -Waggregate-return -Wshadow -Wunreachable-code -g
SOURCES=fp-dfa.cpp

all:
	$(CC) $(CFLAGS) $(SOURCES) -o fp-dfa
