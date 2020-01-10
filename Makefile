# Declaratiile de variabile
CC = gcc
CFLAGS = -g -Wall -lm
 
# Regula de compilare
all: grep sort encrypt cut

grep: grep.c
	$(CC) -o grep grep.c $(CFLAGS) -std=c99

sort: sort.c
	$(CC) -o sort sort.c $(CFLAGS) -std=c99

encrypt: encrypt.c
	$(CC) -o encrypt encrypt.c $(CFLAGS) -std=c99

cut: cut.c
	$(CC) -o cut cut.c $(CFLAGS) -std=c99


# Regulile de "curatenie" (se folosesc pentru stergerea fisierelor intermediare si/sau rezultate)
.PHONY : clean
clean :
	rm -f sort grep cut encrypt
	rm -f *.out
