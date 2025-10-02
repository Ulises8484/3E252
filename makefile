bin/programa : scr/punteros.cpp
	c++ scr/punteros.cpp -o bin/programa -I include 

ejecutar : bin/programa
	./bin/programamake