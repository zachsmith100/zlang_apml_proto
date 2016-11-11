/* A Bison parser, made by GNU Bison 3.0.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "yacc.y" /* yacc.c:339  */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "node.h"

#ifdef WIN32
void _strcat(char* str1, const char* str2)
{
	strcat_s(str1, 1000, str2);
}

	#define strdup _strdup
	#define strcat _strcat
#endif

extern int yylineno; 

int errorLine = 0;
char* errorText = NULL;

void yyerror(const char* str)
{
	errorLine = yylineno;
	errorText = strdup(str);
//        fprintf(stderr, "Fatal error at line %d: %s\n", yylineno, str);
}

extern int yylex(void);

node* root = NULL;

node* getroot()
{
	return root;
}

char* getYaccErrorText()
{
	return errorText;
}

int getYaccErrorLine()
{
	return errorLine;
}


extern "C" int yywrap()
{
        return 1;
} 

//#define PRINT_CREATING_NODES_INFO 1
  
node* mknode(node* left, node* center, node* right, const char* token)
{
	node* newnode = (node *)malloc(sizeof(node));
	if (token != NULL)
	{
		char* newStr = strdup(token);
		newnode->token = newStr;
	}
	else
	{
		newnode->token = NULL;
	}

	newnode->left = left;
	newnode->right = right;
	newnode->center = center;
	newnode->nodeval = NULL;
	newnode->cmd = -1;
	newnode->processed = 0;
	newnode->line = yylineno;

#ifdef PRINT_CREATING_NODES_INFO
	if (newnode->token != NULL)
	{
		printf("#%d: mknode token: %s nodes: %d %d %d\n", (int)newnode, newnode->token, (int)left, (int)center, (int)right);
	}
#endif

	return newnode;
}

node* mkcmdnode(node* left, node* center, node* right, int cmd)
{
	node* newnode = (node *)malloc(sizeof(node));
	newnode->token = NULL;
	newnode->cmd = cmd;
	newnode->left = left;
	newnode->right = right;
	newnode->center = center;
	newnode->nodeval = NULL;
	newnode->processed = 0;
	newnode->line = yylineno;

#ifdef PRINT_CREATING_NODES_INFO
	printf("#%d: mkcmdnode cmd: %d nodes: %d %d %d\n", (int)newnode, cmd, (int)left, (int)center, (int)right);
#endif

	return newnode;
}

extern int yylex(void);

#line 174 "yacc.tab.c" /* yacc.c:339  */

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* In a future release of Bison, this section will be replaced
   by #include "yacc.tab.h".  */
#ifndef YY_YY_YACC_TAB_H_INCLUDED
# define YY_YY_YACC_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    HEX_NUMBER = 258,
    FP_NUMBER = 259,
    NUMBER = 260,
    ID_FUNC = 261,
    ID_CLASS = 262,
    WHILE = 263,
    IF = 264,
    FOR = 265,
    OR = 266,
    AND = 267,
    NEWLINE = 268,
    CODE_LEVEL = 269,
    SQUARE_BRACKET_START = 270,
    SQUARE_BRACKET_END = 271,
    OPERATOR_EQUAL = 272,
    OPERATOR_INCREMENT = 273,
    OPERATOR_DECREMENT = 274,
    OPERATOR_MINUS = 275,
    OPERATOR_PLUS = 276,
    OPERATOR_MULTIPLY = 277,
    OPERATOR_DIVISION = 278,
    COMPARE_LESS = 279,
    COMPARE_MORE = 280,
    COMPARE_EQUAL = 281,
    COMPARE_NOT_EQUAL = 282,
    CONDITION_OR = 283,
    END_PART = 284,
    SYMBOL = 285,
    COMMA = 286,
    VAL_TRUE = 287,
    VAL_FALSE = 288,
    OPERATOR_RETURN = 289,
    PARENS_START = 290,
    PARENS_END = 291,
    OPERATOR_PLUS_EQUAL = 292,
    OPERATOR_MINUS_EQUAL = 293,
    OPERATOR_MULTIPLY_EQUAL = 294,
    OPERATOR_DIVISION_EQUAL = 295,
    COMPARE_LESS_EQUAL = 296,
    COMPARE_MORE_EQUAL = 297,
    STRING = 298,
    PRIVATE = 299,
    PUBLIC = 300,
    SINGLETON = 301,
    CODE_LEVEL3 = 302,
    DOT = 303,
    ME = 304,
    OPERATOR_CONCAT = 305,
    BASE = 306,
    OUT_SPEC = 307,
    MULTILINE_COMMENT = 308,
    SINGLELINE_COMMENT = 309,
    ELSE = 310,
    FOREACH = 311,
    IN_CONSTRUCT = 312,
    CPP = 313,
    UNIX_IMPORT = 314,
    WINDOWS_IMPORT = 315,
    LINUX_IMPORT = 316,
    MACOSX_IMPORT = 317,
    INCLUDE = 318,
    LINUX_INCLUDE = 319,
    WINDOWS_INCLUDE = 320,
    MACOSX_INCLUDE = 321,
    UNIX_INCLUDE = 322,
    UNIX_IMPORT_PATH = 323,
    WINDOWS_IMPORT_PATH = 324,
    LINUX_IMPORT_PATH = 325,
    MACOSX_IMPORT_PATH = 326,
    WINDOWS_INCLUDE_PATH = 327,
    UNIX_INCLUDE_PATH = 328,
    LINUX_INCLUDE_PATH = 329,
    MACOSX_INCLUDE_PATH = 330,
    ADD_CPP = 331,
    BREAK = 332,
    CONTINUE = 333,
    QUESTION_SIGN = 334,
    COLON = 335,
    DOG = 336,
    CPP_INHERIT = 337,
    OBJECT = 338,
    INCLUDE_PATH = 339,
    UNIX_COMPILER_FLAGS = 340,
    LINUX_COMPILER_FLAGS = 341,
    MACOSX_COMPILER_FLAGS = 342,
    CPP_ENTRY_POINT = 343,
    OPERATOR_MATH_AND = 344,
    OPERATOR_MATH_OR = 345,
    OPERATOR_MATH_XOR = 346,
    OPERATOR_AND_EQUAL = 347,
    OPERATOR_OR_EQUAL = 348,
    OPERATOR_XOR_EQUAL = 349,
    FP_ARB_NUMBER = 350,
    FLOAT_DECL = 351,
    FIXED_DECL = 352,
    INTEGER_DECL = 353
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 113 "yacc.y" /* yacc.c:355  */

  int intval;
  char* strval;
  struct node* nodeval;  

