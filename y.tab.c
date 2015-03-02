#ifndef lint
static char yysccsid[] = "@(#)yaccpar	1.8 (Berkeley) 01/20/90";
#endif
#define YYBYACC 1
#line 2 "cparser.y"
#include"definition.h"

struct global my,check;
int open;
int jumpcount,returntype,returnpointer;
char returnchar[100];
int Totalerrors,funcount;
struct allFunc **ALL;
struct structure
{
	char in[100];
	int s;
}maxi[100];
#line 27 "cparser.y"
typedef union{
        struct AST *node;	/*non-terminals*/

        struct terminal{	/*terminals*/
                        char *text;
                        int type;
                        int line;
        } Sval;

} YYSTYPE;
#line 31 "y.tab.c"
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
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    1,    1,    1,    3,    3,    3,    3,    5,    5,    5,
    2,    2,    4,    4,    4,    4,    6,    6,    7,    8,
    8,    9,   10,   10,   10,   10,   11,   11,   11,   12,
   13,   46,   47,   48,   14,   14,   14,   15,   15,   15,
   15,   15,   15,   15,   44,   45,   16,   16,   16,   17,
   17,   18,   18,   18,   18,   19,   19,   19,   19,   19,
   19,   19,   19,   19,   19,   19,   20,   20,   21,   21,
   22,   22,   22,   22,   22,   22,   23,   23,   23,   23,
   23,   23,   23,   24,   24,   24,   24,   24,   24,   25,
   25,   25,   26,   26,   26,   26,   27,   27,   27,   28,
   28,   28,   29,   29,   29,   29,   29,   30,   30,   30,
   31,   31,   32,   32,   33,   33,   34,   34,   35,   35,
   36,   37,   37,   38,   38,   42,   43,   39,   41,   41,
   41,   40,   40,    0,    0,    0,    0,
};
short yylen[] = {                                         2,
    1,    4,    7,    1,    2,    3,    4,    1,    1,    1,
    1,    2,    1,    4,    3,    6,    1,    3,    3,    1,
    2,    5,    3,    2,    4,    3,    4,    2,    5,    6,
    6,    6,    6,    6,    2,    2,    2,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    7,    8,    9,    5,
    7,    2,    2,    2,    3,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    2,    1,    3,
    1,    1,    1,    3,    1,    1,    1,    4,    7,    3,
    4,    3,    6,    1,    1,    1,    1,    1,    1,    1,
    2,    4,    1,    3,    3,    3,    1,    3,    3,    1,
    3,    3,    1,    3,    3,    3,    3,    1,    3,    3,
    1,    3,    1,    3,    1,    3,    1,    3,    1,    3,
    1,    1,    3,    1,    2,    1,    1,    3,    2,    3,
    3,    5,    4,    1,    1,    2,    2,
};
short yydefred[] = {                                      0,
    9,    8,   10,    0,    0,    0,    0,  134,  135,    0,
    0,  136,  137,    0,    0,    4,    0,    0,   24,    0,
    0,    0,    0,    0,    0,    0,    5,    0,   23,    0,
    0,   26,    0,    0,    0,    0,   20,    0,   25,    0,
    0,    0,    6,    0,    0,  126,  133,    0,   11,    0,
   28,    0,    0,   17,    0,   22,   21,    0,    7,   14,
    0,    0,   72,   73,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   88,   67,    0,
   84,   85,   86,   87,   89,    0,   43,    0,    0,   44,
  124,   40,   41,   39,   42,   77,   90,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  122,
    0,    0,   38,   75,   76,    0,   12,    0,    0,  132,
    0,   19,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   52,   53,   54,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   35,   36,   91,   57,   58,   59,   60,
   61,   62,   63,   64,   65,   66,   56,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   68,  127,  125,  128,
   37,    0,   27,   18,    0,   16,    0,   80,    0,   69,
   82,    0,    0,    0,    0,   55,    0,    0,    0,    0,
    0,   74,  123,   94,   95,   96,   93,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   29,    3,    0,    0,   81,   92,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   70,    0,
   45,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   83,    0,    0,    0,    0,   30,   31,   33,   32,   34,
   79,   51,   46,   47,    0,    0,   48,    0,   49,
};
short yydgoto[] = {                                       5,
   16,   51,   17,   24,   86,   55,   37,   38,    7,   87,
   35,   88,   89,   90,   91,   92,   93,   94,  158,   95,
  189,   96,   97,   98,   99,  100,  101,  102,  103,  104,
  105,  106,  107,  108,  109,  110,  111,  112,  113,    9,
   10,   48,  180,  242,  264,  114,  115,  116,
};
short yysindex[] = {                                     13,
    0,    0,    0, -241,   13,  -29,  -10,    0,    0,    1,
  -99,    0,    0,  -48, -195,    0,    2,  -16,    0,   37,
   -3,  -16, -129,   43, -170,  -48,    0,  -22,    0, -127,
 -118,    0,   52,  -20,   30,  -73,    0,  -75,    0,   99,
  -48,  -39,    0,  120,  132,    0,    0,   74,    0,  -21,
    0,   58,   52,    0,   85,    0,    0,  159,    0,    0,
   10,   12,    0,    0,  250,  252,  253,  254,  237,  242,
   40,  263,  266,   53,  280,  290,  295,    0,    0,  169,
    0,    0,    0,    0,    0,  -11,    0,  279,  284,    0,
    0,    0,    0,    0,    0,    0,    0,  169,  135,  173,
  116, -228,  -45, -164,  306,  251,  222,   81,   83,    0,
  296,  -33,    0,    0,    0,  298,    0,  125,  -20,    0,
  126,    0,  119,  291,  169,   82,  128, -129,  169,  169,
  134,    0,    0,    0,  327, -129, -129,  -89,  130,  133,
  138,  355,  -39,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  169,  169,  169,
  169,  169,  169,  169,  169,  169,  169,  169,  169,  169,
  169,  169,  169,  169,  169,  169,    0,    0,    0,    0,
    0,  145,    0,    0,  312,    0,  324,    0,   54,    0,
    0,  377,  378,  379,  134,    0,  380,  381,  388,  389,
  399,    0,    0,    0,    0,    0,    0,  173,  173,  116,
  116, -228, -228, -228, -228,  -45,  -45, -164,  306,  251,
  222,   81,    0,    0,  -44,  169,    0,    0,   52,  299,
  140,  166,  188,  189,  190,  191,  169,  192,    0,  167,
    0,   74,  299,  410,  411,  412,  413,  419,  420,  369,
    0,   74,  -15,   74,  299,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  -15,   74,    0,  -15,    0,
};
short yyrindex[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   69,    0,    0,    0,   86,    0,    0,
    0,   98,    0,    0,    0,  146,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   88,    0,    0,    0,   97,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  147,    0,    0,
    0,  397,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  455,  463,
  472,  742,  -30,  110,  -40,  536,  -38,    7,   -2,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  492,  500,  529,
  587,  767,  778,  787,  824,  105,  804,  517,   77,  562,
  362,   96,    0,    0,  426,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   27,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
   17,  353,    0,  467,  903,    0,  437,    0,    0,   35,
    0,    0,    0,    0,  136,    0,    0,    0,    0,  -98,
    0,    0,    0,    0,  797,  -28,   23,  160,   24,  304,
  305,  303,  307,  308,    0,    0,  763, -165,   73,  474,
    0,    0,    0, -187, -189,    0,    0,    0,
};
#define YYTABLESIZE 1095
short yytable[] = {                                      83,
  113,  238,  117,  113,   85,  117,   80,  108,   78,   81,
  108,   82,   15,  108,  168,   11,  169,   83,  113,   42,
  117,   50,   85,   23,   80,   79,   78,   81,  108,   82,
  143,   27,  195,   23,    8,  164,  165,   33,  121,   12,
   21,  121,   25,   79,   43,   28,  237,  119,   19,   56,
  119,  126,  113,  113,  117,  254,  121,  127,   59,   50,
   29,   26,  108,  108,   50,  119,   50,  266,   50,   50,
   53,   50,   83,   52,   30,  267,  253,   85,  269,   80,
   31,   78,   81,  113,   82,   50,   31,   40,  265,   46,
  121,  178,   84,  108,  227,   32,  231,  226,  134,  119,
  268,   39,  125,  170,  171,   47,   83,   46,  129,  263,
   84,   85,    1,   80,   83,   78,   81,  114,   82,   85,
  114,   80,  188,   78,   81,  120,   82,    1,  121,   13,
   44,    1,   79,  208,  209,  114,  120,  130,   45,  120,
   15,   13,  109,  122,   13,  109,    1,  111,  109,   50,
  111,   50,   50,  111,  120,   15,   13,   22,  162,   27,
  163,    1,    2,  109,    3,   84,   83,   18,  111,  114,
  114,   85,   83,   80,   46,   78,   81,   85,   82,   80,
  243,   78,   81,   54,   82,  131,  210,  211,  120,    1,
    2,   58,   79,  216,  217,  157,   46,  109,  109,   84,
  114,   83,  111,  111,    1,    2,   85,   84,   80,  161,
   78,   81,   60,   82,  159,    1,    2,   41,    3,  160,
  166,  167,   61,   62,   63,   64,   65,   14,  109,  113,
  113,  117,  117,  111,   41,  117,   49,  108,  108,  108,
  108,   62,   63,   64,   65,   41,   18,  179,   66,  123,
   67,   68,   69,   70,   71,   72,   73,    1,    2,   84,
    3,   74,   75,   76,   77,   84,   66,  124,   67,   68,
   69,   70,   71,   72,   73,    1,    2,  119,    3,   74,
   75,   76,   77,   50,   50,   50,   50,    1,    2,  128,
    3,  129,  130,  131,   84,  132,   62,   63,   64,   65,
  133,  240,  136,    1,    2,  137,    3,    4,   50,  138,
   50,   50,   50,   50,   50,   50,   50,   50,   50,  139,
   50,   50,   50,   50,   50,  212,  213,  214,  215,  140,
   62,   63,   64,   65,  141,   75,   76,  144,   62,   63,
   64,   65,  145,  172,  173,  174,  114,  114,    1,    2,
  175,    3,  118,  176,  177,   66,  181,   67,   68,   69,
   70,   71,   72,   73,    1,    2,  120,    3,   74,   75,
   76,   77,  109,  109,  109,  109,  185,   75,   76,  111,
  111,  182,  184,  186,  191,  196,  199,  262,  179,  200,
   62,   63,   64,   65,  201,  202,   62,   63,   64,   65,
  179,  223,  118,  179,  224,  118,  147,  148,  149,  150,
  151,  152,  153,  154,  155,  156,  225,  228,  229,  230,
  118,  241,  245,  232,  233,   62,   63,   64,   65,   75,
   76,  234,  235,   71,   71,   75,   76,   71,   71,   71,
   71,   71,  236,   71,  246,  247,  248,  249,  251,  252,
  255,  256,  257,  258,  118,   71,   71,   71,   71,  259,
  260,  261,   78,   78,   75,   76,   78,   78,   78,   78,
   78,  183,   78,   20,   57,  218,  220,  219,   13,    0,
    0,  221,    0,  222,   78,   78,   78,   78,    0,   71,
   71,   93,   93,    0,    0,   93,   93,   93,   93,   93,
   97,   93,    0,   97,    0,   97,   97,   97,    0,  100,
    0,    0,  100,   93,   93,  100,   93,    0,   78,   78,
   71,   97,   97,    0,   97,    0,    0,    0,    0,   98,
  100,  100,   98,  100,   98,   98,   98,   99,    0,    0,
   99,    0,   99,   99,   99,    0,    0,   93,   93,   78,
   98,   98,    0,   98,  112,   97,   97,  112,   99,   99,
  112,   99,    0,    0,  100,  100,  101,    0,    0,  101,
    0,    0,  101,    0,    0,  112,  115,    0,   93,  115,
    0,    0,    0,    0,   98,   98,   97,  101,  101,    0,
  101,    0,   99,   99,  115,  100,    0,    0,    0,    0,
    0,    0,  116,    0,    0,  116,    0,    0,    0,  112,
  112,    0,    0,    0,    0,   98,    0,    0,    0,    0,
  116,  101,  101,   99,  102,    0,    0,  102,  115,    0,
  102,  118,  118,    0,    0,    0,    0,    0,    0,    0,
  112,    0,    0,    0,    0,  102,  102,    0,  102,    0,
    0,    0,  101,    0,  116,    0,    0,    0,    0,  115,
   71,   71,   71,   71,   71,   71,   71,   71,   71,   71,
   71,   71,   71,   71,   71,   71,   71,   71,    0,  102,
  102,    0,    0,    0,    0,  116,    0,    0,    0,   78,
   78,   78,   78,   78,   78,   78,   78,   78,   78,   78,
   78,   78,   78,   78,   78,   78,   78,    0,    0,    0,
  102,    0,    0,    0,    0,    0,    0,    0,   93,   93,
   93,   93,   93,   93,   93,   93,   97,   97,   97,   97,
   97,   97,   97,   97,    0,  100,  100,  100,  100,  100,
  100,  100,  100,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   98,   98,   98,   98,   98,
   98,   98,   98,   99,   99,   99,   99,   99,   99,   99,
   99,    0,    0,    0,    0,    0,    0,    0,    0,  103,
    0,    0,  103,    0,    0,  103,  112,  112,    0,    0,
    0,    0,  101,  101,  101,  101,  101,  101,  101,  101,
  103,  103,    0,  103,  106,  115,  115,  106,    0,    0,
  106,    0,    0,    0,    0,  107,    0,    0,  107,    0,
    0,  107,    0,    0,  104,  106,  106,  104,  106,    0,
  104,  116,  116,  135,  103,  103,  107,  107,    0,  107,
    0,  110,  142,    0,  110,  104,  104,  110,  104,    0,
  102,  102,  102,  102,  102,  102,  102,  102,    0,  106,
  106,  105,  110,    0,  105,  103,    0,  105,    0,    0,
  107,  107,    0,    0,    0,    0,    0,    0,    0,  104,
  104,    0,  105,  105,    0,  105,    0,  187,  190,    0,
  106,  193,  194,    0,  146,    0,  110,  110,    0,    0,
    0,  107,    6,    0,    0,    0,    0,    6,    0,    0,
  104,    0,    0,    0,    0,    0,  105,  105,    0,    0,
  203,    0,    0,   34,    0,   36,    0,  110,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   36,    0,    0,    0,    0,    0,    0,  105,    0,    0,
    0,    0,    0,    0,  119,  204,  205,  206,  207,  207,
  207,  207,  207,  207,  207,  207,  207,  207,  207,  207,
  207,  207,  207,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  239,    0,
    0,    0,    0,  244,    0,    0,    0,    0,    0,  250,
    0,    0,    0,    0,    0,    0,    0,  103,  103,  103,
  103,  103,  103,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  192,    0,  106,  106,  106,  106,  106,  106,  197,  198,
    0,    0,    0,  107,  107,  107,  107,  107,  107,    0,
    0,    0,  104,  104,  104,  104,  104,  104,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  110,  110,  110,  110,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  105,
  105,  105,  105,  105,  105,
};
short yycheck[] = {                                      33,
   41,   46,   41,   44,   38,   44,   40,   38,   42,   43,
   41,   45,   42,   44,   60,  257,   62,   33,   59,   42,
   59,   42,   38,  123,   40,   59,   42,   43,   59,   45,
   42,   15,  131,  123,    0,  264,  265,   41,   41,    5,
   40,   44,   91,   59,   28,   44,   91,   41,   59,  125,
   44,   40,   93,   94,   93,  243,   59,   46,   42,   33,
   59,  257,   93,   94,   38,   59,   40,  255,   42,   43,
   41,   45,   33,   44,   91,  265,  242,   38,  268,   40,
   44,   42,   43,  124,   45,   59,   44,  258,  254,  123,
   93,  125,  126,  124,   41,   59,  195,   44,   59,   93,
  266,   59,   91,  268,  269,   33,   33,  123,   40,  125,
  126,   38,   44,   40,   33,   42,   43,   41,   45,   38,
   44,   40,   41,   42,   43,   53,   45,   59,   44,   44,
  258,   44,   59,  162,  163,   59,   41,   40,  257,   44,
   44,   44,   38,   59,   59,   41,   59,   38,   44,  123,
   41,  125,  126,   44,   59,   59,   59,  257,   43,  143,
   45,  291,  292,   59,  294,  126,   33,  257,   59,   93,
   94,   38,   33,   40,  123,   42,   43,   38,   45,   40,
   41,   42,   43,  257,   45,   40,  164,  165,   93,   44,
   44,   93,   59,  170,  171,   61,  123,   93,   94,  126,
  124,   33,   93,   94,   59,   59,   38,  126,   40,   37,
   42,   43,   93,   45,   42,  291,  292,  257,  294,   47,
  266,  267,   91,  257,  258,  259,  260,  257,  124,  270,
  271,  270,  271,  124,  257,  257,  257,  268,  269,  270,
  271,  257,  258,  259,  260,  257,  257,  112,  282,   91,
  284,  285,  286,  287,  288,  289,  290,  291,  292,  126,
  294,  295,  296,  297,  298,  126,  282,  258,  284,  285,
  286,  287,  288,  289,  290,  291,  292,  271,  294,  295,
  296,  297,  298,  257,  258,  259,  260,  291,  292,   40,
  294,   40,   40,   40,  126,   59,  257,  258,  259,  260,
   59,  229,   40,  291,  292,   40,  294,  295,  282,  257,
  284,  285,  286,  287,  288,  289,  290,  291,  292,   40,
  294,  295,  296,  297,  298,  166,  167,  168,  169,   40,
  257,  258,  259,  260,   40,  296,  297,   59,  257,  258,
  259,  260,   59,   38,   94,  124,  270,  271,  291,  292,
  270,  294,  295,  271,   59,  282,   59,  284,  285,  286,
  287,  288,  289,  290,  291,  292,  271,  294,  295,  296,
  297,  298,  268,  269,  270,  271,  258,  296,  297,  270,
  271,  257,  257,   93,  257,   59,  257,  252,  253,  257,
  257,  258,  259,  260,  257,   41,  257,  258,  259,  260,
  265,  257,   41,  268,   93,   44,  272,  273,  274,  275,
  276,  277,  278,  279,  280,  281,   93,   41,   41,   41,
   59,  123,  257,   44,   44,  257,  258,  259,  260,  296,
  297,   44,   44,   37,   38,  296,  297,   41,   42,   43,
   44,   45,   44,   47,  257,  257,  257,  257,  257,  283,
   41,   41,   41,   41,   93,   59,   60,   61,   62,   41,
   41,   93,   37,   38,  296,  297,   41,   42,   43,   44,
   45,  119,   47,    7,   38,  172,  174,  173,    5,   -1,
   -1,  175,   -1,  176,   59,   60,   61,   62,   -1,   93,
   94,   37,   38,   -1,   -1,   41,   42,   43,   44,   45,
   38,   47,   -1,   41,   -1,   43,   44,   45,   -1,   38,
   -1,   -1,   41,   59,   60,   44,   62,   -1,   93,   94,
  124,   59,   60,   -1,   62,   -1,   -1,   -1,   -1,   38,
   59,   60,   41,   62,   43,   44,   45,   38,   -1,   -1,
   41,   -1,   43,   44,   45,   -1,   -1,   93,   94,  124,
   59,   60,   -1,   62,   38,   93,   94,   41,   59,   60,
   44,   62,   -1,   -1,   93,   94,   38,   -1,   -1,   41,
   -1,   -1,   44,   -1,   -1,   59,   41,   -1,  124,   44,
   -1,   -1,   -1,   -1,   93,   94,  124,   59,   60,   -1,
   62,   -1,   93,   94,   59,  124,   -1,   -1,   -1,   -1,
   -1,   -1,   41,   -1,   -1,   44,   -1,   -1,   -1,   93,
   94,   -1,   -1,   -1,   -1,  124,   -1,   -1,   -1,   -1,
   59,   93,   94,  124,   38,   -1,   -1,   41,   93,   -1,
   44,  270,  271,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  124,   -1,   -1,   -1,   -1,   59,   60,   -1,   62,   -1,
   -1,   -1,  124,   -1,   93,   -1,   -1,   -1,   -1,  124,
  264,  265,  266,  267,  268,  269,  270,  271,  272,  273,
  274,  275,  276,  277,  278,  279,  280,  281,   -1,   93,
   94,   -1,   -1,   -1,   -1,  124,   -1,   -1,   -1,  264,
  265,  266,  267,  268,  269,  270,  271,  272,  273,  274,
  275,  276,  277,  278,  279,  280,  281,   -1,   -1,   -1,
  124,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  264,  265,
  266,  267,  268,  269,  270,  271,  264,  265,  266,  267,
  268,  269,  270,  271,   -1,  264,  265,  266,  267,  268,
  269,  270,  271,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  264,  265,  266,  267,  268,
  269,  270,  271,  264,  265,  266,  267,  268,  269,  270,
  271,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   38,
   -1,   -1,   41,   -1,   -1,   44,  270,  271,   -1,   -1,
   -1,   -1,  264,  265,  266,  267,  268,  269,  270,  271,
   59,   60,   -1,   62,   38,  270,  271,   41,   -1,   -1,
   44,   -1,   -1,   -1,   -1,   38,   -1,   -1,   41,   -1,
   -1,   44,   -1,   -1,   38,   59,   60,   41,   62,   -1,
   44,  270,  271,   71,   93,   94,   59,   60,   -1,   62,
   -1,   38,   80,   -1,   41,   59,   60,   44,   62,   -1,
  264,  265,  266,  267,  268,  269,  270,  271,   -1,   93,
   94,   38,   59,   -1,   41,  124,   -1,   44,   -1,   -1,
   93,   94,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   93,
   94,   -1,   59,   60,   -1,   62,   -1,  125,  126,   -1,
  124,  129,  130,   -1,   98,   -1,   93,   94,   -1,   -1,
   -1,  124,    0,   -1,   -1,   -1,   -1,    5,   -1,   -1,
  124,   -1,   -1,   -1,   -1,   -1,   93,   94,   -1,   -1,
  158,   -1,   -1,   21,   -1,   23,   -1,  124,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   38,   -1,   -1,   -1,   -1,   -1,   -1,  124,   -1,   -1,
   -1,   -1,   -1,   -1,   52,  159,  160,  161,  162,  163,
  164,  165,  166,  167,  168,  169,  170,  171,  172,  173,
  174,  175,  176,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  226,   -1,
   -1,   -1,   -1,  231,   -1,   -1,   -1,   -1,   -1,  237,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  266,  267,  268,
  269,  270,  271,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  128,   -1,  266,  267,  268,  269,  270,  271,  136,  137,
   -1,   -1,   -1,  266,  267,  268,  269,  270,  271,   -1,
   -1,   -1,  266,  267,  268,  269,  270,  271,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  268,  269,  270,  271,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  266,
  267,  268,  269,  270,  271,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 298
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,"'%'","'&'",0,"'('","')'","'*'","'+'","','","'-'","'.'","'/'",0,0,0,
0,0,0,0,0,0,0,0,"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,"'['",0,"']'","'^'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'{'","'|'","'}'","'~'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"IDENTIFIER","CONSTANT",
"STRING_LITERAL","SIZEOF","PTR_OP","INC_OP","DEC_OP","LEFT_OP","RIGHT_OP",
"LE_OP","GE_OP","EQ_OP","NE_OP","AND_OP","OR_OP","MUL_ASSIGN","DIV_ASSIGN",
"MOD_ASSIGN","ADD_ASSIGN","SUB_ASSIGN","LEFT_ASSIGN","RIGHT_ASSIGN",
"AND_ASSIGN","XOR_ASSIGN","OR_ASSIGN","IF","ELSE","WHILE","FOR","CONTINUE",
"BREAK","RETURN","READ","PRINT","CHAR","INT","FLOAT","VOID","STRUCT","MIN",
"MAX","SWAP",
};
char *yyrule[] = {
"$accept : program",
"var : IDENTIFIER",
"var : IDENTIFIER '[' CONSTANT ']'",
"var : IDENTIFIER '[' CONSTANT ']' '[' CONSTANT ']'",
"variables : var",
"variables : '*' var",
"variables : variables ',' var",
"variables : variables ',' '*' var",
"type : INT",
"type : CHAR",
"type : VOID",
"arg_var : IDENTIFIER",
"arg_var : '*' IDENTIFIER",
"struct_var : IDENTIFIER",
"struct_var : IDENTIFIER '[' CONSTANT ']'",
"struct_var : struct_var ',' IDENTIFIER",
"struct_var : struct_var ',' IDENTIFIER '[' CONSTANT ']'",
"inside_dec : IDENTIFIER",
"inside_dec : inside_dec ',' IDENTIFIER",
"struct_declaration : type inside_dec ';'",
"struct_list : struct_declaration",
"struct_list : struct_list struct_declaration",
"struct : STRUCT IDENTIFIER '{' struct_list '}'",
"declaration : type variables ';'",
"declaration : struct ';'",
"declaration : STRUCT IDENTIFIER struct_var ';'",
"declaration : struct struct_var ';'",
"argument_list : argument_list ',' type arg_var",
"argument_list : type arg_var",
"argument_list : argument_list ',' STRUCT IDENTIFIER IDENTIFIER",
"read : READ '(' type ',' IDENTIFIER ')'",
"print : PRINT '(' type ',' IDENTIFIER ')'",
"max : MAX '(' IDENTIFIER ',' IDENTIFIER ')'",
"min : MIN '(' IDENTIFIER ',' IDENTIFIER ')'",
"swap : SWAP '(' IDENTIFIER ',' IDENTIFIER ')'",
"myfunction : read ';'",
"myfunction : print ';'",
"myfunction : swap ';'",
"statement : body",
"statement : jump_statement",
"statement : iteration_statement",
"statement : selection_statement",
"statement : expression_statement",
"statement : declaration",
"statement : myfunction",
"istart : '{'",
"iend : '}'",
"iteration_statement : WHILE '(' expression ')' istart statement_list iend",
"iteration_statement : FOR '(' expression_statement expression_statement ')' istart statement_list iend",
"iteration_statement : FOR '(' expression_statement expression_statement expression ')' istart statement_list iend",
"selection_statement : IF '(' expression ')' body",
"selection_statement : IF '(' expression ')' body ELSE statement",
"jump_statement : CONTINUE ';'",
"jump_statement : BREAK ';'",
"jump_statement : RETURN ';'",
"jump_statement : RETURN expression ';'",
"ass_operator : '='",
"ass_operator : MUL_ASSIGN",
"ass_operator : DIV_ASSIGN",
"ass_operator : MOD_ASSIGN",
"ass_operator : ADD_ASSIGN",
"ass_operator : SUB_ASSIGN",
"ass_operator : LEFT_ASSIGN",
"ass_operator : RIGHT_ASSIGN",
"ass_operator : AND_ASSIGN",
"ass_operator : XOR_ASSIGN",
"ass_operator : OR_ASSIGN",
"expression_statement : ';'",
"expression_statement : expression ';'",
"arg_list : expression",
"arg_list : arg_list ',' expression",
"starting : IDENTIFIER",
"starting : CONSTANT",
"starting : STRING_LITERAL",
"starting : '(' expression ')'",
"starting : max",
"starting : min",
"main_exp : starting",
"main_exp : IDENTIFIER '[' expression ']'",
"main_exp : IDENTIFIER '[' expression ']' '[' expression ']'",
"main_exp : IDENTIFIER '(' ')'",
"main_exp : IDENTIFIER '(' arg_list ')'",
"main_exp : IDENTIFIER '.' IDENTIFIER",
"main_exp : IDENTIFIER '[' expression ']' '.' IDENTIFIER",
"unary_op : '+'",
"unary_op : '-'",
"unary_op : '!'",
"unary_op : '~'",
"unary_op : '*'",
"unary_op : '&'",
"unary_exp : main_exp",
"unary_exp : unary_op unary_exp",
"unary_exp : SIZEOF '(' type ')'",
"mul_div_mod : unary_exp",
"mul_div_mod : mul_div_mod '*' unary_exp",
"mul_div_mod : mul_div_mod '/' unary_exp",
"mul_div_mod : mul_div_mod '%' unary_exp",
"plus_minus : mul_div_mod",
"plus_minus : plus_minus '+' mul_div_mod",
"plus_minus : plus_minus '-' mul_div_mod",
"shift : plus_minus",
"shift : shift LEFT_OP plus_minus",
"shift : shift RIGHT_OP plus_minus",
"lt_gt_lte_gte : shift",
"lt_gt_lte_gte : lt_gt_lte_gte '<' shift",
"lt_gt_lte_gte : lt_gt_lte_gte '>' shift",
"lt_gt_lte_gte : lt_gt_lte_gte LE_OP shift",
"lt_gt_lte_gte : lt_gt_lte_gte GE_OP shift",
"eq_neq : lt_gt_lte_gte",
"eq_neq : eq_neq EQ_OP lt_gt_lte_gte",
"eq_neq : eq_neq NE_OP lt_gt_lte_gte",
"and : eq_neq",
"and : and '&' eq_neq",
"xor : and",
"xor : xor '^' and",
"or : xor",
"or : or '|' xor",
"andand : or",
"andand : andand AND_OP or",
"oror : andand",
"oror : oror OR_OP andand",
"conditional_exp : oror",
"expression : conditional_exp",
"expression : unary_exp ass_operator expression",
"statement_list : statement",
"statement_list : statement_list statement",
"openB : '{'",
"closeB : '}'",
"body : openB statement_list closeB",
"function_name : type IDENTIFIER",
"function_name : STRUCT IDENTIFIER IDENTIFIER",
"function_name : type '*' IDENTIFIER",
"function : function_name '(' argument_list ')' body",
"function : function_name '(' ')' body",
"program : declaration",
"program : function",
"program : program declaration",
"program : program function",
};
#endif
#define yyclearin (yychar=(-1))
#define yyerrok (yyerrflag=0)
#ifdef YYSTACKSIZE
#ifndef YYMAXDEPTH
#define YYMAXDEPTH YYSTACKSIZE
#endif
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH 500
#endif
#endif
int yydebug;
int yynerrs;
int yyerrflag;
int yychar;
short *yyssp;
YYSTYPE *yyvsp;
YYSTYPE yyval;
YYSTYPE yylval;
short yyss[YYSTACKSIZE];
YYSTYPE yyvs[YYSTACKSIZE];
#define yystacksize YYSTACKSIZE
#line 1251 "cparser.y"
yyerror(s)
char *s;
{
        fflush(stdout);
		printf("Parse Error\n");
		return;
}
int main()
{
	open = 0;
	jumpcount=0;
	returntype=0;
	returnpointer=0;
	Totalerrors=0;
	funcount = 0;
	init();
	yyparse();
	//AST_print(tree);
	depthSymbolTree(sym,1);
	printSymbolTree(sym);
	if(Totalerrors>0)
		printf("Total symantic errors: %d\n",Totalerrors);
	else{
		printf("Generating MIPS code...\n");
		GenerateMIPS();
	}
	
	return 0;
}
#line 651 "y.tab.c"
#define YYABORT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse()
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register char *yys;
    extern char *getenv();

    if (yys = getenv("YYDEBUG"))
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = (-1);

    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if (yyn = yydefred[yystate]) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("yydebug: state %d, reading %d (%s)\n", yystate,
                    yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("yydebug: state %d, shifting to state %d (%s)\n",
                    yystate, yytable[yyn],yyrule[yyn]);
#endif
        if (yyssp >= yyss + yystacksize - 1)
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = (-1);
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;
#ifdef lint
    goto yynewerror;
#endif
yynewerror:
    yyerror("syntax error");
#ifdef lint
    goto yyerrlab;
#endif
yyerrlab:
    ++yynerrs;
yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("yydebug: state %d, error recovery shifting\
 to state %d\n", *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yyss + yystacksize - 1)
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("yydebug: error recovery discarding state %d\n",
                            *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("yydebug: state %d, error recovery discards token %d (%s)\n",
                    yystate, yychar, yys);
        }
#endif
        yychar = (-1);
        goto yyloop;
    }
yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("yydebug: state %d, reducing by rule %d (%s)\n",
                yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    yyval = yyvsp[1-yym];
    switch (yyn)
    {
case 1:
#line 97 "cparser.y"
{yyval.node = MakeNode(0); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);
								yyval.node->array = 0;
								}
break;
case 2:
#line 101 "cparser.y"
{yyval.node = MakeNode(0); yyval.node->type = yyvsp[-3].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-3].Sval.text);
								yyval.node->array = 1; yyval.node->dim1 = atoi(yyvsp[-1].Sval.text);
								}
break;
case 3:
#line 105 "cparser.y"
{yyval.node = MakeNode(0); yyval.node->type = yyvsp[-6].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-6].Sval.text);
								yyval.node->array = 2; yyval.node->dim1 = atoi(yyvsp[-4].Sval.text); yyval.node->dim2 = atoi(yyvsp[-1].Sval.text);
							}
break;
case 4:
#line 111 "cparser.y"
{
									yyval.node = yyvsp[0].node; yyval.node->pointer = 0;
								}
break;
case 5:
#line 114 "cparser.y"
{
									yyval.node = yyvsp[0].node; yyval.node->pointer = 1;
								}
break;
case 6:
#line 117 "cparser.y"
{
									yyval.node = MakeNode(2); yyval.node->type = 100; strcpy(yyval.node->lexeme,",");
									yyval.node->child[0] = yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node; 
									yyval.node->child[1] = yyvsp[0].node; yyvsp[0].node->parent = yyval.node;  yyvsp[0].node->pointer = 0; 
							   }
