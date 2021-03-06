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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   212

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  26
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  165

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
       0,    33,    33,    33,    36,    37,    38,    38,    38,    39,
      39,    39,    42,    43,    44,    45,    46,    47,    48,    49,
      54,    55,    56,    57,    61,    62,    63,    64,    65,    65,
      65,    67,    67,    68,    68,    69,    72,    72,    73,    77,
      80,    80,    81,    81,    82,    82,    83,    86,    87,    90,
      91,    94,    95,    96,    97,    98,    99,   100,   103,   104,
     105,   106,   107
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
  "decl", "funcdecl", "statements", "$@6", "$@7", "$@8", "$@9", "IFEL",
  "$@10", "returnstmt", "assignexpr", "$@11", "$@12", "$@13", "arraylist",
  "paramlist", "expr", "logicalexpr", YY_NULLPTR
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

#define YYPACT_NINF (-79)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-43)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      15,    62,    64,    14,    51,    -9,   -79,     4,    76,    88,
     -79,    86,    75,    99,   -79,   -79,    36,   -79,    17,   -79,
      70,    87,    94,    96,   119,   124,   134,   115,   130,   115,
     -79,   108,   131,   154,    31,   133,    72,   141,   158,   135,
     -79,   159,   161,   -79,   136,   -79,    21,   137,   140,   139,
      18,    -1,   142,   143,   158,   -79,   168,   -79,   161,   144,
     157,   170,   152,   153,   -79,     1,   -79,   100,   147,   150,
     -79,   161,    50,   -79,    41,   -79,     1,   164,   155,     3,
       3,   156,   -79,   -79,     1,   114,   -79,   -79,   -79,    57,
     -79,   -79,   114,   160,   162,   -79,   -79,     3,    10,    38,
     161,   127,     1,     1,     1,     1,   -79,   163,   167,    60,
     -79,     3,     3,   -79,   165,   -79,    -5,    -5,   -79,   -79,
     179,   166,     1,   -79,   171,   110,   110,   172,     3,   169,
     173,   114,   161,   161,    -4,   175,   182,    79,    97,   161,
     184,   176,   -79,   -79,   174,   -79,    74,   178,   177,   181,
     -79,   186,   184,   -79,   -79,   161,   -79,    90,   185,   113,
     -79,   161,   -79,   129,   -79
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     0,    12,     1,     0,     0,     0,
       4,     0,     0,     0,     6,     2,    12,     5,    16,    13,
       0,     0,     0,     0,     0,     0,    14,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,    18,     0,    20,
       7,     0,    35,    10,     0,    47,     0,     0,     0,    22,
       0,     0,     0,     0,     0,    15,     0,    21,    35,     0,
      40,     0,     0,     0,    33,     0,     3,     0,     0,     0,
      24,    35,     0,    48,     0,    23,     0,     0,     0,     0,
       0,     0,    51,    52,     0,    39,    26,    27,    25,     0,
      19,     8,    41,     0,     0,    58,    59,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,     0,    44,     0,
      28,     0,     0,    31,     0,    57,    53,    54,    55,    56,
       0,     0,     0,    62,     0,    60,    61,     0,     0,     0,
       0,    45,    35,    35,     0,     0,     0,     0,     0,     0,
       0,     0,    29,    32,     0,    49,     0,     0,    38,     0,
      43,     0,     0,    36,    30,    35,    50,     0,     0,     0,
      46,    35,    34,     0,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   151,   183,
     -57,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -51,   -79,
     -79,   -79,   138,    39,   -63,   -78
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    22,     3,    21,    48,    23,    53,    67,    34,
      51,   124,   148,   127,    81,   154,   158,    68,    52,    76,
      77,   122,    46,   146,    85,    98
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,    74,    99,    50,    82,    83,    95,    96,    14,    62,
      12,    63,    64,    92,    89,    65,     1,   104,   105,   109,
      13,   101,    15,    69,   139,    84,    66,    97,     7,   111,
     112,     8,     1,   125,   126,   110,    24,    60,    69,   116,
     117,   118,   119,   111,   112,    50,    25,    61,    55,   114,
     134,    62,    56,    63,    64,    12,    40,    65,     1,   131,
      -9,    50,    41,   113,     6,    13,     5,    62,    91,    63,
      64,   111,   112,    65,     1,   137,   138,    90,    19,    10,
      16,    56,    11,    50,   106,   123,    69,    69,   144,    62,
      18,    63,    64,   111,   112,    65,     1,    43,   159,   150,
      26,    50,    20,    41,   163,   151,   142,    62,    69,    63,
      64,    27,    69,    65,     1,   160,    17,    50,    28,    11,
      29,   151,    30,    62,   143,    63,    64,    31,    86,    65,
       1,    11,    33,    50,   102,   103,   104,   105,    37,    62,
     162,    63,    64,   111,   112,    65,     1,   102,   103,   104,
     105,     4,   115,    32,     9,    35,   164,    38,    39,    42,
      44,    45,    54,    49,    47,    50,    58,    57,    59,    71,
      70,    73,   -42,    78,    75,    87,    79,    80,    88,    93,
     100,   108,   121,   129,   107,    94,   141,   145,   153,   156,
     130,   157,    72,   128,     0,   120,     0,   132,   133,   149,
       0,   135,     0,     0,     0,   136,   140,   155,   147,   152,
       0,   161,    36
};

