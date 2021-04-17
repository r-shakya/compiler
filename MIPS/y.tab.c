/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

#include "functions.h"
#include "symboltable.c"
#include <stdbool.h>
  //initialize_sym();
  
int yylex();
int yyerror(char *);
int yydebug=1;

#line 81 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NUM = 258,
    ID = 259,
    START = 260,
    END = 261,
    INTEGER = 262,
    CHAR = 263,
    FLOAT = 264,
    IF = 265,
    ELSE = 266,
    WHILE = 267,
    FOR = 268,
    VOID = 269,
    CALL = 270,
    SEND = 271,
    typestr = 272,
    MAIN = 273,
    CSTRING = 274,
    OUTPUT = 275,
    INPUT = 276,
    LE = 277,
    GE = 278,
    EE = 279
  };
#endif
/* Tokens.  */
#define NUM 258
#define ID 259
#define START 260
#define END 261
#define INTEGER 262
#define CHAR 263
#define FLOAT 264
#define IF 265
#define ELSE 266
#define WHILE 267
#define FOR 268
#define VOID 269
#define CALL 270
#define SEND 271
#define typestr 272
#define MAIN 273
#define CSTRING 274
#define OUTPUT 275
#define INPUT 276
#define LE 277
#define GE 278
#define EE 279

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "parser.y"

	 int  number;
	 char string[15];

#line 186 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   252

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  40
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  91
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  208

#define YYUNDEFTOK  2
#define YYMAXUTOK   279


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      30,    31,    28,    26,    37,    27,     2,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    34,
      38,    25,    39,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    35,     2,    36,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    32,     2,    33,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    33,    33,    33,    36,    37,    37,    37,    38,    38,
      38,    39,    41,    42,    43,    44,    45,    46,    47,    48,
      53,    54,    55,    56,    57,    61,    62,    63,    64,    65,
      66,    67,    67,    67,    69,    69,    69,    70,    70,    70,
      70,    70,    71,    74,    74,    75,    79,    82,    84,    87,
      88,    91,    91,    92,    92,    93,    93,    94,    94,    97,
      98,   101,   102,   106,   107,   107,   111,   111,   112,   115,
     115,   116,   119,   119,   120,   123,   123,   124,   127,   128,
     129,   130,   130,   144,   145,   147,   148,   149,   150,   151,
     152,   153
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "ID", "START", "END", "INTEGER",
  "CHAR", "FLOAT", "IF", "ELSE", "WHILE", "FOR", "VOID", "CALL", "SEND",
  "typestr", "MAIN", "CSTRING", "OUTPUT", "INPUT", "LE", "GE", "EE", "'='",
  "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'{'", "'}'", "';'", "'['",
  "']'", "','", "'<'", "'>'", "$accept", "program", "$@1", "declarations",
  "$@2", "$@3", "$@4", "$@5", "decl", "funcdecl", "statements", "$@6",
  "$@7", "$@8", "$@9", "$@10", "$@11", "$@12", "$@13", "IFEL", "$@14",
  "returnstmt", "outputstmt", "inputstmt", "assignexpr", "$@15", "$@16",
  "$@17", "$@18", "arraylist", "paramlist", "expr", "$@19", "expr0",
  "$@20", "expr1", "$@21", "expr2", "$@22", "expr3", "$@23", "expr4",
  "$@24", "logicalexpr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,    61,    43,    45,    42,    47,
      40,    41,   123,   125,    59,    91,    93,    44,    60,    62
};
# endif

