COMPILER = g++

all: y86emul

y86emul: y86emul.cpp y86emul.h
		$(COMPILER) y86emul.cpp y86emul.h -o emul

clean:
		rm -f *.o
		rm -f emul
