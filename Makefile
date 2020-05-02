build:
	cd src/antlr4/runtime/Cpp/build 
	cmake ..
	make
	sudo make install
	cd ../../../../
	java -jar antlr-4.8-complete.jar -Dlanguage=Cpp ProjectFlight.g4
	cd ..

compileC:
	c++ src/*.cpp src/include/antlr4-grammar/*.cpp -Wall -Wextra -I ./src/include/antlr4-runtime -L ./src/lib -l antlr4-runtime -I./src/include/antlr4-grammar -o build/a.out

clean:
	rm -r ./build

testAntlr:
	mkdir -p ./build/antlr
	antlr4 -o ./build/antlr -lib ./src/antlr ./src/antlr/ProjectFlight.g4
	javac ./build/antlr/ProjectFlight*.java
	grun ./build/antlr/ProjectFlight file ./src/antlr/test -tree