#define YYPACT_NINF (-102)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-76)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -102,     6,    75,  -102,     0,    25,    82,  -102,  -102,   164,
    -102,    42,    27,    64,    56,    92,    73,   -13,    88,    77,
    -102,    76,    88,   106,   118,   121,   -26,    90,   103,    29,
    -102,    93,   102,  -102,   136,   142,   115,  -102,   123,   125,
     126,   129,    28,    10,   131,   159,   147,   150,  -102,   142,
     145,   163,   127,   153,  -102,   188,   189,   165,   166,  -102,
      86,   185,   167,   168,   169,   170,  -102,  -102,   -30,   142,
     159,    34,  -102,   175,   127,  -102,   171,  -102,  -102,   162,
    -102,   173,   179,   180,  -102,    12,   178,  -102,    53,   114,
     206,  -102,   181,  -102,  -102,  -102,  -102,  -102,   209,    48,
       8,  -102,   210,   187,   127,   127,   127,   190,   191,   192,
     193,   194,  -102,   183,    12,   128,   142,   195,   196,    71,
      12,  -102,  -102,  -102,  -102,   184,  -102,   198,   197,   201,
      45,    45,    45,    45,   127,   146,    12,    12,    12,  -102,
      12,    12,   199,  -102,  -102,  -102,   127,   149,   200,  -102,
    -102,   202,   127,   173,   179,   180,  -102,   186,  -102,   -14,
     -14,   -14,   203,   -14,   -14,  -102,   204,  -102,   221,   225,
     187,  -102,   142,    12,   205,   207,  -102,    40,  -102,    66,
     152,  -102,   142,  -102,   226,   208,  -102,  -102,    80,  -102,
     221,   220,   142,  -102,    54,  -102,  -102,  -102,  -102,   211,
     213,   142,   214,    94,   142,  -102,   122,  -102
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      11,     0,     0,     1,     0,     0,     0,     5,     2,    12,
       4,     0,     0,     0,     0,     0,     0,    16,    24,     0,
      13,     0,    24,     0,     0,     0,     0,     0,    14,     0,
      17,     0,    20,     6,     0,    42,     0,     9,    18,     0,
       0,    22,     0,    34,     0,     0,     0,     0,    21,    42,
       0,    51,     0,     0,    37,     0,     0,     0,     0,     3,
       0,     0,     0,     0,     0,     0,    25,    59,     0,    42,
       0,    34,    23,     0,     0,    78,    79,    64,    81,    66,
      63,    68,    71,    74,    77,     0,     0,    46,    12,     0,
       0,    27,     0,    30,    28,    29,    26,    15,     0,    34,
       0,     7,     0,    52,     0,     0,     0,     0,     0,     0,
       0,     0,    83,    84,     0,     0,     0,     0,    66,     0,
       0,    60,    10,    19,    53,    66,    66,    65,    66,    55,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    31,
       0,     0,     0,    47,    48,    49,     0,     0,     0,    80,
      82,     0,     0,    67,    70,    73,    76,    66,    91,    89,
      88,    90,     0,    86,    87,    38,    66,    35,     0,     0,
      56,    85,    42,     0,     0,     0,    61,     0,    57,    34,
       0,    50,    42,    54,     0,     0,    32,    39,    34,    62,
       0,    45,     0,    36,     0,    43,    33,    40,    58,     0,
       0,    42,     0,    34,    42,    44,    34,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,   232,   216,
     -48,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,  -102,
    -102,  -102,  -102,  -102,   -43,  -102,  -102,  -102,  -102,   172,
      51,   -72,  -102,   143,  -102,   117,  -102,   119,  -102,   120,
    -102,   116,  -102,  -101
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    13,     2,    12,    40,    16,    46,    60,    26,
      43,   162,   191,    61,   175,    86,   173,   192,   200,   196,
     199,    62,    63,    64,    44,    74,   148,   152,   185,    68,
     177,    79,   105,    80,   108,    81,   109,    82,   110,    83,
     111,    84,   106,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      65,    71,   103,    97,     7,    33,     3,    98,   136,   137,
     138,    34,    23,   135,    42,   112,   113,   118,     8,   147,
      53,    99,    24,    54,   140,   141,    55,    56,    65,     9,
      57,    58,   125,   126,   128,   159,   160,   161,    42,   163,
     164,   123,   114,    59,    53,    98,    17,    54,    75,    76,
      55,    56,    42,    51,    57,    58,    65,    18,    53,    20,
      37,    54,   157,    52,    55,    56,    34,   101,    57,    58,
      42,   183,   180,   142,   166,    78,    53,   184,    14,    54,
     170,   122,    55,    56,    42,   198,    57,    58,    15,     4,
      53,   184,     5,    54,    19,    21,    55,    56,    42,   186,
      57,    58,   145,    22,    53,    25,   146,    54,    27,    30,
      55,    56,    28,   193,    57,    58,    10,    75,    76,    11,
      91,    31,    35,    11,   179,    32,    42,   205,    36,    38,
      75,    76,    53,   117,   188,    54,    65,    39,    55,    56,
      41,    77,    57,    58,    78,    65,    42,    45,    47,   197,
     136,   137,   138,   203,    77,   207,   206,    78,    49,   139,
      65,    48,    67,    65,    50,    66,   140,   141,   136,   137,
     138,   136,   137,   138,   136,   137,   138,   158,    73,    69,
     167,    72,    70,    85,   140,   141,   187,   140,   141,    14,
     140,   141,    87,    88,    -8,    89,    90,    92,   107,    15,
     -69,    93,    94,    95,    96,   102,   104,   -72,   116,   -75,
     119,   120,   121,   -66,   124,   129,   151,   130,   134,   131,
     149,   132,   171,   133,   -63,   176,   143,   144,   150,   178,
     189,   195,   169,   165,     6,   172,   181,   168,    29,   182,
     174,   194,   100,   201,   202,   190,   204,   153,   127,   156,
     154,     0,   155
};

