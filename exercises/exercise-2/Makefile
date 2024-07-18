build = build

object_file = $(build)/test.o $(build)/unity.o $(build)/fizzbuzz.o 

includes = -I./lib/fizzbuzz/ -I./lib/unity/

cc = g++

fizz_dir = lib/fizzbuzz

unity_dir = lib/unity

CFLAGS = -Wall -Wextra -g -MMD

main_files = $(build)/main.o $(build)/fizzbuzz.o

clean: 
	rm -rf build
.mkbuild:
	mkdir build
run: .mkbuild main

#Making object files
$(build)/%.o: ./src/%.cpp
	$(cc) $(CFLAGS) -I$(fizz_dir) -c -o $@ $<
	
-include $(object_file:.o=.d)		

$(build)/main: $(main_files)
	$(cc) -o $@ $^ && $@ $(num) 

$(build)/%.o $(fizz_dir)/%.cpp
	$(cc) $(CFLAGS) -I$(fizz_dir) -c -o $@ $<

#Making the test object file 
check: .mkbuild test

.PHONY: check clean run .mkbuild


$(build)/%.o: ./test/%.cpp
	$(cc) $(CFLAGS) $(includes) -c -o $@ $<

$(build)/unity.o: $(unity_dir)/unity.cpp
	$(cc) $(CFLAGS) -I$(unity_dir) -c -o $@ $<

test: $(object_file)
	$(cc) -o $(build)/test $^ && $(build)/test