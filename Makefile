build:
	cd src/antlr4/runtime/Cpp/build 
	cmake ..
	make
	sudo make install
clean:
	rm -r ./build

testAntlr:
	mkdir -p ./build/antlr
	antlr4 -o ./build/antlr -lib ./src/antlr ./src/antlr/ProjectFlight.g4
	javac ./build/antlr/ProjectFlight*.java
	grun ./build/antlr/ProjectFlight file ./src/antlr/test -tree