#line 319 "yacc.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_YACC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 334 "yacc.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  85
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1239

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  99
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  103
/* YYNRULES -- Number of rules.  */
#define YYNRULES  277
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  448

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   353

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   125,   125,   129,   131,   133,   135,   139,   141,   143,
     145,   147,   149,   151,   153,   155,   157,   161,   163,   165,
     167,   169,   173,   175,   177,   179,   181,   185,   187,   189,
     191,   195,   197,   199,   201,   203,   207,   209,   211,   215,
     219,   223,   227,   229,   231,   233,   235,   239,   243,   245,
     249,   251,   255,   257,   259,   263,   265,   269,   271,   275,
     277,   281,   285,   287,   289,   291,   293,   295,   297,   301,
     303,   307,   309,   311,   313,   317,   319,   323,   327,   331,
     333,   335,   337,   341,   343,   345,   347,   349,   353,   355,
     357,   361,   363,   365,   369,   373,   375,   377,   379,   381,
     383,   385,   387,   389,   391,   395,   397,   399,   401,   403,
     407,   409,   413,   415,   419,   421,   425,   427,   431,   433,
     437,   439,   443,   445,   447,   451,   455,   457,   461,   463,
     465,   469,   471,   473,   475,   479,   481,   485,   487,   489,
     491,   493,   497,   499,   503,   505,   509,   511,   515,   517,
     519,   523,   525,   527,   529,   531,   533,   535,   539,   541,
     545,   547,   551,   555,   559,   563,   567,   571,   575,   577,
     579,   581,   583,   585,   587,   589,   591,   593,   597,   601,
     603,   605,   607,   609,   613,   615,   617,   619,   621,   623,
     625,   627,   629,   631,   635,   637,   639,   641,   645,   649,
     651,   655,   659,   663,   665,   667,   671,   673,   675,   677,
     679,   681,   683,   685,   687,   689,   691,   695,   697,   699,
     701,   703,   705,   709,   711,   715,   717,   719,   721,   723,
     725,   727,   729,   731,   735,   737,   741,   745,   747,   751,
     755,   759,   763,   767,   771,   775,   777,   781,   783,   787,
     791,   793,   797,   799,   803,   805,   809,   813,   815,   819,
     823,   827,   831,   835,   839,   843,   845,   849,   851,   855,
     857,   861,   863,   867,   869,   871,   875,   877
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HEX_NUMBER", "FP_NUMBER", "NUMBER",
  "ID_FUNC", "ID_CLASS", "WHILE", "IF", "FOR", "OR", "AND", "NEWLINE",
  "CODE_LEVEL", "SQUARE_BRACKET_START", "SQUARE_BRACKET_END",
  "OPERATOR_EQUAL", "OPERATOR_INCREMENT", "OPERATOR_DECREMENT",
  "OPERATOR_MINUS", "OPERATOR_PLUS", "OPERATOR_MULTIPLY",
  "OPERATOR_DIVISION", "COMPARE_LESS", "COMPARE_MORE", "COMPARE_EQUAL",
  "COMPARE_NOT_EQUAL", "CONDITION_OR", "END_PART", "SYMBOL", "COMMA",
  "VAL_TRUE", "VAL_FALSE", "OPERATOR_RETURN", "PARENS_START", "PARENS_END",
  "OPERATOR_PLUS_EQUAL", "OPERATOR_MINUS_EQUAL", "OPERATOR_MULTIPLY_EQUAL",
  "OPERATOR_DIVISION_EQUAL", "COMPARE_LESS_EQUAL", "COMPARE_MORE_EQUAL",
  "STRING", "PRIVATE", "PUBLIC", "SINGLETON", "CODE_LEVEL3", "DOT", "ME",
  "OPERATOR_CONCAT", "BASE", "OUT_SPEC", "MULTILINE_COMMENT",
  "SINGLELINE_COMMENT", "ELSE", "FOREACH", "IN_CONSTRUCT", "CPP",
  "UNIX_IMPORT", "WINDOWS_IMPORT", "LINUX_IMPORT", "MACOSX_IMPORT",
  "INCLUDE", "LINUX_INCLUDE", "WINDOWS_INCLUDE", "MACOSX_INCLUDE",
  "UNIX_INCLUDE", "UNIX_IMPORT_PATH", "WINDOWS_IMPORT_PATH",
  "LINUX_IMPORT_PATH", "MACOSX_IMPORT_PATH", "WINDOWS_INCLUDE_PATH",
  "UNIX_INCLUDE_PATH", "LINUX_INCLUDE_PATH", "MACOSX_INCLUDE_PATH",
  "ADD_CPP", "BREAK", "CONTINUE", "QUESTION_SIGN", "COLON", "DOG",
  "CPP_INHERIT", "OBJECT", "INCLUDE_PATH", "UNIX_COMPILER_FLAGS",
  "LINUX_COMPILER_FLAGS", "MACOSX_COMPILER_FLAGS", "CPP_ENTRY_POINT",
  "OPERATOR_MATH_AND", "OPERATOR_MATH_OR", "OPERATOR_MATH_XOR",
  "OPERATOR_AND_EQUAL", "OPERATOR_OR_EQUAL", "OPERATOR_XOR_EQUAL",
  "FP_ARB_NUMBER", "FLOAT_DECL", "FIXED_DECL", "INTEGER_DECL", "$accept",
  "program", "program_parts", "program_part", "import_directive",
  "include_directive", "import_path_directive", "include_path_directive",
  "compiler_flags_directive", "entry_point_directive", "add_cpp_directive",
  "class", "class_decl", "class_type", "section_exp", "section_type",
  "functions_and_properties", "function_parameters_annotation",
  "global_function", "global_function_impl", "function_or_property", "fps",
  "property", "newlines", "function", "function_commands",
  "global_function_commands", "parameters", "var", "commands",
  "global_func_commands", "command", "cmd", "function_call",
  "prop_method_call", "internal_method_call", "var_method_call",
  "standard_function_call", "base_method_call", "props_in_call",
  "function_call_parameters_with_parens", "object_exp",
  "function_call_parameters", "code_levels", "global_code_levels",
  "math_unary_exp", "command_simple", "return_props", "array_element_var",
  "array_element", "making_equal_simple", "operator_change_value",
  "left_equal_part", "id_exp", "id_func_exp", "id_class_exp",
  "code_level_exp", "code_level3_exp", "number_exp",
  "fp_simple_number_exp", "fp_number_exp", "hex_number_exp",
  "string_right_part", "right_equal_part_min", "right_equal_part",
  "constructor", "constructor_params", "constructor_parameter",
  "string_exp", "plus_exp", "math_exp", "operand", "boolean_var",
  "condition", "condition_operator", "if_operator", "one_line_if_operator",
  "else_operator", "break_operator", "continue_operator", "while_operator",
  "for_operator", "comma_commands_for", "comma_commands",
  "initializations", "func_result_prop_exp", "my_prop_exp",
  "base_prop_exp", "prop_exp", "out_var_exp", "comment",
  "singleline_comment_exp", "multiline_comment_exp", "foreach_operator",
  "cpp_declaration", "cpp_operator", "cpp_exp",
  "method_parameter_annotation", "method_annotation_properties",
  "function_parameter_annotation", "function_annotation_properties",
  "annotation_value", "annotation_values", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353
};
# endif

#define YYPACT_NINF -379

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-379)))