break;
case 7:
#line 122 "cparser.y"
{
									yyval.node = MakeNode(2); yyval.node->type = 100; strcpy(yyval.node->lexeme,",");
									yyval.node->child[0] = yyvsp[-3].node; yyvsp[-3].node->parent = yyval.node; 
									yyval.node->child[1] = yyvsp[0].node; yyvsp[0].node->parent = yyval.node;  yyvsp[0].node->pointer = 1;
							   }
break;
case 8:
#line 130 "cparser.y"
{yyval.node = MakeNode(0); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);}
break;
case 9:
#line 132 "cparser.y"
{yyval.node = MakeNode(0); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);}
break;
case 10:
#line 133 "cparser.y"
{yyval.node = MakeNode(0); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);}
break;
case 11:
#line 137 "cparser.y"
{
							yyval.node = MakeNode(0); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);
							yyval.node->array = 0; yyval.node->pointer = 0;
						}
break;
case 12:
#line 141 "cparser.y"
{
							yyval.node = MakeNode(0); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);
							yyval.node->array = 0; yyval.node->pointer = 1;
						}
break;
case 13:
#line 166 "cparser.y"
{
							yyval.node = MakeNode(0); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);
							yyval.node->array = 0; yyval.node->pointer = 0;
						}
break;
case 14:
#line 171 "cparser.y"
{
							yyval.node = MakeNode(0); yyval.node->type = yyvsp[-3].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-3].Sval.text);
							yyval.node->array = 1; yyval.node->dim1 = atoi(yyvsp[-1].Sval.text);
							yyval.node->pointer = 0;
						}
