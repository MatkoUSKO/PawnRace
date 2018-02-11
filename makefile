all: pawnrace

pawnrace: main.o move.o game.o random_player.o bitboard.o
	g++ -Wall main.o board.o move.o utility.o game.o random_player.o \
	bitboard.o -o pawnrace

main.o: board.o game.o main.cpp
	g++ -c main.cpp

game.o: utility.o move.o game.cpp random_player.o board.o
	g++ -c game.cpp

random_player.o: move.o board.o bitboard.o random_player.cpp
	g++ -c random_player.cpp

board.o: move.o utility.o board.cpp 
	g++ -c board.cpp

move.o: move.cpp
	g++ -c move.cpp

bitboard.o: bitboard.cpp
	g++ -c bitboard.cpp

utility.o: utility.cpp
	g++ -c utility.cpp

clean:
	rm *.o
	rm pawnrace
