#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20120115

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "code.y"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <DLists.h>
#include <Tokenizer.h>
#include <Trees.h>

extern TREENODE *root;
typedef struct {
    DNODE mynode;
    TREENODE *nodeptr;
} T_NODE;

#line 16 "code.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
   TOKEN_INFO info;
   DLIST dlist;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 45 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define STRING 257
#define END 258
#define FALSE 259
#define TO 260
#define EQSWAP 261
#define VAR 262
#define IDENTIFIER 263
#define CHR 264
#define POW 265
#define POOL 266
#define IF 267
#define REPEAT 268
#define READ 269
#define RANGE 270
#define ELSE 271
#define UNTIL 272
#define FOR 273
#define THEN 274
#define OF 275
#define NE 276
#define MOD 277
#define GT 278
#define CASE 279
#define CHARACTER 280
#define WHILE 281
#define OUTPUT 282
#define EQ 283
#define EXIT 284
#define CONST 285
#define GTE 286
#define PRED 287
#define NOT 288
#define DO 289
#define BEGINX 290
#define ORD 291
#define TRUE 292
#define AND 293
#define INTEGER_NUM 294
#define EOFX 295
#define LTE 296
#define LOOP 297
#define SUCC 298
#define TYPE 299
#define OR 300
#define LT 301
#define OTHERWISE 302
#define ASSIGNMENT 303
#define PROGRAM 304
#define DOWNTO 305
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    8,    8,   33,   33,    9,    9,    3,    2,    2,
   30,   30,   24,   24,   15,   19,   19,   14,   14,    6,
    6,   26,    1,    1,    1,   23,   13,   13,   16,   16,
   16,   16,   16,   16,   16,   16,   16,   16,   16,   16,
   16,   16,   25,   25,   32,   32,    5,    5,   27,   27,
   11,   11,    4,    4,   12,   12,   22,   28,   28,    7,
   21,   21,   29,   29,   29,   29,   29,   29,   29,   18,
   18,   18,   18,   10,   10,   10,   10,   10,   17,   17,
   31,   31,   31,   31,   31,   31,   31,   31,   31,   31,
   31,   31,   31,   31,   31,   20,
};
static const short yylen[] = {                            2,
    9,    2,    0,    0,    3,    3,    3,    2,    2,    3,
    2,    0,    0,    3,    1,    3,    3,    2,    0,    0,
    3,    3,    1,    1,    1,    2,    2,    3,    3,    3,
    3,    5,    4,    2,    2,    1,    3,    8,    8,    4,
    1,    0,    1,    2,    1,    2,    2,    3,    3,    3,
    0,    2,    2,    3,    2,    3,    3,    0,    1,    4,
    1,    3,    1,    3,    3,    3,    3,    3,    3,    1,
    3,    3,    3,    1,    3,    3,    3,    3,    3,    1,
    2,    2,    2,    1,    1,    1,    1,    1,    1,    1,
    4,    4,    4,    4,    3,    1,
};
static const short yydefred[] = {                         0,
    0,    0,   96,    0,    0,    0,    0,   18,    0,    0,
    0,    0,    0,    0,    0,    0,    2,    0,    0,   24,
   23,   22,   25,   21,    0,    0,    0,   15,    0,   11,
    0,    0,    5,    0,    7,    6,    0,    0,    0,   90,
   86,    0,    0,    0,    0,    0,    0,   89,    0,    0,
   36,    0,    0,    0,   85,   88,   84,    0,    0,    0,
    0,    0,   26,    0,    0,   41,    0,    0,    8,    0,
   14,   16,   17,    0,    0,   74,    0,   87,    0,    0,
    0,   34,    0,    0,    0,    0,    0,    0,   83,    0,
   35,    0,    0,    0,   82,   81,   27,    0,    0,    0,
    1,    9,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   31,    0,    0,    0,    0,   30,    0,    0,    0,
   47,    0,    0,   95,   28,   29,   37,   10,   94,   78,
   75,   76,   77,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   79,   49,   50,   53,    0,    0,   45,
    0,    0,    0,    0,   40,    0,   43,   33,   55,    0,
   91,   93,   48,   92,    0,   32,   54,    0,    0,    0,
   44,    0,   46,    0,   56,   52,    0,    0,   59,   57,
    0,   62,    0,    0,   60,   38,   39,
};
static const short yydgoto[] = {                          2,
   22,   69,   35,  122,   91,    8,  162,   12,   15,   75,
  176,  127,   63,    7,   27,   64,   76,   77,   28,   78,
  163,  164,   66,   30,  165,   10,   82,  190,  128,   19,
   80,  167,   17,
};
static const short yysindex[] = {                      -285,
 -235,    0,    0,  -34, -255, -235, -259,    0, -229,    2,
 -235, -203, -241, -235,    4, -212,    0, -235, -215,    0,
    0,    0,    0,    0, -235,  -35,   21,    0,  -15,    0,
  277, -235,    0, -235,    0,    0, -235, -235, -235,    0,
    0,   41,  339,  277,   44, -235,  339,    0,  339,   45,
    0,   46,  339,   51,    0,    0,    0,  277,   53,  339,
  339,  339,    0,  -49, -208,    0, -164,   56,    0,    1,
    0,    0,    0,  339,  -21,    0,  305,    0, -171, -160,
  -50,    0, -235, -197, -168, -180,  339,  339,    0,  339,
    0,  -52,  339,   69,    0,    0,    0,  277,  339,  339,
    0,    0, -235,   70,  339,  339,  339,  339,  339,  339,
  339,  339,  339,  339,  339,  339,  339,  277,  339,  339,
  277,    0,    5,  339,  233,  277,    0,   29,   72,   75,
    0,  277,   76,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -30,  -30,  -30,  -30,  -30,  -21,  -30,
  -21,  -21, -153,    0,    0,    0,    0, -235, -243,    0,
  277,  233,   71, -125,    0, -136,    0,    0,    0,  339,
    0,    0,    0,    0,  277,    0,    0,  339,  339,   77,
    0,  277,    0,  339,    0,    0, -154, -152,    0,    0,
   79,    0,  277,  277,    0,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0, -242, -239, -225,    0,    0,    0,
 -221, -151,    0, -239,    0,    0,    0, -150,    0,    0,
    0,    0,    0,    0, -221,    0,    0,    0,    0,    0,
  -47,    0,    0,    0,    0,    0, -150,    0,    0,    0,
    0,    0,    0,  -43,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -51,    0,    0,
    0,    0,    0,    0, -120,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   -9,    0,  106,    0,    0,  -41,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -47,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  -45,    0,    0,
  -43,    0,    0,    0,    0,  -45,    0,    0,    0,    0,
    0,  -51,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  131,  138,  157,  179,  199,   23,  227,
   55,   87,  -48,    0,    0,    0,    0,    0,    0,    0,
  -47,    0,    0,    0,    0,   84,    0,    0,    0,    0,
    0,    0,    0,    0,  -45,    0,    0,    0,    0, -115,
    0,   85,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -45,  -45,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,   42,    0,  -10,   17,  137,    0,    0,    0,  -38,
    0,  -17,   54,    0,    0,  391,  -18,   12,  115,  610,
    0,    0,  139,  120,   -3,    0,   39,    0,  -16,    0,
   -6,    0,  136,
};
#define YYTABLESIZE 804
static const short yytable[] = {                         80,
   80,   80,   80,   80,   34,   80,  132,   42,  121,   98,
   51,   42,  116,   42,  117,   42,  178,   80,    1,   19,
  107,    3,   20,    5,   67,  108,   79,    3,   39,    6,
   85,   70,   86,   70,   70,   70,    3,   67,   20,   11,
    4,  102,   38,   94,  103,  157,   89,   19,  158,   70,
   20,   67,   21,   13,   95,   96,   19,  104,   18,   20,
   14,  179,   25,   73,    3,   73,   73,   73,    4,  169,
   26,  129,  170,  130,   31,  149,  133,  151,  152,   37,
   74,   73,  136,   83,   87,   88,  140,  141,  142,  143,
   90,   67,   93,  137,   99,   71,  100,   71,   71,   71,
  154,  101,  118,  155,  119,  124,  125,  159,  126,  134,
  139,   67,  171,   71,   67,  172,  174,  175,  166,   67,
  144,  145,  146,  147,  148,   67,  150,   72,  182,   72,
   72,   72,  183,  184,  193,  189,  194,  195,   12,   13,
   87,   61,   58,   42,  138,   72,   63,  177,  173,   63,
   24,  135,  185,   73,   67,  166,   71,   32,  181,  156,
   33,  187,  188,    0,   63,    0,    0,    0,   67,    0,
    0,   67,    0,    0,   67,   67,    0,  192,   69,    0,
    0,   69,    0,    0,    0,    0,   67,   67,    0,   67,
    0,    0,    0,    0,    0,    0,   69,   66,    0,    0,
   66,    0,    0,    0,    0,    0,    0,    0,   97,   51,
   42,    0,   42,  131,   42,   66,   80,   51,   80,   65,
   42,  120,   65,   51,   80,   42,   42,    3,   42,   80,
   80,    0,   80,   80,   80,   80,   80,   65,    0,   64,
    0,   80,   64,    0,   80,    0,    0,   80,   70,    0,
   70,   80,    0,    0,   80,  105,   70,   64,   80,   80,
    0,   70,   70,   80,   70,   70,   70,   68,   70,  114,
   68,  106,   60,   70,    0,   61,   70,   62,    0,   70,
   73,    0,   73,    0,    0,   68,   70,    0,   73,    0,
   70,   70,    0,   73,   73,   70,   73,   73,   73,    0,
   73,    0,    0,    0,    0,   73,    0,    0,   73,    0,
    0,   73,   71,    0,   71,    0,   60,    0,   73,   61,
   71,   62,   73,   73,    0,   71,   71,   73,   71,   71,
   71,    0,   71,    0,    0,    0,    0,   71,    0,    0,
   71,    0,    0,   71,   72,    0,   72,  116,    0,  117,
   71,    0,   72,    0,   71,   71,    0,   72,   72,   71,
   72,   72,   72,   63,   72,   63,    0,    0,    0,   72,
    0,   63,   72,    0,    0,   72,   63,   63,   60,   63,
   63,   61,   72,   62,    0,    0,   72,   72,   67,    0,
   67,   72,    0,    0,   63,   69,   67,   69,    0,    0,
    0,   67,   67,   69,   67,   67,    0,    0,   69,   69,
   63,   69,   69,    0,   66,    0,   66,    0,    0,   67,
    0,    0,   66,    0,    0,    0,   69,   66,   66,    0,
   66,   66,    0,    0,   81,   67,   65,    0,   65,    0,
    0,    0,   69,    0,   65,   66,    0,    0,   92,   65,
   65,    0,   65,   65,    0,    0,   64,    0,   64,    0,
    0,   66,    0,    0,   64,    0,    0,   65,    0,   64,
   64,    0,   64,   64,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   65,   68,    0,   68,   64,    0,   40,
  160,   41,   68,    0,    0,    3,   42,   68,   68,    0,
   68,   68,    0,   64,    0,    0,    0,    0,  153,    0,
    0,   81,   48,    0,    0,   68,  168,    0,    0,   52,
   53,    0,   92,   54,   55,    0,   56,   57,    0,    0,
   59,   68,    0,   40,  161,   41,    0,    0,    0,    3,
   42,    0,    0,   43,   44,   45,    0,    0,    0,   46,
    0,  180,    0,    0,    0,   47,   48,   49,   50,    0,
   51,    0,    0,   52,   53,  186,   31,   54,   55,    0,
   56,   57,  191,   58,   59,    0,    0,    0,    0,    0,
  109,    0,  110,  196,  197,    0,    0,  111,    0,    0,
  112,    0,    0,    0,    0,   40,    0,   41,    0,    0,
  113,    3,   42,    0,  114,  115,    0,    0,    0,    0,
    4,    0,    0,    0,    0,    9,    0,    0,   48,    0,
   16,    0,   23,    9,    0,   52,   53,   29,    0,   54,
   55,    0,   56,   57,   16,   36,   59,    0,    0,    0,
   65,   68,    0,   70,    0,    0,   29,   72,   29,    0,
    0,    0,    0,   65,    0,   84,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   65,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  123,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   65,    0,    0,
    0,    0,   70,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   65,    0,    0,
   65,    0,    0,    0,    0,   65,    0,    0,    0,    0,
    0,   65,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  123,    0,    0,
   65,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   65,    0,    0,    0,    0,    0,
    0,   65,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   65,   65,
};
static const short yycheck[] = {                         41,
   42,   43,   44,   45,   40,   47,   59,   59,   59,   59,
   59,   59,   43,   59,   45,   59,  260,   59,  304,  262,
   42,  263,  262,   58,   31,   47,   43,  263,   44,  285,
   47,   41,   49,   43,   44,   45,  262,   44,  280,  299,
  262,   41,   58,   60,   44,   41,   53,  290,   44,   59,
  290,   58,  294,  283,   61,   62,  299,   74,  262,  299,
   59,  305,   59,   41,  290,   43,   44,   45,  290,   41,
  283,   88,   44,   90,  290,  114,   93,  116,  117,   59,
   40,   59,   99,   40,   40,   40,  105,  106,  107,  108,
   40,   98,   40,  100,  303,   41,  261,   43,   44,   45,
  119,   46,  274,  120,  265,  303,  275,  124,  289,   41,
   41,  118,   41,   59,  121,   41,   41,  271,  125,  126,
  109,  110,  111,  112,  113,  132,  115,   41,   58,   43,
   44,   45,  258,  270,  289,   59,  289,   59,  290,  290,
  261,   58,  258,   59,  103,   59,   41,  158,  132,   44,
   14,   98,  170,   39,  161,  162,   37,   19,  162,  121,
   25,  178,  179,   -1,   59,   -1,   -1,   -1,  175,   -1,
   -1,   41,   -1,   -1,   44,  182,   -1,  184,   41,   -1,
   -1,   44,   -1,   -1,   -1,   -1,  193,  194,   -1,   59,
   -1,   -1,   -1,   -1,   -1,   -1,   59,   41,   -1,   -1,
   44,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  258,  258,
  258,   -1,  258,  266,  266,   59,  258,  266,  260,   41,
  266,  272,   44,  272,  266,  271,  272,  263,  272,  271,
  272,   -1,  274,  275,  276,  277,  278,   59,   -1,   41,
   -1,  283,   44,   -1,  286,   -1,   -1,  289,  258,   -1,
  260,  293,   -1,   -1,  296,  277,  266,   59,  300,  301,
   -1,  271,  272,  305,  274,  275,  276,   41,  278,  300,
   44,  293,   40,  283,   -1,   43,  286,   45,   -1,  289,
  258,   -1,  260,   -1,   -1,   59,  296,   -1,  266,   -1,
  300,  301,   -1,  271,  272,  305,  274,  275,  276,   -1,
  278,   -1,   -1,   -1,   -1,  283,   -1,   -1,  286,   -1,
   -1,  289,  258,   -1,  260,   -1,   40,   -1,  296,   43,
  266,   45,  300,  301,   -1,  271,  272,  305,  274,  275,
  276,   -1,  278,   -1,   -1,   -1,   -1,  283,   -1,   -1,
  286,   -1,   -1,  289,  258,   -1,  260,   43,   -1,   45,
  296,   -1,  266,   -1,  300,  301,   -1,  271,  272,  305,
  274,  275,  276,  258,  278,  260,   -1,   -1,   -1,  283,
   -1,  266,  286,   -1,   -1,  289,  271,  272,   40,  274,
  275,   43,  296,   45,   -1,   -1,  300,  301,  258,   -1,
  260,  305,   -1,   -1,  289,  258,  266,  260,   -1,   -1,
   -1,  271,  272,  266,  274,  275,   -1,   -1,  271,  272,
  305,  274,  275,   -1,  258,   -1,  260,   -1,   -1,  289,
   -1,   -1,  266,   -1,   -1,   -1,  289,  271,  272,   -1,
  274,  275,   -1,   -1,   44,  305,  258,   -1,  260,   -1,
   -1,   -1,  305,   -1,  266,  289,   -1,   -1,   58,  271,
  272,   -1,  274,  275,   -1,   -1,  258,   -1,  260,   -1,
   -1,  305,   -1,   -1,  266,   -1,   -1,  289,   -1,  271,
  272,   -1,  274,  275,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  305,  258,   -1,  260,  289,   -1,  257,
  258,  259,  266,   -1,   -1,  263,  264,  271,  272,   -1,
  274,  275,   -1,  305,   -1,   -1,   -1,   -1,  118,   -1,
   -1,  121,  280,   -1,   -1,  289,  126,   -1,   -1,  287,
  288,   -1,  132,  291,  292,   -1,  294,  295,   -1,   -1,
  298,  305,   -1,  257,  302,  259,   -1,   -1,   -1,  263,
  264,   -1,   -1,  267,  268,  269,   -1,   -1,   -1,  273,
   -1,  161,   -1,   -1,   -1,  279,  280,  281,  282,   -1,
  284,   -1,   -1,  287,  288,  175,  290,  291,  292,   -1,
  294,  295,  182,  297,  298,   -1,   -1,   -1,   -1,   -1,
  276,   -1,  278,  193,  194,   -1,   -1,  283,   -1,   -1,
  286,   -1,   -1,   -1,   -1,  257,   -1,  259,   -1,   -1,
  296,  263,  264,   -1,  300,  301,   -1,   -1,   -1,   -1,
    1,   -1,   -1,   -1,   -1,    6,   -1,   -1,  280,   -1,
   11,   -1,   13,   14,   -1,  287,  288,   18,   -1,  291,
  292,   -1,  294,  295,   25,   26,  298,   -1,   -1,   -1,
   31,   32,   -1,   34,   -1,   -1,   37,   38,   39,   -1,
   -1,   -1,   -1,   44,   -1,   46,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   58,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   83,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   98,   -1,   -1,
   -1,   -1,  103,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  118,   -1,   -1,
  121,   -1,   -1,   -1,   -1,  126,   -1,   -1,   -1,   -1,
   -1,  132,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  158,   -1,   -1,
  161,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  175,   -1,   -1,   -1,   -1,   -1,
   -1,  182,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  193,  194,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 305
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'","'.'","'/'",0,0,0,0,0,0,0,0,0,0,
"':'","';'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"STRING","END","FALSE","TO","EQSWAP","VAR","IDENTIFIER","CHR","POW",
"POOL","IF","REPEAT","READ","RANGE","ELSE","UNTIL","FOR","THEN","OF","NE","MOD",
"GT","CASE","CHARACTER","WHILE","OUTPUT","EQ","EXIT","CONST","GTE","PRED","NOT",
"DO","BEGINX","ORD","TRUE","AND","INTEGER_NUM","EOFX","LTE","LOOP","SUCC",
"TYPE","OR","LT","OTHERWISE","ASSIGNMENT","PROGRAM","DOWNTO",
};
static const char *yyrule[] = {
"$accept : Tiny",
"Tiny : PROGRAM Name ':' Consts TypesRule Dclns Body Name '.'",
"TypesRule : TYPE TypesRule_1",
"TypesRule :",
"TypesRule_1 :",
"TypesRule_1 : TypeRule ';' TypesRule_1",
"TypeRule : Name EQ Name",
"TypeRule : Name EQ LitRule",
"LitRule : '(' LitRule_1",
"LitRule_1 : Name ')'",
"LitRule_1 : Name ',' LitRule_1",
"Dclns : VAR Dclns_1",
"Dclns :",
"Dclns_1 :",
"Dclns_1 : Dcln ';' Dclns_1",
"Dcln : Dcln_1",
"Dcln_1 : Name ':' Name",
"Dcln_1 : Name ',' Dcln_1",
"Consts : CONST Consts_1",
"Consts :",
"Consts_1 :",
"Consts_1 : ConstDcln ';' Consts_1",
"ConstDcln : Name EQ ConstValues",
"ConstValues : INTEGER_NUM",
"ConstValues : CHARACTER",
"ConstValues : Name",
"Body : BEGINX Body_1",
"Body_1 : Statement END",
"Body_1 : Statement ';' Body_1",
"Statement : Name ASSIGNMENT Expression",
"Statement : OUTPUT '(' Statement_1",
"Statement : READ '(' Statement_1_1",
"Statement : IF Expression THEN Statement Statement_1_1_1",
"Statement : WHILE Expression DO Statement",
"Statement : REPEAT Statement_1_1_1_1",
"Statement : LOOP Statement_1_1_1_1_1",
"Statement : EXIT",
"Statement : Primary EQSWAP Primary",
"Statement : FOR Name ASSIGNMENT Expression TO Expression DO Statement",
"Statement : FOR Name ASSIGNMENT Expression DOWNTO Expression DO Statement",
"Statement : CASE Expression OF Statement_1_1_1_1_1_1",
"Statement : Body",
"Statement :",
"Statement_1_1_1_1_1_1 : Statement_1_1_1_1_1_1_1",
"Statement_1_1_1_1_1_1 : CaseClause Statement_1_1_1_1_1_1",
"Statement_1_1_1_1_1_1_1 : END",
"Statement_1_1_1_1_1_1_1 : Otherwise END",
"Statement_1_1_1_1_1 : Statement POOL",
"Statement_1_1_1_1_1 : Statement ';' Statement_1_1_1_1_1",
"Statement_1_1_1_1 : Statement UNTIL Expression",
"Statement_1_1_1_1 : Statement ';' Statement_1_1_1_1",
"Statement_1_1_1 :",
"Statement_1_1_1 : ELSE Statement",
"Statement_1_1 : Name ')'",
"Statement_1_1 : Name ',' Statement_1_1",
"Statement_1 : Expression ')'",
"Statement_1 : Expression ',' Statement_1",
"Otherwise : OTHERWISE Statement Otherwise_1",
"Otherwise_1 :",
"Otherwise_1 : ';'",
"CaseClause : Clause ':' Statement ';'",
"Clause : Primary",
"Clause : Primary RANGE Primary",
"Expression : Term",
"Expression : Term LTE Term",
"Expression : Term GTE Term",
"Expression : Term EQ Term",
"Expression : Term NE Term",
"Expression : Term LT Term",
"Expression : Term GT Term",
"Term : Factor",
"Term : Term '+' Factor",
"Term : Term '-' Factor",
"Term : Term OR Factor",
"Factor : S",
"Factor : Factor AND S",
"Factor : Factor '*' S",
"Factor : Factor '/' S",
"Factor : Factor MOD S",
"S : Primary POW S",
"S : Primary",
"Primary : '-' Primary",
"Primary : '+' Primary",
"Primary : NOT Primary",
"Primary : EOFX",
"Primary : TRUE",
"Primary : FALSE",
"Primary : Name",
"Primary : INTEGER_NUM",
"Primary : CHARACTER",
"Primary : STRING",
"Primary : PRED '(' Expression ')'",
"Primary : SUCC '(' Expression ')'",
"Primary : ORD '(' Expression ')'",
"Primary : CHR '(' Expression ')'",
"Primary : '(' Expression ')'",
"Name : IDENTIFIER",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
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

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
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
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 106 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-8].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-8].info.string,
		                                TREETAG_LINE,yystack.l_mark[-8].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-8].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-7].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-7].dlist));

		while (DCount(&yystack.l_mark[-5].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-5].dlist));

		while (DCount(&yystack.l_mark[-4].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-4].dlist));

		while (DCount(&yystack.l_mark[-3].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-3].dlist));

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"program",
		                                TREETAG_LINE,yystack.l_mark[-8].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-8].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		t->mynode = *(DHead(&r));
		root = t->nodeptr;

             }