#define YYTABLE_NINF -226

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1025,  -379,  -379,  -379,  -379,  -379,  -379,  -379,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,    94,   -31,   -31,   -31,
     -31,   -31,    15,  1025,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,   123,    25,    18,  -379,  -379,  1068,   195,
    -379,    41,  -379,  -379,   123,  -379,   123,  -379,  -379,  -379,
      54,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,   123,   123,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  1068,   200,    35,
    -379,  -379,  -379,  -379,  -379,   281,   438,  -379,   195,  -379,
    -379,    10,   198,   198,   -31,   200,   200,  -379,  -379,   401,
    -379,   537,    25,  -379,  -379,   109,  1151,  -379,  -379,  -379,
    -379,  -379,    60,  -379,  -379,   281,  -379,  -379,  -379,   200,
     123,   123,  -379,  -379,    16,  -379,  -379,  1151,  1161,   938,
     938,   300,   938,    62,    62,   123,   281,   123,   123,   543,
    -379,  -379,    62,  -379,  -379,  -379,  -379,  -379,  -379,   123,
     104,    11,  -379,   336,   172,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,    62,  -379,    62,  -379,  -379,  -379,
     347,    44,  -379,   198,   198,   276,  -379,  -379,   126,   195,
    -379,  -379,   123,  -379,  -379,  -379,  -379,  -379,  -379,   274,
    -379,  -379,   938,  -379,    49,   125,   116,   756,     7,  -379,
     293,   382,  -379,   483,   489,   491,   136,   139,   594,  -379,
    -379,   344,   344,   150,    62,  -379,   115,   368,   281,   232,
     255,   198,   110,   198,   198,  -379,  -379,   124,   198,   708,
     124,   972,  -379,  -379,  -379,  -379,   269,  -379,  -379,  -379,
     972,   759,   294,  -379,   297,   297,  -379,  -379,   281,   257,
     123,   123,   972,    51,  -379,   195,   198,   183,   152,   179,
     188,    83,   188,    83,  1007,  1007,  1007,  1007,  1007,  1007,
      83,    83,    83,    83,    83,    83,    83,  -379,  -379,   198,
     938,   198,   938,   300,   281,  -379,   793,   281,  -379,   828,
    -379,   281,  -379,   972,   312,  1152,   194,  -379,    56,  -379,
    -379,  -379,   150,    62,    11,  -379,  -379,  -379,   210,   862,
    -379,   897,  -379,   931,  -379,  -379,   243,   281,  -379,  -379,
     123,  -379,    51,    51,   411,   123,   384,  1151,  -379,  -379,
    -379,  -379,  -379,   259,  -379,    83,   543,    62,    11,  -379,
    -379,  -379,  -379,   636,   280,   644,  -379,  -379,  -379,  -379,
    -379,  -379,   139,   830,   594,   594,   594,   594,   594,   594,
     327,   377,  -379,   278,  -379,   210,  -379,   210,   123,    91,
     286,   759,  -379,   972,   244,   285,  -379,   210,   210,  -379,
    -379,   200,   281,  -379,  -379,   198,   198,  1151,  1161,  -379,
    -379,  -379,   331,   750,  -379,   335,  -379,   362,   281,   198,
    -379,     3,    30,  -379,   301,  -379,  -379,   244,  -379,   307,
    -379,  -379,    83,    83,  -379,  -379,   364,  -379,  1007,   281,
    -379,   972,  -379,   257,   794,   895,   362,   198,  -379,   321,
    -379,  -379,   123,  -379,  -379,  -379,    51,  -379
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,   162,   163,    71,    47,   260,   259,   264,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     3,     9,    10,    11,    12,    13,
      15,    14,     7,     0,     0,     0,     8,    57,     0,     0,
     160,    42,    72,   257,     0,    16,     0,    55,   202,    17,
      18,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    40,     0,     0,   161,
      35,    37,    38,    36,    39,     1,     5,     0,     0,    45,
      58,    56,    73,     4,    74,     0,     0,    60,     0,    79,
      80,     0,   258,   263,     0,     0,     0,     6,   164,    41,
      52,     0,     0,   256,   165,    78,     0,   131,   132,    59,
      81,    82,     0,    43,    19,     0,   270,   269,    53,     0,
       0,     0,    64,    61,     0,    65,    46,     0,     0,     0,
       0,     0,     0,   251,   253,     0,     0,     0,     0,   158,
      91,    94,   141,   105,   106,   107,   108,   109,   137,     0,
       0,   159,   138,     0,    83,   133,   134,    95,    96,   100,
     101,    97,    98,    87,    84,    85,    86,   103,    99,   104,
       0,     0,    54,    50,    51,     0,    63,    62,     0,   160,
      66,    68,     0,    67,    92,    93,   178,   167,   166,   192,
     223,   224,     0,   169,   172,     0,   170,   189,   186,   206,
     190,   185,   168,   187,   188,   225,   191,     0,   184,   207,
     193,     0,     0,   158,     0,   247,     0,   139,     0,   250,
     252,   239,     0,   240,   241,   135,   136,   249,   102,     0,
     255,     0,   151,   152,   153,   154,     0,   155,   156,   157,
       0,     0,   254,   116,     0,     0,    48,    49,     0,     0,
       0,     0,     0,     0,    76,     0,   262,   184,   207,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   234,   235,   242,
       0,   236,     0,     0,     0,   120,     0,     0,   112,     0,
     118,     0,   147,     0,    83,   195,     0,   197,   196,   194,
     148,   182,   179,   183,   180,   150,   181,   149,   117,     0,
     126,     0,   114,     0,   110,   111,     0,   276,   274,   273,
       0,   275,     0,     0,   186,     0,    77,     0,   128,    75,
     209,   208,   233,     0,   220,     0,   221,   205,   222,   217,
     218,   219,   204,   203,     0,   203,   229,   230,   227,   228,
     231,   232,   211,   203,   210,   212,   213,   214,   215,   216,
     226,     0,   248,   140,   142,   113,   121,   119,     0,     0,
       0,     0,   146,     0,     0,   122,   127,   115,     0,    44,
     277,   271,     0,   266,   265,    70,    69,     0,     0,    88,
     129,   130,   175,   203,   173,   177,   171,     0,     0,   261,
     238,    83,     0,   199,     0,   125,   124,     0,   272,     0,
      89,    90,     0,     0,   245,   243,     0,   143,     0,     0,
     198,     0,   123,     0,   203,   203,     0,   244,   201,     0,
     200,   237,     0,   174,   176,   246,   267,   268
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -379,  -379,  -379,    46,  -379,  -379,  -379,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,   367,
     -47,  -379,  -379,     0,  -379,   142,   311,   227,   325,  -379,
    -379,  -128,  -379,   284,  -379,  -379,  -379,  -379,  -379,  -130,
     371,     6,  -379,    84,   318,   -96,  -378,  -379,  -379,   415,
    -135,  -379,  -379,    27,   316,    63,   -66,   -80,   254,  -379,
     163,   197,  -379,  -137,  -133,  -379,  -379,    -2,   215,   173,
     -86,  -191,  -379,  -121,  -379,  -379,   154,  -379,  -379,  -379,
    -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,  -379,   -97,
     256,  -379,  -379,  -379,  -379,     4,   333,  -379,  -326,   424,
     -98,    42,   149
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,   258,   132,   109,    45,    46,    47,
     110,   133,   186,    96,   187,   264,    97,    98,   207,   336,
     115,   150,   151,   208,   153,   154,   155,   156,   157,   237,
     253,   416,   319,   337,   116,   209,   159,   373,   160,   210,
     162,   250,   163,   164,    50,    79,   111,   392,   211,   212,
     213,   214,   315,   305,   320,   307,   412,   413,   216,   217,
     218,   219,   220,   308,   290,   167,   309,   168,   169,   170,
     171,   172,   425,   426,   226,   173,   174,   175,   176,   100,
      52,    53,    54,   178,   191,   179,    56,   193,   393,    57,
     126,   330,   331
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      48,   121,   215,   215,    55,   215,   225,   394,   127,   194,
     195,   268,    58,   229,   230,    85,   118,     2,   221,   222,
     158,   227,     1,     2,     1,     2,  -145,    49,  -205,   424,
     117,   240,     2,    87,   252,   118,   166,    55,   381,   125,
     125,   158,   158,    88,   254,   134,   255,  -161,  -161,   117,
     165,   228,    55,    78,   102,   228,   103,   166,   445,   228,
      49,   429,   128,    51,    92,   215,   430,   287,   288,     5,
       6,   165,    49,   270,     7,    49,    99,   105,   106,    86,
     240,   269,   182,   428,   271,   104,   196,   197,   198,     1,
       2,    55,   122,  -161,    93,   180,    51,   185,   114,    26,
       1,     2,   287,   288,     5,     6,   306,    89,   310,   129,
     228,    51,   268,   344,    49,   112,   267,   317,   345,   239,
     447,   101,   113,   108,   259,   120,    58,   342,    77,   335,
     183,   184,   143,   107,   144,   383,     3,   356,   357,   358,
     359,   360,   361,   262,   292,   231,   293,   233,   234,   272,
      51,   273,   181,   215,   268,   215,   114,  -204,   372,   238,
     280,   188,     5,     6,   123,  -144,   215,   301,   121,   370,
     383,   371,   297,   232,   252,   136,     5,     6,   203,   204,
     205,   206,   379,   338,   240,   353,   386,   355,   341,   263,
     287,   288,   266,   198,   363,   364,   365,   366,   367,   368,
     369,     1,     2,   281,  -203,   282,   283,   251,     3,   399,
     382,    92,   261,    92,   108,   342,    99,   267,   240,   340,
     228,   289,   291,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,   158,    80,    81,    82,    83,    84,    95,     5,     6,
     414,     5,     6,     5,     6,   295,   338,   401,   384,   403,
     332,   333,   198,     1,     2,   263,   304,   296,   304,   420,
     421,   400,   284,   285,   286,     1,     2,   304,   304,   389,
     297,   252,     1,     2,   402,   326,   327,     1,     2,   304,
     299,   438,   120,   418,  -220,  -220,  -220,  -220,   441,   311,
      58,   158,   158,   297,    94,   405,     1,     2,  -145,   408,
     260,   158,    58,  -222,  -222,  -222,  -222,   401,   143,   124,
     144,   374,   410,   304,   376,   125,   304,   415,   378,   321,
     391,   400,   323,   417,   395,   396,   434,   435,   287,   288,
     158,   228,   297,    94,    94,   297,   304,   381,   304,   143,
     304,   144,    94,   241,   327,   287,   288,     3,    94,    94,
     228,    94,    94,  -220,  -220,  -220,   422,   135,     1,     2,
     423,   138,   177,   242,   243,   244,   245,     3,   409,   287,
     288,   431,  -222,  -222,  -222,    94,   246,   433,   287,   288,
     190,   256,   257,   177,   177,   436,   142,     5,     6,   294,
     152,   428,  -217,  -217,  -217,  -217,   407,   339,   411,   119,
     304,   143,    90,   144,     3,   108,   265,     5,     6,   419,
     397,   152,   152,   432,     3,   224,   437,   440,   247,   248,
     249,   114,  -205,   137,   350,   427,   350,     5,     6,    94,
      94,   149,   446,   350,   350,   350,   350,   350,   350,   350,
     189,    92,   108,   362,     5,     6,   439,   380,   304,   228,
     327,   316,   149,   149,     5,     6,   223,   192,   351,    91,
     351,  -217,  -217,  -217,   329,   442,   390,   351,   351,   351,
     351,   351,   351,   351,     0,   114,   352,    94,   352,    94,
      94,     5,     6,     0,    94,   352,   352,   352,   352,   352,
     352,   352,     0,  -218,  -218,  -218,  -218,     0,   350,  -219,
    -219,  -219,  -219,   328,     0,   274,   275,   276,   277,    94,
       0,     0,    94,     0,   343,   349,   354,   349,     0,     0,
     313,   161,   278,   279,   349,   349,   349,   349,   349,   349,
     349,     0,   351,     0,     0,    94,   334,    94,     0,     0,
       0,   108,   161,   161,     0,   347,   161,   347,  -144,     0,
     352,   235,   236,     0,   347,   347,   347,   347,   347,   347,
     347,   312,  -218,  -218,  -218,     0,     0,   224,  -219,  -219,
    -219,   130,   131,     0,     0,   350,   350,     0,    94,    94,
       5,     6,   398,   177,     0,     0,   346,     0,   346,   349,
     298,   300,     0,     0,     0,   346,   346,   346,   346,   346,
     346,   346,     0,     0,   281,  -203,   282,   283,   223,   351,
     351,   152,     0,   322,     0,   324,   325,     0,     0,   347,
       0,     0,     0,     0,     0,     0,     0,   352,   352,     0,
       0,     0,     0,     0,     0,     0,     0,    94,   329,     0,
       0,    94,    94,   177,   177,     0,   281,     0,   282,   283,
       0,   314,   149,     0,   281,    94,   282,   283,     0,     0,
     346,     0,   404,     0,     0,     0,   349,   349,     0,     0,
     406,   152,   152,   284,   285,   286,   348,   328,   348,     0,
       0,   152,     0,    94,     0,   348,   348,   348,   348,   348,
     348,   348,    94,     0,     0,     0,   347,   347,   161,     0,
       0,   196,   197,   198,     1,     2,     0,     0,     0,     0,
     152,     0,   149,   149,   302,   284,   285,   286,     0,     0,
       0,     0,   149,   284,   285,   286,     0,     0,   199,     0,
     200,   201,     0,   303,     0,     0,     0,   346,   346,     0,
       0,    58,   161,     0,     0,     0,     0,   143,     0,   144,
     348,   149,   196,   197,   198,     1,     2,     0,     0,     0,
     281,  -144,   282,   283,   235,   236,  -221,  -221,  -221,  -221,
       0,     0,     0,     0,     0,     0,   340,     0,     0,   199,
       0,   200,   201,     0,   303,   318,   196,   197,   198,     1,
       2,     0,    58,   203,   204,   205,   206,     0,   143,     0,
     144,     0,   161,   161,   281,     0,   282,   283,     0,     0,
       0,     0,   161,   199,     0,   200,   201,     0,   303,   375,
     443,   196,   197,   198,     1,     2,    58,   348,   348,   284,
     285,   286,   143,     0,   144,  -221,  -221,  -221,     0,     0,
     281,   161,   282,   283,   203,   204,   205,   206,   199,     0,
     200,   201,     0,   303,   377,   196,   197,   198,     1,     2,
       0,    58,     0,     0,     0,     0,     0,   143,     0,   144,
       0,     0,     0,   284,   285,   286,     0,     0,   203,   204,
     205,   206,   199,     0,   200,   201,     0,   303,   385,     0,
     196,   197,   198,     1,     2,    58,     0,     0,     0,     0,
       0,   143,     0,   144,     0,   281,     0,   282,   283,   284,
     285,   286,     0,   203,   204,   205,   206,   199,     0,   200,
     201,   444,   303,   387,   196,   197,   198,     1,     2,     0,
      58,   196,   197,   198,     1,     2,   143,     0,   144,     0,
       0,     0,     0,     0,     0,     0,     0,   203,   204,   205,
     206,   199,     0,   200,   201,     0,   303,   388,   199,     0,
     200,   201,     0,   202,    58,   196,   197,   198,     1,     2,
     143,    58,   144,     0,   284,   285,   286,   143,     0,   144,
       0,     0,   203,   204,   205,   206,     0,     0,     0,     0,
       0,     0,   199,     0,   200,   201,     0,   303,     0,     0,
     196,   197,   198,     1,     2,    58,     0,     0,     0,     0,
       0,   143,     0,   144,     0,     0,   203,   204,   205,   206,
       0,     1,     2,   203,   204,   205,   206,   199,     3,   200,
     201,     0,   345,     0,     0,     0,     0,     0,     0,     0,
      58,     0,     0,     0,     0,     0,   143,     0,   144,     0,
       0,     0,     0,     0,     0,     0,     0,   203,   204,   205,
     206,     4,     0,     0,     1,     2,     0,     0,     5,     6,
       0,    92,     0,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   203,   204,   205,   206,    26,     0,     0,    27,
      28,    29,    30,    31,     4,     0,     0,     0,     0,     0,
       0,     5,     6,     0,     0,     0,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,     0,     0,     0,     0,    26,
       0,     0,    27,    28,    29,    30,    31,     1,     2,   139,
     140,   141,     0,  -225,  -225,   108,     0,     1,     2,   139,
     140,   141,     0,     0,     0,     0,   274,   275,   276,   277,
       0,     0,     0,     0,     0,   142,     0,     0,     0,     0,
       0,     0,     0,   278,   279,   142,     0,     0,   114,     0,
     143,     0,   144,     0,     5,     6,   145,   146,     0,     7,
     143,     0,   144,     0,     5,     6,   145,   146,     0,     7,
       0,     0,     0,     0,     0,     0,     0,     0,   147,   148,
       0,  -225,     0,     0,     0,     0,     0,     0,   147,   148
};