break;
case 15:
#line 177 "cparser.y"
{
							yyval.node = MakeNode(2); yyval.node->type = 100; strcpy(yyval.node->lexeme,",");
							yyval.node->child[1] = MakeNode(0); yyval.node->child[1]->type = yyvsp[0].Sval.type; strcpy(yyval.node->child[1]->lexeme,yyvsp[0].Sval.text);
							yyval.node->child[1]->parent = yyval.node;
							yyval.node->child[1]->array = 0; yyval.node->child[1]->pointer = 0;
							yyval.node->child[0] = yyvsp[-2].node;
							yyvsp[-2].node->parent = yyval.node;	
						}
break;
case 16:
#line 186 "cparser.y"
{
							yyval.node = MakeNode(2); yyval.node->type = 100; strcpy(yyval.node->lexeme,",");
							yyval.node->child[1] = MakeNode(0); yyval.node->child[1]->type = yyvsp[-3].Sval.type; strcpy(yyval.node->child[1]->lexeme,yyvsp[-3].Sval.text);
							yyval.node->child[1]->parent = yyval.node;
							yyval.node->child[1]->array = 1; yyval.node->child[1]->pointer = 0;
							yyval.node->child[1]->dim1 = atoi(yyvsp[-1].Sval.text);
							yyval.node->child[0] = yyvsp[-5].node;
							yyvsp[-5].node->parent = yyval.node;

						}
break;
case 17:
#line 199 "cparser.y"
{yyval.node = MakeNode(0); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);
									yyval.node->array = 0; yyval.node->pointer = 0;
									}
break;
case 18:
#line 202 "cparser.y"
{
									yyval.node = MakeNode(2); yyval.node->type = 100; strcpy(yyval.node->lexeme,",");
									yyval.node->child[0] = yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node; 
									yyval.node->child[1] = MakeNode(0); yyval.node->child[1]->type = yyvsp[0].Sval.type; strcpy(yyval.node->child[1]->lexeme,yyvsp[0].Sval.text);
									yyval.node->child[1]->array=0; yyval.node->child[1]->pointer=0;  
								   }
break;
case 19:
#line 210 "cparser.y"
{
										yyval.node = MakeNode(2); yyval.node->type = 100; strcpy(yyval.node->lexeme,";");
										yyval.node->child[0] = yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
										yyval.node->child[1] = yyvsp[-1].node; yyvsp[-1].node->parent = yyval.node;
									}
break;
case 20:
#line 218 "cparser.y"
{yyval.node = yyvsp[0].node;
									}
break;
case 21:
#line 221 "cparser.y"
{
										yyval.node = MakeNode(2); yyval.node->type = 100; strcpy(yyval.node->lexeme,"#"); 
										yyval.node->child[0] = yyvsp[-1].node; yyvsp[-1].node->parent = yyval.node;
										yyval.node->child[1] = yyvsp[0].node; yyvsp[0].node->parent = yyval.node;
									}
break;
case 22:
#line 229 "cparser.y"
{
									strcpy(maxi[init_count].in,yyvsp[-3].Sval.text);
									yyval.node = MakeNode(0); yyval.node->type = yyvsp[-3].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-3].Sval.text);
									my.type = 6;
									
									AddSymbol(yyvsp[-3].Sval.text,my,currentT);
									
									/*AST_print($4);*/
									my.struct_member = 1;
									strcpy(my.structName,yyvsp[-3].Sval.text);
									order=0;
									addVar(my,yyvsp[-1].node,currentT);
									yyval.node->order = order;
									check.array = 6; check.struct_member = 0; 
									maxi[init_count].s=order;
									init_count++;
								/*	struct symbolTable *temp = FindSymbol($2.text,check,currentT);*/
								/*	temp->order = $$->order;*/
								}
break;
case 23:
#line 251 "cparser.y"
{
								my.type = yyvsp[-2].node->type; my.struct_member = 0; addVar(my,yyvsp[-1].node,currentT);
							}
break;
case 24:
#line 255 "cparser.y"
{

							}
break;
case 25:
#line 259 "cparser.y"
{
									int aman=0;
									for(;aman<init_count;aman++){
										if(strcmp(maxi[aman].in,yyvsp[-2].Sval.text)==0)	break;
									}
									if(aman==init_count){
											printf("Kat Gaya\n");
									}
									else{
										my.order=maxi[aman].s;
									}
									my.struct_member=0;
									strcpy(my.structID,yyvsp[-2].Sval.text);
									/*check.array = 6; check.struct_member = 0; 
									struct symbolTable *temp = FindSymbol($2.text,check,currentT);
									if(temp == NULL){
										printf("struct %s not found\n",$2.text );
										Totalerrors++;
									}else{
										my.order = temp->order;
									}*/
									my.type = 5;
									addVar(my,yyvsp[-1].node,currentT);
								}
break;
case 26:
#line 284 "cparser.y"
{
									my.struct_member=0;
									strcpy(my.structID,yyvsp[-2].node->lexeme);
									my.type = 5;
									my.order = yyvsp[-2].node->order;
									addVar(my,yyvsp[-1].node,currentT);
							}
break;
case 27:
#line 294 "cparser.y"
{
								currentT->parent->t->array  = 4;	
								yyval.node = MakeNode(2); yyval.node->type = 100; strcpy(yyval.node->lexeme,",");
								yyval.node->child[0] = yyvsp[-3].node; yyvsp[-3].node->parent = yyval.node;
								yyval.node->child[1] = yyvsp[-1].node; yyvsp[-1].node->parent = yyval.node;

								/* add arg_var to symboltable*/
								my.type = yyvsp[-1].node->type; my.struct_member = 0;
								addVar(my,yyvsp[0].node,currentT);

							}
break;
case 28:
#line 305 "cparser.y"
{ 
								currentT->parent->t->array  = 4;
								yyval.node = yyvsp[-1].node;

								my.type = yyvsp[-1].node->type; my.struct_member = 0;
								addVar(my,yyvsp[0].node,currentT);

							}
break;
case 29:
#line 314 "cparser.y"
{
								currentT->parent->t->array  = 4;
								yyval.node = MakeNode(2); yyval.node->type = 100; strcpy(yyval.node->lexeme,",");
								yyval.node->child[0] = yyvsp[-4].node; yyvsp[-4].node->parent = yyval.node;
								yyval.node->child[1] = MakeNode(0); yyval.node->child[1]->parent = yyval.node;
								yyval.node->child[1]->type = yyvsp[-1].Sval.type;
								strcpy(yyval.node->child[1]->lexeme,yyvsp[-1].Sval.text);	
								yyval.node->child[1]->array = 60;	

								my.type = 5; strcpy(my.structID,yyvsp[-1].Sval.text); my.struct_member = 0;
								AddSymbol(yyvsp[0].Sval.text,my,currentT);
							}
