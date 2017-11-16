CC				= g++
CCLINK		= g++
LIBS			=
CCOPTIONS	= -Wall -pedantic -g -std=c99
LDOPTIONS	=
HDRS		= unit_tests.h ../shortcut.h

TEST = test_unit_tests
#PROGRAM = number_quiz

TESTOBJECT = main_driver.o
#MAINOBJECT = number_quiz_main.o
OBJS = unit_tests.o ../shortcut.o

DOXY		= /Applications/Doxygen/Doxygen.app/Contents/Resources/doxygen

all: $(PROGRAM)
	./$(PROGRAM)

$(TEST): $(OBJS) $(TESTOBJECT)
	$(CCLINK) -o $@ $(LDOPTIONS) $(OBJS) $(TESTOBJECT)

#$(PROGRAM): $(OBJS) $(MAINOBJECT)
#	$(CCLINK) -o $@ $(LDOPTIONS) $(OBJS) $(MAINOBJECT)

.PHONY: clean cleanall doxy test

clean:
	rm -f $(PROGRAM) $(TEST) $(TESTOBJECT) $(MAINOBJECT) $(OBJS)

cleanall:
	rm -f $(PROGRAM) $(OBJS) index.html
	rm -R html

doxy:
	$(DOXY)
	ln -s html/index.html index.html

test: $(TEST)
	./$(TEST)

%.o: %.c $(HDRS)
	$(CC) $(CCOPTIONS) -c $<