static const yytype_int16 yycheck[] =
{
       0,    98,   139,   140,     0,   142,   141,   333,   106,   137,
     138,   202,    43,   143,   144,     0,    96,     7,   139,   140,
     116,   142,     6,     7,     6,     7,    15,     0,    21,   407,
      96,   161,     7,    33,   164,   115,   116,    33,    35,   105,
     106,   137,   138,    43,   174,   111,   176,     6,     7,   115,
     116,    48,    48,    26,    54,    48,    56,   137,   436,    48,
      33,    31,   109,     0,    13,   202,    36,    11,    12,    53,
      54,   137,    45,    24,    58,    48,    49,    77,    78,    33,
     210,   202,   129,    80,    35,    31,     3,     4,     5,     6,
       7,    87,    82,    52,    48,    35,    33,    81,    47,    81,
       6,     7,    11,    12,    53,    54,   239,    44,   241,   109,
      48,    48,   303,    30,    87,    80,   202,   250,    35,    15,
     446,    80,    95,    14,    80,    98,    43,    36,    34,   262,
     130,   131,    49,    87,    51,    79,    13,   274,   275,   276,
     277,   278,   279,    17,    29,   145,    31,   147,   148,    24,
      87,    35,   125,   290,   345,   292,    47,    21,   293,   159,
      21,   134,    53,    54,   101,    15,   303,    57,   265,   290,
      79,   292,    48,   146,   304,   112,    53,    54,    95,    96,
      97,    98,   303,   263,   314,   271,   319,   273,    36,   189,
      11,    12,   192,     5,   280,   281,   282,   283,   284,   285,
     286,     6,     7,    20,    21,    22,    23,    35,    13,   337,
      16,    13,   185,    13,    14,    36,   189,   303,   348,    36,
      48,   221,   222,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   337,    27,    28,    29,    30,    31,    52,    53,    54,
     383,    53,    54,    53,    54,   228,   336,   337,    48,   345,
     260,   261,     5,     6,     7,   265,   239,    35,   241,   397,
     398,   337,    89,    90,    91,     6,     7,   250,   251,    36,
      48,   411,     6,     7,    25,   258,   259,     6,     7,   262,
      35,   428,   265,   391,    20,    21,    22,    23,   431,    30,
      43,   397,   398,    48,    48,    25,     6,     7,    15,    31,
      34,   407,    43,    20,    21,    22,    23,   397,    49,   104,
      51,   294,    36,   296,   297,   391,   299,    83,   301,    35,
     330,   397,    35,    48,   334,   335,   422,   423,    11,    12,
     436,    48,    48,    87,    88,    48,   319,    35,   321,    49,
     323,    51,    96,    17,   327,    11,    12,    13,   102,   103,
      48,   105,   106,    89,    90,    91,    35,   111,     6,     7,
      35,   115,   116,    37,    38,    39,    40,    13,   378,    11,
      12,    80,    89,    90,    91,   129,    50,    80,    11,    12,
     134,    44,    45,   137,   138,    31,    34,    53,    54,    31,
     116,    80,    20,    21,    22,    23,    29,   265,   381,    98,
     383,    49,    45,    51,    13,    14,   189,    53,    54,   392,
     336,   137,   138,   417,    13,   141,   426,   429,    92,    93,
      94,    47,    21,   115,   271,   408,   273,    53,    54,   183,
     184,   116,   442,   280,   281,   282,   283,   284,   285,   286,
     134,    13,    14,   280,    53,    54,   429,   303,   431,    48,
     433,   246,   137,   138,    53,    54,   141,   134,   271,    45,
     273,    89,    90,    91,   259,   433,   327,   280,   281,   282,
     283,   284,   285,   286,    -1,    47,   271,   231,   273,   233,
     234,    53,    54,    -1,   238,   280,   281,   282,   283,   284,
     285,   286,    -1,    20,    21,    22,    23,    -1,   345,    20,
      21,    22,    23,   259,    -1,    24,    25,    26,    27,   263,
      -1,    -1,   266,    -1,   270,   271,   272,   273,    -1,    -1,
     246,   116,    41,    42,   280,   281,   282,   283,   284,   285,
     286,    -1,   345,    -1,    -1,   289,   262,   291,    -1,    -1,
      -1,    14,   137,   138,    -1,   271,   141,   273,    15,    -1,
     345,    18,    19,    -1,   280,   281,   282,   283,   284,   285,
     286,   246,    89,    90,    91,    -1,    -1,   293,    89,    90,
      91,    44,    45,    -1,    -1,   422,   423,    -1,   332,   333,
      53,    54,   336,   337,    -1,    -1,   271,    -1,   273,   345,
     229,   230,    -1,    -1,    -1,   280,   281,   282,   283,   284,
     285,   286,    -1,    -1,    20,    21,    22,    23,   293,   422,
     423,   337,    -1,   252,    -1,   254,   255,    -1,    -1,   345,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   422,   423,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   391,   433,    -1,
      -1,   395,   396,   397,   398,    -1,    20,    -1,    22,    23,
      -1,   246,   337,    -1,    20,   409,    22,    23,    -1,    -1,
     345,    -1,    36,    -1,    -1,    -1,   422,   423,    -1,    -1,
      36,   397,   398,    89,    90,    91,   271,   433,   273,    -1,
      -1,   407,    -1,   437,    -1,   280,   281,   282,   283,   284,
     285,   286,   446,    -1,    -1,    -1,   422,   423,   293,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
     436,    -1,   397,   398,    16,    89,    90,    91,    -1,    -1,
      -1,    -1,   407,    89,    90,    91,    -1,    -1,    30,    -1,
      32,    33,    -1,    35,    -1,    -1,    -1,   422,   423,    -1,
      -1,    43,   337,    -1,    -1,    -1,    -1,    49,    -1,    51,
     345,   436,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      20,    15,    22,    23,    18,    19,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    30,
      -1,    32,    33,    -1,    35,    36,     3,     4,     5,     6,
       7,    -1,    43,    95,    96,    97,    98,    -1,    49,    -1,
      51,    -1,   397,   398,    20,    -1,    22,    23,    -1,    -1,
      -1,    -1,   407,    30,    -1,    32,    33,    -1,    35,    36,
      36,     3,     4,     5,     6,     7,    43,   422,   423,    89,
      90,    91,    49,    -1,    51,    89,    90,    91,    -1,    -1,
      20,   436,    22,    23,    95,    96,    97,    98,    30,    -1,
      32,    33,    -1,    35,    36,     3,     4,     5,     6,     7,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,    89,    90,    91,    -1,    -1,    95,    96,
      97,    98,    30,    -1,    32,    33,    -1,    35,    36,    -1,
       3,     4,     5,     6,     7,    43,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    -1,    20,    -1,    22,    23,    89,
      90,    91,    -1,    95,    96,    97,    98,    30,    -1,    32,
      33,    36,    35,    36,     3,     4,     5,     6,     7,    -1,
      43,     3,     4,     5,     6,     7,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    30,    -1,    32,    33,    -1,    35,    36,    30,    -1,
      32,    33,    -1,    35,    43,     3,     4,     5,     6,     7,
      49,    43,    51,    -1,    89,    90,    91,    49,    -1,    51,
      -1,    -1,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    32,    33,    -1,    35,    -1,    -1,
       3,     4,     5,     6,     7,    43,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    95,    96,    97,    98,
      -1,     6,     7,    95,    96,    97,    98,    30,    13,    32,
      33,    -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    95,    96,    97,
      98,    46,    -1,    -1,     6,     7,    -1,    -1,    53,    54,
      -1,    13,    -1,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    95,    96,    97,    98,    81,    -1,    -1,    84,
      85,    86,    87,    88,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    53,    54,    -1,    -1,    -1,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    84,    85,    86,    87,    88,     6,     7,     8,
       9,    10,    -1,    11,    12,    14,    -1,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    24,    25,    26,    27,
      -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    41,    42,    34,    -1,    -1,    47,    -1,
      49,    -1,    51,    -1,    53,    54,    55,    56,    -1,    58,
      49,    -1,    51,    -1,    53,    54,    55,    56,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    77,    78
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,     7,    13,    46,    53,    54,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    81,    84,    85,    86,
      87,    88,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   116,   117,   118,   122,   152,
     153,   154,   189,   190,   191,   194,   195,   198,    43,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,    34,   152,   154,
     167,   167,   167,   167,   167,     0,   102,   122,   122,   154,
     118,   198,    13,   102,   189,    52,   122,   125,   126,   152,
     188,    80,   122,   122,    31,   122,   122,   102,    14,   115,
     119,   155,    80,   152,    47,   129,   143,   155,   156,   125,
     152,   188,    82,   154,   167,   155,   199,   199,   119,   122,
      44,    45,   114,   120,   155,   189,   154,   143,   189,     8,
       9,    10,    34,    49,    51,    55,    56,    77,    78,   127,
     130,   131,   132,   133,   134,   135,   136,   137,   144,   145,
     147,   148,   149,   151,   152,   155,   156,   174,   176,   177,
     178,   179,   180,   184,   185,   186,   187,   189,   192,   194,
      35,   152,   119,   122,   122,    81,   121,   123,   152,   153,
     189,   193,   195,   196,   130,   130,     3,     4,     5,    30,
      32,    33,    35,    95,    96,    97,    98,   127,   132,   144,
     148,   157,   158,   159,   160,   162,   167,   168,   169,   170,
     171,   172,   172,   127,   132,   149,   183,   172,    48,   138,
     138,   122,   152,   122,   122,    18,    19,   138,   122,    15,
     138,    17,    37,    38,    39,    40,    50,    92,    93,    94,
     150,    35,   138,   139,   138,   138,    44,    45,   113,    80,
      34,   152,    17,   122,   124,   126,   122,   169,   170,   172,
      24,    35,    24,    35,    24,    25,    26,    27,    41,    42,
      21,    20,    22,    23,    89,    90,    91,    11,    12,   122,
     173,   122,    29,    31,    31,   152,    35,    48,   139,    35,
     139,    57,    16,    35,   152,   162,   163,   164,   172,   175,
     163,    30,   127,   132,   148,   161,   167,   163,    36,   141,
     163,    35,   139,    35,   139,   139,   152,   152,   157,   167,
     200,   201,   122,   122,   132,   163,   128,   142,   156,   124,
      36,    36,    36,   157,    30,    35,   127,   132,   148,   157,
     159,   160,   167,   169,   157,   169,   162,   162,   162,   162,
     162,   162,   168,   169,   169,   169,   169,   169,   169,   169,
     172,   172,   149,   146,   152,    36,   152,    36,   152,   172,
     175,    35,    16,    79,    48,    36,   163,    36,    36,    36,
     201,   122,   156,   197,   197,   122,   122,   142,   189,   130,
     155,   156,    25,   169,    36,    25,    36,    29,    31,   122,
      36,   152,   165,   166,   163,    83,   140,    48,   199,   152,
     130,   130,    35,    35,   145,   181,   182,   152,    80,    31,
      36,    80,   140,    80,   169,   169,    31,   122,   162,   152,
     166,   163,   200,    36,    36,   145,   122,   197
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    99,   100,   101,   101,   101,   101,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   102,   103,   103,   103,
     103,   103,   104,   104,   104,   104,   104,   105,   105,   105,
     105,   106,   106,   106,   106,   106,   107,   107,   107,   108,
     109,   110,   111,   111,   111,   111,   111,   112,   113,   113,
     114,   114,   115,   115,   115,   116,   116,   117,   117,   118,
     118,   119,   120,   120,   120,   120,   120,   120,   120,   121,
     121,   122,   122,   122,   122,   123,   123,   124,   125,   126,
     126,   126,   126,   127,   127,   127,   127,   127,   128,   128,
     128,   129,   129,   129,   130,   131,   131,   131,   131,   131,
     131,   131,   131,   131,   131,   132,   132,   132,   132,   132,
     133,   133,   134,   134,   135,   135,   136,   136,   137,   137,
     138,   138,   139,   139,   139,   140,   141,   141,   142,   142,
     142,   143,   143,   143,   143,   144,   144,   145,   145,   145,
     145,   145,   146,   146,   147,   147,   148,   148,   149,   149,
     149,   150,   150,   150,   150,   150,   150,   150,   151,   151,
     152,   152,   153,   154,   155,   156,   157,   158,   159,   159,
     159,   159,   159,   159,   159,   159,   159,   159,   160,   161,
     161,   161,   161,   161,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   163,   163,   163,   163,   164,   165,
     165,   166,   167,   168,   168,   168,   169,   169,   169,   169,
     169,   169,   169,   169,   169,   169,   169,   170,   170,   170,
     170,   170,   170,   171,   171,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   173,   173,   174,   175,   175,   176,
     177,   178,   179,   180,   181,   182,   182,   183,   183,   184,
     185,   185,   186,   186,   187,   187,   188,   189,   189,   190,
     191,   192,   193,   194,   195,   196,   196,   197,   197,   198,
     198,   199,   199,   200,   200,   200,   201,   201
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     4,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     1,     3,     7,     2,     4,     1,     1,     1,
       2,     2,     1,     2,     3,     1,     2,     1,     2,     3,
       2,     2,     2,     2,     1,     1,     2,     2,     2,     4,
       4,     1,     1,     2,     2,     3,     2,     2,     2,     1,
       1,     2,     2,     1,     1,     1,     1,     1,     2,     3,
       3,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     4,     3,     4,     2,     3,     3,     4,
       2,     3,     3,     5,     4,     1,     1,     2,     1,     2,
       2,     1,     1,     2,     2,     2,     2,     1,     1,     2,
       4,     1,     1,     3,     1,     1,     4,     3,     3,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     4,     1,     4,     7,     4,     7,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     5,     3,     2,
       2,     2,     3,     6,     2,     1,     3,     1,     3,     2,
       2,     1,     2,     1,     2,     2,     2,     1,     2,     1,
       1,     5,     2,     2,     1,     4,     4,     5,     6,     4,
       4,     5,     6,     1,     1,     1,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 25 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  if (yycount == 0)
  {
	  yyformat = strdup("syntax error");
  }
  else if (yycount == 1)
  {
	  yyformat = strdup("syntax error, unexpected %s");
  }
  else if (yycount > 1)
  {
	  char* tmp = (char*)malloc(1000);
	  tmp[0] = 0;
	  strcat(tmp, "syntax error, unexpected %s, expecting %s");	  
	  {
		int i;
		for (i = 0; i < yycount - 2; i++)
		{
			strcat(tmp, " or %s");
		}
	  }
	  yyformat = tmp;
  }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 125 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); root = (yyval.nodeval); }
