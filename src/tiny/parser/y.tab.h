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
extern YYSTYPE yylval;