break;
case 30:
#line 331 "cparser.y"
{
								yyval.node = MakeNode(2); yyval.node->type = 4; strcpy(yyval.node->lexeme,yyvsp[-5].Sval.text);
								yyval.node->child[0] = yyvsp[-3].node; yyvsp[-3].node->parent = yyval.node;
								yyval.node->child[1] = MakeNode(0); strcpy(yyval.node->child[1]->lexeme,yyvsp[-1].Sval.text);
								yyval.node->child[1]->type = yyvsp[-1].Sval.type;
								yyval.node->child[1]->parent = yyval.node;

								check.array = 0; check.struct_member = 0; 
								struct symbolTable *temp = FindSymbol(yyvsp[-1].Sval.text,check,currentT);
								if(temp==NULL) printf("not found %s\n",yyvsp[-1].Sval.text);
								else if(temp->type != yyvsp[-3].node->type) printf("READ type mismatch\n");
								yyval.node->child[1]->where = temp;

							}
break;
case 31:
#line 349 "cparser.y"
{
								yyval.node = MakeNode(2); yyval.node->type = 4; strcpy(yyval.node->lexeme,yyvsp[-5].Sval.text);
								yyval.node->child[0] = yyvsp[-3].node; yyvsp[-3].node->parent = yyval.node;
								yyval.node->child[1] = MakeNode(0); strcpy(yyval.node->child[1]->lexeme,yyvsp[-1].Sval.text);
								yyval.node->child[1]->type = yyvsp[-1].Sval.type;
								yyval.node->child[1]->parent = yyval.node;

								check.array = 0; check.struct_member = 0; 
								struct symbolTable *temp = FindSymbol(yyvsp[-1].Sval.text,check,currentT);
								if(temp==NULL) printf("not found %s\n",yyvsp[-1].Sval.text);	
								else if(temp->type != yyvsp[-3].node->type) printf("PRINT type mismatch\n");
								yyval.node->child[1]->where = temp;
							}
break;
case 32:
#line 364 "cparser.y"
{
								yyval.node = MakeNode(2); yyval.node->type = yyvsp[-3].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-5].Sval.text);
								yyval.node->child[0] = MakeNode(0); strcpy(yyval.node->child[0]->lexeme,yyvsp[-3].Sval.text);
								yyval.node->child[1] = MakeNode(0); strcpy(yyval.node->child[1]->lexeme,yyvsp[-1].Sval.text);
								
								yyval.node->child[1]->type = yyvsp[-1].Sval.type;
								yyval.node->child[1]->parent = yyval.node;
								yyval.node->child[0]->type = yyvsp[-3].Sval.type;
								yyval.node->child[0]->parent = yyval.node;

								if(yyvsp[-3].Sval.type != yyvsp[-1].Sval.type){
									printf("max type error");
									Totalerrors++;
								}

								struct symbolTable *temp = FindSymbol(yyvsp[-3].Sval.text,check,currentT);
								if(temp==NULL) printf("not found %s\n",yyvsp[-3].Sval.text);	
								yyval.node->child[0]->where = temp;

								temp = FindSymbol(yyvsp[-1].Sval.text,check,currentT);
								if(temp==NULL) printf("not found %s\n",yyvsp[-1].Sval.text);	
								yyval.node->child[1]->where = temp;

								yyval.node->type = temp->type;

							}
break;
case 33:
#line 393 "cparser.y"
{
								yyval.node = MakeNode(2); yyval.node->type = yyvsp[-3].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-5].Sval.text);
								yyval.node->child[0] = MakeNode(0); strcpy(yyval.node->child[0]->lexeme,yyvsp[-3].Sval.text);
								yyval.node->child[1] = MakeNode(0); strcpy(yyval.node->child[1]->lexeme,yyvsp[-1].Sval.text);
								
								yyval.node->child[1]->type = yyvsp[-1].Sval.type;
								yyval.node->child[1]->parent = yyval.node;
								yyval.node->child[0]->type = yyvsp[-3].Sval.type;
								yyval.node->child[0]->parent = yyval.node;

								if(yyvsp[-3].Sval.type != yyvsp[-1].Sval.type){
									printf("min type error");
									Totalerrors++;
								}

								struct symbolTable *temp = FindSymbol(yyvsp[-3].Sval.text,check,currentT);
								if(temp==NULL) printf("not found %s\n",yyvsp[-3].Sval.text);	
								yyval.node->child[0]->where = temp;

								temp = FindSymbol(yyvsp[-1].Sval.text,check,currentT);
								if(temp==NULL) printf("not found %s\n",yyvsp[-1].Sval.text);	
								yyval.node->child[1]->where = temp;

								yyval.node->type = temp->type;
							}
break;
case 34:
#line 421 "cparser.y"
{
								yyval.node = MakeNode(2); yyval.node->type = yyvsp[-3].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-5].Sval.text);
								yyval.node->child[0] = MakeNode(0); strcpy(yyval.node->child[0]->lexeme,yyvsp[-3].Sval.text);
								yyval.node->child[1] = MakeNode(0); strcpy(yyval.node->child[1]->lexeme,yyvsp[-1].Sval.text);
								
								yyval.node->child[1]->type = yyvsp[-1].Sval.type;
								yyval.node->child[1]->parent = yyval.node;
								yyval.node->child[0]->type = yyvsp[-3].Sval.type;
								yyval.node->child[0]->parent = yyval.node;

								if(yyvsp[-3].Sval.type != yyvsp[-1].Sval.type){
									printf("swap type error");
									Totalerrors++;
								}

								struct symbolTable *temp = FindSymbol(yyvsp[-3].Sval.text,check,currentT);
								if(temp==NULL) printf("not found %s\n",yyvsp[-3].Sval.text);	
								yyval.node->child[0]->where = temp;

								temp = FindSymbol(yyvsp[-1].Sval.text,check,currentT);
								if(temp==NULL) printf("not found %s\n",yyvsp[-1].Sval.text);	
								yyval.node->child[1]->where = temp;

								yyval.node->type = temp->type;

							}
break;
case 35:
#line 452 "cparser.y"
{
						yyval.node = yyvsp[-1].node;
					}
break;
case 36:
#line 455 "cparser.y"
{
						yyval.node = yyvsp[-1].node;
					}
break;
case 37:
#line 458 "cparser.y"
{
						yyval.node = yyvsp[-1].node;
					}
break;
case 38:
#line 463 "cparser.y"
{yyval.node = yyvsp[0].node;}
break;
case 39:
#line 464 "cparser.y"
{yyval.node = yyvsp[0].node;}
break;
case 40:
#line 465 "cparser.y"
{yyval.node = yyvsp[0].node;}
break;
case 41:
#line 466 "cparser.y"
{yyval.node = yyvsp[0].node;}
break;
case 42:
#line 467 "cparser.y"
{yyval.node = yyvsp[0].node;}
break;
case 43:
#line 468 "cparser.y"
{yyval.node=MakeNode(0); yyval.node->type = -1;strcpy(yyval.node->lexeme,"dec");}
break;
case 44:
#line 469 "cparser.y"
{yyval.node = yyvsp[0].node;}
break;
case 45:
#line 472 "cparser.y"
{
						jumpcount++;
						currentT = EnterScope(currentT);
					}
break;
case 46:
#line 477 "cparser.y"
{
						currentT = ExitScope(currentT);
					/*	$$ = MakeNode(0); $$->type = 100; strcpy($$->lexeme,"}");*/
						jumpcount--;
						
					}
break;
case 47:
#line 486 "cparser.y"
{
      						yyval.node = MakeNode(2); yyval.node->type = yyvsp[-6].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-6].Sval.text);
      						yyval.node->child[0] = yyvsp[-4].node; yyvsp[-4].node->parent = yyval.node; 
      						yyval.node->child[1] = yyvsp[-1].node; yyvsp[-1].node->parent = yyval.node;
      					/*	$$->child[2] = $7; $7->parent = $$;*/
      						yyval.node->array = 10;			

      						yyval.node->scope = yyvsp[-1].node->scope;
      						yyval.node->scopenode = yyvsp[-1].node->scopenode;
      						propagate(yyvsp[-4].node,yyvsp[-1].node->scope,yyvsp[-1].node->scopenode);	
      					}
break;
case 48:
#line 498 "cparser.y"
{
      						yyval.node = MakeNode(3); yyval.node->type = yyvsp[-7].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-7].Sval.text);
      						yyval.node->child[0] = yyvsp[-5].node; yyvsp[-5].node->parent = yyval.node; 
      						yyval.node->child[1] = yyvsp[-4].node; yyvsp[-4].node->parent = yyval.node;
      						yyval.node->child[2] = yyvsp[-1].node; yyvsp[-1].node->parent = yyval.node;
      					/*	$$->child[3] = $8; $8->parent = $$;*/
      						yyval.node->array = 11;				
      					
      						yyval.node->scope  = yyvsp[-1].node->scope;
      						yyval.node->scopenode = yyvsp[-1].node->scopenode;
      						propagate(yyvsp[-5].node,yyvsp[-1].node->scope,yyvsp[-1].node->scopenode);
      						propagate(yyvsp[-4].node,yyvsp[-1].node->scope,yyvsp[-1].node->scopenode);

      					}
break;
case 49:
#line 513 "cparser.y"
{
      						yyval.node = MakeNode(4); yyval.node->type = yyvsp[-8].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-8].Sval.text);
      						yyval.node->child[0] = yyvsp[-6].node; yyvsp[-6].node->parent = yyval.node; 
      						yyval.node->child[1] = yyvsp[-5].node; yyvsp[-5].node->parent = yyval.node;
      						yyval.node->child[2] = yyvsp[-4].node; yyvsp[-4].node->parent = yyval.node;
      						yyval.node->child[3] = yyvsp[-1].node; yyvsp[-1].node->parent = yyval.node;
      				/*		$$->child[4] = $9; $9->parent = $$;*/
      						yyval.node->array = 12;				

      						yyval.node->scope = yyvsp[-1].node->scope;
      						yyval.node->scopenode = yyvsp[-1].node->scopenode;
      						
      						propagate(yyvsp[-6].node,yyvsp[-1].node->scope,yyvsp[-1].node->scopenode);
      						propagate(yyvsp[-5].node,yyvsp[-1].node->scope,yyvsp[-1].node->scopenode);
      						propagate(yyvsp[-4].node,yyvsp[-1].node->scope,yyvsp[-1].node->scopenode);
      					}
