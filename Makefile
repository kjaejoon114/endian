endain: add-nbo.o
	g++ -o endain add-nbo.o

add-nbo.o : add-nbo.cpp

clean:
	rm -f endain

