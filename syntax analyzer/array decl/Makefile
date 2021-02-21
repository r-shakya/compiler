test: myparser
	./myparser < test.txt >> output.s
myparser: y.tab.c lex.yy.c y.tab.h
	gcc lex.yy.c y.tab.c -o myparser
lex.yy.c: lexer.l
	lex lexer.l
y.tab.c: parser.y
	yacc -d parser.y
clean:
	rm lex.yy.c y.tab.c y.tab.h myparser