#line 1939 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 3:
#line 129 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 1945 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 4:
#line 131 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 1951 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 5:
#line 133 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 1957 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 6:
#line 135 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 1963 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 7:
#line 139 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 1969 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 8:
#line 141 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 1975 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 9:
#line 143 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 1981 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 10:
#line 145 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 1987 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 11:
#line 147 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 1993 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 12:
#line 149 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 1999 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 13:
#line 151 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2005 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 14:
#line 153 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2011 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 15:
#line 155 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2017 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 16:
#line 157 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2023 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 17:
#line 161 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_IMPORT_UNIX); }
#line 2029 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 18:
#line 163 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_IMPORT_WINDOWS); }
#line 2035 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 19:
#line 165 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_IMPORT_WINDOWS); }
#line 2041 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 20:
#line 167 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_IMPORT_LINUX); }
#line 2047 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 21:
#line 169 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_IMPORT_MACOSX); }
#line 2053 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 22:
#line 173 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_INCLUDE); }
#line 2059 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 23:
#line 175 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_INCLUDE_LINUX); }
#line 2065 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 24:
#line 177 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_INCLUDE_WINDOWS); }
#line 2071 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 25:
#line 179 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_INCLUDE_MACOSX); }
#line 2077 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 26:
#line 181 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_INCLUDE_UNIX); }
#line 2083 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 27:
#line 185 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_IMPORT_UNIX_PATH); }
#line 2089 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 28:
#line 187 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_IMPORT_WINDOWS_PATH); }
#line 2095 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 29:
#line 189 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_IMPORT_LINUX_PATH); }
#line 2101 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 30:
#line 191 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_IMPORT_MACOSX_PATH); }
#line 2107 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 31:
#line 195 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_INCLUDE_WINDOWS_PATH); }
#line 2113 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 32:
#line 197 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_INCLUDE_UNIX_PATH); }
#line 2119 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 33:
#line 199 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_INCLUDE_LINUX_PATH); }
#line 2125 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 34:
#line 201 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_INCLUDE_MACOSX_PATH); }
#line 2131 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 35:
#line 203 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_INCLUDE_PATH); }
#line 2137 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 36:
#line 207 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_COMPILER_FLAGS_MACOSX); }
#line 2143 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 37:
#line 209 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_COMPILER_FLAGS_UNIX); }
#line 2149 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 38:
#line 211 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_COMPILER_FLAGS_LINUX); }
#line 2155 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 39:
#line 215 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_CPP_ENTRY_POINT); }
#line 2161 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 40:
#line 219 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_ADD_CPP); }
#line 2167 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 41:
#line 223 "yacc.y" /* yacc.c:1654  */
    {(yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, DECL_CLASS);}
