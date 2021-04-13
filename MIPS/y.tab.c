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
    MAIN = 273
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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 12 "parser.y"

	 int  number;
	 char string[15];

#line 174 "y.tab.c"

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
#define YYLAST   210

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  68
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  175

#define YYUNDEFTOK  2
#define YYMAXUTOK   273


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
       2,     2,     2,     2,    32,     2,     2,     2,     2,     2,
      24,    25,    22,    20,    31,    21,     2,    23,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    28,
      33,    19,    34,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    29,     2,    30,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    26,     2,    27,     2,     2,     2,     2,
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
      15,    16,    17,    18
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    33,    33,    33,    36,    37,    37,    37,    38,    38,
      38,    39,    41,    42,    43,    44,    45,    46,    47,    48,
      53,    54,    55,    56,    60,    61,    62,    63,    64,    64,
      64,    66,    66,    66,    67,    67,    67,    67,    67,    68,
      71,    71,    72,    76,    79,    79,    80,    80,    81,    81,
      82,    82,    85,    86,    89,    90,    93,    94,    95,    96,
      97,    98,    99,   101,   106,   107,   108,   109,   110
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUM", "ID", "START", "END", "INTEGER",
  "CHAR", "FLOAT", "IF", "ELSE", "WHILE", "FOR", "VOID", "CALL", "SEND",
  "typestr", "MAIN", "'='", "'+'", "'-'", "'*'", "'/'", "'('", "')'",
  "'{'", "'}'", "';'", "'['", "']'", "','", "'\"'", "'<'", "'>'",
  "$accept", "program", "$@1", "declarations", "$@2", "$@3", "$@4", "$@5",
  "decl", "funcdecl", "statements", "$@6", "$@7", "$@8", "$@9", "$@10",
  "$@11", "$@12", "$@13", "IFEL", "$@14", "returnstmt", "assignexpr",
  "$@15", "$@16", "$@17", "$@18", "arraylist", "paramlist", "expr",
  "logicalexpr", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    61,
      43,    45,    42,    47,    40,    41,   123,   125,    59,    91,
      93,    44,    34,    60,    62
};
# endif