break;
case 2:
#line 160 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"types",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 3:
#line 196 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"types",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 4:
#line 218 "code.y"
	{
		DLIST r;

		InitDList(&r);

		yyval.dlist = r;

             }
break;
case 5:
#line 227 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 6:
#line 244 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"type",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 7:
#line 283 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"type",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 8:
#line 324 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"lit",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 9:
#line 349 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		yyval.dlist = r;

             }
break;
case 10:
#line 361 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 11:
#line 378 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"dclns",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 12:
#line 414 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"dclns",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 13:
#line 436 "code.y"
	{
		DLIST r;

		InitDList(&r);

		yyval.dlist = r;

             }
break;
case 14:
#line 445 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 15:
#line 462 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"var",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 16:
#line 487 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 17:
#line 502 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 18:
#line 519 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<consts>",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 19:
#line 555 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<consts>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 20:
#line 577 "code.y"
	{
		DLIST r;

		InitDList(&r);

		yyval.dlist = r;

             }
break;
case 21:
#line 586 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 22:
#line 603 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"const",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 23:
#line 644 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[0].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[0].info.string,
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<integer>",
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 24:
#line 677 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[0].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[0].info.string,
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<char>",
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 25:
#line 710 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 26:
#line 724 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"block",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 27:
#line 762 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		if (yystack.l_mark[0].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[0].info.string,
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		yyval.dlist = r;

             }
