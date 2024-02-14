HDRS = shortcut.h

libshortcut.a: shortcut.o
	ar rs libshortcut.a shortcut.o

clean:
	rm -f libshortcut.a shortcut.o

%.o: %.c $(HDRS)
	g++ -c -Wall -pedantic -I $(INCPATH) shortcut.c
