all: clean compile run

compile: 
	g++ -o solution ./d$(DAY)/main.cpp -O3

run:
	./solution < ./d$(DAY)/input.txt

clean:
	rm -f solution