static const yytype_int16 yycheck[] =
{
      51,    58,    80,     4,     3,     4,     3,     4,     4,    10,
      19,    12,    13,    76,    71,    16,    17,    22,    23,    97,
      29,    84,    18,    74,    28,    24,    27,    24,    14,    33,
      34,    17,    17,   111,   112,    25,    19,    19,    89,   102,
     103,   104,   105,    33,    34,     4,    29,    29,    27,   100,
     128,    10,    31,    12,    13,    19,    25,    16,    17,   122,
      24,     4,    31,    25,     0,    29,     4,    10,    27,    12,
      13,    33,    34,    16,    17,   132,   133,    27,     3,    28,
       4,    31,    31,     4,    27,    25,   137,   138,   139,    10,
       4,    12,    13,    33,    34,    16,    17,    25,   155,    25,
      30,     4,     3,    31,   161,    31,    27,    10,   159,    12,
      13,    24,   163,    16,    17,    25,    28,     4,    24,    31,
      24,    31,     3,    10,    27,    12,    13,     3,    28,    16,
      17,    31,    17,     4,    20,    21,    22,    23,    30,    10,
      27,    12,    13,    33,    34,    16,    17,    20,    21,    22,
      23,     0,    25,    19,     3,    25,    27,    26,     4,    26,
      19,     3,    26,     4,    29,     4,    26,    30,    29,    26,
      28,     3,    15,     3,    30,    28,    24,    24,    28,    15,
      24,    19,    15,     4,    24,    30,     4,     3,    11,     3,
      24,   152,    54,    28,    -1,    32,    -1,    26,    26,    25,
      -1,    32,    -1,    -1,    -1,    32,    31,    26,    32,    31,
      -1,    26,    29
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    36,    38,    43,     4,     0,    14,    17,    43,
      28,    31,    19,    29,     4,    18,     4,    28,     4,     3,
       3,    39,    37,    41,    19,    29,    30,    24,    24,    24,
       3,     3,    19,    17,    44,    25,    44,    30,    26,     4,
      25,    31,    26,    25,    19,     3,    57,    29,    40,     4,
       4,    45,    53,    42,    26,    27,    31,    30,    26,    29,
      19,    29,    10,    12,    13,    16,    27,    43,    52,    53,
      28,    26,    57,     3,    45,    30,    54,    55,     3,    24,
      24,    49,     3,     4,    24,    59,    28,    28,    28,    45,
      27,    27,    59,    15,    30,     3,     4,    24,    60,    60,
      24,    59,    20,    21,    22,    23,    27,    24,    19,    60,
      25,    33,    34,    25,    53,    25,    59,    59,    59,    59,
      32,    15,    56,    25,    46,    60,    60,    48,    28,     4,
      24,    59,    26,    26,    60,    32,    32,    45,    45,    28,
      31,     4,    27,    27,    53,     3,    58,    32,    47,    25,
      25,    31,    31,    11,    50,    26,     3,    58,    51,    45,
      25,    26,    27,    45,    27
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    37,    36,    38,    38,    39,    40,    38,    41,
      42,    38,    43,    43,    43,    43,    43,    43,    43,    43,
      44,    44,    44,    44,    45,    45,    45,    45,    46,    47,
      45,    48,    45,    49,    45,    45,    51,    50,    50,    52,
      54,    53,    55,    53,    56,    53,    53,    57,    57,    58,
      58,    59,    59,    59,    59,    59,    59,    59,    60,    60,
      60,    60,    60
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     9,     2,     3,     0,     0,    11,     0,
       0,    11,     2,     4,     5,     9,     3,     5,     6,    10,
       2,     4,     3,     5,     2,     3,     3,     3,     0,     0,
      11,     0,     9,     0,    13,     0,     0,     5,     0,     2,
       0,     4,     0,    11,     0,     7,    13,     1,     3,     1,
       3,     1,     1,     3,     3,     3,     3,     3,     1,     1,
       3,     3,     3
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
#line 1459 "y.tab.c"
    break;

  case 3:
#line 33 "parser.y"
                                                                                                                                                 {printf("main function executed");}
#line 1465 "y.tab.c"
    break;

  case 4:
#line 36 "parser.y"
                            {  }
#line 1471 "y.tab.c"
    break;

  case 5:
#line 37 "parser.y"
                            {  }
#line 1477 "y.tab.c"
    break;

  case 6:
#line 38 "parser.y"
                           { if( lookup( temproot1 , (yyvsp[0].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[0].string)); exit( 0 ); } else{ func_node = insert_function( temproot1 , symbol_copy( (yyvsp[0].string) ,(yyvsp[-1].string) ,""  )  ); func_a = 1; } temproot1 = change_scope( temproot1 ); }
#line 1483 "y.tab.c"
    break;

  case 7:
#line 38 "parser.y"
                                                                                                                                                                                                                                                                                    { func_a = 0; }
#line 1489 "y.tab.c"
    break;

  case 8:
#line 38 "parser.y"
                                                                                                                                                                                                                                                                                                                           { display( temproot1 ); temproot1 = temproot1->parent_scope;    printf("%s function executed with send-type %s \n\n",(yyvsp[-8].string),(yyvsp[-9].string)); }
#line 1495 "y.tab.c"
    break;

  case 9:
#line 39 "parser.y"
                              {   if( lookup( temproot1 , (yyvsp[0].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[0].string)); exit( 0 ); } else{ func_node = insert_function( temproot1 , symbol_copy( (yyvsp[0].string) ,(yyvsp[-1].string) ,""  )  ); func_a = 1; }    temproot1 = change_scope( temproot1 ); }
#line 1501 "y.tab.c"
    break;

  case 10:
#line 39 "parser.y"
                                                                                                                                                                                                                                                                                           { func_a = 0; }
#line 1507 "y.tab.c"
    break;

  case 11:
#line 39 "parser.y"
                                                                                                                                                                                                                                                                                                                               { display( temproot1 ); temproot1 = temproot1->parent_scope;   printf("%s function executed with send-type %s \n\n",(yyvsp[-8].string),(yyvsp[-9].string));  }
#line 1513 "y.tab.c"
    break;

  case 12:
#line 42 "parser.y"
                               {strcpy((yyval.string),(yyvsp[-1].string)); printf("var type %s = %s\n",(yyvsp[-1].string),(yyvsp[0].string)); if( lookup( temproot1 , (yyvsp[0].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[0].string)); exit( 0 ); } else{  insert( temproot1 , symbol_copy( (yyvsp[0].string) ,"" ,(yyvsp[-1].string)  )  );    } }
#line 1519 "y.tab.c"
    break;

  case 13:
#line 43 "parser.y"
                               {strcpy((yyval.string),(yyvsp[-3].string)); printf("var type %s : %s = %d\n",(yyvsp[-3].string),(yyvsp[-2].string),(yyvsp[0].number)); if( lookup( temproot1 , (yyvsp[-2].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[-2].string)); exit( 0 ); } else{  insert( temproot1 , symbol_copy( (yyvsp[-2].string) ,"" ,(yyvsp[-3].string)  )  );  } }
#line 1525 "y.tab.c"
    break;

  case 14:
#line 44 "parser.y"
                               {strcpy((yyval.string),(yyvsp[-4].string)); printf("array type %s  elements %d = %s\n",(yyvsp[-4].string),(yyvsp[-1].number),(yyvsp[-3].string)); if( lookup( temproot1 , (yyvsp[-3].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[-3].string)); exit( 0 ); }   else{  insert_array( temproot1 , symbol_copy( (yyvsp[-3].string) ,"" ,(yyvsp[-4].string)  ) , (yyvsp[-1].number) );  } }
#line 1531 "y.tab.c"
    break;

  case 15:
#line 45 "parser.y"
                                                     {strcpy((yyval.string),(yyvsp[-8].string)); printf("array type %s  elements %d = %s\n",(yyvsp[-8].string),(yyvsp[-5].number),(yyvsp[-7].string)); printf("%s[%d] = {.....}\n",(yyvsp[-7].string),(yyvsp[-5].number)); if( lookup( temproot1 , (yyvsp[-7].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[-7].string)); exit( 0 ); }   else{  insert_array( temproot1 , symbol_copy( (yyvsp[-7].string) ,"" ,(yyvsp[-8].string)  ) , (yyvsp[-5].number) );  } }
#line 1537 "y.tab.c"
    break;

  case 16:
#line 46 "parser.y"
                               { printf("var type %s = %s\n",(yyval.string),(yyvsp[0].string)); if( lookup( temproot1 , (yyvsp[0].string) ) ){ printf( "variable named %s exists already", (yyvsp[0].string) ); exit(0);  }  else{ insert( temproot1 , symbol_copy( (yyvsp[0].string) ,"" ,(yyval.string)  )  ); } }
#line 1543 "y.tab.c"
    break;

  case 17:
#line 47 "parser.y"
                               { printf("var type %s : %s = %d\n",(yyval.string),(yyvsp[-2].string),(yyvsp[0].number)); if( lookup( temproot1 , (yyvsp[-2].string) ) ){ printf( "variable named %s exists already", (yyvsp[-2].string) ); exit(0);  }  else{ insert( temproot1 , symbol_copy( (yyvsp[-2].string) ,"" ,(yyval.string)  )  ); } }
#line 1549 "y.tab.c"
    break;

  case 18:
#line 48 "parser.y"
                               { printf("array type %s elements %d = %s\n",(yyval.string),(yyvsp[-1].number),(yyvsp[-3].string)); if( lookup( temproot1 , (yyvsp[-3].string) ) ){ printf( "variable named %s exists already", (yyvsp[-3].string) ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( (yyvsp[-3].string) ,"" ,(yyval.string)  ) , (yyvsp[-1].number) );   } }
#line 1555 "y.tab.c"
    break;

  case 19:
#line 49 "parser.y"
                                                     { printf("array type %s elements %d = %s\n",(yyval.string),(yyvsp[-5].number),(yyvsp[-7].string)); printf("%s[%d] = {.....}\n",(yyvsp[-7].string),(yyvsp[-5].number)); if( lookup( temproot1 , (yyvsp[-7].string) ) ){ printf( "variable named %s exists already", (yyvsp[-7].string) ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( (yyvsp[-7].string) ,"" ,(yyval.string)  ) , (yyvsp[-5].number) );   } }
#line 1561 "y.tab.c"
    break;

  case 20:
#line 54 "parser.y"
                                   {strcpy((yyval.string),(yyvsp[-1].string)); printf("var type %s = %s\n",(yyvsp[-1].string),(yyvsp[0].string)); if( lookup( temproot1 , (yyvsp[0].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[0].string)); exit( 0 ); } else{  insert( temproot1 , symbol_copy( (yyvsp[0].string) ,"" ,(yyvsp[-1].string)  )  );  if(func_a == 1){ insert_func_param( func_node , (yyvsp[-1].string) ); }   } }
#line 1567 "y.tab.c"
    break;

  case 21:
#line 55 "parser.y"
                           {strcpy((yyval.string),(yyvsp[-3].string)); printf("array type %s  = %s\n",(yyvsp[-3].string),(yyvsp[-2].string)); if( lookup( temproot1 , (yyvsp[-2].string)  ) ){ printf("Variable named %s exists already\n ",(yyvsp[-2].string)); exit( 0 ); }   else{  insert_array( temproot1 , symbol_copy( (yyvsp[-2].string) ,"" ,(yyvsp[-3].string)  ) , 1 ); if(func_a == 1){ strcat((yyvsp[-3].string), "array");  insert_func_param( func_node , (yyvsp[-3].string) ); }  } }
#line 1573 "y.tab.c"
    break;

  case 22:
#line 56 "parser.y"
                                   { printf("var type %s = %s\n",(yyval.string),(yyvsp[0].string)); if( lookup( temproot1 , (yyvsp[0].string) ) ){ printf( "variable named %s exists already", (yyvsp[0].string) ); exit(0);  }  else{ insert( temproot1 , symbol_copy( (yyvsp[0].string) ,"" ,(yyval.string)  )  ); if(func_a == 1){ insert_func_param( func_node , (yyval.string) ); } } }
#line 1579 "y.tab.c"
    break;

  case 23:
#line 57 "parser.y"
                               { printf("array type %s = %s\n",(yyval.string),(yyvsp[-2].string)); if( lookup( temproot1 , (yyvsp[-2].string) ) ){ printf( "variable named %s exists already", (yyvsp[-2].string) ); exit(0);  }  else{ insert_array( temproot1 , symbol_copy( (yyvsp[-2].string) ,"" ,(yyval.string)  ) , 1 ); if(func_a == 1){ strcat((yyval.string), "array"); insert_func_param( func_node , (yyval.string) ); }  } }
#line 1585 "y.tab.c"
    break;

  case 24:
#line 61 "parser.y"
                                                                                          {}
#line 1591 "y.tab.c"
    break;

  case 25:
#line 62 "parser.y"
                                                                                          {}
#line 1597 "y.tab.c"
    break;

  case 26:
#line 63 "parser.y"
                                                                                          {}
#line 1603 "y.tab.c"
    break;

  case 27:
#line 64 "parser.y"
                                                                                          {}
#line 1609 "y.tab.c"
    break;

  case 28:
#line 65 "parser.y"
                                        { temproot1 = change_scope( temproot1 ); }
#line 1615 "y.tab.c"
    break;

  case 29:
#line 65 "parser.y"
                                                                                                      { temproot1 = temproot1->parent_scope; }
#line 1621 "y.tab.c"
    break;

  case 30:
#line 65 "parser.y"
                                                                                                                                                                                   { display( temproot1 );  printf("only if statement executed \n"); }
#line 1627 "y.tab.c"
    break;

  case 31:
#line 67 "parser.y"
                                           { temproot1 = change_scope( temproot1 ); }
#line 1633 "y.tab.c"
    break;

  case 32:
#line 67 "parser.y"
                                                                                                                                      { display( temproot1 ); temproot1 = temproot1->parent_scope;  printf("while statement executed \n\n"); }
#line 1639 "y.tab.c"
    break;

  case 33:
#line 68 "parser.y"
                     { temproot1 = change_scope( temproot1 ); }
#line 1645 "y.tab.c"
    break;

  case 34:
#line 68 "parser.y"
                                                                                                                                     { display( temproot1 ); temproot1 = temproot1->parent_scope;  printf("for statement executed \n\n"); }
#line 1651 "y.tab.c"
    break;

  case 36:
#line 72 "parser.y"
           {temproot1 = change_scope( temproot1 );}
#line 1657 "y.tab.c"
    break;

  case 37:
#line 72 "parser.y"
                                                                              { temproot1 = temproot1->parent_scope; printf("else statement executed \n\n"); }
#line 1663 "y.tab.c"
    break;

  case 38:
#line 73 "parser.y"
      {  }
#line 1669 "y.tab.c"
    break;

  case 39:
#line 77 "parser.y"
                                                                            {   printf("return from function %d\n",(yyvsp[0].number)); }
#line 1675 "y.tab.c"
    break;

  case 40:
#line 80 "parser.y"
                   { if( !lookup_for_id( temproot1 , (yyvsp[-1].string) ) ){ printf("%s is not defined" , (yyvsp[-1].string));  exit(0); } if( leftassignvar[0] != '\0' ){ printf("%s  use of data type is incorrect and is%shemant\n",(yyvsp[-1].string),leftassignvar); exit(0); }  }
#line 1681 "y.tab.c"
    break;

  case 41:
#line 80 "parser.y"
                                                                                                                                                                                                                                                                                                 { /*  printf("%s = %d\n",$1,$3); */ }
#line 1687 "y.tab.c"
    break;

  case 42:
#line 81 "parser.y"
                   { if( !lookup_for_id( temproot1 , (yyvsp[-1].string) ) ){ printf("%s is not defined" , (yyvsp[-1].string));  exit(0); } if(leftassignvar != ""){ printf("%s  use of data type is incorrect\n",(yyvsp[-1].string)); exit(0); } }
#line 1693 "y.tab.c"
    break;

  case 43:
#line 81 "parser.y"
                                                                                                                                                                                                                                             { /*printf("%s = send of %s\n",$1,$6);*/ }
#line 1699 "y.tab.c"
    break;

  case 44:
#line 82 "parser.y"
                               { if( !lookup_for_id( temproot1 , (yyvsp[-4].string) ) ){ printf("%s is not defined" , (yyvsp[-4].string));  exit(0); } if(leftassignvar != "array"){ printf("%s  use of data type is incorrect\n",(yyvsp[-4].string)); exit(0); }  }
#line 1705 "y.tab.c"
    break;

  case 45:
#line 82 "parser.y"
                                                                                                                                                                                                                                                                  {/* printf("%s[%d] = %d\n",$1,$3,$6); */    printf("%s[%d] \n",(yyvsp[-6].string),(yyvsp[-4].number));    }
#line 1711 "y.tab.c"
    break;

  case 46:
#line 83 "parser.y"
                                                                            { if( !lookup_for_id( temproot1 , (yyvsp[-12].string) ) ){ printf("%s is not defined" , (yyvsp[-12].string));  exit(0); } if(leftassignvar != "array"){ printf("%s  use of data type is incorrect\n",(yyvsp[-12].string)); exit(0); }  printf("%s[%d] = send of %s\n",(yyvsp[-12].string),(yyvsp[-10].number),(yyvsp[-4].string)); }
#line 1717 "y.tab.c"
    break;

  case 47:
#line 86 "parser.y"
                              { printf("number %d added in array\n",(yyvsp[0].number)); }
#line 1723 "y.tab.c"
    break;

  case 48:
#line 87 "parser.y"
                              { printf("number %d added in array\n",(yyvsp[0].number)); }
#line 1729 "y.tab.c"
    break;

  case 49:
#line 90 "parser.y"
                              { printf("number %d added as parameter\n",(yyvsp[0].number)); }
#line 1735 "y.tab.c"
    break;

  case 50:
#line 91 "parser.y"
                              { printf("number %d added as parameter\n",(yyvsp[0].number)); }
#line 1741 "y.tab.c"
    break;

  case 51:
#line 94 "parser.y"
                              { (yyval.number) = (yyvsp[0].number); }
#line 1747 "y.tab.c"
    break;

  case 52:
#line 95 "parser.y"
                              { (yyval.number) = 0; if( !lookup_func_id( temproot1 , (yyvsp[0].string) ) ){ printf("%s is not defined" , (yyvsp[0].string));  exit(0); } printf("id in arithmetic expr = %s\n",(yyvsp[0].string)); }
#line 1753 "y.tab.c"
    break;

  case 53:
#line 96 "parser.y"
                              { (yyval.number) = (yyvsp[-2].number) + (yyvsp[0].number); printf("%d + %d\n",(yyvsp[-2].number),(yyvsp[0].number)); }
#line 1759 "y.tab.c"
    break;

  case 54:
#line 97 "parser.y"
                              { (yyval.number) = (yyvsp[-2].number) - (yyvsp[0].number); printf("%d - %d\n",(yyvsp[-2].number),(yyvsp[0].number)); }
#line 1765 "y.tab.c"
    break;

  case 55:
#line 98 "parser.y"
                              { (yyval.number) = (yyvsp[-2].number) * (yyvsp[0].number); printf("%d * %d\n",(yyvsp[-2].number),(yyvsp[0].number)); }
#line 1771 "y.tab.c"
    break;

  case 56:
#line 99 "parser.y"
                              { (yyval.number) = (yyvsp[-2].number) / (yyvsp[0].number); printf("%d / %d\n",(yyvsp[-2].number),(yyvsp[0].number)); }
#line 1777 "y.tab.c"
    break;

  case 57:
#line 100 "parser.y"
                              { (yyval.number) =  (yyvsp[-1].number); printf("( %d )\n",(yyvsp[-1].number)); }
#line 1783 "y.tab.c"
    break;

  case 58:
#line 103 "parser.y"
                                      { (yyval.number) = (yyvsp[0].number); }
#line 1789 "y.tab.c"
    break;

  case 59:
#line 104 "parser.y"
                                      { (yyval.number) = 1; if( !lookup_for_id( temproot1 , (yyvsp[0].string) ) ){ printf("%s is not defined" , (yyvsp[0].string));  exit(0); } printf("id in logical expression = %s\n",(yyvsp[0].string)); }
#line 1795 "y.tab.c"
    break;

  case 60:
#line 105 "parser.y"
                                      { if((yyvsp[-2].number)<(yyvsp[0].number)){(yyval.number)=1;}else{(yyval.number)=0;} printf("%d < %d\n",(yyvsp[-2].number),(yyvsp[0].number)); }
#line 1801 "y.tab.c"
    break;

  case 61:
#line 106 "parser.y"
                                      { if((yyvsp[-2].number)>(yyvsp[0].number)){(yyval.number)=1;}else{(yyval.number)=0;} printf("%d > %d\n",(yyvsp[-2].number),(yyvsp[0].number)); }
#line 1807 "y.tab.c"
    break;

  case 62:
#line 107 "parser.y"
                                      { (yyval.number) =  (yyvsp[-1].number); printf("( %d )\n",(yyvsp[-1].number)); }
#line 1813 "y.tab.c"
    break;


#line 1817 "y.tab.c"

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
#line 111 "parser.y"


//#include "symboltable.c"
//extern struct Scope_node* root ;
//extern struct Scope_node* temproot;
int main(int argc,char *argv[]){
  initialize_sym();
  yyparse();
  display( temproot1 );
  return 0;
}

int yyerror(char *s){
  printf("\n\nError: %s \n",s);
  yydebug=0;
  return 0;
}