static const yytype_int16 yycheck[] =
{
      43,    49,    74,    33,     4,    31,     0,    37,    22,    23,
      24,    37,    25,   114,     4,     3,     4,    89,    18,   120,
      10,    69,    35,    13,    38,    39,    16,    17,    71,     4,
      20,    21,   104,   105,   106,   136,   137,   138,     4,   140,
     141,    33,    30,    33,    10,    37,     4,    13,     3,     4,
      16,    17,     4,    25,    20,    21,    99,    30,    10,     3,
      31,    13,   134,    35,    16,    17,    37,    33,    20,    21,
       4,    31,   173,   116,   146,    30,    10,    37,    25,    13,
     152,    33,    16,    17,     4,    31,    20,    21,    35,    14,
      10,    37,    17,    13,    30,     3,    16,    17,     4,    33,
      20,    21,    31,    30,    10,    17,    35,    13,    31,     3,
      16,    17,    36,    33,    20,    21,    34,     3,     4,    37,
      34,     3,    32,    37,   172,     4,     4,    33,    25,    36,
       3,     4,    10,    19,   182,    13,   179,    35,    16,    17,
       4,    27,    20,    21,    30,   188,     4,    32,    25,   192,
      22,    23,    24,   201,    27,    33,   204,    30,    32,    31,
     203,    36,     3,   206,    35,    34,    38,    39,    22,    23,
      24,    22,    23,    24,    22,    23,    24,    31,    15,    32,
      31,    36,    32,    30,    38,    39,    34,    38,    39,    25,
      38,    39,     4,     4,    30,    30,    30,    12,    36,    35,
      27,    34,    34,    34,    34,    30,    35,    28,    30,    29,
       4,    30,     3,    26,     4,    25,    15,    26,    35,    27,
      36,    28,    36,    29,    26,     4,    31,    31,    31,     4,
       4,    11,    30,    34,     2,    32,    31,    37,    22,    32,
      36,   190,    70,    32,    31,    37,    32,   130,   105,   133,
     131,    -1,   132
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    41,    43,     0,    14,    17,    48,     4,    18,     4,
      34,    37,    44,    42,    25,    35,    46,     4,    30,    30,
       3,     3,    30,    25,    35,    17,    49,    31,    36,    49,
       3,     3,     4,    31,    37,    32,    25,    31,    36,    35,
      45,     4,     4,    50,    64,    32,    47,    25,    36,    32,
      35,    25,    35,    10,    13,    16,    17,    20,    21,    33,
      48,    53,    61,    62,    63,    64,    34,     3,    69,    32,
      32,    50,    36,    15,    65,     3,     4,    27,    30,    71,
      73,    75,    77,    79,    81,    30,    55,     4,     4,    30,
      30,    34,    12,    34,    34,    34,    34,    33,    37,    50,
      69,    33,    30,    71,    35,    72,    82,    36,    74,    76,
      78,    80,     3,     4,    30,    83,    30,    19,    71,     4,
      30,     3,    33,    33,     4,    71,    71,    73,    71,    25,
      26,    27,    28,    29,    35,    83,    22,    23,    24,    31,
      38,    39,    64,    31,    31,    31,    35,    83,    66,    36,
      31,    15,    67,    75,    77,    79,    81,    71,    31,    83,
      83,    83,    51,    83,    83,    34,    71,    31,    37,    30,
      71,    36,    32,    56,    36,    54,     4,    70,     4,    50,
      83,    31,    32,    31,    37,    68,    33,    34,    50,     4,
      37,    52,    57,    33,    70,    11,    59,    64,    31,    60,
      58,    32,    31,    50,    32,    33,    50,    33
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    40,    42,    41,    43,    44,    45,    43,    46,    47,
      43,    43,    48,    48,    48,    48,    48,    48,    48,    48,
      49,    49,    49,    49,    49,    50,    50,    50,    50,    50,
      50,    51,    52,    50,    53,    54,    50,    55,    56,    57,
      58,    50,    50,    60,    59,    59,    61,    62,    62,    63,
      63,    65,    64,    66,    64,    67,    64,    68,    64,    69,
      69,    70,    70,    71,    72,    71,    74,    73,    73,    76,
      75,    75,    78,    77,    77,    80,    79,    79,    81,    81,
      81,    82,    81,    83,    83,    83,    83,    83,    83,    83,
      83,    83
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     9,     3,     0,     0,    11,     0,     0,
      11,     0,     2,     4,     5,     9,     3,     5,     6,    10,
       2,     4,     3,     5,     0,     2,     3,     3,     3,     3,
       3,     0,     0,    11,     0,     0,    10,     0,     0,     0,
       0,    16,     0,     0,     5,     0,     2,     4,     4,     4,
       7,     0,     4,     0,     9,     0,     7,     0,    12,     1,
       3,     1,     3,     1,     0,     3,     0,     4,     1,     0,
       4,     1,     0,     4,     1,     0,     4,     1,     1,     1,
       4,     0,     4,     1,     1,     4,     3,     3,     3,     3,
       3,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 33 "parser.y"
                                { /*temproot1 = lift_scope( temproot1 ); */ temproot1 = change_scope( temproot1 );  }
#line 1507 "y.tab.c"
    break;

  case 3:
#line 33 "parser.y"
                                                                                                                                                 {}
#line 1513 "y.tab.c"
    break;

  case 4:
#line 36 "parser.y"
                                    {  }
#line 1519 "y.tab.c"
    break;

  case 5:
#line 37 "parser.y"
                           { if( lookup( temproot1 , (yyvsp[0].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[0].string)); exit( 0 ); } else{ func_node = insert_function( temproot1 , symbol_copy( (yyvsp[0].string) ,(yyvsp[-1].string) ,""  )  ); func_a = 1; } temproot1 = change_scope( temproot1 );  ficgdata[f_num].s = id_num; printf("f_num %d id_num %d\n",f_num,id_num); ficg[f_num].start = instrn_num;  sprintf(rs1,"%s:",(yyvsp[0].string));   addicg("","","f",rs1);  }
#line 1525 "y.tab.c"
    break;

  case 6:
#line 37 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                { func_a = 0;    ficgdata[f_num].param_end = id_num; printf("f_num %d id_num %d\n",f_num,id_num); }
#line 1531 "y.tab.c"
    break;

  case 7:
#line 37 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           {  temproot1 = temproot1->parent_scope;    printf("%s function executed with send-type %s \n\n",(yyvsp[-8].string),(yyvsp[-9].string));    ficgdata[f_num].e = id_num;    ficg[f_num].end = instrn_num - 1;  f_num++;   }
#line 1537 "y.tab.c"
    break;

  case 8:
#line 38 "parser.y"
                              {   if( lookup( temproot1 , (yyvsp[0].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[0].string)); exit( 0 ); } else{ func_node = insert_function( temproot1 , symbol_copy( (yyvsp[0].string) ,(yyvsp[-1].string) ,""  )  ); func_a = 1;  }    temproot1 = change_scope( temproot1 ); ficgdata[f_num].s = id_num; ficg[f_num].start = instrn_num;  sprintf(rs1,"%s:",(yyvsp[0].string));   addicg("","","f",rs1);    }
#line 1543 "y.tab.c"
    break;

  case 9:
#line 38 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                                            { func_a = 0; ficgdata[f_num].param_end = id_num; }
#line 1549 "y.tab.c"
    break;

  case 10:
#line 38 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                    {  temproot1 = temproot1->parent_scope;   printf("%s function executed with send-type %s \n\n",(yyvsp[-8].string),(yyvsp[-9].string)); ficgdata[f_num].e = id_num;   ficg[f_num].end = instrn_num - 1;  f_num++;}
#line 1555 "y.tab.c"
    break;

  case 12:
#line 41 "parser.y"
                               {strcpy((yyval.string),(yyvsp[-1].string));  if( lookup( temproot1 , (yyvsp[0].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[0].string)); exit( 0 ); } else{    insert( temproot1 , symbol_copy( (yyvsp[0].string) ,"" ,(yyvsp[-1].string)  )  );    } }
#line 1561 "y.tab.c"
    break;

  case 13:
#line 42 "parser.y"
                               {strcpy((yyval.string),(yyvsp[-3].string));  if( lookup( temproot1 , (yyvsp[-2].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[-2].string)); exit( 0 ); } else{  insert( temproot1 , symbol_copy( (yyvsp[-2].string) ,"" ,(yyvsp[-3].string)  )  );  } }
#line 1567 "y.tab.c"
    break;

  case 14:
#line 43 "parser.y"
                               {strcpy((yyval.string),(yyvsp[-4].string));  if( lookup( temproot1 , (yyvsp[-3].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[-3].string)); exit( 0 ); }   else{ id_size[id_num] = (yyvsp[-1].number); insert_array( temproot1 , symbol_copy( (yyvsp[-3].string) ,"" ,(yyvsp[-4].string)  ) , (yyvsp[-1].number) );       } }
#line 1573 "y.tab.c"
    break;

  case 15:
#line 44 "parser.y"
                                                     {strcpy((yyval.string),(yyvsp[-8].string));   if( lookup( temproot1 , (yyvsp[-7].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[-7].string)); exit( 0 ); }   else{ id_size[id_num] = (yyvsp[-5].number);  insert_array( temproot1 , symbol_copy( (yyvsp[-7].string) ,"" ,(yyvsp[-8].string)  ) , (yyvsp[-5].number) );  } }
#line 1579 "y.tab.c"
    break;

  case 16:
#line 45 "parser.y"
                               {  if( lookup( temproot1 , (yyvsp[0].string) ) ){ printf( "variable named %s exists already", (yyvsp[0].string) ); exit(0);  }  else{ insert( temproot1 , symbol_copy( (yyvsp[0].string) ,"" ,(yyval.string)  )  ); } }
#line 1585 "y.tab.c"
    break;

  case 17:
#line 46 "parser.y"
                               {  if( lookup( temproot1 , (yyvsp[-2].string) ) ){ printf( "variable named %s exists already", (yyvsp[-2].string) ); exit(0);  }  else{ insert( temproot1 , symbol_copy( (yyvsp[-2].string) ,"" ,(yyval.string)  )  ); } }
#line 1591 "y.tab.c"
    break;

  case 18:
#line 47 "parser.y"
                               {  if( lookup( temproot1 , (yyvsp[-3].string) ) ){ printf( "variable named %s exists already", (yyvsp[-3].string) ); exit(0);  }  else{ id_size[id_num] = (yyvsp[-1].number);  insert_array( temproot1 , symbol_copy( (yyvsp[-3].string) ,"" ,(yyval.string)  ) , (yyvsp[-1].number) );   } }
#line 1597 "y.tab.c"
    break;

  case 19:
#line 48 "parser.y"
                                                     {  if( lookup( temproot1 , (yyvsp[-7].string) ) ){ printf( "variable named %s exists already", (yyvsp[-7].string) ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( (yyvsp[-7].string) ,"" ,(yyval.string)  ) , (yyvsp[-5].number) );   } }
#line 1603 "y.tab.c"
    break;

  case 20:
#line 53 "parser.y"
                                   {strcpy((yyval.string),(yyvsp[-1].string)); printf("idnum before%d",id_num); if( lookup( temproot1 , (yyvsp[0].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[0].string)); exit( 0 ); } else{ addid((yyvsp[-1].string)); insert( temproot1 , symbol_copy( (yyvsp[0].string) ,"" ,(yyvsp[-1].string)  )  );  if(func_a == 1){ insert_func_param( func_node , (yyvsp[-1].string) ); }   } printf("var type %s = %s\n",(yyvsp[0].string),(yyvsp[-1].string)); printf("idnum after%d",id_num); }
#line 1609 "y.tab.c"
    break;

  case 21:
#line 54 "parser.y"
                           {strcpy((yyval.string),(yyvsp[-3].string)); printf("array type %s  = %s\n",(yyvsp[-3].string),(yyvsp[-2].string)); if( lookup( temproot1 , (yyvsp[-2].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[-2].string)); exit( 0 ); }   else{  insert_array( temproot1 , symbol_copy( (yyvsp[-2].string) ,"" ,(yyvsp[-3].string)  ) , 1 ); if(func_a == 1){ strcat((yyvsp[-3].string), "array");  insert_func_param( func_node , (yyvsp[-3].string) );printf("%s added",(yyvsp[-3].string)); }  } }
#line 1615 "y.tab.c"
    break;

  case 22:
#line 55 "parser.y"
                                   { printf("var type %s = %s\n",(yyval.string),(yyvsp[0].string)); if( lookup( temproot1 , (yyvsp[0].string) ) ){ printf( "variable named %s exists already", (yyvsp[0].string) ); exit(0);  }  else{ insert( temproot1 , symbol_copy( (yyvsp[0].string) ,"" ,(yyval.string)  )  ); if(func_a == 1){ insert_func_param( func_node , (yyval.string) ); } } }
#line 1621 "y.tab.c"
    break;

  case 23:
#line 56 "parser.y"
                               { printf("array type %s = %s\n",(yyval.string),(yyvsp[-2].string)); if( lookup( temproot1 , (yyvsp[-2].string) ) ){ printf( "variable named %s exists already", (yyvsp[-2].string) ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( (yyvsp[-2].string) ,"" ,(yyval.string)  ) , 1 ); if(func_a == 1){ strcat((yyval.string), "array"); insert_func_param( func_node , (yyval.string) ); printf("%s added",(yyval.string));}  } }
#line 1627 "y.tab.c"
    break;

  case 24:
#line 57 "parser.y"
      {}
#line 1633 "y.tab.c"
    break;

  case 25:
#line 61 "parser.y"
                                                                                          {}
#line 1639 "y.tab.c"
    break;

  case 26:
#line 62 "parser.y"
                                                                                          {}
#line 1645 "y.tab.c"
    break;

  case 27:
#line 63 "parser.y"
                                                                                          {}
#line 1651 "y.tab.c"
    break;

  case 28:
#line 64 "parser.y"
                                                                                          {}
#line 1657 "y.tab.c"
    break;

  case 29:
#line 65 "parser.y"
                                                                                          {}
#line 1663 "y.tab.c"
    break;

  case 30:
#line 66 "parser.y"
                                                                                          {}
#line 1669 "y.tab.c"
    break;

  case 31:
#line 67 "parser.y"
                                        { temproot1 = change_scope( temproot1 ); lsn[loop_count] = lnum; loop_count++;        sprintf(rs1, "l%d", lnum);  sprintf(ag1, "t%d", tnum-1);   addicg(ag1,"$zero","beq",rs1);            printf("if not t%d goto l%d\n",tnum-1,lnum); lnum = lnum + 2 ; }
#line 1675 "y.tab.c"
    break;

  case 32:
#line 67 "parser.y"
                                                                                                                                                                                                                                                                                                                       { temproot1 = temproot1->parent_scope; }
#line 1681 "y.tab.c"
    break;

  case 33:
#line 67 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                                    {   loop_count--; /*lnum++;*/ }
#line 1687 "y.tab.c"
    break;

  case 34:
#line 69 "parser.y"
                 { lsn[loop_count] = lnum; loop_count++;   sprintf(rs1,"l%d:",lnum );   addicg("","",":",rs1);     printf("l%d:\n",lnum); lnum++; }
#line 1693 "y.tab.c"
    break;

  case 35:
#line 69 "parser.y"
                                                                                                                                                                              {     sprintf(rs1, "l%d", lnum);  sprintf(ag1, "t%d", tnum-1);   addicg(ag1,"$zero","beq",rs1);         printf("if not t%d goto l%d\n",tnum-1,lnum); temproot1 = change_scope( temproot1 ); lnum++; }
#line 1699 "y.tab.c"
    break;

  case 36:
#line 69 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                    {  temproot1 = temproot1->parent_scope;        sprintf(rs1,"l%d",lsn[ loop_count - 1] );   addicg("","","j",rs1);      printf("goto l%d\n",lsn[loop_count-1]  );     sprintf(rs1,"l%d:",lsn[loop_count - 1] + 1  );   addicg("","",":",rs1);          printf("l%d:\n", lsn[loop_count - 1] + 1 ); loop_count--;  }
#line 1705 "y.tab.c"
    break;

  case 37:
#line 70 "parser.y"
                     {  temproot1 = change_scope( temproot1 ); }
#line 1711 "y.tab.c"
    break;

  case 38:
#line 70 "parser.y"
                                                                                    { lsn[loop_count] = lnum; loop_count++; lnum_temp = lnum;     sprintf(rs1,"l%d:",lnum );   addicg("","",":",rs1);      printf("l%d:\n",lnum);  }
#line 1717 "y.tab.c"
    break;

  case 39:
#line 70 "parser.y"
                                                                                                                                                                                                                                                     {        sprintf(rs1, "l%d", lnum + 3);  sprintf(ag1, "t%d", tnum-1);   addicg(ag1,"$zero","beq",rs1);          printf("if not t%d goto l%d\n",tnum-1,lnum+3 );      sprintf(rs1,"l%d",lnum + 2 );   addicg("","","j",rs1);        printf("goto l%d\n",lnum+2);       sprintf(rs1,"l%d:",lnum + 1 );   addicg("","",":",rs1);                printf("l%d:\n",lnum + 1);  }
#line 1723 "y.tab.c"
    break;

  case 40:
#line 70 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           {       sprintf(rs1,"l%d",lnum);   addicg("","","j",rs1);           printf("goto l%d\n",lnum);      sprintf(rs1,"l%d:",lnum + 2 );   addicg("","",":",rs1);       printf("l%d:\n",lnum+2); lnum = lnum + 4; }
#line 1729 "y.tab.c"
    break;

  case 41:
#line 70 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                { lnum_temp = lsn[loop_count - 1];       sprintf(rs1,"l%d",lnum_temp + 1);   addicg("","","j",rs1);            printf("goto l%d\n",lnum_temp + 1);  temproot1 = temproot1->parent_scope;     sprintf(rs1,"l%d:",lnum_temp + 3);   addicg("","",":",rs1);       printf("l%d:\n",lnum_temp + 3); loop_count--; }
#line 1735 "y.tab.c"
    break;

  case 43:
#line 74 "parser.y"
           {temproot1 = change_scope( temproot1 ); sprintf(rs1,"l%d",lsn[ loop_count - 1] + 1);   addicg("","","j",rs1);    printf("goto l%d\n",lsn[ loop_count - 1] + 1);   sprintf(rs1,"l%d:",lsn[ loop_count - 1]);   addicg("","",":",rs1);           printf("l%d:\n",lsn[ loop_count - 1] );  lnum++; }
#line 1741 "y.tab.c"
    break;

  case 44:
#line 74 "parser.y"
                                                                                                                                                                                                                                                                                                                                       { temproot1 = temproot1->parent_scope;       sprintf(rs1,"l%d:",lsn[ loop_count - 1] + 1);   addicg("","",":",rs1);           printf("l%d:\n", lsn[loop_count - 1] + 1 );   }
#line 1747 "y.tab.c"
    break;

  case 45:
#line 75 "parser.y"
        {  sprintf(rs1,"l%d:",lsn[ loop_count - 1]);   addicg("","",":",rs1);       printf("l%d:\n", lsn[loop_count - 1] );  }
#line 1753 "y.tab.c"
    break;

  case 46:
#line 79 "parser.y"
                                                                          {  if( !lookup_for_id( temproot1 , (yyvsp[0].string) ) ){ printf("%s is not defined" , (yyvsp[0].string));  exit(0); } if( strcmp( func_node->ID_Value , leftassign ) != 0 ){ printf( "parameter %s in the function does not match with return type\n",(yyvsp[0].string) ); exit(0);  }         sprintf(rs1,"id%d",current_num);   addicg("","","return",rs1);            printf("return from function %s\n",(yyvsp[0].string)); }
#line 1759 "y.tab.c"
    break;

  case 47:
#line 82 "parser.y"
                                                                             { strcpy(strdata[sdnum] , (yyvsp[-1].string)); sdnum++;    idntfrs[id_num] = 4; sprintf(ag1, "id%d",id_num );  addicg(ag1,"","o","s"); id_num++;  /* char *str2 = malloc(sizeof(char) * (strlen($3) - 2)) ;   strncpy(str2,  $3 + 1,strlen($3) - 2); */  		printf("output %s\n\n",(yyvsp[-1].string));  }
#line 1765 "y.tab.c"
    break;

  case 48:
#line 84 "parser.y"
                                                                                 {      sprintf(ag1, "t%d", tnum - 1); addicg(ag1,"","o","i");       printf("output   %s\n\n",(yyvsp[-1].string)); }
#line 1771 "y.tab.c"
    break;

  case 49:
#line 87 "parser.y"
                                                        {    if( !lookup_func_id( temproot1 , (yyvsp[-1].string) ) ){ printf("%s is not defined" , (yyvsp[-1].string));  exit(0); }       sprintf(ag1, "id%d", current_num); addicg(ag1,"","i","i");    printf("input      %s\n\n",(yyvsp[-1].string)); }
#line 1777 "y.tab.c"
    break;

  case 50:
#line 88 "parser.y"
                                                         {     if( !lookup_right_array_id( temproot1 , (yyvsp[-4].string) ) ){ printf("%s is not defined" , (yyvsp[-4].string));  exit(0); }                    sprintf(rs1, "t%d", tnum);    sprintf(ag2, "t%d", tnum-1); addicg("4",ag2,"*",rs1);        printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;      sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","&",rs1);         printf("t%d = &id%d\n",tnum,current_num); tnum++;     sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", tnum-1);   sprintf(ag2, "t%d", tnum-2); addicg(ag1,ag2,"+",rs1);        printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); tnum++;   /*   sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","b",rs1);            printf("t%d = *t%d\n", tnum,tnum-1); tnum++; */  sprintf(ag1, "t%d", tnum - 1); addicg(ag1,"","i","a");    printf("input      %s\n\n",(yyvsp[-4].string));    }