break;
case 50:
#line 532 "cparser.y"
{
      						yyval.node = MakeNode(2); yyval.node->type = yyvsp[-4].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-4].Sval.text);
      						yyval.node->child[0] = yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node; 
      						yyval.node->child[1] = yyvsp[0].node; yyvsp[0].node->parent = yyval.node;
      						yyval.node->array = 15;				
      					}
break;
case 51:
#line 540 "cparser.y"
{
      						yyval.node = MakeNode(3); yyval.node->type = yyvsp[-6].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-6].Sval.text);
      						yyval.node->child[0] = yyvsp[-4].node; yyvsp[-4].node->parent = yyval.node; 
      						yyval.node->child[1] = yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
      						yyval.node->child[2] = yyvsp[0].node; yyvsp[0].node->parent = yyval.node;
      						yyval.node->array = 16;				
      					}
break;
case 52:
#line 550 "cparser.y"
{ yyval.node = MakeNode(0); yyval.node->type = yyvsp[-1].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-1].Sval.text);
        								if(jumpcount<=0){
        									printf("CONTINUE without iteration_statement\n");
        									Totalerrors++;
        								}	
        							}
break;
case 53:
#line 556 "cparser.y"
{ yyval.node = MakeNode(0); yyval.node->type = yyvsp[-1].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-1].Sval.text);
        								if(jumpcount<=0){
        									printf("BREAK without iteration_statement\n");
        									Totalerrors++;
        								}
        							}
break;
case 54:
#line 562 "cparser.y"
{ yyval.node = MakeNode(0); yyval.node->type = yyvsp[-1].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-1].Sval.text);

        								if(returntype != VOID ){
        									printf("Invalid Return type\n");
        									Totalerrors++;
        								}	
        							}
break;
case 55:
#line 569 "cparser.y"
{ yyval.node = MakeNode(1); yyval.node->type = yyvsp[-2].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-2].Sval.text);
        								yyval.node->child[0] = yyvsp[-1].node; yyvsp[-1].node->parent = yyval.node;

        								if(returntype != yyvsp[-1].node->type){
        									printf("Invalid Return type\n");
        									Totalerrors++;
        								}
        							}
break;
case 56:
#line 581 "cparser.y"
{ yyval.node = MakeNode(2); yyval.node->type = 100; strcpy(yyval.node->lexeme,"=");}
break;
case 57:
#line 582 "cparser.y"
{ yyval.node = MakeNode(2); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);}
break;
case 58:
#line 583 "cparser.y"
{ yyval.node = MakeNode(2); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);}
break;
case 59:
#line 584 "cparser.y"
{ yyval.node = MakeNode(2); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);}
break;
case 60:
#line 585 "cparser.y"
{ yyval.node = MakeNode(2); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);}
break;
case 61:
#line 586 "cparser.y"
{ yyval.node = MakeNode(2); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);}
break;
case 62:
#line 587 "cparser.y"
{ yyval.node = MakeNode(2); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);}
break;
case 63:
#line 588 "cparser.y"
{ yyval.node = MakeNode(2); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);}
break;
case 64:
#line 589 "cparser.y"
{ yyval.node = MakeNode(2); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);}
break;
case 65:
#line 590 "cparser.y"
{ yyval.node = MakeNode(2); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);}
break;
case 66:
#line 591 "cparser.y"
{ yyval.node = MakeNode(2); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);}
break;
case 67:
#line 596 "cparser.y"
{yyval.node = MakeNode(0); yyval.node->type = 100; strcpy(yyval.node->lexeme,";");}
break;
case 68:
#line 597 "cparser.y"
{yyval.node = yyvsp[-1].node;}
break;
case 69:
#line 600 "cparser.y"
{yyval.node=yyvsp[0].node;}
break;
case 70:
#line 601 "cparser.y"
{yyval.node = MakeNode(2); yyval.node->type = 100; strcpy(yyval.node->lexeme,",");
									 yyval.node->child[0] = yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
									 yyval.node->child[1] = yyvsp[0].node; yyvsp[0].node->parent = yyval.node;}
break;
case 71:
#line 607 "cparser.y"
{yyval.node = MakeNode(0); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);

        								check.array = 0; check.struct_member = 0; 
        								/*printf("parser :: %s %d\n",$1.text,$1.type);*/
        								struct symbolTable *temp = FindSymbol(yyvsp[0].Sval.text,check,currentT);
        								if(temp==NULL) printf("not found %s\n",yyvsp[0].Sval.text);
        								else{
        										yyval.node->type = temp->type;
        										yyval.node->pointer = temp->pointer;
        									}
        								yyval.node->array = 300;	
        								yyval.node->where = temp;
        								yyval.node->lval = 1;


        							}
break;
case 72:
#line 623 "cparser.y"
{yyval.node = MakeNode(0); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);

        								yyval.node->type = yyvsp[0].Sval.type;
        								yyval.node->pointer = 0;
        								yyval.node->lval = 0;
        								yyval.node->array  = 200;
        							}
break;
case 73:
#line 630 "cparser.y"
{yyval.node = MakeNode(0); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);

        								/* not sure*/
        								yyval.node->lval = 0;
        								yyval.node->pointer = 0;
        							}
break;
case 74:
#line 636 "cparser.y"
{yyval.node = yyvsp[-1].node;

        								/*$$->type = $2->type;*/
        							}
break;
case 75:
#line 640 "cparser.y"
{
							yyval.node = yyvsp[0].node;
						}
break;
case 76:
#line 643 "cparser.y"
{
							yyval.node = yyvsp[0].node;
						}
break;
case 77:
#line 649 "cparser.y"
{yyval.node=yyvsp[0].node;}
break;
case 78:
#line 650 "cparser.y"
{yyval.node=MakeNode(1); yyval.node->type = yyvsp[-3].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-3].Sval.text);
										  yyval.node->child[0] = yyvsp[-1].node; yyvsp[-1].node->parent = yyval.node; yyval.node->array=1;

										  check.array = 1; check.struct_member = 0;
										  struct symbolTable *temp = FindSymbol(yyvsp[-3].Sval.text,check,currentT);
        								  if(temp==NULL) printf("not found %s\n",yyvsp[-3].Sval.text);
        								  else{
	        								  if(yyvsp[-1].node->type != INT){
	        								  	printf("Array index must be integer\n");
	        								  	Totalerrors++;
	        								  }
	        								  else
	        								  	yyval.node->type = temp->type;
	        								  	yyval.node->pointer = temp->pointer;
        									}
        									yyval.node->array = 301;
        									yyval.node->where = temp;
        									yyval.node->lval = 1;	
										}
break;
case 79:
#line 669 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = yyvsp[-6].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-6].Sval.text);
										  			yyval.node->child[0] = yyvsp[-4].node; yyvsp[-4].node->parent = yyval.node; 
										  			yyval.node->child[1] = yyvsp[-1].node; yyvsp[-1].node->parent = yyval.node; yyval.node->array=2;
										  			
										  			check.array = 2; check.struct_member = 0;
										  			struct symbolTable *temp = FindSymbol(yyvsp[-6].Sval.text,check,currentT);
        											if(temp==NULL) printf("not found %s\n",yyvsp[-6].Sval.text);
        											else{
        											if(yyvsp[-4].node->type != INT || yyvsp[-1].node->type != INT){
			        								  	printf("Array index must be integer\n");
			        								  	Totalerrors++;
			        								  }
			        								  else
			        								  	yyval.node->type = temp->type;
			        								  yyval.node->pointer = temp->pointer;
			        								}
			        								yyval.node->array = 302;
			        								yyval.node->where = temp;
			        								yyval.node->lval = 1;
										  		}
break;
case 80:
#line 689 "cparser.y"
{yyval.node=MakeNode(0); yyval.node->type = yyvsp[-2].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-2].Sval.text);
										 yyval.node->array = 3;

										 	check.array = 3; check.struct_member = 0;
										 	struct symbolTable *temp = FindSymbol(yyvsp[-2].Sval.text,check,currentT);
        									if(temp==NULL) printf("not found %s\n",yyvsp[-2].Sval.text);
        									else{
        										yyval.node->type = temp->type;
        										yyval.node->pointer = temp->pointer;
        									}
        									yyval.node->where = temp;
        									yyval.node->lval = 0;
										}
break;
case 81:
#line 702 "cparser.y"
{yyval.node=MakeNode(1); yyval.node->type = yyvsp[-3].Sval.type; strcpy(yyval.node->lexeme,yyvsp[-3].Sval.text);
										 yyval.node->array = 4; yyval.node->child[0]= yyvsp[-1].node; yyvsp[-1].node->parent = yyval.node;

										 check.array = 4; check.struct_member = 0;
										 struct symbolTable *temp = FindSymbol(yyvsp[-3].Sval.text,check,currentT);
        								 if(temp==NULL) printf("not found %s\n",yyvsp[-3].Sval.text);

        								 else{
        										yyval.node->type = temp->type;
        										yyval.node->pointer = temp->pointer;
        									}
        									/* check definition of function */
        									yyval.node->where = temp;
        									yyval.node->lval = 0;
							if(check_arg(yyvsp[-3].Sval.text,yyvsp[-1].node)){
								printf("Argument type does not match\n");
							}	/*/calling parameter*/
										}
break;
case 82:
#line 721 "cparser.y"
{yyval.node = MakeNode(2); yyval.node->type=100; strcpy(yyval.node->lexeme,".") ;
										 yyval.node->child[0]=MakeNode(0); yyval.node->child[0]->type = yyvsp[-2].Sval.type; yyval.node->child[0]->parent = yyval.node; 
										 yyval.node->child[1]=MakeNode(0); yyval.node->child[1]->type = yyvsp[0].Sval.type; yyval.node->child[1]->parent = yyval.node;
										 strcpy(yyval.node->child[0]->lexeme,yyvsp[-2].Sval.text);strcpy(yyval.node->child[1]->lexeme,yyvsp[0].Sval.text);


										 check.array = 0; check.struct_member = 0; 
										 struct symbolTable *temp = FindSymbol(yyvsp[-2].Sval.text,check,currentT);
        								 if(temp==NULL )
        								 	 printf("not found %s\n",yyvsp[-2].Sval.text);
        								 else if(temp->type != 5){	
        								 	 printf("not found %s\n",yyvsp[-2].Sval.text);
        								 	 Totalerrors++;
        								 	}
        								 else {
        								 	yyval.node->child[0]->where = temp;
        								 	char s[100];
        								 	check.array = 0; check.struct_member = 1; 
        								 	strcpy(s,"."); strcat(s,yyvsp[0].Sval.text);
        								 	strcpy(check.structName,temp->structID);
        								 	temp = FindSymbol(s,check,currentT);
        								 	if(temp==NULL) printf("not found %s\n",s);
        								 	else{
        										yyval.node->type = temp->type;
        										yyval.node->pointer = temp->pointer;
        									}
        									yyval.node->child[1]->where = temp;

        								 }
        								 yyval.node->array = 303;
        								 yyval.node->lval = 1;

										}
