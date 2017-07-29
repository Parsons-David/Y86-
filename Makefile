COMPILER = g++

all: y86emul test

y86emul: y86emul.cpp y86emul.h
		$(COMPILER) y86emul.cpp y86emul.h -o emul

test:
	@echo "------------------------------------------"
	./emul -h
	@echo "------------------------------------------"
	./emul --help
	@echo "------------------------------------------"
	./emul prog1.y86
	@echo "------------------------------------------"

clean:
		rm -f *.o
		rm -f emul