#line 1783 "y.tab.c"
    break;

  case 51:
#line 91 "parser.y"
                   { if( !lookup_for_id( temproot1 , (yyvsp[-1].string) ) ){ printf("%s is not defined" , (yyvsp[-1].string));  exit(0); } if( leftassignvar[0] != '\0' ){ printf("%s  use of data type is incorrect and is%s\n",(yyvsp[-1].string),leftassignvar); exit(0); }  prev_num = current_num; }
#line 1789 "y.tab.c"
    break;

  case 52:
#line 91 "parser.y"
                                                                                                                                                                                                                                                                               {   sprintf(rs1, "id%d", prev_num);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","",rs1);   printf("id%d = t%d \n",prev_num,tnum - 1);  }
#line 1795 "y.tab.c"
    break;

  case 53:
#line 92 "parser.y"
                                { if( !lookup_for_id( temproot1 , (yyvsp[-4].string) ) ){ printf("%s is not defined" , (yyvsp[-4].string));  exit(0); } if( leftassignvar[0] != '\0' ){ printf("%s  use of data type is incorrect and is%s\n",(yyvsp[-4].string),leftassignvar); exit(0); }  prev_curr_num = current_num;  if(!lookup_func_id( temproot1 , (yyvsp[0].string) ) ){ printf("%s is not defined" , (yyvsp[0].string));  exit(0); }  var_i = 0;  }
#line 1801 "y.tab.c"
    break;

  case 54:
#line 92 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                                        { printf("id%d = send of %s  \n", current_num ,(yyvsp[-4].string));         sprintf(ag1, "%d", func_no); addicg(ag1,"","loadparam","");          sprintf(ag1, "%s", (yyvsp[-4].string)); addicg(ag1,"","jal","");  sprintf(ag1, "id%d",prev_curr_num ); addicg(ag1,"","store","");    param_i = 0;       }
#line 1807 "y.tab.c"
    break;

  case 55:
#line 93 "parser.y"
                                {  if( !lookup_array_id( temproot1 , (yyvsp[-4].string) ) ){ printf("%s is not defined" , (yyvsp[-4].string));  exit(0); } /* printf("t%d = t%d\n",tnum,tnum-1); tnum++; */     sprintf(rs1, "t%d", tnum);    sprintf(ag2, "t%d", tnum-1); addicg("4",ag2,"*",rs1);     printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;        sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","&",rs1);        printf("t%d = &id%d\n",tnum, current_num ); tnum++;        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", tnum-1);   sprintf(ag2, "t%d", tnum-2); addicg(ag1,ag2,"+",rs1);                 printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); ar_tnum = tnum; tnum++;   }