break;
case 28:
#line 785 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 29:
#line 802 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"assign",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 30:
#line 841 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-2].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-2].info.string,
		                                TREETAG_LINE,yystack.l_mark[-2].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-2].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"output",
		                                TREETAG_LINE,yystack.l_mark[-2].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-2].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 31:
#line 877 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-2].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-2].info.string,
		                                TREETAG_LINE,yystack.l_mark[-2].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-2].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"read",
		                                TREETAG_LINE,yystack.l_mark[-2].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-2].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 32:
#line 913 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-4].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-4].info.string,
		                                TREETAG_LINE,yystack.l_mark[-4].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-4].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-3].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-3].dlist));

		if (yystack.l_mark[-2].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-2].info.string,
		                                TREETAG_LINE,yystack.l_mark[-2].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-2].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"if",
		                                TREETAG_LINE,yystack.l_mark[-4].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-4].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 33:
#line 966 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-3].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-3].info.string,
		                                TREETAG_LINE,yystack.l_mark[-3].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-3].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"while",
		                                TREETAG_LINE,yystack.l_mark[-3].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-3].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 34:
#line 1016 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"repeat",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 35:
#line 1052 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"loop",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 36:
#line 1088 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[0].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[0].info.string,
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"exit",
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 37:
#line 1121 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<swap>",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 38:
#line 1160 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-7].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-7].info.string,
		                                TREETAG_LINE,yystack.l_mark[-7].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-7].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-6].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-6].dlist));

		if (yystack.l_mark[-5].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-5].info.string,
		                                TREETAG_LINE,yystack.l_mark[-5].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-5].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-4].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-4].dlist));

		if (yystack.l_mark[-3].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-3].info.string,
		                                TREETAG_LINE,yystack.l_mark[-3].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-3].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<upto>",
		                                TREETAG_LINE,yystack.l_mark[-7].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-7].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 39:
#line 1238 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-7].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-7].info.string,
		                                TREETAG_LINE,yystack.l_mark[-7].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-7].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-6].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-6].dlist));

		if (yystack.l_mark[-5].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-5].info.string,
		                                TREETAG_LINE,yystack.l_mark[-5].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-5].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-4].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-4].dlist));

		if (yystack.l_mark[-3].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-3].info.string,
		                                TREETAG_LINE,yystack.l_mark[-3].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-3].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<downto>",
		                                TREETAG_LINE,yystack.l_mark[-7].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-7].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 40:
#line 1316 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-3].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-3].info.string,
		                                TREETAG_LINE,yystack.l_mark[-3].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-3].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"case",
		                                TREETAG_LINE,yystack.l_mark[-3].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-3].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 41:
#line 1366 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 42:
#line 1378 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<null>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 43:
#line 1400 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 44:
#line 1412 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 45:
#line 1429 "code.y"
	{
		DLIST r;

		InitDList(&r);

		if (yystack.l_mark[0].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[0].info.string,
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		yyval.dlist = r;

             }
break;
case 46:
#line 1449 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		if (yystack.l_mark[0].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[0].info.string,
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		yyval.dlist = r;

             }
break;
case 47:
#line 1474 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		if (yystack.l_mark[0].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[0].info.string,
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		yyval.dlist = r;

             }
