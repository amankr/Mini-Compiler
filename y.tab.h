#define IDENTIFIER 257
#define CONSTANT 258
#define STRING_LITERAL 259
#define SIZEOF 260
#define PTR_OP 261
#define INC_OP 262
#define DEC_OP 263
#define LEFT_OP 264
#define RIGHT_OP 265
#define LE_OP 266
#define GE_OP 267
#define EQ_OP 268
#define NE_OP 269
#define AND_OP 270
#define OR_OP 271
#define MUL_ASSIGN 272
#define DIV_ASSIGN 273
#define MOD_ASSIGN 274
#define ADD_ASSIGN 275
#define SUB_ASSIGN 276
#define LEFT_ASSIGN 277
#define RIGHT_ASSIGN 278
#define AND_ASSIGN 279
#define XOR_ASSIGN 280
#define OR_ASSIGN 281
#define IF 282
#define ELSE 283
#define WHILE 284
#define FOR 285
#define CONTINUE 286
#define BREAK 287
#define RETURN 288
#define READ 289
#define PRINT 290
#define CHAR 291
#define INT 292
#define FLOAT 293
#define VOID 294
#define STRUCT 295
#define MIN 296
#define MAX 297
#define SWAP 298
typedef union{
        struct AST *node;	/*non-terminals*/

        struct terminal{	/*terminals*/
                        char *text;
                        int type;
                        int line;
        } Sval;

} YYSTYPE;
extern YYSTYPE yylval;
