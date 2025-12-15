main.out:
	gcc main.c funcs.c input.c resistor.c history.c -o main.out -lm

clean:
	-rm main.out

test: clean main.out
	bash test.sh