#define YYPACT_NINF (-91)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-9)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -91,     8,    67,   -91,     0,    31,   108,   -91,   -91,    68,
     -91,    45,    27,    34,    60,    83,    88,    35,    85,   101,
     -91,    92,    85,   137,   139,   124,    41,   123,   138,   104,
     -91,   126,   130,   -91,   156,   157,   136,   -91,   144,   134,
     140,   141,    36,    -1,   143,   162,   142,   146,   -91,   157,
     145,   152,   166,   149,   -91,   170,   172,   -91,   127,   165,
     150,   151,   -91,   -91,     1,   157,   162,    17,   -91,   158,
       7,   153,    33,   160,   -91,    64,   -91,   161,   -91,   -91,
     -91,   177,    43,    19,   -91,   154,   -91,   159,     7,   131,
     168,   163,    33,   131,   -20,   157,    33,   -91,   -91,   -91,
     185,     7,   125,     7,     7,     7,     7,   175,     7,   125,
      44,   -91,    33,    33,   167,    75,   -91,    95,   -91,    -3,
      -3,   -91,   -91,   169,     7,   111,   -91,   155,    87,    87,
     -91,   -91,   164,   -91,   171,   131,   -91,   157,    33,   173,
     174,   187,    58,    70,   157,   190,   -91,   -91,   -91,    63,
     -91,   112,   176,   186,   157,   -91,   -91,   194,   178,   -91,
     -91,   -91,   -91,   190,   180,   179,   113,   157,   181,   -91,
      78,   157,   -91,    97,   -91
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
      11,     0,     0,     1,     0,     0,     0,     5,     2,    12,
       4,     0,     0,     0,     0,     0,     0,    16,     0,     0,
      13,     0,     0,     0,     0,     0,     0,     0,    14,     0,
      17,     0,    20,     6,     0,    39,     0,     9,    18,     0,
       0,    22,     0,    31,     0,     0,     0,     0,    21,    39,
       0,    44,     0,     0,    34,     0,     0,     3,     0,     0,
       0,     0,    24,    52,     0,    39,     0,    31,    23,     0,
       0,     0,     0,     0,    43,    12,    26,     0,    27,    25,
      15,     0,    31,     0,     7,     0,    56,    57,     0,    45,
       0,    57,     0,    64,     0,     0,     0,    53,    10,    19,
       0,     0,     0,     0,     0,     0,     0,    48,     0,    64,
       0,    28,     0,     0,     0,     0,    46,     0,    62,    58,
      59,    60,    61,     0,     0,     0,    68,     0,    66,    67,
      35,    32,     0,    63,     0,    49,    63,    39,     0,     0,
       0,     0,    31,     0,    39,     0,    50,    29,    36,    31,
      54,     0,     0,    42,     0,    33,    47,     0,     0,    40,
      30,    37,    55,     0,     0,     0,     0,    39,     0,    51,
      31,    39,    41,    31,    38
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   198,   188,
     -48,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,   -91,
     -91,   -91,   -43,   -91,   -91,   -91,   -91,   135,    39,   -63,
     -90
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    13,     2,    12,    40,    16,    46,    58,    26,
      43,   127,   153,    59,   139,    73,   138,   154,   165,   160,
     164,    60,    44,    70,   132,   124,   152,    64,   151,    93,
      94
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      61,    67,   110,    42,     7,   111,   115,    89,     3,    53,
      86,    87,    54,   112,   113,    55,    56,    82,     8,   105,
     106,    42,   128,   129,    61,   102,    57,    53,    80,   109,
      54,    88,    81,    55,    56,     9,    86,    91,   117,    61,
     119,   120,   121,   122,    84,   125,    99,    42,   143,    17,
      81,    18,   114,    53,    23,    51,    54,    92,    19,    55,
      56,   135,    42,    20,    24,    52,    33,    42,    53,   126,
      98,    54,    34,    53,    55,    56,    54,   112,   113,    55,
      56,     4,    42,    14,     5,   147,    21,    14,    53,   142,
     155,    54,    -8,    15,    55,    56,   149,    15,   148,    61,
     131,    42,    25,   112,   113,   172,    61,    53,   112,   113,
      54,   161,    22,    55,    56,   103,   104,   105,   106,   170,
     112,   113,    28,   173,   174,   133,    27,    61,    32,    37,
      61,   103,   104,   105,   106,    34,    10,   156,   169,    11,
      30,   136,    31,   157,   157,   103,   104,   105,   106,    35,
     118,   103,   104,   105,   106,    76,    38,    36,    11,    39,
      41,    42,    45,    47,    48,    63,    49,    69,    65,    71,
      50,    62,    66,    72,    74,    68,    75,    77,    78,    79,
      97,   137,    85,    90,    95,    96,   100,   107,   101,   116,
     123,   146,   108,   134,   150,   130,   140,   159,   162,   144,
       6,    83,   166,   141,   168,   145,   167,   171,   158,   163,
      29
};