#line 2173 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 42:
#line 227 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, DECL_CLASS_NAME); }
#line 2179 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 43:
#line 229 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, DECL_CLASS_NAME); }
#line 2185 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 44:
#line 231 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-6].nodeval), (yyvsp[-2].nodeval), (yyvsp[-1].nodeval), DECL_CLASS_NAME); }
#line 2191 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 45:
#line 233 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, DECL_CLASS_WITH_TYPE); }
#line 2197 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 46:
#line 235 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-3].nodeval), (yyvsp[-2].nodeval), (yyvsp[0].nodeval), DECL_CLASS_WITH_TYPE); }
#line 2203 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 47:
#line 239 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, CLASS_TYPE_SINGLETON_DECL); }
#line 2209 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 48:
#line 243 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, INHERITANCE_PRIVATE); }
#line 2215 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 49:
#line 245 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, INHERITANCE_PUBLIC); }
#line 2221 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 50:
#line 249 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, SECTION_PRIVATE_DECL); }
#line 2227 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 51:
#line 251 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, SECTION_PUBLIC_DECL); }
#line 2233 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 52:
#line 255 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2239 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 53:
#line 257 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, DECL_CLASS_CONTENTS); }
#line 2245 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 54:
#line 259 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[-1].nodeval), (yyvsp[0].nodeval), DECL_CLASS_CONTENTS); }
#line 2251 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 55:
#line 263 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2257 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 56:
#line 265 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2263 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 57:
#line 269 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2269 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 58:
#line 271 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2275 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 59:
#line 275 "yacc.y" /* yacc.c:1654  */
    {(yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[-1].nodeval), (yyvsp[0].nodeval), GLOBAL_FUNC_DECL);}
#line 2281 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 60:
#line 277 "yacc.y" /* yacc.c:1654  */
    {(yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, GLOBAL_FUNC_DECL);}
