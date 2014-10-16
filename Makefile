### Variables

CC = gcc
CFLAGS = -O -ggdb
LIBS = -lm

CFILES = *.c
HFILE = matrix.h
OUTDIR = .
EXE = $(OUTDIR)/matrix

### Rules

$(EXE): $(CFILES) $(HFILE)
	@$(CC) $(CFLAGS) $(CFILES) -o $(EXE) $(LIBS)
	@echo "Compilation Successful."
	@echo "Executable created: $(EXE)"

all: $(EXE)

clean:
	@rm -f $(EXE)
	@echo "Cleaned."
