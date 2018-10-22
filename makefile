tp: main.cpp Board.hpp Agent.hpp
	g++ main.cpp Board.hpp Agent.hpp -o reversi.out

run: main.cpp Board.hpp Agent.hpp
	@g++ main.cpp Board.hpp Agent.hpp -o reversi.out
	@./reversi.out