break;
case 83:
#line 755 "cparser.y"
{ yyval.node = MakeNode(2); yyval.node->type=100; strcpy(yyval.node->lexeme,".");
													 yyval.node->child[0]=MakeNode(1); yyval.node->child[1]=MakeNode(0);
													 yyval.node->child[0]->parent = yyval.node; yyval.node->child[1]->parent = yyval.node;
													 yyval.node->child[1]->type = yyvsp[0].Sval.type; strcpy(yyval.node->child[1]->lexeme,yyvsp[0].Sval.text);
													 yyval.node->child[0]->type = yyvsp[-5].Sval.type; strcpy(yyval.node->child[0]->lexeme,yyvsp[-5].Sval.text);
													 yyval.node->child[0]->child[0] = yyvsp[-3].node; yyvsp[-3].node->parent = yyval.node->child[0];
													 yyval.node->child[0]->array = 1;

													 check.array = 1; check.struct_member = 0; 
													 struct symbolTable *temp = FindSymbol(yyvsp[-5].Sval.text,check,currentT);
			        								 if(temp==NULL )
			        								 	 printf("not found %s\n",yyvsp[-5].Sval.text);
			        								 else if(temp->type != 5)	{
			        								 	 printf("not found %s\n",yyvsp[-5].Sval.text);
			        								 	 Totalerrors++;
			        								 }
			        								 else{
			        								 	yyval.node->child[0]->where = temp;
			        								 	char s[100];
			        								 	check.array = 0; check.struct_member = 1; 
			        								 	strcpy(s,"."); strcat(s,yyvsp[0].Sval.text);
			        								 	strcpy(check.structName,temp->structID);
			        								 	temp = FindSymbol(s,check,currentT);
			        								 	if(temp==NULL) printf("not found %s\n",yyvsp[-5].Sval.text);
			        								 	else if(yyvsp[-3].node->type == INT){
			        										yyval.node->type = temp->type;
			        										yyval.node->pointer = temp->pointer;
			        									}
			        									else{
			        										printf("Array index must be integer\n");
			        										Totalerrors++;
			        									}
			        									yyval.node->child[1]->where = temp;
			        								 }
			        								 yyval.node->array = 304;
			        								 yyval.node->lval = 1;
													}
break;
case 84:
#line 794 "cparser.y"
{yyval.node=MakeNode(0); yyval.node->type=100; strcpy(yyval.node->lexeme,"+"); }
break;
case 85:
#line 795 "cparser.y"
{yyval.node=MakeNode(0); yyval.node->type=100; strcpy(yyval.node->lexeme,"-"); }
break;
case 86:
#line 796 "cparser.y"
{yyval.node=MakeNode(0); yyval.node->type=100; strcpy(yyval.node->lexeme,"!"); }
break;
case 87:
#line 797 "cparser.y"
{yyval.node=MakeNode(0); yyval.node->type=100; strcpy(yyval.node->lexeme,"~"); }
break;
case 88:
#line 798 "cparser.y"
{yyval.node=MakeNode(0); yyval.node->type=100; strcpy(yyval.node->lexeme,"*"); }
break;
case 89:
#line 799 "cparser.y"
{yyval.node=MakeNode(0); yyval.node->type=100; strcpy(yyval.node->lexeme,"&"); }
break;
case 90:
#line 802 "cparser.y"
{yyval.node=yyvsp[0].node;}
break;
case 91:
#line 803 "cparser.y"
{yyval.node=MakeNode(1); yyval.node->type = yyvsp[-1].node->type;	strcpy(yyval.node->lexeme,yyvsp[-1].node->lexeme);
							 yyval.node->child[0]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node; 
							 
							 	yyval.node->lval = 0;
							 	if(strcmp(yyvsp[-1].node->lexeme,"+")==0 ||strcmp(yyvsp[-1].node->lexeme,"-")==0||strcmp(yyvsp[-1].node->lexeme,"!")==0)
							 		yyval.node->type = yyvsp[0].node->type;
							 	else if(strcmp(yyvsp[-1].node->lexeme,"~")==0 && yyvsp[0].node->type == INT)
							 		yyval.node->type = INT;
							 	else if(strcmp(yyvsp[-1].node->lexeme,"*")==0 && yyvsp[0].node->pointer == 1){
							 		yyval.node->type = yyvsp[0].node->type;
							 		if(yyvsp[0].node->lval == 1)
							 			yyval.node->lval = 1;
							 	}
							 	else if(strcmp(yyvsp[-1].node->lexeme,"&")==0 && yyvsp[0].node->lval==1){ /* to be modified*/
							 		yyval.node->type = yyvsp[0].node->type;
							 		yyval.node->pointer = 1;
							 	}	
							 	else{
							 		printf("Invalid operands for %s\n",yyvsp[-1].node->lexeme);	
							 		Totalerrors++;
							 	}

							 	}
break;
case 92:
#line 826 "cparser.y"
{yyval.node=MakeNode(1); yyval.node->type = yyvsp[-3].Sval.type;	strcpy(yyval.node->lexeme,yyvsp[-3].Sval.text);
							 yyval.node->child[0]=yyvsp[-1].node; yyvsp[-1].node->parent = yyval.node;

							 	yyval.node->type = INT;
							 	yyval.node->lval = 0;
							 	}
break;
case 93:
#line 834 "cparser.y"
{yyval.node=yyvsp[0].node;}
break;
case 94:
#line 835 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = 100;	strcpy(yyval.node->lexeme,"*");
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;

							 if((yyvsp[-2].node->type != yyvsp[0].node->type)){
							 			printf("Invalid operands for *\n");
							 			Totalerrors++;
							 	}		
					 		else	
							yyval.node->type = yyvsp[-2].node->type;

							 	}
break;
case 95:
#line 847 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = 100;	strcpy(yyval.node->lexeme,"/");
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;

									if((yyvsp[-2].node->type != yyvsp[0].node->type)){
							 			printf("Invalid operands for /\n");
										Totalerrors++;
									}
							 		else	
									yyval.node->type = yyvsp[-2].node->type;					 


							 	}
break;
case 96:
#line 860 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = 100;	strcpy(yyval.node->lexeme,"%");
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;	

							 if((yyvsp[-2].node->type != INT || yyvsp[0].node->type != INT)){
						 		printf("Invalid operands for modulus");
						 		Totalerrors++;
							 }else{
							 	yyval.node->type = yyvsp[-2].node->type;
							 }
							}
break;
case 97:
#line 873 "cparser.y"
{yyval.node=yyvsp[0].node;}
break;
case 98:
#line 874 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = 100;	strcpy(yyval.node->lexeme,"+");
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;	

							 if(yyvsp[-2].node->type != yyvsp[0].node->type)	{
							 			printf("Invalid operands for +\n");
							 			Totalerrors++;
							 		}	
							 		else	
									yyval.node->type = yyvsp[-2].node->type;

							}
break;
case 99:
#line 886 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = 100;	strcpy(yyval.node->lexeme,"-");
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;	

							 if(yyvsp[-2].node->type != yyvsp[0].node->type){
							 			Totalerrors++;
							 			printf("Invalid operands for -\n");
							 		}	
							 		else	
									yyval.node->type = yyvsp[-2].node->type;


							}
break;
case 100:
#line 901 "cparser.y"
{yyval.node=yyvsp[0].node;}
break;
case 101:
#line 902 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = yyvsp[-1].Sval.type;	strcpy(yyval.node->lexeme,yyvsp[-1].Sval.text);
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;

								  if(yyvsp[0].node->type != INT || yyvsp[-2].node->type != INT ){
								 	printf("Invalid operands for %s\n",yyvsp[-1].Sval.text);
								 	Totalerrors++;
								 }else{
								 	yyval.node->type = INT;
								 }
							 	}
break;
case 102:
#line 913 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = yyvsp[-1].Sval.type;	strcpy(yyval.node->lexeme,yyvsp[-1].Sval.text);
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;	


							 if(yyvsp[0].node->type != INT  || yyvsp[-2].node->type != INT){
							 	printf("Invalid operands for %s\n",yyvsp[-1].Sval.text);
							 	Totalerrors++;
							 }else{
							 	yyval.node->type = INT;
							 }
							}
break;
case 103:
#line 928 "cparser.y"
{yyval.node=yyvsp[0].node;}
break;
case 104:
#line 929 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = 100;	strcpy(yyval.node->lexeme,"<");
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;


							 if(yyvsp[-2].node->type != yyvsp[0].node->type){
							 			printf("Invalid operands for <\n");
							 			Totalerrors++;
							 		}
							 		else	
									yyval.node->type = INT;

							 	}
break;
case 105:
#line 942 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = 100;	strcpy(yyval.node->lexeme,">");
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;

							 if(yyvsp[-2].node->type != yyvsp[0].node->type){
							 			printf("Invalid operands for >\n");
							 		Totalerrors++;
							 		}
							 		else	
									yyval.node->type = INT;

							 }
break;
case 106:
#line 956 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = yyvsp[-1].Sval.type;	strcpy(yyval.node->lexeme,yyvsp[-1].Sval.text);
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;

							 if(yyvsp[-2].node->type != yyvsp[0].node->type){
							 			printf("Invalid operands for %s\n",yyvsp[-1].Sval.text);
							 		Totalerrors++;
							 	}
							 		else	
									yyval.node->type = INT;

							 	}
break;
case 107:
#line 968 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = yyvsp[-1].Sval.type;	strcpy(yyval.node->lexeme,yyvsp[-1].Sval.text);
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;	

							 if(yyvsp[-2].node->type != yyvsp[0].node->type){
							 			printf("Invalid operands for %s\n",yyvsp[-1].Sval.text);
							 			Totalerrors++;
							 		}
							 		else	
									yyval.node->type = INT;

							}
break;
case 108:
#line 983 "cparser.y"
{yyval.node = yyvsp[0].node;}
break;
case 109:
#line 985 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = yyvsp[-1].Sval.type;	strcpy(yyval.node->lexeme,yyvsp[-1].Sval.text);
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;

							 	if(yyvsp[-2].node->type != yyvsp[0].node->type){
							 			printf("Invalid operands for %s\n",yyvsp[-1].Sval.text);
							 			Totalerrors++;
							 		}
							 		else	
									yyval.node->type = INT;

							 	}
