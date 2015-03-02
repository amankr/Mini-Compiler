# Mini-Compiler
A Compiler for subset of C To MIPS.

You will need lex, Yacc and SPIM emulator( to test MIPS code).

#Usage
make 
(this will generate an execuatble named start )

./start < example.c 
(this will generate mips code for example.c into mips_code.s)

#File Details
The files are not organized into folders but here is the short description of what happens in each files


cGrammer : Grammer used for this project
clexer.l : lexer file for defining valid language tokens
cparser.y : Yacc based parser. Checks for symmentic errors and generates Abstract SynTax Tree and outputs final MIPS code.
CtoMIPS.c : takes AST as input and generates MIPS code into mips_code.s
symbolTable.c : defines helping functions used for creating Symbol Table.
definition.c : helping functions for generating AST.
definition.h : defines structure for AST and Symbol Table. 
test.c : some test programs for testing.