#line 1813 "y.tab.c"
    break;

  case 56:
#line 93 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                {     sprintf(rs1, "t%d", ar_tnum);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","a",rs1);                    printf("*t%d = t%d\n",ar_tnum , tnum-1); tnum++;    }
#line 1819 "y.tab.c"
    break;

  case 57:
#line 94 "parser.y"
                                            { if( !lookup_array_id( temproot1 , (yyvsp[-7].string)  ) ){ printf("%s is not defined" , (yyvsp[-7].string));  exit(0); }   if(!lookup_func_id( temproot1 , (yyvsp[0].string) ) ){ printf("%s is not defined" , (yyvsp[0].string));  exit(0); }  var_i = 0;  /* printf("t%d = t%d\n",tnum,tnum-1); tnum++; */     sprintf(rs1, "t%d", tnum);    sprintf(ag2, "t%d", tnum-1); addicg("4",ag2,"*",rs1);       printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;       sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","&",rs1);     printf("t%d = &id%d\n",tnum, current_num  ); tnum++;             sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", tnum-1);   sprintf(ag2, "t%d", tnum-2); addicg(ag1,ag2,"+",rs1);   printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); ar_tnum = tnum; tnum++;   }
#line 1825 "y.tab.c"
    break;

  case 58:
#line 94 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       {   printf("t%d = call %s\n",tnum,(yyvsp[-4].string)); tnum++;     sprintf(rs1, "t%d", ar_tnum);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","a",rs1);   printf("*t%d = t%d\n",ar_tnum , tnum-1); tnum++;   }
#line 1831 "y.tab.c"
    break;

  case 59:
