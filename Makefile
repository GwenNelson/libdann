all:    libdann.so doc unittests 
gch:
	find ./dann/ -name *.h   | xargs -n 1 -i{} g++ -g -I. -c {}
objects:
	find ./dann/ -name *.cpp | xargs -n 1 -i{} g++ -Wall -g -I. -c {} -o {}.o
.PHONY: doc
doc:
	doxygen
unittests:
	find ./tests -name *.cpp | xargs -n 1 -i{} g++ -Wall -g -I. -o {}.bin {}
libdann.so: gch objects
	find ./dann/ -name *.cpp.o | xargs g++ -Wall -g -shared -o libdann.so
.PHONY: clean
clean:
	find ./dann/ -name *.gch | xargs -n 1 -i{} rm {}
	find ./dann/ -name *.o   | xargs -n 1 -i{} rm {}
	rm -rf doc/html
	rm -f libdann.so
