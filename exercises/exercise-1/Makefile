clean: 
	rm -rf build
.mkbuild:
	mkdir build
run: .mkbuild main

#Making object files
./build/main.o: ./src/main.cpp
	g++ -I./lib/fizzbuzz/ -c -o $@ $<
	
-include ./build/main.d	./build/test.d	./build/unity.d ./build/fizzbuzz.d		

main: ./build/main.o ./build/fizzbuzz.o
	g++ -o ./build/main ./build/main.o ./build/fizzbuzz.o && ./build/main $(num) 

./build/fizzbuzz.o: ./lib/fizzbuzz/fizzbuzz.cpp
	g++ -I./lib/fizzbuzz/ -c -o $@ $<

#Making the test object file 
check: .mkbuild test 


./build/test.o: ./test/test.cpp
	g++ -I./lib/fizzbuzz/ -I./lib/unity/ -c -o $@ $<

./build/unity.o: ./lib/unity/unity.cpp
	g++ -I./lib/unity/ -c -o $@ $<

test: ./build/test.o ./build/unity.o ./build/fizzbuzz.o 
	g++ -o ./build/test ./build/test.o ./build/unity.o ./build/fizzbuzz.o && ./build/test