#line 2287 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 61:
#line 281 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2293 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 62:
#line 285 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2299 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 63:
#line 287 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2305 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 64:
#line 289 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2311 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 65:
#line 291 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2317 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 66:
#line 293 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2323 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 67:
#line 295 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2329 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 68:
#line 297 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2335 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 69:
#line 301 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-3].nodeval), (yyvsp[-1].nodeval), (yyvsp[0].nodeval), CLASS_PROPERTY_DECL); }
#line 2341 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 70:
#line 303 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-3].nodeval), (yyvsp[-1].nodeval), (yyvsp[0].nodeval), CLASS_PROPERTY_DECL); }
#line 2347 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 71:
#line 307 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, OP_NEWLINE); }
#line 2353 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 72:
#line 309 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2359 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 73:
#line 311 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, OP_NEWLINE); }
#line 2365 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 74:
#line 313 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2371 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 75:
#line 317 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[-1].nodeval), (yyvsp[0].nodeval), FUNC_DECL); }
#line 2377 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 76:
#line 319 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, FUNC_DECL); }
#line 2383 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 77:
#line 323 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2389 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 78:
#line 327 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2395 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 79:
#line 331 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, FUNC_PARAMS); }
#line 2401 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 80:
#line 333 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, FUNC_PARAMS); }
#line 2407 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 81:
#line 335 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, FUNC_PARAMS); }
#line 2413 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 82:
#line 337 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, FUNC_PARAMS); }
#line 2419 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 83:
#line 341 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2425 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 84:
#line 343 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2431 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 85:
#line 345 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2437 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 86:
#line 347 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2443 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 87:
#line 349 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2449 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 88:
#line 353 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2455 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 89:
#line 355 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-2].nodeval), (yyvsp[-1].nodeval), (yyvsp[0].nodeval), ""); }
#line 2461 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 90:
#line 357 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-2].nodeval), (yyvsp[-1].nodeval), (yyvsp[0].nodeval), ""); }
#line 2467 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 91:
#line 361 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2473 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 92:
#line 363 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-2].nodeval), (yyvsp[-1].nodeval), (yyvsp[0].nodeval), ""); }
#line 2479 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 93:
#line 365 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-2].nodeval), (yyvsp[-1].nodeval), (yyvsp[0].nodeval), ""); }
#line 2485 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 94:
#line 369 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[0].nodeval), NULL, NULL, ""); }
#line 2491 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 95:
#line 373 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2497 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 96:
#line 375 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2503 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 97:
#line 377 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2509 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 98:
#line 379 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2515 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 99:
#line 381 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2521 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 100:
#line 383 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2527 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 101:
#line 385 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2533 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 102:
#line 387 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2539 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 103:
#line 389 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[0].nodeval), NULL, NULL, ""); }
#line 2545 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 104:
#line 391 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2551 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 105:
#line 395 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2557 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 106:
#line 397 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2563 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 107:
#line 399 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2569 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 108:
#line 401 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2575 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 109:
#line 403 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2581 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 110:
#line 407 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[-1].nodeval), (yyvsp[0].nodeval), OP_PROP_METHOD_CALL); }
#line 2587 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 111:
#line 409 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[-1].nodeval), (yyvsp[0].nodeval), OP_PROP_METHOD_CALL); }
#line 2593 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 112:
#line 413 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, (yyvsp[-1].nodeval), (yyvsp[0].nodeval), OP_METHOD_CALL); }
#line 2599 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 113:
#line 415 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, (yyvsp[-2].nodeval), NULL, OP_METHOD_CALL); }
#line 2605 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 114:
#line 419 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[-1].nodeval), (yyvsp[0].nodeval), OP_METHOD_CALL); }
#line 2611 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 115:
#line 421 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-3].nodeval), (yyvsp[-2].nodeval), NULL, OP_METHOD_CALL); }
#line 2617 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 116:
#line 425 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, OP_FUNCTION_CALL); }
#line 2623 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 117:
#line 427 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), NULL, NULL, OP_FUNCTION_CALL); }
#line 2629 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 118:
#line 431 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, (yyvsp[-1].nodeval), (yyvsp[0].nodeval), OP_BASE_METHOD_CALL); }
#line 2635 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 119:
#line 433 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, (yyvsp[-2].nodeval), NULL, OP_BASE_METHOD_CALL); }
#line 2641 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 120:
#line 437 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, PROP_IN_CALL); }
#line 2647 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 121:
#line 439 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, PROP_IN_CALL); }
#line 2653 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 122:
#line 443 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), NULL, NULL, OP_FUNCTION_ALL_CALL_PARAMS); }
#line 2659 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 123:
#line 445 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-3].nodeval), (yyvsp[0].nodeval), NULL, OP_FUNCTION_ALL_CALL_PARAMS); }
#line 2665 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 124:
#line 447 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, (yyvsp[0].nodeval), NULL, OP_FUNCTION_ALL_CALL_PARAMS); }
#line 2671 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 125:
#line 451 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, FUNC_RESULT_OBJECT); }
#line 2677 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 126:
#line 455 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_FUNCTION_CALL_PARAMS); }
#line 2683 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 127:
#line 457 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, OP_FUNCTION_CALL_PARAMS); }
#line 2689 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 128:
#line 461 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[0].nodeval), NULL, NULL, ""); }
#line 2695 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 129:
#line 463 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2701 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 130:
#line 465 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2707 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 131:
#line 469 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[0].nodeval), NULL, NULL, ""); }
#line 2713 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 132:
#line 471 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[0].nodeval), NULL, NULL, ""); }
#line 2719 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 133:
#line 473 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2725 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 134:
#line 475 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 2731 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 135:
#line 479 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), NULL, NULL, OP_INC); }
#line 2737 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 136:
#line 481 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), NULL, NULL, OP_DEC); }
#line 2743 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 137:
#line 485 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2749 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 138:
#line 487 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2755 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 139:
#line 489 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_RETURN); }
#line 2761 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 140:
#line 491 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_RETURN); }
#line 2767 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 141:
#line 493 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2773 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 142:
#line 497 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_RETURN_PROPS); }
#line 2779 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 143:
#line 499 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), (yyvsp[-2].nodeval), NULL, OP_RETURN_PROPS); }
#line 2785 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 144:
#line 503 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2791 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 145:
#line 505 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2797 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 146:
#line 509 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-3].nodeval), (yyvsp[-1].nodeval), NULL, ACCESS_ARRAY_ELEMENT); }
#line 2803 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 147:
#line 511 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), NULL, NULL, ACCESS_ARRAY_ELEMENT); }
#line 2809 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 148:
#line 515 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_EQUAL); }
#line 2815 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 149:
#line 517 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[-1].nodeval), (yyvsp[0].nodeval), OP_CHANGE_VALUE); }
#line 2821 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 150:
#line 519 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_CONCAT); }
#line 2827 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 151:
#line 523 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, OP_PLUS_EQUAL); }
#line 2833 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 152:
#line 525 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, OP_MINUS_EQUAL); }
#line 2839 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 153:
#line 527 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, OP_MULTIPLY_EQUAL); }
#line 2845 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 154:
#line 529 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, OP_DIVISION_EQUAL); }
#line 2851 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 155:
#line 531 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, OP_AND_EQUAL); }
#line 2857 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 156:
#line 533 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, OP_OR_EQUAL); }
#line 2863 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 157:
#line 535 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, OP_XOR_EQUAL); }
#line 2869 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 158:
#line 539 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2875 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 159:
#line 541 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2881 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 160:
#line 545 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2887 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 161:
#line 547 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2893 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 162:
#line 551 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode(NULL, NULL, NULL, yylval.strval); }
#line 2899 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 163:
#line 555 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode(NULL, NULL, NULL, yylval.strval); }
#line 2905 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 164:
#line 559 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, TAB); }
#line 2911 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 165:
#line 563 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, TAB3); }
#line 2917 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 166:
#line 567 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode(NULL, NULL, NULL, yylval.strval); }
#line 2923 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 167:
#line 571 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode(NULL, NULL, NULL, yylval.strval); }
#line 2929 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 168:
#line 575 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 2935 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 169:
#line 577 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode(NULL, NULL, NULL, yylval.strval); }
#line 2941 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 170:
#line 579 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, OP_INTEGER_DECL); }
#line 2947 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 171:
#line 581 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), NULL, NULL, OP_INTEGER_DECL); }
#line 2953 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 172:
#line 583 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, OP_DOUBLE_DECL); }
#line 2959 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 173:
#line 585 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), NULL, NULL, OP_DOUBLE_DECL); }
#line 2965 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 174:
#line 587 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-4].nodeval), (yyvsp[-1].nodeval), NULL, OP_ARB_FLOAT_DECL); }
#line 2971 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 175:
#line 589 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), NULL, NULL, OP_ARB_FLOAT_DECL); }
#line 2977 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 176:
#line 591 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-4].nodeval), (yyvsp[-1].nodeval), NULL, OP_ARB_FIXED_DECL); }
#line 2983 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 177:
#line 593 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), NULL, NULL, OP_ARB_FIXED_DECL); }
#line 2989 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 178:
#line 597 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode(NULL, NULL, NULL, yylval.strval); }
#line 2995 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 179:
#line 601 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3001 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 180:
#line 603 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3007 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 181:
#line 605 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3013 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 182:
#line 607 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode(NULL, NULL, NULL, yylval.strval); }
#line 3019 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 183:
#line 609 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3025 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 184:
#line 613 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3031 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 185:
#line 615 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3037 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 186:
#line 617 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3043 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 187:
#line 619 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3049 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 188:
#line 621 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3055 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 189:
#line 623 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3061 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 190:
#line 625 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3067 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 191:
#line 627 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3073 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 192:
#line 629 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode(NULL, NULL, NULL, yylval.strval); }
#line 3079 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 193:
#line 631 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3085 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 194:
#line 635 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval);}
#line 3091 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 195:
#line 637 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3097 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 196:
#line 639 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3103 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 197:
#line 641 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3109 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 198:
#line 645 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-3].nodeval), (yyvsp[-1].nodeval), NULL, OP_CONSTRUCTOR); }
#line 3115 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 199:
#line 649 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_CONSTRUCTOR_PARAMS); }
#line 3121 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 200:
#line 651 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_CONSTRUCTOR_PARAMS); }
#line 3127 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 201:
#line 655 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_CONSTRUCTOR_PARAMETER); }
#line 3133 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 202:
#line 659 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode(NULL, NULL, NULL, yylval.strval); }
#line 3139 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 203:
#line 663 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3145 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 204:
#line 665 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3151 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 205:
#line 667 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3157 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 206:
#line 671 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3163 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 207:
#line 673 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3169 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 208:
#line 675 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), NULL, NULL, OP_BRACKETS); }
#line 3175 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 209:
#line 677 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), NULL, NULL, OP_BRACKETS); }
#line 3181 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 210:
#line 679 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_MINUS); }
#line 3187 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 211:
#line 681 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_PLUS); }
#line 3193 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 212:
#line 683 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_MULTIPLY); }
#line 3199 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 213:
#line 685 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_DIVISION); }
#line 3205 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 214:
#line 687 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_MATH_AND); }
#line 3211 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 215:
#line 689 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_MATH_OR); }
#line 3217 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 216:
#line 691 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_MATH_XOR); }
#line 3223 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 217:
#line 695 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3229 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 218:
#line 697 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3235 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 219:
#line 699 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3241 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 220:
#line 701 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode(NULL, NULL, NULL, yylval.strval); }
#line 3247 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 221:
#line 703 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3253 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 222:
#line 705 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3259 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 223:
#line 709 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, VALUE_TRUE); }
#line 3265 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 224:
#line 711 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, VALUE_FALSE); }
#line 3271 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 225:
#line 715 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval);}
#line 3277 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 226:
#line 717 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[-1].nodeval), (yyvsp[0].nodeval), CMP_COMPLEX); }
#line 3283 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 227:
#line 719 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, CMP_EQUAL); }
#line 3289 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 228:
#line 721 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, CMP_NOT_EQUAL); }
#line 3295 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 229:
#line 723 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, CMP_LESS); }
#line 3301 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 230:
#line 725 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, CMP_MORE); }
#line 3307 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 231:
#line 727 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, CMP_LESS_EQUAL); }
#line 3313 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 232:
#line 729 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, CMP_MORE_EQUAL); }
#line 3319 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 233:
#line 731 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[-1].nodeval); }
#line 3325 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 234:
#line 735 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, OP_OR); }
#line 3331 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 235:
#line 737 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, OP_AND); }
#line 3337 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 236:
#line 741 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, OP_IF); }
#line 3343 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 237:
#line 745 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-4].nodeval), (yyvsp[-2].nodeval), (yyvsp[0].nodeval), OP_SHORT_IF); }
#line 3349 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 238:
#line 747 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[-1].nodeval); }
#line 3355 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 239:
#line 751 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_ELSE); }
#line 3361 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 240:
#line 755 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_BREAK); }
#line 3367 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 241:
#line 759 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_CONTINUE); }
#line 3373 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 242:
#line 763 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, OP_WHILE); }
#line 3379 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 243:
#line 767 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-4].nodeval), (yyvsp[-2].nodeval), (yyvsp[0].nodeval), OP_FOR); }
#line 3385 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 244:
#line 771 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, ""); }
#line 3391 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 245:
#line 775 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_COMMA); }
#line 3397 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 246:
#line 777 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_COMMA); }
#line 3403 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 247:
#line 781 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_COMMA); }
#line 3409 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 248:
#line 783 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_COMMA); }
#line 3415 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 249:
#line 787 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, OP_FUNC_PROP); }
#line 3421 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 250:
#line 791 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_MY_PROP); }
#line 3427 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 251:
#line 793 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, OP_MY_PROP); }
#line 3433 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 252:
#line 797 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_BASE_PROP); }
#line 3439 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 253:
#line 799 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, NULL, NULL, OP_BASE_PROP); }
#line 3445 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 254:
#line 803 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, OP_PROP); }
#line 3451 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 255:
#line 805 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, OP_PROP); }
#line 3457 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 256:
#line 809 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OUT_PARAM); }
#line 3463 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 257:
#line 813 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_SINGLELINE_COMMENT); }
#line 3469 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 258:
#line 815 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, OP_MULTILINE_COMMENT); }
#line 3475 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 259:
#line 819 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode(NULL, NULL, NULL, yylval.strval); }
#line 3481 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 260:
#line 823 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode(NULL, NULL, NULL, yylval.strval); }
#line 3487 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 261:
#line 827 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-3].nodeval), (yyvsp[-1].nodeval), (yyvsp[0].nodeval), OP_FOREACH); }
#line 3493 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 262:
#line 831 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, OP_CPP_DECL); }
#line 3499 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 263:
#line 835 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, OP_CPP); }
#line 3505 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 264:
#line 839 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mknode(NULL, NULL, NULL, yylval.strval); }
#line 3511 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 265:
#line 843 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_PARAM_ANNOTATION); }
#line 3517 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 266:
#line 845 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, (yyvsp[0].nodeval), NULL, OP_PARAM_ANNOTATION); }
#line 3523 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 267:
#line 849 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-3].nodeval), (yyvsp[-1].nodeval), NULL, OP_PARAM_ANNOTATION_PROP); }
#line 3529 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 268:
#line 851 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-4].nodeval), (yyvsp[-2].nodeval), (yyvsp[0].nodeval), OP_PARAM_ANNOTATION_PROP); }
#line 3535 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 269:
#line 855 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-2].nodeval), (yyvsp[0].nodeval), NULL, OP_PARAM_ANNOTATION); }
#line 3541 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 270:
#line 857 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode(NULL, (yyvsp[0].nodeval), NULL, OP_PARAM_ANNOTATION); }
#line 3547 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 271:
#line 861 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-3].nodeval), (yyvsp[-1].nodeval), NULL, OP_PARAM_ANNOTATION_PROP); }
#line 3553 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 272:
#line 863 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-4].nodeval), (yyvsp[-2].nodeval), (yyvsp[0].nodeval), OP_PARAM_ANNOTATION_PROP); }
#line 3559 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 273:
#line 867 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3565 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 274:
#line 869 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3571 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 275:
#line 871 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = (yyvsp[0].nodeval); }
#line 3577 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 276:
#line 875 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[0].nodeval), NULL, NULL, OP_PARAM_ANNOTATION_PROP_VALUE); }
#line 3583 "yacc.tab.c" /* yacc.c:1654  */
    break;

  case 277:
#line 877 "yacc.y" /* yacc.c:1654  */
    { (yyval.nodeval) = mkcmdnode((yyvsp[-1].nodeval), (yyvsp[0].nodeval), NULL, OP_PARAM_ANNOTATION_PROP_VALUE); }
#line 3589 "yacc.tab.c" /* yacc.c:1654  */
    break;


#line 3593 "yacc.tab.c" /* yacc.c:1654  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
