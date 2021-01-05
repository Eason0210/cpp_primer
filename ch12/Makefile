main: main.o
	g++ -std=c++17 -o main main.o
main.o: ex12_3TextQuery.cpp TextQuery.h QueryResult.h Make_plural.h
	g++ -std=c++17 -c  ex12_3TextQuery.cpp -o main.o
clean:
	rm main main.o
