build:
	cd src/antlr4/runtime/Cpp/build 
	cmake ..
	make
	sudo make install
	cd ../../../../
	java -jar antlr-4.8-complete.jar -Dlanguage=Cpp ProjectFlight.g4
	g++ -I./include/antlr4-runtime -L./lib main.cpp -o main.o
	cd ..


clean:
	rm -r ./build
	rm 

testAntlr:
	mkdir -p ./build/antlr
	antlr4 -o ./build/antlr -lib ./src/antlr ./src/antlr/ProjectFlight.g4
	javac ./build/antlr/ProjectFlight*.java
	grun ./build/antlr/ProjectFlight file ./src/antlr/test -tree
