GCC = gcc -Wall -g

myBankRun: libd.so main.o
	$(GCC) -o myBankRun main.o ./libd.so
libd.so:myBank.o
	gcc -shared -o libd.so myBank.o
myBank.o: myBank.c myBank.h
	$(GCC) -fPIC -c myBank.c
main.o:main.c myBank.h
	$(GCC) -c main.c
.PHONY: clean.
clean:
	rm -f *.o *.so myBankRun