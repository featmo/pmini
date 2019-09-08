ODIR=obj/*.o
OUT=obj/
EDIR=bin/
SRC_DEP=src/main.cpp
SRC_DEPB=src/file_sys.cpp
STD=-std=c++17

comp: $(SRC_DEP)
	g++ $(STD) -c $(SRC_DEP) -o $(OUT)main.o
	g++ $(STD) -c $(SRC_DEPB) -o $(OUT)file_sys.o

pmini: $(ODIR)
	g++ -o $(EDIR)pmini $(ODIR)