static const yytype_uint8 yycheck[] =
{
      43,    49,    92,     4,     4,    25,    96,    70,     0,    10,
       3,     4,    13,    33,    34,    16,    17,    65,    18,    22,
      23,     4,   112,   113,    67,    88,    27,    10,    27,    92,
      13,    24,    31,    16,    17,     4,     3,     4,   101,    82,
     103,   104,   105,   106,    27,   108,    27,     4,   138,     4,
      31,    24,    95,    10,    19,    19,    13,    24,    24,    16,
      17,   124,     4,     3,    29,    29,    25,     4,    10,    25,
      27,    13,    31,    10,    16,    17,    13,    33,    34,    16,
      17,    14,     4,    19,    17,    27,     3,    19,    10,   137,
      27,    13,    24,    29,    16,    17,   144,    29,    28,   142,
      25,     4,    17,    33,    34,    27,   149,    10,    33,    34,
      13,   154,    24,    16,    17,    20,    21,    22,    23,   167,
      33,    34,    30,   171,    27,    30,    25,   170,     4,    25,
     173,    20,    21,    22,    23,    31,    28,    25,    25,    31,
       3,    30,     3,    31,    31,    20,    21,    22,    23,    26,
      25,    20,    21,    22,    23,    28,    30,    19,    31,    29,
       4,     4,    26,    19,    30,     3,    26,    15,    26,     3,
      29,    28,    26,    24,     4,    30,     4,    12,    28,    28,
       3,    26,    24,    30,    24,    24,    32,    19,    29,     4,
      15,     4,    29,    24,     4,    28,    32,    11,     4,    26,
       2,    66,   163,    32,    25,    31,    26,    26,    32,    31,
      22
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    36,    38,     0,    14,    17,    43,     4,    18,     4,
      28,    31,    39,    37,    19,    29,    41,     4,    24,    24,
       3,     3,    24,    19,    29,    17,    44,    25,    30,    44,
       3,     3,     4,    25,    31,    26,    19,    25,    30,    29,
      40,     4,     4,    45,    57,    26,    42,    19,    30,    26,
      29,    19,    29,    10,    13,    16,    17,    27,    43,    48,
      56,    57,    28,     3,    62,    26,    26,    45,    30,    15,
      58,     3,    24,    50,     4,     4,    28,    12,    28,    28,
      27,    31,    45,    62,    27,    24,     3,     4,    24,    64,
      30,     4,    24,    64,    65,    24,    24,     3,    27,    27,
      32,    29,    64,    20,    21,    22,    23,    19,    29,    64,
      65,    25,    33,    34,    57,    65,     4,    64,    25,    64,
      64,    64,    64,    15,    60,    64,    25,    46,    65,    65,
      28,    25,    59,    30,    24,    64,    30,    26,    51,    49,
      32,    32,    45,    65,    26,    31,     4,    27,    28,    45,
       4,    63,    61,    47,    52,    27,    25,    31,    32,    11,
      54,    57,     4,    31,    55,    53,    63,    26,    25,    25,
      45,    26,    27,    45,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    37,    36,    38,    39,    40,    38,    41,    42,
      38,    38,    43,    43,    43,    43,    43,    43,    43,    43,
      44,    44,    44,    44,    45,    45,    45,    45,    46,    47,
      45,    48,    49,    45,    50,    51,    52,    53,    45,    45,
      55,    54,    54,    56,    58,    57,    59,    57,    60,    57,
      61,    57,    62,    62,    63,    63,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    65,    65,    65
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     9,     3,     0,     0,    11,     0,     0,
      11,     0,     2,     4,     5,     9,     3,     5,     6,    10,
       2,     4,     3,     5,     2,     3,     3,     3,     0,     0,
      11,     0,     0,    10,     0,     0,     0,     0,    16,     0,
       0,     5,     0,     2,     0,     4,     0,    11,     0,     7,
       0,    14,     1,     3,     1,     3,     1,     1,     3,     3,
       3,     3,     3,     4,     1,     4,     3,     3,     3
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
#line 1465 "y.tab.c"
    break;

  case 3:
#line 33 "parser.y"
                                                                                                                                                 {}
#line 1471 "y.tab.c"
    break;

  case 4:
#line 36 "parser.y"
                                    {  }
#line 1477 "y.tab.c"
    break;

  case 5:
#line 37 "parser.y"
                           { if( lookup( temproot1 , (yyvsp[0].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[0].string)); exit( 0 ); } else{ func_node = insert_function( temproot1 , symbol_copy( (yyvsp[0].string) ,(yyvsp[-1].string) ,""  )  ); func_a = 1; } temproot1 = change_scope( temproot1 ); }
#line 1483 "y.tab.c"
    break;

  case 6:
#line 37 "parser.y"
                                                                                                                                                                                                                                                                                    { func_a = 0; }
#line 1489 "y.tab.c"
    break;

  case 7:
#line 37 "parser.y"
                                                                                                                                                                                                                                                                                                                           {  temproot1 = temproot1->parent_scope;    printf("%s function executed with send-type %s \n\n",(yyvsp[-8].string),(yyvsp[-9].string)); }
#line 1495 "y.tab.c"
    break;

  case 8:
#line 38 "parser.y"
                              {   if( lookup( temproot1 , (yyvsp[0].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[0].string)); exit( 0 ); } else{ func_node = insert_function( temproot1 , symbol_copy( (yyvsp[0].string) ,(yyvsp[-1].string) ,""  )  ); func_a = 1; }    temproot1 = change_scope( temproot1 ); }
#line 1501 "y.tab.c"
    break;

  case 9:
#line 38 "parser.y"
                                                                                                                                                                                                                                                                                           { func_a = 0; }
#line 1507 "y.tab.c"
    break;

  case 10:
#line 38 "parser.y"
                                                                                                                                                                                                                                                                                                                               {  temproot1 = temproot1->parent_scope;   printf("%s function executed with send-type %s \n\n",(yyvsp[-8].string),(yyvsp[-9].string));  }
#line 1513 "y.tab.c"
    break;

  case 12:
#line 41 "parser.y"
                               {strcpy((yyval.string),(yyvsp[-1].string));  if( lookup( temproot1 , (yyvsp[0].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[0].string)); exit( 0 ); } else{  insert( temproot1 , symbol_copy( (yyvsp[0].string) ,"" ,(yyvsp[-1].string)  )  );    } }
#line 1519 "y.tab.c"
    break;

  case 13:
#line 42 "parser.y"
                               {strcpy((yyval.string),(yyvsp[-3].string));  if( lookup( temproot1 , (yyvsp[-2].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[-2].string)); exit( 0 ); } else{  insert( temproot1 , symbol_copy( (yyvsp[-2].string) ,"" ,(yyvsp[-3].string)  )  );  } }
#line 1525 "y.tab.c"
    break;

  case 14:
#line 43 "parser.y"
                               {strcpy((yyval.string),(yyvsp[-4].string));  if( lookup( temproot1 , (yyvsp[-3].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[-3].string)); exit( 0 ); }   else{  insert_array( temproot1 , symbol_copy( (yyvsp[-3].string) ,"" ,(yyvsp[-4].string)  ) , (yyvsp[-1].number) );  } }
#line 1531 "y.tab.c"
    break;

  case 15:
#line 44 "parser.y"
                                                     {strcpy((yyval.string),(yyvsp[-8].string));   if( lookup( temproot1 , (yyvsp[-7].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[-7].string)); exit( 0 ); }   else{  insert_array( temproot1 , symbol_copy( (yyvsp[-7].string) ,"" ,(yyvsp[-8].string)  ) , (yyvsp[-5].number) );  } }
#line 1537 "y.tab.c"
    break;

  case 16:
#line 45 "parser.y"
                               {  if( lookup( temproot1 , (yyvsp[0].string) ) ){ printf( "variable named %s exists already", (yyvsp[0].string) ); exit(0);  }  else{ insert( temproot1 , symbol_copy( (yyvsp[0].string) ,"" ,(yyval.string)  )  ); } }
#line 1543 "y.tab.c"
    break;

  case 17:
#line 46 "parser.y"
                               {  if( lookup( temproot1 , (yyvsp[-2].string) ) ){ printf( "variable named %s exists already", (yyvsp[-2].string) ); exit(0);  }  else{ insert( temproot1 , symbol_copy( (yyvsp[-2].string) ,"" ,(yyval.string)  )  ); } }
#line 1549 "y.tab.c"
    break;

  case 18:
#line 47 "parser.y"
                               {  if( lookup( temproot1 , (yyvsp[-3].string) ) ){ printf( "variable named %s exists already", (yyvsp[-3].string) ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( (yyvsp[-3].string) ,"" ,(yyval.string)  ) , (yyvsp[-1].number) );   } }
#line 1555 "y.tab.c"
    break;

  case 19:
#line 48 "parser.y"
                                                     {  if( lookup( temproot1 , (yyvsp[-7].string) ) ){ printf( "variable named %s exists already", (yyvsp[-7].string) ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( (yyvsp[-7].string) ,"" ,(yyval.string)  ) , (yyvsp[-5].number) );   } }
#line 1561 "y.tab.c"
    break;

  case 20:
#line 53 "parser.y"
                                   {strcpy((yyval.string),(yyvsp[-1].string));  if( lookup( temproot1 , (yyvsp[0].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[0].string)); exit( 0 ); } else{  insert( temproot1 , symbol_copy( (yyvsp[0].string) ,"" ,(yyvsp[-1].string)  )  );  if(func_a == 1){ insert_func_param( func_node , (yyvsp[-1].string) ); }   } }
#line 1567 "y.tab.c"
    break;

  case 21:
#line 54 "parser.y"
                           {strcpy((yyval.string),(yyvsp[-3].string)); printf("array type %s  = %s\n",(yyvsp[-3].string),(yyvsp[-2].string)); if( lookup( temproot1 , (yyvsp[-2].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[-2].string)); exit( 0 ); }   else{  insert_array( temproot1 , symbol_copy( (yyvsp[-2].string) ,"" ,(yyvsp[-3].string)  ) , 1 ); if(func_a == 1){ strcat((yyvsp[-3].string), "array");  insert_func_param( func_node , (yyvsp[-3].string) ); }  } }
#line 1573 "y.tab.c"
    break;

  case 22:
#line 55 "parser.y"
                                   { printf("var type %s = %s\n",(yyval.string),(yyvsp[0].string)); if( lookup( temproot1 , (yyvsp[0].string) ) ){ printf( "variable named %s exists already", (yyvsp[0].string) ); exit(0);  }  else{ insert( temproot1 , symbol_copy( (yyvsp[0].string) ,"" ,(yyval.string)  )  ); if(func_a == 1){ insert_func_param( func_node , (yyval.string) ); } } }
#line 1579 "y.tab.c"
    break;

  case 23:
#line 56 "parser.y"
                               { printf("array type %s = %s\n",(yyval.string),(yyvsp[-2].string)); if( lookup( temproot1 , (yyvsp[-2].string) ) ){ printf( "variable named %s exists already", (yyvsp[-2].string) ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( (yyvsp[-2].string) ,"" ,(yyval.string)  ) , 1 ); if(func_a == 1){ strcat((yyval.string), "array"); insert_func_param( func_node , (yyval.string) ); }  } }
#line 1585 "y.tab.c"
    break;

  case 24:
#line 60 "parser.y"
                                                                                          {}
#line 1591 "y.tab.c"
    break;

  case 25:
#line 61 "parser.y"
                                                                                          {}
#line 1597 "y.tab.c"
    break;

  case 26:
#line 62 "parser.y"
                                                                                          {}
#line 1603 "y.tab.c"
    break;

  case 27:
#line 63 "parser.y"
                                                                                          {}
#line 1609 "y.tab.c"
    break;

  case 28:
#line 64 "parser.y"
                                        { temproot1 = change_scope( temproot1 ); lsn[loop_count] = lnum; loop_count++;   printf("if not t%d goto l%d\n",tnum-1,lnum); lnum = lnum + 2 ; }
#line 1615 "y.tab.c"
    break;

  case 29:
#line 64 "parser.y"
                                                                                                                                                                                                             { temproot1 = temproot1->parent_scope; }
#line 1621 "y.tab.c"
    break;

  case 30:
#line 64 "parser.y"
                                                                                                                                                                                                                                                                                          {   printf(" \n");   loop_count--; /*lnum++;*/ }
#line 1627 "y.tab.c"
    break;

  case 31:
#line 66 "parser.y"
                 { lsn[loop_count] = lnum; loop_count++;    printf("l%d:\n",lnum); lnum++; }
#line 1633 "y.tab.c"
    break;

  case 32:
#line 66 "parser.y"
                                                                                                                       { printf("if not t%d goto l%d\n",tnum-1,lnum); temproot1 = change_scope( temproot1 ); lnum++; }
#line 1639 "y.tab.c"
    break;

  case 33:
#line 66 "parser.y"
                                                                                                                                                                                                                                                                       {  temproot1 = temproot1->parent_scope; printf("goto l%d\n",lsn[loop_count-1]  );  printf("l%d:\n", lsn[loop_count - 1] + 1 ); loop_count--;  }
#line 1645 "y.tab.c"
    break;

  case 34:
#line 67 "parser.y"
                     {  temproot1 = change_scope( temproot1 ); }
#line 1651 "y.tab.c"
    break;

  case 35:
#line 67 "parser.y"
                                                                                    { lsn[loop_count] = lnum; loop_count++; lnum_temp = lnum; printf("l%d:\n",lnum);  }
#line 1657 "y.tab.c"
    break;

  case 36:
#line 67 "parser.y"
                                                                                                                                                                                        { printf("if not t%d goto l%d\n",tnum-1,lnum+3 ); printf("goto l%d\n",lnum+2); printf("l%d:\n",lnum + 1);  }
#line 1663 "y.tab.c"
    break;

  case 37:
#line 67 "parser.y"
                                                                                                                                                                                                                                                                                                                { printf("goto l%d\n",lnum); printf("l%d:\n",lnum+2); lnum = lnum + 4; }
#line 1669 "y.tab.c"
    break;

  case 38:
#line 67 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                                                { lnum_temp = lsn[loop_count - 1]; printf("goto l%d\n",lnum_temp + 1);  temproot1 = temproot1->parent_scope;  printf("l%d:\n",lnum_temp + 3); loop_count--; }
#line 1675 "y.tab.c"
    break;

  case 40:
#line 71 "parser.y"
           {temproot1 = change_scope( temproot1 );  printf("goto l%d\n",lsn[ loop_count - 1] + 1); printf("l%d:\n",lsn[ loop_count - 1] );  lnum++; }
#line 1681 "y.tab.c"
    break;

  case 41:
#line 71 "parser.y"
                                                                                                                                                                                { temproot1 = temproot1->parent_scope;    printf("l%d:\n", lsn[loop_count - 1] + 1 );   }
#line 1687 "y.tab.c"
    break;

  case 42:
#line 72 "parser.y"
        { printf("l%d:\n", lsn[loop_count - 1] );  }
#line 1693 "y.tab.c"
    break;

  case 43:
#line 76 "parser.y"
                                                                          {  if( !lookup_for_id( temproot1 , (yyvsp[0].string) ) ){ printf("%s is not defined" , (yyvsp[0].string));  exit(0); } if( strcmp( func_node->ID_Value , leftassign ) != 0 ){ printf( "parameter %s in the function does not match with return type\n",(yyvsp[0].string) ); exit(0);  } printf("return from function %s\n",(yyvsp[0].string)); }
#line 1699 "y.tab.c"
    break;

  case 44:
#line 79 "parser.y"
                   { if( !lookup_for_id( temproot1 , (yyvsp[-1].string) ) ){ printf("%s is not defined" , (yyvsp[-1].string));  exit(0); } if( leftassignvar[0] != '\0' ){ printf("%s  use of data type is incorrect and is%s\n",(yyvsp[-1].string),leftassignvar); exit(0); }  }
#line 1705 "y.tab.c"
    break;

  case 45:
#line 79 "parser.y"
                                                                                                                                                                                                                                                                                          { /* printf("IDENTIFIER %s =  \n",$1); */  printf("%s = t%d \n",(yyvsp[-3].string),tnum - 1);  }
#line 1711 "y.tab.c"
    break;

  case 46:
#line 80 "parser.y"
                                   { if( !lookup_for_id( temproot1 , (yyvsp[-5].string) ) ){ printf("%s is not defined" , (yyvsp[-5].string));  exit(0); } if( leftassignvar[0] != '\0' ){ printf("%s  use of data type is incorrect and is%s\n",(yyvsp[-5].string),leftassignvar); exit(0); }  if(!lookup_func_id( temproot1 , (yyvsp[0].string) ) ){ printf("%s is not defined" , (yyvsp[0].string));  exit(0); }  var_i = 0;  }
#line 1717 "y.tab.c"
    break;

  case 47:
#line 80 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                { printf("%s = send of %s  \n",(yyvsp[-10].string),(yyvsp[-5].string)); }
#line 1723 "y.tab.c"
    break;

  case 48:
#line 81 "parser.y"
                               {  if( !lookup_array_id( temproot1 , (yyvsp[-4].string) ,(yyvsp[-2].number) ) ){ printf("%s is not defined" , (yyvsp[-4].string));  exit(0); }  printf("t%d = %d\n",tnum,(yyvsp[-2].number)); tnum++; printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;  printf("t%d = &%s\n",tnum,(yyvsp[-4].string)); tnum++; printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); ar_tnum = tnum; tnum++;   }