break;
case 110:
#line 998 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = yyvsp[-1].Sval.type;	strcpy(yyval.node->lexeme,yyvsp[-1].Sval.text);
							 		yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 		yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;	

							 		if(yyvsp[-2].node->type != yyvsp[0].node->type){
							 			printf("Invalid operands for %s\n",yyvsp[-1].Sval.text);
							 			Totalerrors++;
							 		}
							 		else	
									yyval.node->type = INT;
									 
							 	}
break;
case 111:
#line 1012 "cparser.y"
{yyval.node = yyvsp[0].node;}
break;
case 112:
#line 1013 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = 100;	strcpy(yyval.node->lexeme,"&");
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;	

							 if(yyvsp[-2].node->type != INT || yyvsp[0].node->type != INT){
							 	printf("Invalid operands for &\n");
							 	Totalerrors++;
							 }else{
							 	yyval.node->type = INT;
							 }


							}
break;
case 113:
#line 1028 "cparser.y"
{yyval.node = yyvsp[0].node;}
break;
case 114:
#line 1029 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = 100;	strcpy(yyval.node->lexeme,"^");
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;


							 if(yyvsp[-2].node->type != INT || yyvsp[0].node->type != INT){
							 	printf("Invalid operands for ^\n");
							 	Totalerrors++;
							 }else{
							 	yyval.node->type = INT;
							 }

							 }
break;
case 115:
#line 1044 "cparser.y"
{yyval.node = yyvsp[0].node;}
break;
case 116:
#line 1045 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = 100;	strcpy(yyval.node->lexeme,"|");
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;	

							 if(yyvsp[-2].node->type != INT || yyvsp[0].node->type != INT){
							 	printf("Invalid operands for |\n");
							 	Totalerrors++;
							 }else{
							 	yyval.node->type = INT;
							 }

							}
break;
case 117:
#line 1059 "cparser.y"
{yyval.node = yyvsp[0].node;}
break;
case 118:
#line 1060 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = yyvsp[-1].Sval.type;	strcpy(yyval.node->lexeme,yyvsp[-1].Sval.text);
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;

							 if(yyvsp[-2].node->type != INT || yyvsp[0].node->type != INT){
							 	printf("Invalid operands for %s\n",yyvsp[-1].Sval.text);
							 	Totalerrors++;
							 }else{
							 	yyval.node->type = INT;
							 }

							 }
break;
case 119:
#line 1074 "cparser.y"
{yyval.node = yyvsp[0].node;}
break;
case 120:
#line 1075 "cparser.y"
{yyval.node=MakeNode(2); yyval.node->type = yyvsp[-1].Sval.type;	strcpy(yyval.node->lexeme,yyvsp[-1].Sval.text);
							 yyval.node->child[0]=yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
							 yyval.node->child[1]=yyvsp[0].node; yyvsp[0].node->parent = yyval.node;	

							 if(yyvsp[-2].node->type != INT || yyvsp[0].node->type != INT){
							 	printf("Invalid operands for %s\n",yyvsp[-1].Sval.text);
							 	Totalerrors++;
							 }else{
							 	yyval.node->type = INT;
							 }

							}
break;
case 121:
#line 1090 "cparser.y"
{yyval.node = yyvsp[0].node;}
break;
case 122:
#line 1093 "cparser.y"
{yyval.node=yyvsp[0].node;}
break;
case 123:
#line 1094 "cparser.y"
{ yyval.node = yyvsp[-1].node; yyval.node->child[0] = yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
											 yyval.node->child[1] = yyvsp[0].node; yyvsp[0].node->parent = yyval.node;

											 if(yyvsp[-2].node->lval != 1){
											 	printf("Not an Lvalue Expression\n");
											 	Totalerrors++;
											 }else{
												if(yyvsp[-1].node->type==100 || yyvsp[-1].node->type == MUL_ASSIGN || yyvsp[-1].node->type == DIV_ASSIGN || yyvsp[-1].node->type == ADD_ASSIGN || yyvsp[-1].node->type == SUB_ASSIGN){
													if(yyvsp[-2].node->type != yyvsp[0].node->type){
														printf("Invalid Operand for %s\n",yyvsp[-1].node->lexeme);
														Totalerrors++;
														/*printf("= %d %d",$1->type,$3->type);*/
													}
													else
														yyval.node->type = yyvsp[-2].node->type;
												}else{

													if(yyvsp[-2].node->type!=INT || yyvsp[0].node->type!=INT){
														printf("Invalid Operand for %s\n",yyvsp[-1].node->lexeme);
														Totalerrors++;
													}
													else
														yyval.node->type = yyvsp[-2].node->type;
												} 

											}
											yyval.node->lval = 0;
											}
break;
case 124:
#line 1124 "cparser.y"
{yyval.node=yyvsp[0].node;}
break;
case 125:
#line 1126 "cparser.y"
{ yyval.node = MakeNode(2); yyval.node->type =101; strcpy(yyval.node->lexeme,";");
							  yyval.node->child[0] = yyvsp[-1].node; if(yyvsp[-1].node != NULL) yyvsp[-1].node->parent = yyval.node;
							  yyval.node->child[1] = yyvsp[0].node;  if(yyvsp[0].node != NULL) yyvsp[0].node->parent = yyval.node;
							}
break;
case 126:
#line 1134 "cparser.y"
{
			if(open == 0)
				currentT = EnterScope(currentT);
			else{
				open = 0;
			}
		}
break;
case 127:
#line 1144 "cparser.y"
{
			currentT = ExitScope(currentT);
		}
break;
case 128:
#line 1150 "cparser.y"
{yyval.node=yyvsp[-1].node;}
break;
case 129:
#line 1155 "cparser.y"
{
								open = 1;
								my.array = 3; my.pointer = 0; my.struct_member = 0; my.type = yyvsp[-1].node->type;
								AddSymbol(yyvsp[0].Sval.text,my,currentT);

								currentT = EnterScope(currentT);

								yyval.node = MakeNode(2); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);
								yyval.node->child[0] = yyvsp[-1].node; yyvsp[-1].node->parent = yyval.node;
								yyval.node->array = 50;

								returntype = yyvsp[-1].node->type;
								returnpointer = 0;

							}
break;
case 130:
#line 1171 "cparser.y"
{
								open = 1;

								my.array = 3; my.pointer = 0; my.struct_member = 0; my.type = 5;
								strcpy(my.structID,yyvsp[-1].Sval.text);
								AddSymbol(yyvsp[0].Sval.text,my,currentT);
								currentT = EnterScope(currentT);

								yyval.node = MakeNode(2); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);
								yyval.node->child[0] = MakeNode(0); yyval.node->child[0]->type = yyvsp[-1].Sval.type; strcpy(yyval.node->child[0]->lexeme,yyvsp[-1].Sval.text);
								yyval.node->child[0]->parent  = yyval.node;
								yyval.node->array = 51;

								returntype = 5;
								returnpointer = 0;
								strcpy(returnchar,yyvsp[-1].Sval.text);
							}
break;
case 131:
#line 1189 "cparser.y"
{
								open = 1;

								my.array = 3; my.pointer = 1; my.struct_member = 0; my.type = yyvsp[-2].node->type;
								AddSymbol(yyvsp[0].Sval.text,my,currentT);
								currentT = EnterScope(currentT);

								yyval.node = MakeNode(2); yyval.node->type = yyvsp[0].Sval.type; strcpy(yyval.node->lexeme,yyvsp[0].Sval.text);
								yyval.node->child[0] = yyvsp[-2].node; yyvsp[-2].node->parent = yyval.node;
								yyval.node->array = 52;

								returnpointer = 1;
								returntype = yyvsp[-2].node->type;
							}
break;
case 132:
#line 1207 "cparser.y"
{

									yyval.node = yyvsp[-4].node;
								/*	$$->child[1] = $3; $3->parent = $$;*/
									yyval.node->child[1] = yyvsp[0].node; yyvsp[0].node->parent = yyval.node;

									ALL[funcount] = (struct allFunc *)malloc(sizeof(struct allFunc));
									strcpy(ALL[funcount]->name,yyvsp[-4].node->lexeme);
									ALL[funcount]->t = yyval.node;
									ALL[funcount]->arg = yyvsp[-2].node;
									ALL[funcount]->st = currentT->child[currentT->current - 1];
									funcount++;				
									/*printf("I am in at %s %d\n",$1->lexeme,funcount);*/
								}
break;
case 133:
#line 1221 "cparser.y"
{
									yyval.node = yyvsp[-3].node;
									yyval.node->child[1] = yyvsp[0].node; yyvsp[0].node->parent = yyval.node;
									/*$$->NumChild -= 1;*/
									yyval.node->array += 3;	


									ALL[funcount] = (struct allFunc *)malloc(sizeof(struct allFunc));
									strcpy(ALL[funcount]->name,yyvsp[-3].node->lexeme);
									ALL[funcount]->t = yyval.node;
									ALL[funcount]->arg = NULL;
									ALL[funcount]->st = currentT->child[currentT->current - 1];		
									funcount++;						
									/*printf("I am in at khali mei %s %d\n",$1->lexeme,funcount);*/
								}
break;
case 134:
#line 1239 "cparser.y"
{yyval.node=MakeNode(0); yyval.node->type = -1;strcpy(yyval.node->lexeme,"dec");}
break;
case 135:
#line 1240 "cparser.y"
{yyval.node = yyvsp[0].node; tree = yyval.node; }
break;
case 136:
#line 1241 "cparser.y"
{yyval.node = yyvsp[-1].node; tree = yyval.node;}
break;
case 137:
#line 1243 "cparser.y"
{yyval.node = MakeNode(2); yyval.node->type=1000; strcpy(yyval.node->lexeme,"@");
					 yyval.node->child[0] = yyvsp[-1].node; yyvsp[-1].node->parent = yyval.node;
					 yyval.node->child[1] = yyvsp[0].node; yyvsp[0].node->parent = yyval.node;
					tree = yyval.node;	}
break;
#line 2174 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("yydebug: after reduction, shifting from state 0 to\
 state %d\n", YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("yydebug: state %d, reading %d (%s)\n",
                        YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("yydebug: after reduction, shifting from state %d \
to state %d\n", *yyssp, yystate);
#endif
    if (yyssp >= yyss + yystacksize - 1)
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;
yyoverflow:
    yyerror("yacc stack overflow");
yyabort:
    return (1);
yyaccept:
    return (0);
}
