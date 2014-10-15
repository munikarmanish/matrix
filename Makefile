### Variables

CC = gcc
CFLAGS = -O -ggdb
LIBS = -lm

CFILES = *.c
HFILE = matrix.h
EXE = matrix

### Rules

$(EXE): $(CFILES) $(HFILE)
	@$(CC) $(CFLAGS) $(CFILES) -o $(EXE) $(LIBS)
	@echo "Compilation Successful. Executable: $(EXE)"

all: $(EXE)

clean:
	@rm -f $(EXE)
	@echo "Cleaned."
