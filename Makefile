CC = gcc
CFLAGS = -g -std=c99
DEPS = parser.o lexer.o stack.o tree.o ast.o

tree: parser
	./parser < samples/07-try.co
	node tree-printer/main.js parse_tree.txt ast.txt
	google-chrome parse_tree.svg ast.svg

parser: $(DEPS)
	$(CC) $(CFLAGS) $(DEPS) -o $@

%.o: %.c %.h
	$(CC) -c $(CFLAGS) $<

clean: 
	rm -rf *.out *.dSYM *.o parser *.txt