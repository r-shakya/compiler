mylexer: lex.yy.c
	gcc lex.yy.c -ll -o mylexer
lex.yy.c: lexer.l
	lex lexer.l
clean:
	rm lex.yy.c mylexer