#line 1729 "y.tab.c"
    break;

  case 49:
#line 81 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                     { printf("*t%d = t%d\n",ar_tnum , tnum-1); tnum++;    }
#line 1735 "y.tab.c"
    break;

  case 50:
#line 82 "parser.y"
                                               { if( !lookup_array_id( temproot1 , (yyvsp[-8].string) ,(yyvsp[-6].number) ) ){ printf("%s is not defined" , (yyvsp[-8].string));  exit(0); }   if(!lookup_func_id( temproot1 , (yyvsp[0].string) ) ){ printf("%s is not defined" , (yyvsp[0].string));  exit(0); }  var_i = 0; printf("t%d = %d\n",tnum,(yyvsp[-6].number)); tnum++; printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;  printf("t%d = &%s\n",tnum,(yyvsp[-8].string)); tnum++; printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); ar_tnum = tnum; tnum++;   }
#line 1741 "y.tab.c"
    break;

  case 51:
#line 82 "parser.y"
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       {   printf("t%d = call %s\n",tnum,(yyvsp[-5].string)); tnum++;  printf("*t%d = t%d\n",ar_tnum , tnum-1); tnum++;   }
#line 1747 "y.tab.c"
    break;

  case 52:
#line 85 "parser.y"
                              { printf("number %d added in array\n",(yyvsp[0].number)); }