break;
case 48:
#line 1497 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 49:
#line 1514 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 50:
#line 1540 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 51:
#line 1557 "code.y"
	{
		DLIST r;

		InitDList(&r);

		yyval.dlist = r;

             }
break;
case 52:
#line 1566 "code.y"
	{
		DLIST r;

		InitDList(&r);

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 53:
#line 1591 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		yyval.dlist = r;

             }
break;
case 54:
#line 1603 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 55:
#line 1620 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		yyval.dlist = r;

             }
break;
case 56:
#line 1632 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 57:
#line 1649 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-2].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-2].info.string,
		                                TREETAG_LINE,yystack.l_mark[-2].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-2].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<otherwise>",
		                                TREETAG_LINE,yystack.l_mark[-2].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-2].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 58:
#line 1690 "code.y"
	{
		DLIST r;

		InitDList(&r);

		yyval.dlist = r;

             }
break;
case 59:
#line 1699 "code.y"
	{
		DLIST r;

		InitDList(&r);

		yyval.dlist = r;

             }
break;
case 60:
#line 1710 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-3].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-3].dlist));

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<case_clause>",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 61:
#line 1738 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 62:
#line 1750 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<range>",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 63:
#line 1791 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 64:
#line 1803 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<=",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 65:
#line 1842 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,">=",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 66:
#line 1881 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"=",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 67:
#line 1920 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<>",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 68:
#line 1959 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 69:
#line 1998 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,">",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 70:
#line 2039 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 71:
#line 2051 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"+",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 72:
#line 2077 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"-",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 73:
#line 2103 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"or",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 74:
#line 2144 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 75:
#line 2156 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"and",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 76:
#line 2195 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"*",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 77:
#line 2221 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"/",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 78:
#line 2247 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"mod",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 79:
#line 2288 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-2].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-2].dlist));

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"pow",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 80:
#line 2327 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 81:
#line 2341 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"neg",
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 82:
#line 2364 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 83:
#line 2376 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-1].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-1].info.string,
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"not",
		                                TREETAG_LINE,yystack.l_mark[-1].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-1].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 84:
