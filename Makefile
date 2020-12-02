myBankd: libd.so main.o
	gcc -Wall -g -o myBankd main.o ./libd.so
libd.so:myBank.o
	gcc -shared -o libd.so myBank.o
myBank.o: myBank.c myBank.h
	gcc -Wall -g -fPIC -c myBank.c
main.o:main.c myBank.h
	gcc -Wall -g -c main.c
.PHONY: clean.
clean:
	rm -f *.o *.so myBankd