#line 1753 "y.tab.c"
    break;

  case 53:
#line 86 "parser.y"
                              { printf("number %d added in array\n",(yyvsp[0].number)); }
#line 1759 "y.tab.c"
    break;

  case 54:
#line 89 "parser.y"
                             { if( !lookup_for_id( temproot1 , (yyvsp[0].string) ) ){ printf("%s is not defined" , (yyvsp[0].string));  exit(0); }  if(var_i >= 4 || func_node->list[var_i] == NULL ){ printf("extra parameters found in function call \n"); exit(0); } if( strcmp( func_node->list[var_i] , leftassign ) != 0 ){ printf( "parameter %s in the function call has different data type wrt function declaration funcnode,%d,   leftassign/%s/   ",(yyvsp[0].string),var_i , leftassign );  exit(0); }  printf("number %s added as parameter\n",(yyvsp[0].string)); }
#line 1765 "y.tab.c"
    break;

  case 55:
#line 90 "parser.y"
                             { if( !lookup_for_id( temproot1 , (yyvsp[0].string) ) ){ printf("%s is not defined" , (yyvsp[0].string));  exit(0); }   if(var_i >= 4 || func_node->list[var_i] == NULL ){ printf("extra parameters found in function call \n");  exit(0); } if( strcmp( func_node->list[var_i] , leftassign ) != 0 ){ printf( "parameter %s in the function call has different data type wrt function declaration",(yyvsp[0].string) ); exit(0); }   var_i++;  printf("number %s added as parameter\n",(yyvsp[0].string)); }