#line 97 "parser.y"
                              { printf("number %d added in array\n",(yyvsp[0].number)); }
#line 1837 "y.tab.c"
    break;

  case 60:
#line 98 "parser.y"
                              { printf("number %d added in array\n",(yyvsp[0].number)); }
#line 1843 "y.tab.c"
    break;

  case 61:
#line 101 "parser.y"
                             { if( !lookup_for_id( temproot1 , (yyvsp[0].string) ) ){ printf("%s is not defined" , (yyvsp[0].string));  exit(0); }  if(var_i >= 4 || func_node->list[var_i] == NULL ){ printf("extra parameters found in function call \n"); exit(0); }  char leftdata[30]; strcat(leftdata,leftassign); strcat(leftdata,leftassignvar);  if( strcmp( func_node->list[var_i] , leftdata ) != 0 ){ printf( "parameter %s in the function call has different data type wrt function declaration funcnode,%d,   leftdata/%s/   ",(yyvsp[0].string),var_i , leftdata );  exit(0); }  var_i++;  printf("number %s added as parameter\n",(yyvsp[0].string));      sprintf(ag1, "id%d", current_num); sprintf(rs1, "$s%d", param_i + 3); addicg(ag1,"","param",rs1); param_i++;     strcpy(leftdata,"");   }
