### Variables

CC = gcc
CFLAGS = -O -ggdb

CFILES = *.c
HFILE = matrix.h
EXE = matrix

### Rules

$(EXE): $(CFILES) $(HFILE)
	@$(CC) $(CFLAGS) $(CFILES) -o $(EXE)
	@echo "Compilation Successful. Executable: $(EXE)"

all: $(EXE)

clean:
	@rm -f $(EXE)
	@echo "Cleaned."