#line 1771 "y.tab.c"
    break;

  case 56:
#line 93 "parser.y"
                              { printf("t%d = %d\n",tnum,(yyvsp[0].number)); tnum++; }
#line 1777 "y.tab.c"
    break;

  case 57:
#line 94 "parser.y"
                              { printf("t%d = %s\n",tnum,(yyvsp[0].string)); tnum++; strcpy((yyval.string),(yyvsp[0].string));  if( !lookup_func_id( temproot1 , (yyvsp[0].string) ) ){ printf("%s is not defined" , (yyvsp[0].string));  exit(0); }  }
#line 1783 "y.tab.c"
    break;

  case 58:
#line 95 "parser.y"
                              { printf("t%d = t%d + t%d\n",tnum,tnum-2,tnum-1); tnum++; }
#line 1789 "y.tab.c"
    break;

  case 59:
#line 96 "parser.y"
                              { printf("t%d = t%d - t%d\n",tnum,tnum-2,tnum-1); tnum++; }
#line 1795 "y.tab.c"
    break;

  case 60:
#line 97 "parser.y"
                              { printf("t%d = t%d * t%d\n",tnum,tnum-2,tnum-1); tnum++; }
#line 1801 "y.tab.c"
    break;

  case 61:
#line 98 "parser.y"
                              { printf("t%d = t%d / t%d\n",tnum,tnum-2,tnum-1); tnum++; }