#line 1849 "y.tab.c"
    break;

  case 62:
#line 102 "parser.y"
                             { if( !lookup_for_id( temproot1 , (yyvsp[0].string) ) ){ printf("%s is not defined" , (yyvsp[0].string));  exit(0); }   if(var_i >= 4 || func_node->list[var_i] == NULL ){ printf("extra parameters found in function call \n");  exit(0); } char leftdata[30]; strcat(leftdata,leftassign); strcat(leftdata,leftassignvar);  if( strcmp( func_node->list[var_i] , leftdata ) != 0 ){ printf( "parameter %s in the function call has different data type wrt function declaration",(yyvsp[0].string) ); exit(0); }   var_i++;  printf("number %s added as parameter\n",(yyvsp[0].string));  sprintf(ag1, "id%d", current_num); sprintf(rs1, "$s%d", param_i + 3); addicg(ag1,"","param",rs1); param_i++;  strcpy(leftdata,"");  }
#line 1855 "y.tab.c"
    break;

  case 63:
#line 106 "parser.y"
                                {  }
#line 1861 "y.tab.c"
    break;

  case 64:
#line 107 "parser.y"
          { Isneg = 1; }
#line 1867 "y.tab.c"
    break;

  case 65:
#line 107 "parser.y"
                                             {  }
#line 1873 "y.tab.c"
    break;

  case 66:
#line 111 "parser.y"
            {expression[e_num] = tnum - 1; e_num++; }
#line 1879 "y.tab.c"
    break;

  case 67:
#line 111 "parser.y"
                                                                            { e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"+",rs1);     printf("t%d = t%d + t%d\n",tnum,expression[e_num],tnum-1); tnum++;  }
#line 1885 "y.tab.c"
    break;

  case 68:
#line 112 "parser.y"
                               { }
#line 1891 "y.tab.c"
    break;

  case 69:
#line 115 "parser.y"
             {expression[e_num] = tnum - 1; e_num++; }
#line 1897 "y.tab.c"
    break;

  case 70:
#line 115 "parser.y"
                                                                         { e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"-",rs1);     printf("t%d = t%d - t%d\n",tnum,expression[e_num],tnum-1); tnum++; }
#line 1903 "y.tab.c"
    break;

  case 71:
#line 116 "parser.y"
                               {  }
#line 1909 "y.tab.c"
    break;

  case 72:
#line 119 "parser.y"
             {expression[e_num] = tnum - 1; e_num++; }
#line 1915 "y.tab.c"
    break;

  case 73:
#line 119 "parser.y"
                                                                         {  e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"*",rs1);     printf("t%d = t%d * t%d\n",tnum,expression[e_num],tnum-1); tnum++;  }
#line 1921 "y.tab.c"
    break;

  case 74:
#line 120 "parser.y"
                               {  }
#line 1927 "y.tab.c"
    break;

  case 75:
#line 123 "parser.y"
             {expression[e_num] = tnum - 1; e_num++; }
#line 1933 "y.tab.c"
    break;

  case 76:
#line 123 "parser.y"
                                                                         { e_num--;  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", expression[e_num]); sprintf(ag2, "t%d", tnum - 1 ); addicg(ag1,ag2,"/",rs1);     printf("t%d = t%d / t%d\n",tnum,expression[e_num],tnum-1); tnum++; }
#line 1939 "y.tab.c"
    break;

  case 77:
#line 124 "parser.y"
                               {  }
#line 1945 "y.tab.c"
    break;

  case 78:
#line 127 "parser.y"
                               { if(Isneg == 1){ (yyvsp[0].number) = -(yyvsp[0].number); Isneg = 0; }  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "%d", (yyvsp[0].number)); addicg(ag1,"","",rs1);    printf("t%d = %d\n",tnum,(yyvsp[0].number)); tnum++; }
#line 1951 "y.tab.c"
    break;

  case 79:
#line 128 "parser.y"
                               {  strcpy((yyval.string),(yyvsp[0].string));  if( !lookup_func_id( temproot1 , (yyvsp[0].string) ) ){ printf("%s is not defined" , (yyvsp[0].string));  exit(0); }   sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","",rs1);      printf("t%d = id%d\n",tnum, current_num ); tnum++; if(Isneg == 1){   sprintf(rs1, "t%d", tnum);    sprintf(ag1, "%d", 0); addicg(ag1,"","",rs1);    printf("t%d = %d\n",tnum,0); tnum++; 		sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", tnum-1); sprintf(ag2, "t%d", tnum - 2 ); addicg(ag1,ag2,"-",rs1);     printf("t%d = t%d - t%d\n",tnum,tnum-1,tnum-2); tnum++; Isneg = 0; }  }
#line 1957 "y.tab.c"
    break;

  case 80:
#line 129 "parser.y"
                                 {  if( !lookup_right_array_id( temproot1 , (yyvsp[-3].string) ) ){ printf("%s is not defined" , (yyvsp[-3].string));  exit(0); }                    sprintf(rs1, "t%d", tnum);    sprintf(ag2, "t%d", tnum-1); addicg("4",ag2,"*",rs1);        printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;      sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","&",rs1);         printf("t%d = &id%d\n",tnum,current_num); tnum++;     sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", tnum-1);   sprintf(ag2, "t%d", tnum-2); addicg(ag1,ag2,"+",rs1);        printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); tnum++;     sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","b",rs1);             printf("t%d = *t%d\n", tnum,tnum-1); tnum++;  if(Isneg == 1){   sprintf(rs1, "t%d", tnum);    sprintf(ag1, "%d", 0); addicg(ag1,"","",rs1);    printf("t%d = %d\n",tnum,0); tnum++; 		sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", tnum-1); sprintf(ag2, "t%d", tnum - 2 ); addicg(ag1,ag2,"-",rs1);     printf("t%d = t%d - t%d\n",tnum,tnum-1,tnum-2); tnum++;  Isneg = 0;  }  }