#line 2412 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[0].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[0].info.string,
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"eof",
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 85:
#line 2445 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[0].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[0].info.string,
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"true",
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 86:
#line 2478 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[0].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[0].info.string,
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"false",
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 87:
#line 2511 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[0].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[0].dlist));

		yyval.dlist = r;

             }
break;
case 88:
#line 2523 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[0].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[0].info.string,
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<integer>",
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 89:
#line 2556 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[0].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[0].info.string,
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<char>",
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 90:
#line 2589 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[0].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[0].info.string,
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<string>",
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 91:
#line 2622 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-3].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-3].info.string,
		                                TREETAG_LINE,yystack.l_mark[-3].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-3].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"pred",
		                                TREETAG_LINE,yystack.l_mark[-3].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-3].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 92:
#line 2658 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-3].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-3].info.string,
		                                TREETAG_LINE,yystack.l_mark[-3].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-3].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"succ",
		                                TREETAG_LINE,yystack.l_mark[-3].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-3].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 93:
#line 2694 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-3].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-3].info.string,
		                                TREETAG_LINE,yystack.l_mark[-3].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-3].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"ord",
		                                TREETAG_LINE,yystack.l_mark[-3].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-3].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 94:
#line 2730 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[-3].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[-3].info.string,
		                                TREETAG_LINE,yystack.l_mark[-3].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-3].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"chr",
		                                TREETAG_LINE,yystack.l_mark[-3].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[-3].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