#line 1807 "y.tab.c"
    break;

  case 62:
#line 99 "parser.y"
                              {  }
#line 1813 "y.tab.c"
    break;

  case 63:
#line 101 "parser.y"
                                { /*printf("t%d = t%d\n",tnum,tnum-1); tnum++;*/ printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;  printf("t%d = &%s\n",tnum,(yyvsp[-3].string)); tnum++; printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); tnum++;  printf("t%d = *t%d\n", tnum,tnum-1); tnum++;  }
#line 1819 "y.tab.c"
    break;

  case 64:
#line 106 "parser.y"
            { (yyval.number)=tnum-1; }
#line 1825 "y.tab.c"
    break;

  case 65:
#line 107 "parser.y"
                                       { if( !lookup_for_id( temproot1 , (yyvsp[-3].string) ) ){ printf("%s is not defined" , (yyvsp[-3].string));  exit(0); } printf("t%d = 4 * t%d\n",tnum,tnum-1); tnum++;  printf("t%d = &%s\n",tnum,(yyvsp[-3].string)); tnum++; printf("t%d = t%d + t%d\n",tnum,tnum-1,tnum-2); tnum++;  printf("t%d = *t%d\n", tnum,tnum-1); (yyval.number)=tnum; tnum++;  }
#line 1831 "y.tab.c"
    break;

  case 66:
#line 108 "parser.y"
                                      { printf("t%d = t%d < t%d\n",tnum,(yyvsp[-2].number),(yyvsp[0].number)); tnum++; /*printf("t%d = t%d < t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
#line 1837 "y.tab.c"
    break;

  case 67:
#line 109 "parser.y"
                                      { printf("t%d = t%d > t%d\n",tnum,(yyvsp[-2].number),(yyvsp[0].number)); tnum++; /*printf("t%d = t%d > t%d\n",tnum,tnum-2,tnum-1); tnum++;*/ }
#line 1843 "y.tab.c"
    break;

  case 68:
#line 110 "parser.y"
                                      {  }
#line 1849 "y.tab.c"
    break;


#line 1853 "y.tab.c"

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
#line 114 "parser.y"


//#include "symboltable.c"
//extern struct Scope_node* root ;
//extern struct Scope_node* temproot;
int main(int argc,char *argv[]){
  initialize_sym();
  yyparse();
  
  return 0;
}

int yyerror(char *s){
  printf("\n\nError: %s \n",s);
  printf("\n\nSyntax Error: in line no %d >>>>> %s \n",lineno,yytext);
  yydebug=0;
  return 0;
}