#line 1963 "y.tab.c"
    break;

  case 81:
#line 130 "parser.y"
         { if(Isneg == 1){ Isbneg = 1; Isneg = 0; } }
#line 1969 "y.tab.c"
    break;

  case 82:
#line 130 "parser.y"
                                                                           {  if(Isbneg == 1){   sprintf(rs1, "t%d", tnum);    sprintf(ag1, "%d", 0); addicg(ag1,"","",rs1);    printf("t%d = %d\n",tnum,0); tnum++; 		sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", tnum-1); sprintf(ag2, "t%d", tnum - 2 ); addicg(ag1,ag2,"-",rs1);     printf("t%d = t%d - t%d\n",tnum,tnum-1,tnum-2); tnum++;  Isbneg = 0; }  }
#line 1975 "y.tab.c"
    break;

  case 83:
#line 144 "parser.y"
                                      { sprintf(rs1, "t%d", tnum);    sprintf(ag1, "%d", (yyvsp[0].number)); addicg(ag1,"","",rs1);  printf("t%d = %d\n",tnum,(yyvsp[0].number)); (yyval.number)=tnum; tnum++; }
#line 1981 "y.tab.c"
    break;

  case 84:
#line 145 "parser.y"
                                      {  (yyval.number)=tnum;  if( !lookup_for_id( temproot1 , (yyvsp[0].string) ) ){ printf("%s is not defined" , (yyvsp[0].string));  exit(0); }  sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","",rs1);      printf("t%d = id%d\n",tnum, current_num ); tnum++; }
#line 1987 "y.tab.c"
    break;

  case 85:
#line 147 "parser.y"
                                       { if( !lookup_for_id( temproot1 , (yyvsp[-3].string) ) ){ printf("%s is not defined" , (yyvsp[-3].string));  exit(0); }  sprintf(rs1, "t%d", tnum);    sprintf(ag2, "t%d", tnum-1); addicg("4",ag2,"*",rs1);      printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;     sprintf(rs1, "t%d", tnum);    sprintf(ag1, "id%d", current_num); addicg(ag1,"","&",rs1);      printf("t%d = &id%d\n",tnum, current_num); tnum++;        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", tnum-1);   sprintf(ag2, "t%d", tnum-2); addicg(ag1,ag2,"+",rs1);         printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); tnum++;      sprintf(rs1, "t%d", tnum);    sprintf(ag1, "t%d", tnum-1); addicg(ag1,"","b",rs1);        printf("t%d = *t%d\n", tnum,tnum-1); (yyval.number)=tnum; tnum++;  }
#line 1993 "y.tab.c"
    break;

  case 86:
#line 148 "parser.y"
                                      {        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", (yyvsp[-2].number));   sprintf(ag2, "t%d", (yyvsp[0].number) ); addicg(ag1,ag2,"<",rs1);                                      printf("t%d = t%d < t%d\n",tnum,(yyvsp[-2].number),(yyvsp[0].number)); tnum++; /*printf("t%d = t%d < t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
#line 1999 "y.tab.c"
    break;

  case 87:
#line 149 "parser.y"
                                      {        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", (yyvsp[-2].number));   sprintf(ag2, "t%d", (yyvsp[0].number) ); addicg(ag1,ag2,">",rs1);                                       printf("t%d = t%d > t%d\n",tnum,(yyvsp[-2].number),(yyvsp[0].number)); tnum++; /*printf("t%d = t%d > t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
#line 2005 "y.tab.c"
    break;

  case 88:
#line 150 "parser.y"
                                     {        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", (yyvsp[-2].number));   sprintf(ag2, "t%d", (yyvsp[0].number) ); addicg(ag1,ag2,">=",rs1);                                       printf("t%d = t%d >= t%d\n",tnum,(yyvsp[-2].number),(yyvsp[0].number)); tnum++; /*printf("t%d = t%d > t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
#line 2011 "y.tab.c"
    break;

  case 89:
#line 151 "parser.y"
                                     {        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", (yyvsp[-2].number));   sprintf(ag2, "t%d", (yyvsp[0].number) ); addicg(ag1,ag2,"<=",rs1);                                       printf("t%d = t%d <= t%d\n",tnum,(yyvsp[-2].number),(yyvsp[0].number)); tnum++; /*printf("t%d = t%d > t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
#line 2017 "y.tab.c"
    break;

  case 90:
#line 152 "parser.y"
                                     {        sprintf(rs1, "t%d", tnum);  sprintf(ag1, "t%d", (yyvsp[-2].number));   sprintf(ag2, "t%d", (yyvsp[0].number) ); addicg(ag1,ag2,"==",rs1);                                       printf("t%d = t%d == t%d\n",tnum,(yyvsp[-2].number),(yyvsp[0].number)); tnum++; /*printf("t%d = t%d > t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
#line 2023 "y.tab.c"
    break;

  case 91:
#line 153 "parser.y"
                                      {  }
#line 2029 "y.tab.c"
    break;


#line 2033 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 157 "parser.y"


//#include "symboltable.c"
//extern struct Scope_node* root ;
//extern struct Scope_node* temproot;
int main(int argc,char *argv[]){
  initialize_sym();
  yyparse();
  icg_to_mips();
  for(int i=0;i<f_num;i++){
  	icg_to_mips_for_func( ficg[i].start ,ficg[i].end , i);
  }
  

}

int yyerror(char *s){
  printf("\n\nError: %s \n",s);
  printf("\n\nSyntax Error: in line no %d >>>>> %s \n",lineno,yytext);
  yydebug=0;
  return 0;
}