case 95:
#line 2766 "code.y"
	{
		DLIST r;

		InitDList(&r);

		while (DCount(&yystack.l_mark[-1].dlist) > 0)
		    DAddTail(&r,DRemHead(&yystack.l_mark[-1].dlist));

		yyval.dlist = r;

             }
break;
case 96:
#line 2780 "code.y"
	{
		DLIST r;
		T_NODE *t;

		InitDList(&r);

		if (yystack.l_mark[0].info.makenode) {
		    T_NODE *t2;
		    t2 = (T_NODE *)malloc(sizeof(T_NODE));
		    assert(t2);
		    t2->nodeptr = AllocTreeNode(TREETAG_STRING,yystack.l_mark[0].info.string,
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                                TREETAG_DONE);
		    DAddTail(&r,&t2->mynode);
		}

		t = (T_NODE *)malloc(sizeof(T_NODE));
		assert(t);
		t->nodeptr = AllocTreeNode(TREETAG_STRING,"<identifier>",
		                                TREETAG_LINE,yystack.l_mark[0].info.line,
		                                TREETAG_COLUMN,yystack.l_mark[0].info.column,
		                           TREETAG_DONE);
		while (DCount(&r) > 0) {
		    T_NODE *t3 = DRemHead(&r);
		    AddChild(t->nodeptr,t3->nodeptr);
		    free(t3);
		}
		DAddTail(&r,&t->mynode);
		yyval.dlist = r;

             }
break;
#line 3591 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
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
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
