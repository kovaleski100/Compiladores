/* A Bison parser, made by GNU Bison 3.8.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30800

/* Bison version string.  */
#define YYBISON_VERSION "3.8"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 9 "parser.y"

#include "tree.h"
#include "hash.h"
#include "stack.h"
#include "semantic_check.h"
#include "iloc.h"
#include "code.h"

extern int current_line_number;
extern tree *arvore;
extern stack *pilha;
stack* scope = NULL;

int yylex(void);
void yyerror (char const *s);

#line 88 "parser.tab.c"

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

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_PR_INT = 3,                  /* TK_PR_INT  */
  YYSYMBOL_TK_PR_FLOAT = 4,                /* TK_PR_FLOAT  */
  YYSYMBOL_TK_PR_BOOL = 5,                 /* TK_PR_BOOL  */
  YYSYMBOL_TK_PR_CHAR = 6,                 /* TK_PR_CHAR  */
  YYSYMBOL_TK_PR_STRING = 7,               /* TK_PR_STRING  */
  YYSYMBOL_TK_PR_IF = 8,                   /* TK_PR_IF  */
  YYSYMBOL_TK_PR_THEN = 9,                 /* TK_PR_THEN  */
  YYSYMBOL_TK_PR_ELSE = 10,                /* TK_PR_ELSE  */
  YYSYMBOL_TK_PR_WHILE = 11,               /* TK_PR_WHILE  */
  YYSYMBOL_TK_PR_DO = 12,                  /* TK_PR_DO  */
  YYSYMBOL_TK_PR_INPUT = 13,               /* TK_PR_INPUT  */
  YYSYMBOL_TK_PR_OUTPUT = 14,              /* TK_PR_OUTPUT  */
  YYSYMBOL_TK_PR_RETURN = 15,              /* TK_PR_RETURN  */
  YYSYMBOL_TK_PR_CONST = 16,               /* TK_PR_CONST  */
  YYSYMBOL_TK_PR_STATIC = 17,              /* TK_PR_STATIC  */
  YYSYMBOL_TK_PR_FOREACH = 18,             /* TK_PR_FOREACH  */
  YYSYMBOL_TK_PR_FOR = 19,                 /* TK_PR_FOR  */
  YYSYMBOL_TK_PR_SWITCH = 20,              /* TK_PR_SWITCH  */
  YYSYMBOL_TK_PR_CASE = 21,                /* TK_PR_CASE  */
  YYSYMBOL_TK_PR_BREAK = 22,               /* TK_PR_BREAK  */
  YYSYMBOL_TK_PR_CONTINUE = 23,            /* TK_PR_CONTINUE  */
  YYSYMBOL_TK_PR_CLASS = 24,               /* TK_PR_CLASS  */
  YYSYMBOL_TK_PR_PRIVATE = 25,             /* TK_PR_PRIVATE  */
  YYSYMBOL_TK_PR_PUBLIC = 26,              /* TK_PR_PUBLIC  */
  YYSYMBOL_TK_PR_PROTECTED = 27,           /* TK_PR_PROTECTED  */
  YYSYMBOL_TK_PR_END = 28,                 /* TK_PR_END  */
  YYSYMBOL_TK_PR_DEFAULT = 29,             /* TK_PR_DEFAULT  */
  YYSYMBOL_TK_OC_LE = 30,                  /* TK_OC_LE  */
  YYSYMBOL_TK_OC_GE = 31,                  /* TK_OC_GE  */
  YYSYMBOL_TK_OC_EQ = 32,                  /* TK_OC_EQ  */
  YYSYMBOL_TK_OC_NE = 33,                  /* TK_OC_NE  */
  YYSYMBOL_TK_OC_AND = 34,                 /* TK_OC_AND  */
  YYSYMBOL_TK_OC_OR = 35,                  /* TK_OC_OR  */
  YYSYMBOL_TK_OC_SL = 36,                  /* TK_OC_SL  */
  YYSYMBOL_TK_OC_SR = 37,                  /* TK_OC_SR  */
  YYSYMBOL_TK_LIT_INT = 38,                /* TK_LIT_INT  */
  YYSYMBOL_TK_LIT_FLOAT = 39,              /* TK_LIT_FLOAT  */
  YYSYMBOL_TK_LIT_FALSE = 40,              /* TK_LIT_FALSE  */
  YYSYMBOL_TK_LIT_TRUE = 41,               /* TK_LIT_TRUE  */
  YYSYMBOL_TK_LIT_CHAR = 42,               /* TK_LIT_CHAR  */
  YYSYMBOL_TK_LIT_STRING = 43,             /* TK_LIT_STRING  */
  YYSYMBOL_TK_IDENTIFICADOR = 44,          /* TK_IDENTIFICADOR  */
  YYSYMBOL_TOKEN_ERRO = 45,                /* TOKEN_ERRO  */
  YYSYMBOL_46_ = 46,                       /* ')'  */
  YYSYMBOL_47_ = 47,                       /* '('  */
  YYSYMBOL_48_ = 48,                       /* ']'  */
  YYSYMBOL_49_ = 49,                       /* '['  */
  YYSYMBOL_50_ = 50,                       /* '}'  */
  YYSYMBOL_51_ = 51,                       /* '{'  */
  YYSYMBOL_52_ = 52,                       /* '-'  */
  YYSYMBOL_53_ = 53,                       /* '+'  */
  YYSYMBOL_54_ = 54,                       /* '?'  */
  YYSYMBOL_55_ = 55,                       /* '*'  */
  YYSYMBOL_56_ = 56,                       /* '/'  */
  YYSYMBOL_57_ = 57,                       /* '|'  */
  YYSYMBOL_58_ = 58,                       /* '>'  */
  YYSYMBOL_59_ = 59,                       /* '<'  */
  YYSYMBOL_60_ = 60,                       /* '!'  */
  YYSYMBOL_61_ = 61,                       /* '='  */
  YYSYMBOL_62_ = 62,                       /* '&'  */
  YYSYMBOL_63_ = 63,                       /* '%'  */
  YYSYMBOL_64_ = 64,                       /* '#'  */
  YYSYMBOL_65_ = 65,                       /* '^'  */
  YYSYMBOL_66_ = 66,                       /* '$'  */
  YYSYMBOL_67_ = 67,                       /* ','  */
  YYSYMBOL_68_ = 68,                       /* ';'  */
  YYSYMBOL_69_ = 69,                       /* ':'  */
  YYSYMBOL_70_ = 70,                       /* '.'  */
  YYSYMBOL_YYACCEPT = 71,                  /* $accept  */
  YYSYMBOL_program = 72,                   /* program  */
  YYSYMBOL_declaration = 73,               /* declaration  */
  YYSYMBOL_init_scope = 74,                /* init_scope  */
  YYSYMBOL_enter_scope = 75,               /* enter_scope  */
  YYSYMBOL_leave_scope = 76,               /* leave_scope  */
  YYSYMBOL_block = 77,                     /* block  */
  YYSYMBOL_inside_block = 78,              /* inside_block  */
  YYSYMBOL_command = 79,                   /* command  */
  YYSYMBOL_command_without_comma = 80,     /* command_without_comma  */
  YYSYMBOL_command_list = 81,              /* command_list  */
  YYSYMBOL_input = 82,                     /* input  */
  YYSYMBOL_output = 83,                    /* output  */
  YYSYMBOL_assignment = 84,                /* assignment  */
  YYSYMBOL_shift = 85,                     /* shift  */
  YYSYMBOL_if_stmt = 86,                   /* if_stmt  */
  YYSYMBOL_for_loop = 87,                  /* for_loop  */
  YYSYMBOL_while_loop = 88,                /* while_loop  */
  YYSYMBOL_return_stmt = 89,               /* return_stmt  */
  YYSYMBOL_break_stmt = 90,                /* break_stmt  */
  YYSYMBOL_continue_stmt = 91,             /* continue_stmt  */
  YYSYMBOL_global_var_decl = 92,           /* global_var_decl  */
  YYSYMBOL_global_var = 93,                /* global_var  */
  YYSYMBOL_int_indexer = 94,               /* int_indexer  */
  YYSYMBOL_local_var_decl = 95,            /* local_var_decl  */
  YYSYMBOL_local_var = 96,                 /* local_var  */
  YYSYMBOL_function_decl = 97,             /* function_decl  */
  YYSYMBOL_98_1 = 98,                      /* $@1  */
  YYSYMBOL_99_2 = 99,                      /* $@2  */
  YYSYMBOL_typed_argument = 100,           /* typed_argument  */
  YYSYMBOL_typed_argument_list = 101,      /* typed_argument_list  */
  YYSYMBOL_function_call = 102,            /* function_call  */
  YYSYMBOL_argument_list = 103,            /* argument_list  */
  YYSYMBOL_expression = 104,               /* expression  */
  YYSYMBOL_expression_list = 105,          /* expression_list  */
  YYSYMBOL_id = 106,                       /* id  */
  YYSYMBOL_array = 107,                    /* array  */
  YYSYMBOL_indexer = 108,                  /* indexer  */
  YYSYMBOL_value = 109,                    /* value  */
  YYSYMBOL_type = 110,                     /* type  */
  YYSYMBOL_literal = 111                   /* literal  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYLAST   638

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  128
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  220

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    60,     2,    64,    66,    63,    62,     2,
      47,    46,    55,    53,    67,    52,    70,    56,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    69,    68,
      59,    61,    58,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    49,     2,    48,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    51,    57,    50,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   132,   132,   133,   137,   138,   139,   140,   145,   149,
     153,   157,   158,   162,   163,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   197,
     198,   203,   207,   212,   213,   217,   218,   219,   220,   225,
     226,   230,   234,   239,   243,   247,   252,   253,   257,   258,
     262,   263,   268,   269,   270,   271,   275,   276,   277,   282,
     282,   283,   283,   287,   288,   289,   293,   294,   299,   303,
     304,   305,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   339,   340,
     345,   349,   353,   354,   358,   359,   360,   361,   365,   366,
     367,   368,   369,   373,   374,   375,   376,   377,   378
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TK_PR_INT",
  "TK_PR_FLOAT", "TK_PR_BOOL", "TK_PR_CHAR", "TK_PR_STRING", "TK_PR_IF",
  "TK_PR_THEN", "TK_PR_ELSE", "TK_PR_WHILE", "TK_PR_DO", "TK_PR_INPUT",
  "TK_PR_OUTPUT", "TK_PR_RETURN", "TK_PR_CONST", "TK_PR_STATIC",
  "TK_PR_FOREACH", "TK_PR_FOR", "TK_PR_SWITCH", "TK_PR_CASE",
  "TK_PR_BREAK", "TK_PR_CONTINUE", "TK_PR_CLASS", "TK_PR_PRIVATE",
  "TK_PR_PUBLIC", "TK_PR_PROTECTED", "TK_PR_END", "TK_PR_DEFAULT",
  "TK_OC_LE", "TK_OC_GE", "TK_OC_EQ", "TK_OC_NE", "TK_OC_AND", "TK_OC_OR",
  "TK_OC_SL", "TK_OC_SR", "TK_LIT_INT", "TK_LIT_FLOAT", "TK_LIT_FALSE",
  "TK_LIT_TRUE", "TK_LIT_CHAR", "TK_LIT_STRING", "TK_IDENTIFICADOR",
  "TOKEN_ERRO", "')'", "'('", "']'", "'['", "'}'", "'{'", "'-'", "'+'",
  "'?'", "'*'", "'/'", "'|'", "'>'", "'<'", "'!'", "'='", "'&'", "'%'",
  "'#'", "'^'", "'$'", "','", "';'", "':'", "'.'", "$accept", "program",
  "declaration", "init_scope", "enter_scope", "leave_scope", "block",
  "inside_block", "command", "command_without_comma", "command_list",
  "input", "output", "assignment", "shift", "if_stmt", "for_loop",
  "while_loop", "return_stmt", "break_stmt", "continue_stmt",
  "global_var_decl", "global_var", "int_indexer", "local_var_decl",
  "local_var", "function_decl", "$@1", "$@2", "typed_argument",
  "typed_argument_list", "function_call", "argument_list", "expression",
  "expression_list", "id", "array", "indexer", "value", "type", "literal", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-53)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-3)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      13,    21,   109,   -53,   -53,   -53,   -53,   -53,   -53,   184,
     109,   -53,   -28,   -53,   -11,   -21,   -11,   -53,   -53,   -53,
     -53,   -27,   -53,   -22,   144,   169,   -53,   144,   184,   -53,
      18,   -11,   -53,   -53,   -53,   -53,   -53,   -53,   -18,    32,
     -11,   -53,   144,   -53,    30,   -53,   -53,   -53,   -53,   -53,
     -53,   -16,   -16,    38,   -53,   -53,    33,    37,   574,   574,
     574,   184,   149,    58,   -53,   -53,   -53,   -53,    43,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -13,    -5,   -11,   -53,   -53,   574,   574,
     574,   574,   574,   574,   574,   574,   574,   574,   -53,   446,
      34,   -53,   -53,   -53,   446,    51,   446,   -53,   184,   -53,
     117,    87,   574,   574,   574,   574,   574,   -53,   574,   574,
     574,    97,   302,   338,   374,   150,   150,   446,    70,   -53,
     546,   -53,   574,   574,   574,   574,   574,   574,   574,   574,
     574,   574,   574,   574,   574,   574,   574,   574,   574,   574,
     -53,   -53,   -53,    50,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,     1,   -53,   -53,   446,   446,    40,
     446,   410,   446,   446,   446,   446,   211,   -16,   129,   -53,
     130,   130,   322,   322,   496,   460,   150,   150,   213,    70,
      70,   510,   130,   130,   546,    70,   -53,   446,   117,   574,
     -53,   574,    93,   -53,   -53,   135,   -16,   574,   -53,   262,
     446,   -53,   -16,   -53,   446,   117,   -53,    41,   -16,   -53
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,     0,     0,     1,   118,   119,   120,   121,   122,     0,
       3,     4,     0,     5,     0,     0,     0,     6,     7,    56,
     110,    58,    57,    58,    73,     0,    59,    73,     0,    76,
       0,     0,   123,   124,   125,   126,   127,   128,     0,     0,
       0,    69,    73,    74,    60,    71,    75,     9,    77,    61,
       9,     0,     0,     0,    10,    10,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    11,    27,     0,    13,
      18,    19,    16,    17,    21,    22,    23,    24,    25,    26,
      15,    62,    20,     0,     0,     0,    70,    72,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,    41,
     115,   116,    82,   114,   108,    42,    53,    64,     0,    63,
       0,     0,     0,     0,    79,     0,     0,   111,     0,     0,
       0,    66,     0,     0,     0,    85,    84,    89,    88,    86,
      87,    90,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      65,    38,    39,     0,    31,    29,    30,    32,    33,    34,
      35,    36,    37,    28,     0,    12,    14,    45,    46,     0,
      80,     0,    43,    47,    48,    44,     0,     0,     0,    83,
     102,   103,   104,   105,   106,   107,    92,    91,     0,    93,
      94,    97,   101,   100,    98,    96,    95,   109,     0,     0,
      78,     0,   112,    67,    68,    49,     0,     0,    40,     0,
      81,   113,     0,    52,    99,     0,    50,     0,     0,    51
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -53,   -53,   -53,   -53,   116,   104,   -48,   -53,    56,   -29,
     -23,   -46,   -53,   -45,   -44,   -43,   -42,   -41,   -39,   -38,
     -37,   161,   185,   170,   -35,   -33,   225,   -53,   -53,   194,
     210,   -34,   -53,    84,   -53,   -14,   -52,    36,   -53,   232,
     -19
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,    10,     2,    51,    86,   151,    68,    69,   152,
     153,   154,    71,   155,   156,   157,   158,   159,   160,   161,
     162,    11,    12,    26,   163,    81,    13,    47,    50,    29,
      30,    98,   169,    99,   105,   100,   101,   117,   102,    85,
     103
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      21,    84,    23,    54,    55,    67,    38,    70,    72,    73,
      74,    75,    76,    -2,    77,    78,    79,    43,    80,    82,
      24,     3,    25,   112,   113,    27,    46,    25,   107,   109,
      44,   118,   119,    20,   114,    53,   115,   112,   113,    83,
      19,     4,     5,     6,     7,     8,    56,    22,   116,    57,
     115,    58,    59,    60,    61,    62,   120,    63,    84,    84,
      64,    65,   116,    67,    41,    70,    72,    73,    74,    75,
      76,   121,    77,    78,    79,   150,    80,    82,    45,    25,
      88,   114,    20,   115,    89,    42,   200,   218,    66,    53,
       4,     5,     6,     7,     8,    56,   164,    83,    57,    42,
      58,    59,    60,    61,    62,   110,    63,   201,   198,    64,
      65,   111,     4,     5,     6,     7,     8,   198,   149,   199,
       4,     5,     6,     7,     8,    56,     9,   176,    57,   205,
      58,    20,    60,    61,    62,   148,    63,   165,    53,    64,
      65,   206,   115,   104,   106,   212,    84,     4,     5,     6,
       7,     8,     4,     5,     6,     7,     8,   204,   213,    87,
      28,    20,   203,    84,   216,   108,    52,   166,    53,   208,
     219,    17,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   138,   139,   164,   141,   142,     4,     5,     6,
       7,     8,   217,   147,    15,   148,   167,   168,   170,   171,
     172,   164,   173,   174,   175,   141,   142,    32,    33,    34,
      35,    36,    37,   147,    49,   148,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,    14,    18,    48,    39,   211,     0,
       0,    16,    14,   132,   133,   134,   135,   136,   137,    32,
      33,    34,    35,    36,    37,    20,    31,     0,     0,    31,
      40,     0,     0,     0,     0,   138,   139,   140,   141,   142,
     143,   144,   145,     0,    31,   146,   147,     0,   148,     0,
       0,     0,   207,   209,     0,   210,     0,     0,     0,     0,
       0,   214,   132,   133,   134,   135,   136,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   138,   139,   140,   141,   142,   143,
     144,   145,     0,     0,   146,   147,     0,   148,     0,     0,
       0,   215,   132,   133,   134,   135,   136,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   177,     0,
       0,     0,   132,   133,   138,   139,   140,   141,   142,   143,
     144,   145,     0,     0,   146,   147,     0,   148,   132,   133,
     134,   135,   136,   137,   138,   139,     0,   141,   142,     0,
     144,   145,     0,     0,   178,   147,     0,   148,     0,     0,
     138,   139,   140,   141,   142,   143,   144,   145,     0,     0,
     146,   147,     0,   148,   132,   133,   134,   135,   136,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     179,     0,     0,     0,     0,     0,   138,   139,   140,   141,
     142,   143,   144,   145,     0,     0,   146,   147,     0,   148,
     132,   133,   134,   135,   136,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   202,     0,
       0,     0,   138,   139,   140,   141,   142,   143,   144,   145,
       0,     0,   146,   147,     0,   148,   132,   133,   134,   135,
     136,   137,     0,     0,     0,     0,     0,     0,     0,     0,
     132,   133,   134,   135,   136,     0,     0,     0,   138,   139,
     140,   141,   142,   143,   144,   145,     0,     0,   146,   147,
       0,   148,   138,   139,     0,   141,   142,   143,   144,   145,
       0,     0,   146,   147,     0,   148,   132,   133,   134,   135,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     132,   133,   134,   135,     0,     0,     0,     0,   138,   139,
       0,   141,   142,   143,   144,   145,     0,     0,   146,   147,
       0,   148,   138,   139,     0,   141,   142,     0,   144,   145,
       0,     0,   146,   147,     0,   148,   132,   133,   134,   135,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   138,   139,
       0,   141,   142,     0,   144,   145,     0,     0,     0,   147,
       0,   148,    32,    33,    34,    35,    36,    37,    20,     0,
       0,    90,     0,     0,     0,     0,    91,    92,    93,    94,
       0,     0,     0,     0,    95,     0,    96,     0,    97
};

static const yytype_int16 yycheck[] =
{
      14,    53,    16,    51,    52,    53,    25,    53,    53,    53,
      53,    53,    53,     0,    53,    53,    53,    31,    53,    53,
      47,     0,    49,    36,    37,    47,    40,    49,    61,    62,
      48,    36,    37,    44,    47,    51,    49,    36,    37,    53,
      68,     3,     4,     5,     6,     7,     8,    68,    61,    11,
      49,    13,    14,    15,    16,    17,    61,    19,   110,   111,
      22,    23,    61,   111,    46,   111,   111,   111,   111,   111,
     111,    85,   111,   111,   111,   108,   111,   111,    46,    49,
      47,    47,    44,    49,    47,    67,    46,    46,    50,    51,
       3,     4,     5,     6,     7,     8,   110,   111,    11,    67,
      13,    14,    15,    16,    17,    47,    19,    67,    67,    22,
      23,    68,     3,     4,     5,     6,     7,    67,    67,    69,
       3,     4,     5,     6,     7,     8,    17,    30,    11,   177,
      13,    44,    15,    16,    17,    65,    19,    50,    51,    22,
      23,    12,    49,    59,    60,    10,   198,     3,     4,     5,
       6,     7,     3,     4,     5,     6,     7,   176,   206,    55,
      16,    44,   176,   215,   212,    16,    50,   111,    51,   198,
     218,    10,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    52,    53,   198,    55,    56,     3,     4,     5,
       6,     7,   215,    63,     9,    65,   112,   113,   114,   115,
     116,   215,   118,   119,   120,    55,    56,    38,    39,    40,
      41,    42,    43,    63,    44,    65,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,     2,    10,    42,    27,   202,    -1,
      -1,     9,    10,    30,    31,    32,    33,    34,    35,    38,
      39,    40,    41,    42,    43,    44,    24,    -1,    -1,    27,
      28,    -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    -1,    42,    62,    63,    -1,    65,    -1,
      -1,    -1,    69,   199,    -1,   201,    -1,    -1,    -1,    -1,
      -1,   207,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    -1,    62,    63,    -1,    65,    -1,    -1,
      -1,    69,    30,    31,    32,    33,    34,    35,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    30,    31,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    -1,    62,    63,    -1,    65,    30,    31,
      32,    33,    34,    35,    52,    53,    -1,    55,    56,    -1,
      58,    59,    -1,    -1,    46,    63,    -1,    65,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
      62,    63,    -1,    65,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    -1,    62,    63,    -1,    65,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    62,    63,    -1,    65,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    62,    63,
      -1,    65,    52,    53,    -1,    55,    56,    57,    58,    59,
      -1,    -1,    62,    63,    -1,    65,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    52,    53,
      -1,    55,    56,    57,    58,    59,    -1,    -1,    62,    63,
      -1,    65,    52,    53,    -1,    55,    56,    -1,    58,    59,
      -1,    -1,    62,    63,    -1,    65,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    52,    53,
      -1,    55,    56,    -1,    58,    59,    -1,    -1,    -1,    63,
      -1,    65,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    52,    53,    54,    55,
      -1,    -1,    -1,    -1,    60,    -1,    62,    -1,    64
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    72,    74,     0,     3,     4,     5,     6,     7,    17,
      73,    92,    93,    97,   110,    93,   110,    92,    97,    68,
      44,   106,    68,   106,    47,    49,    94,    47,    16,   100,
     101,   110,    38,    39,    40,    41,    42,    43,   111,   101,
     110,    46,    67,   106,    48,    46,   106,    98,   100,    94,
      99,    75,    75,    51,    77,    77,     8,    11,    13,    14,
      15,    16,    17,    19,    22,    23,    50,    77,    78,    79,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      95,    96,   102,   106,   107,   110,    76,    76,    47,    47,
      47,    52,    53,    54,    55,    60,    62,    64,   102,   104,
     106,   107,   109,   111,   104,   105,   104,    96,    16,    96,
      47,    68,    36,    37,    47,    49,    61,   108,    36,    37,
      61,   106,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,    30,    31,    32,    33,    34,    35,    52,    53,
      54,    55,    56,    57,    58,    59,    62,    63,    65,    67,
      96,    77,    80,    81,    82,    84,    85,    86,    87,    88,
      89,    90,    91,    95,   106,    50,    79,   104,   104,   103,
     104,   104,   104,   104,   104,   104,    30,    46,    46,    46,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,    67,    69,
      46,    67,    48,   106,   111,    77,    12,    69,    80,   104,
     104,   108,    10,    77,   104,    69,    77,    81,    46,    77
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    72,    73,    73,    73,    73,    74,    75,
      76,    77,    77,    78,    78,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    81,
      81,    82,    83,    84,    84,    85,    85,    85,    85,    86,
      86,    87,    88,    89,    90,    91,    92,    92,    93,    93,
      94,    94,    95,    95,    95,    95,    96,    96,    96,    98,
      97,    99,    97,   100,   100,   100,   101,   101,   102,   103,
     103,   103,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   105,   105,
     106,   107,   108,   108,   109,   109,   109,   109,   110,   110,
     110,   110,   110,   111,   111,   111,   111,   111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     2,     2,     0,     0,
       0,     2,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     2,     2,     3,     3,     3,     3,     3,     3,     5,
       7,     9,     6,     2,     1,     1,     2,     3,     2,     3,
       3,     4,     1,     2,     2,     3,     2,     4,     4,     0,
       9,     0,    10,     0,     2,     3,     1,     3,     4,     0,
       1,     3,     1,     3,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     5,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       1,     2,     3,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
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
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: %empty  */
#line 132 "parser.y"
           {(yyval.ast) = NULL;}
#line 1429 "parser.tab.c"
    break;

  case 3: /* program: init_scope declaration  */
#line 133 "parser.y"
                           {arvore = (yyvsp[0].ast); destroyStack(scope); print_code(arvore);}
#line 1435 "parser.tab.c"
    break;

  case 4: /* declaration: global_var_decl  */
#line 137 "parser.y"
                    {(yyval.ast) = NULL;}
#line 1441 "parser.tab.c"
    break;

  case 5: /* declaration: function_decl  */
#line 138 "parser.y"
                  {(yyval.ast) = (yyvsp[0].ast);}
#line 1447 "parser.tab.c"
    break;

  case 6: /* declaration: declaration global_var_decl  */
#line 139 "parser.y"
                                {(yyval.ast) = (yyvsp[-1].ast);}
#line 1453 "parser.tab.c"
    break;

  case 7: /* declaration: declaration function_decl  */
#line 140 "parser.y"
                              {(yyval.ast) = chain_ast((yyvsp[-1].ast), (yyvsp[0].ast));}
#line 1459 "parser.tab.c"
    break;

  case 8: /* init_scope: %empty  */
#line 145 "parser.y"
           {if (scope == NULL) {push(&scope, create_table(GLOBAL_SCOPE));}}
#line 1465 "parser.tab.c"
    break;

  case 9: /* enter_scope: %empty  */
#line 149 "parser.y"
           {push(&scope, create_table(LOCAL_SCOPE));}
#line 1471 "parser.tab.c"
    break;

  case 10: /* leave_scope: %empty  */
#line 153 "parser.y"
           {pop(&scope);}
#line 1477 "parser.tab.c"
    break;

  case 11: /* block: '{' '}'  */
#line 157 "parser.y"
            {(yyval.ast) = new_ast(0);}
#line 1483 "parser.tab.c"
    break;

  case 12: /* block: '{' inside_block ';' '}'  */
#line 158 "parser.y"
                             {(yyval.ast) = new_ast(1, (yyvsp[-2].ast)); (yyval.ast)->code = (yyvsp[-2].ast)->code;}
#line 1489 "parser.tab.c"
    break;

  case 13: /* inside_block: command  */
#line 162 "parser.y"
            {(yyval.ast) = (yyvsp[0].ast);}
#line 1495 "parser.tab.c"
    break;

  case 14: /* inside_block: inside_block ';' command  */
#line 163 "parser.y"
                             {(yyval.ast) = chain_ast((yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1501 "parser.tab.c"
    break;

  case 15: /* command: local_var_decl  */
#line 167 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1507 "parser.tab.c"
    break;

  case 16: /* command: assignment  */
#line 168 "parser.y"
               {(yyval.ast) = (yyvsp[0].ast);}
#line 1513 "parser.tab.c"
    break;

  case 17: /* command: shift  */
#line 169 "parser.y"
          {(yyval.ast) = (yyvsp[0].ast);}
#line 1519 "parser.tab.c"
    break;

  case 18: /* command: input  */
#line 170 "parser.y"
          {(yyval.ast) = (yyvsp[0].ast);}
#line 1525 "parser.tab.c"
    break;

  case 19: /* command: output  */
#line 171 "parser.y"
           {(yyval.ast) = (yyvsp[0].ast);}
#line 1531 "parser.tab.c"
    break;

  case 20: /* command: function_call  */
#line 172 "parser.y"
                  {(yyval.ast) = (yyvsp[0].ast);}
#line 1537 "parser.tab.c"
    break;

  case 21: /* command: if_stmt  */
#line 173 "parser.y"
            {(yyval.ast) = (yyvsp[0].ast);}
#line 1543 "parser.tab.c"
    break;

  case 22: /* command: for_loop  */
#line 174 "parser.y"
             {(yyval.ast) = (yyvsp[0].ast);}
#line 1549 "parser.tab.c"
    break;

  case 23: /* command: while_loop  */
#line 175 "parser.y"
               {(yyval.ast) = (yyvsp[0].ast);}
#line 1555 "parser.tab.c"
    break;

  case 24: /* command: return_stmt  */
#line 176 "parser.y"
                {(yyval.ast) = (yyvsp[0].ast);}
#line 1561 "parser.tab.c"
    break;

  case 25: /* command: break_stmt  */
#line 177 "parser.y"
               {(yyval.ast) = (yyvsp[0].ast);}
#line 1567 "parser.tab.c"
    break;

  case 26: /* command: continue_stmt  */
#line 178 "parser.y"
                  {(yyval.ast) = (yyvsp[0].ast);}
#line 1573 "parser.tab.c"
    break;

  case 27: /* command: block  */
#line 179 "parser.y"
          {(yyval.ast) = (yyvsp[0].ast);}
#line 1579 "parser.tab.c"
    break;

  case 28: /* command_without_comma: local_var_decl  */
#line 183 "parser.y"
                   {(yyval.ast) = (yyvsp[0].ast);}
#line 1585 "parser.tab.c"
    break;

  case 29: /* command_without_comma: assignment  */
#line 184 "parser.y"
               {(yyval.ast) = (yyvsp[0].ast);}
#line 1591 "parser.tab.c"
    break;

  case 30: /* command_without_comma: shift  */
#line 185 "parser.y"
          {(yyval.ast) = (yyvsp[0].ast);}
#line 1597 "parser.tab.c"
    break;

  case 31: /* command_without_comma: input  */
#line 186 "parser.y"
          {(yyval.ast) = (yyvsp[0].ast);}
#line 1603 "parser.tab.c"
    break;

  case 32: /* command_without_comma: if_stmt  */
#line 187 "parser.y"
            {(yyval.ast) = (yyvsp[0].ast);}
#line 1609 "parser.tab.c"
    break;

  case 33: /* command_without_comma: for_loop  */
#line 188 "parser.y"
             {(yyval.ast) = (yyvsp[0].ast);}
#line 1615 "parser.tab.c"
    break;

  case 34: /* command_without_comma: while_loop  */
#line 189 "parser.y"
               {(yyval.ast) = (yyvsp[0].ast);}
#line 1621 "parser.tab.c"
    break;

  case 35: /* command_without_comma: return_stmt  */
#line 190 "parser.y"
                {(yyval.ast) = (yyvsp[0].ast);}
#line 1627 "parser.tab.c"
    break;

  case 36: /* command_without_comma: break_stmt  */
#line 191 "parser.y"
               {(yyval.ast) = (yyvsp[0].ast);}
#line 1633 "parser.tab.c"
    break;

  case 37: /* command_without_comma: continue_stmt  */
#line 192 "parser.y"
                  {(yyval.ast) = (yyvsp[0].ast);}
#line 1639 "parser.tab.c"
    break;

  case 38: /* command_without_comma: block  */
#line 193 "parser.y"
          {(yyval.ast) = (yyvsp[0].ast);}
#line 1645 "parser.tab.c"
    break;

  case 39: /* command_list: command_without_comma  */
#line 197 "parser.y"
                          {(yyval.ast) = (yyvsp[0].ast);}
#line 1651 "parser.tab.c"
    break;

  case 40: /* command_list: command_list ',' command_without_comma  */
#line 198 "parser.y"
                                           {(yyval.ast) = chain_ast((yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1657 "parser.tab.c"
    break;

  case 41: /* input: TK_PR_INPUT expression  */
#line 203 "parser.y"
                           {input_type_check(scope, (yyvsp[0].ast)); libera((yyvsp[0].ast)); (yyval.ast) = NULL;}
#line 1663 "parser.tab.c"
    break;

  case 42: /* output: TK_PR_OUTPUT expression_list  */
#line 207 "parser.y"
                                 {output_type_check((yyvsp[0].ast)); libera((yyvsp[0].ast)); (yyval.ast) = NULL;}
#line 1669 "parser.tab.c"
    break;

  case 43: /* assignment: id '=' expression  */
#line 212 "parser.y"
                      {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast)); declaration_check(scope, (yyvsp[-2].ast)); usage_check(scope, (yyvsp[-2].ast), NATUREZA_IDENTIFICADOR); (yyval.ast)->code = assignment(scope, (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1675 "parser.tab.c"
    break;

  case 44: /* assignment: array '=' expression  */
#line 213 "parser.y"
                         {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast)); declaration_check(scope, (yyvsp[-2].ast)); usage_check(scope, (yyvsp[-2].ast), NATUREZA_VETOR);}
#line 1681 "parser.tab.c"
    break;

  case 45: /* shift: id TK_OC_SL expression  */
#line 217 "parser.y"
                           {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); type_check(scope, INT, (yyvsp[0].ast)); declaration_check(scope, (yyvsp[-2].ast)); usage_check(scope, (yyvsp[-2].ast), NATUREZA_IDENTIFICADOR);}
#line 1687 "parser.tab.c"
    break;

  case 46: /* shift: id TK_OC_SR expression  */
#line 218 "parser.y"
                            {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); type_check(scope, INT, (yyvsp[0].ast)); declaration_check(scope, (yyvsp[-2].ast)); usage_check(scope, (yyvsp[-2].ast), NATUREZA_IDENTIFICADOR);}
#line 1693 "parser.tab.c"
    break;

  case 47: /* shift: array TK_OC_SL expression  */
#line 219 "parser.y"
                              {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); type_check(scope, INT, (yyvsp[0].ast)); declaration_check(scope, (yyvsp[-2].ast)); usage_check(scope, (yyvsp[-2].ast), NATUREZA_VETOR);}
#line 1699 "parser.tab.c"
    break;

  case 48: /* shift: array TK_OC_SR expression  */
#line 220 "parser.y"
                              {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); type_check(scope, INT, (yyvsp[0].ast)); declaration_check(scope, (yyvsp[-2].ast)); usage_check(scope, (yyvsp[-2].ast), NATUREZA_VETOR);}
#line 1705 "parser.tab.c"
    break;

  case 49: /* if_stmt: TK_PR_IF '(' expression ')' block  */
#line 225 "parser.y"
                                      {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast));create_if_else((yyval.ast));}
#line 1711 "parser.tab.c"
    break;

  case 50: /* if_stmt: TK_PR_IF '(' expression ')' block TK_PR_ELSE block  */
#line 226 "parser.y"
                                                       {(yyval.ast) = new_ast(3, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); create_if_else((yyval.ast));}
#line 1717 "parser.tab.c"
    break;

  case 51: /* for_loop: TK_PR_FOR '(' command_list ':' expression ':' command_list ')' block  */
#line 230 "parser.y"
                                                                         {(yyval.ast) = new_ast(4, (yyvsp[-6].ast), (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); type_check(scope, BOOL, (yyvsp[-4].ast));}
#line 1723 "parser.tab.c"
    break;

  case 52: /* while_loop: TK_PR_WHILE '(' expression ')' TK_PR_DO block  */
#line 234 "parser.y"
                                                  {(yyval.ast) = new_ast(2, (yyvsp[-3].ast), (yyvsp[0].ast)); create_while((yyvsp[-3].ast),(yyvsp[0].ast),(yyval.ast));}
#line 1729 "parser.tab.c"
    break;

  case 53: /* return_stmt: TK_PR_RETURN expression  */
#line 239 "parser.y"
                            {(yyval.ast) = new_ast(1, (yyvsp[0].ast));}
#line 1735 "parser.tab.c"
    break;

  case 54: /* break_stmt: TK_PR_BREAK  */
#line 243 "parser.y"
                {(yyval.ast) = new_ast(0);}
#line 1741 "parser.tab.c"
    break;

  case 55: /* continue_stmt: TK_PR_CONTINUE  */
#line 247 "parser.y"
                   {(yyval.ast) = new_ast(0);}
#line 1747 "parser.tab.c"
    break;

  case 56: /* global_var_decl: global_var ';'  */
#line 252 "parser.y"
                   {(yyval.ast) = NULL;}
#line 1753 "parser.tab.c"
    break;

  case 57: /* global_var_decl: TK_PR_STATIC global_var ';'  */
#line 253 "parser.y"
                                {(yyval.ast) = NULL;}
#line 1759 "parser.tab.c"
    break;

  case 58: /* global_var: type id  */
#line 257 "parser.y"
            {(yyval.ast) = NULL; add_id(scope, (yyvsp[-1].type), (yyvsp[0].ast)); libera((yyvsp[0].ast));}
#line 1765 "parser.tab.c"
    break;

  case 59: /* global_var: type id int_indexer  */
#line 258 "parser.y"
                        {(yyval.ast) = NULL; add_vector(scope, (yyvsp[-2].type), (yyvsp[-1].ast), (yyvsp[0].ast)); libera((yyvsp[-1].ast)); libera((yyvsp[0].ast));}
#line 1771 "parser.tab.c"
    break;

  case 60: /* int_indexer: '[' literal ']'  */
#line 262 "parser.y"
                    {type_check(scope, INT, (yyvsp[-1].ast)); (yyval.ast) = (yyvsp[-1].ast);}
#line 1777 "parser.tab.c"
    break;

  case 61: /* int_indexer: '[' literal ']' int_indexer  */
#line 263 "parser.y"
                                {type_check(scope, INT, (yyvsp[-2].ast)); chain_ast((yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1783 "parser.tab.c"
    break;

  case 62: /* local_var_decl: local_var  */
#line 268 "parser.y"
              {(yyval.ast) = (yyvsp[0].ast);}
#line 1789 "parser.tab.c"
    break;

  case 63: /* local_var_decl: TK_PR_STATIC local_var  */
#line 269 "parser.y"
                           {(yyval.ast) = (yyvsp[0].ast);}
#line 1795 "parser.tab.c"
    break;

  case 64: /* local_var_decl: TK_PR_CONST local_var  */
#line 270 "parser.y"
                          {(yyval.ast) = (yyvsp[0].ast);}
#line 1801 "parser.tab.c"
    break;

  case 65: /* local_var_decl: TK_PR_STATIC TK_PR_CONST local_var  */
#line 271 "parser.y"
                                       {(yyval.ast) = (yyvsp[0].ast);}
#line 1807 "parser.tab.c"
    break;

  case 66: /* local_var: type id  */
#line 275 "parser.y"
            {(yyval.ast) = NULL; add_id(scope, (yyvsp[-1].type), (yyvsp[0].ast)); libera((yyvsp[0].ast));}
#line 1813 "parser.tab.c"
    break;

  case 67: /* local_var: type id TK_OC_LE id  */
#line 276 "parser.y"
                        {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); add_id(scope, (yyvsp[-3].type), (yyvsp[-2].ast));}
#line 1819 "parser.tab.c"
    break;

  case 68: /* local_var: type id TK_OC_LE literal  */
#line 277 "parser.y"
                             {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); add_id(scope, (yyvsp[-3].type), (yyvsp[-2].ast));}
#line 1825 "parser.tab.c"
    break;

  case 69: /* $@1: %empty  */
#line 282 "parser.y"
                                        {add_function(scope, (yyvsp[-4].type), (yyvsp[-3].ast), (yyvsp[-1].arg));}
#line 1831 "parser.tab.c"
    break;

  case 70: /* function_decl: type id '(' typed_argument_list ')' $@1 enter_scope block leave_scope  */
#line 282 "parser.y"
                                                                                                         {(yyval.ast) = new_ast(1, (yyvsp[-1].ast)->child); (yyvsp[-1].ast)->child = NULL; declaration_check(scope, (yyvsp[-7].ast)); usage_check(scope, (yyvsp[-7].ast), NATUREZA_FUNCAO); (yyval.ast)->code = (yyvsp[-1].ast)->code; libera((yyvsp[-7].ast));}
#line 1837 "parser.tab.c"
    break;

  case 71: /* $@2: %empty  */
#line 283 "parser.y"
                                                     {add_function(scope, (yyvsp[-4].type), (yyvsp[-3].ast), (yyvsp[-1].arg));}
#line 1843 "parser.tab.c"
    break;

  case 72: /* function_decl: TK_PR_STATIC type id '(' typed_argument_list ')' $@2 enter_scope block leave_scope  */
#line 283 "parser.y"
                                                                                                                      {(yyval.ast) = new_ast(1, (yyvsp[-1].ast)->child); (yyvsp[-1].ast)->child = NULL; declaration_check(scope, (yyvsp[-7].ast)); usage_check(scope, (yyvsp[-7].ast), NATUREZA_FUNCAO); (yyval.ast)->code = (yyvsp[-1].ast)->code; libera((yyvsp[-7].ast));}
#line 1849 "parser.tab.c"
    break;

  case 73: /* typed_argument: %empty  */
#line 287 "parser.y"
           {(yyval.arg) = NULL;}
#line 1855 "parser.tab.c"
    break;

  case 74: /* typed_argument: type id  */
#line 288 "parser.y"
            {(yyval.arg) = NULL; libera((yyvsp[0].ast));}
#line 1861 "parser.tab.c"
    break;

  case 75: /* typed_argument: TK_PR_CONST type id  */
#line 289 "parser.y"
                        {(yyval.arg) = NULL; libera((yyvsp[0].ast));}
#line 1867 "parser.tab.c"
    break;

  case 76: /* typed_argument_list: typed_argument  */
#line 293 "parser.y"
                   {(yyval.arg) = (yyvsp[0].arg);}
#line 1873 "parser.tab.c"
    break;

  case 77: /* typed_argument_list: typed_argument_list ',' typed_argument  */
#line 294 "parser.y"
                                           {(yyval.arg) = NULL;}
#line 1879 "parser.tab.c"
    break;

  case 78: /* function_call: id '(' argument_list ')'  */
#line 299 "parser.y"
                             {declaration_check(scope, (yyvsp[-3].ast)); usage_check(scope, (yyvsp[-3].ast), NATUREZA_FUNCAO); (yyval.ast) = new_ast(1, (yyvsp[-1].ast)); libera((yyvsp[-3].ast));}
#line 1885 "parser.tab.c"
    break;

  case 79: /* argument_list: %empty  */
#line 303 "parser.y"
           {(yyval.ast) = NULL;}
#line 1891 "parser.tab.c"
    break;

  case 80: /* argument_list: expression  */
#line 304 "parser.y"
               {(yyval.ast) = (yyvsp[0].ast);}
#line 1897 "parser.tab.c"
    break;

  case 81: /* argument_list: argument_list ',' expression  */
#line 305 "parser.y"
                                 {(yyval.ast) = chain_ast((yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1903 "parser.tab.c"
    break;

  case 82: /* expression: value  */
#line 310 "parser.y"
          {(yyval.ast) = (yyvsp[0].ast);}
#line 1909 "parser.tab.c"
    break;

  case 83: /* expression: '(' expression ')'  */
#line 311 "parser.y"
                       {(yyval.ast) = (yyvsp[-1].ast);}
#line 1915 "parser.tab.c"
    break;

  case 84: /* expression: '+' expression  */
#line 312 "parser.y"
                   {(yyval.ast) = new_ast(1, (yyvsp[0].ast)); type_check(scope, NUMERIC, (yyvsp[0].ast));}
#line 1921 "parser.tab.c"
    break;

  case 85: /* expression: '-' expression  */
#line 313 "parser.y"
                   {(yyval.ast) = new_ast(1, (yyvsp[0].ast)); type_check(scope, NUMERIC, (yyvsp[0].ast));}
#line 1927 "parser.tab.c"
    break;

  case 86: /* expression: '!' expression  */
#line 314 "parser.y"
                   {(yyval.ast) = new_ast(1, (yyvsp[0].ast)); type_check(scope, BOOL, (yyvsp[0].ast));}
#line 1933 "parser.tab.c"
    break;

  case 87: /* expression: '&' expression  */
#line 315 "parser.y"
                   {(yyval.ast) = new_ast(1, (yyvsp[0].ast));}
#line 1939 "parser.tab.c"
    break;

  case 88: /* expression: '*' expression  */
#line 316 "parser.y"
                   {(yyval.ast) = new_ast(1, (yyvsp[0].ast));}
#line 1945 "parser.tab.c"
    break;

  case 89: /* expression: '?' expression  */
#line 317 "parser.y"
                   {(yyval.ast) = new_ast(1, (yyvsp[0].ast));}
#line 1951 "parser.tab.c"
    break;

  case 90: /* expression: '#' expression  */
#line 318 "parser.y"
                   {(yyval.ast) = new_ast(1, (yyvsp[0].ast));}
#line 1957 "parser.tab.c"
    break;

  case 91: /* expression: expression '+' expression  */
#line 319 "parser.y"
                              {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast)); arithmetic(OP_ADD, (yyvsp[-2].ast), (yyval.ast), (yyvsp[0].ast));}
#line 1963 "parser.tab.c"
    break;

  case 92: /* expression: expression '-' expression  */
#line 320 "parser.y"
                              {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast)); arithmetic(OP_SUB, (yyvsp[-2].ast), (yyval.ast), (yyvsp[0].ast));}
#line 1969 "parser.tab.c"
    break;

  case 93: /* expression: expression '*' expression  */
#line 321 "parser.y"
                              {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast)); arithmetic(OP_MULT, (yyvsp[-2].ast), (yyval.ast), (yyvsp[0].ast));}
#line 1975 "parser.tab.c"
    break;

  case 94: /* expression: expression '/' expression  */
#line 322 "parser.y"
                              {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast)); arithmetic(OP_DIV, (yyvsp[-2].ast), (yyval.ast), (yyvsp[0].ast));}
#line 1981 "parser.tab.c"
    break;

  case 95: /* expression: expression '^' expression  */
#line 323 "parser.y"
                              {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1987 "parser.tab.c"
    break;

  case 96: /* expression: expression '%' expression  */
#line 324 "parser.y"
                              {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1993 "parser.tab.c"
    break;

  case 97: /* expression: expression '|' expression  */
#line 325 "parser.y"
                              {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 1999 "parser.tab.c"
    break;

  case 98: /* expression: expression '&' expression  */
#line 326 "parser.y"
                              {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast));}
#line 2005 "parser.tab.c"
    break;

  case 99: /* expression: expression '?' expression ':' expression  */
#line 327 "parser.y"
                                             {(yyval.ast) = new_ast(3, (yyvsp[-4].ast), (yyvsp[-2].ast), (yyvsp[0].ast)); type_check(scope, BOOL, (yyvsp[-4].ast));}
#line 2011 "parser.tab.c"
    break;

  case 100: /* expression: expression '<' expression  */
#line 328 "parser.y"
                              {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast));(yyval.ast)->temp=new_register();(yyval.ast)->code=numeric_cmp_expression(OP_CMP_LT,(yyvsp[-2].ast)->temp,(yyvsp[0].ast)->temp,(yyval.ast),chain_code((yyvsp[-2].ast)->code,(yyvsp[0].ast)->code));}
#line 2017 "parser.tab.c"
    break;

  case 101: /* expression: expression '>' expression  */
#line 329 "parser.y"
                              {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast));(yyval.ast)->temp=new_register();(yyval.ast)->code=numeric_cmp_expression(OP_CMP_GT,(yyvsp[-2].ast)->temp,(yyvsp[0].ast)->temp,(yyval.ast),chain_code((yyvsp[-2].ast)->code,(yyvsp[0].ast)->code));}
#line 2023 "parser.tab.c"
    break;

  case 102: /* expression: expression TK_OC_LE expression  */
#line 330 "parser.y"
                                   {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast));(yyval.ast)->temp=new_register();(yyval.ast)->code=numeric_cmp_expression(OP_CMP_LE,(yyvsp[-2].ast)->temp,(yyvsp[0].ast)->temp,(yyval.ast),chain_code((yyvsp[-2].ast)->code,(yyvsp[0].ast)->code));}
#line 2029 "parser.tab.c"
    break;

  case 103: /* expression: expression TK_OC_GE expression  */
#line 331 "parser.y"
                                   {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast));(yyval.ast)->temp=new_register();(yyval.ast)->code=numeric_cmp_expression(OP_CMP_GE,(yyvsp[-2].ast)->temp,(yyvsp[0].ast)->temp,(yyval.ast),chain_code((yyvsp[-2].ast)->code,(yyvsp[0].ast)->code));}
#line 2035 "parser.tab.c"
    break;

  case 104: /* expression: expression TK_OC_EQ expression  */
#line 332 "parser.y"
                                   {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast));(yyval.ast)->temp=new_register();(yyval.ast)->code=numeric_cmp_expression(OP_CMP_EQ,(yyvsp[-2].ast)->temp,(yyvsp[0].ast)->temp,(yyval.ast),chain_code((yyvsp[-2].ast)->code,(yyvsp[0].ast)->code));}
#line 2041 "parser.tab.c"
    break;

  case 105: /* expression: expression TK_OC_NE expression  */
#line 333 "parser.y"
                                   {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast));(yyval.ast)->temp=new_register();(yyval.ast)->code=numeric_cmp_expression(OP_CMP_NE,(yyvsp[-2].ast)->temp,(yyvsp[0].ast)->temp,(yyval.ast),chain_code((yyvsp[-2].ast)->code,(yyvsp[0].ast)->code));}
#line 2047 "parser.tab.c"
    break;

  case 106: /* expression: expression TK_OC_AND expression  */
#line 334 "parser.y"
                                    {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast));(yyval.ast)->temp=new_register();(yyval.ast)->code=oc_and_expression((yyvsp[-2].ast),(yyvsp[0].ast),(yyval.ast));}
#line 2053 "parser.tab.c"
    break;

  case 107: /* expression: expression TK_OC_OR expression  */
#line 335 "parser.y"
                                   {(yyval.ast) = new_ast(2, (yyvsp[-2].ast), (yyvsp[0].ast)); (yyval.ast)->type = type_infer(scope, (yyvsp[-2].ast), (yyvsp[0].ast));(yyval.ast)->temp=new_register();(yyval.ast)->code=oc_or_expression((yyvsp[-2].ast),(yyvsp[0].ast),(yyval.ast));}
#line 2059 "parser.tab.c"
    break;

  case 108: /* expression_list: expression  */
#line 339 "parser.y"
               {(yyval.ast) = (yyvsp[0].ast);}
#line 2065 "parser.tab.c"
    break;

  case 109: /* expression_list: expression_list ',' expression  */
#line 340 "parser.y"
                                   {(yyval.ast) = chain_ast((yyvsp[-2].ast), (yyvsp[0].ast));}
#line 2071 "parser.tab.c"
    break;

  case 110: /* id: TK_IDENTIFICADOR  */
#line 345 "parser.y"
                     {(yyval.ast) = new_valued_ast(STRING, (yyvsp[0].valor_lexico));}
#line 2077 "parser.tab.c"
    break;

  case 111: /* array: id indexer  */
#line 349 "parser.y"
               {(yyval.ast) = new_ast(2, (yyvsp[-1].ast), (yyvsp[0].ast)); type_check(scope, INT, (yyvsp[0].ast));}
#line 2083 "parser.tab.c"
    break;

  case 112: /* indexer: '[' expression ']'  */
#line 353 "parser.y"
                       {type_check(scope, INT, (yyvsp[-1].ast)); (yyval.ast) = (yyvsp[-1].ast);}
#line 2089 "parser.tab.c"
    break;

  case 113: /* indexer: '[' expression ']' indexer  */
#line 354 "parser.y"
                               {type_check(scope, INT, (yyvsp[-2].ast)); chain_ast((yyvsp[-2].ast), (yyvsp[0].ast));}
#line 2095 "parser.tab.c"
    break;

  case 114: /* value: literal  */
#line 358 "parser.y"
            {(yyval.ast) = (yyvsp[0].ast); (yyval.ast)->code = new_code(load_imm(scope, (yyval.ast)));}
#line 2101 "parser.tab.c"
    break;

  case 115: /* value: id  */
#line 359 "parser.y"
       {(yyval.ast) = (yyvsp[0].ast); (yyval.ast)->code = new_code(load_id(scope, (yyval.ast)));}
#line 2107 "parser.tab.c"
    break;

  case 116: /* value: array  */
#line 360 "parser.y"
          {(yyval.ast) = (yyvsp[0].ast); (yyval.ast)->code = new_code(load_array(scope, (yyval.ast)));}
#line 2113 "parser.tab.c"
    break;

  case 117: /* value: function_call  */
#line 361 "parser.y"
                  {(yyval.ast) = (yyvsp[0].ast);}
#line 2119 "parser.tab.c"
    break;

  case 118: /* type: TK_PR_INT  */
#line 365 "parser.y"
              {(yyval.type) = INT;}
#line 2125 "parser.tab.c"
    break;

  case 119: /* type: TK_PR_FLOAT  */
#line 366 "parser.y"
                {(yyval.type) = FLOAT;}
#line 2131 "parser.tab.c"
    break;

  case 120: /* type: TK_PR_BOOL  */
#line 367 "parser.y"
               {(yyval.type) = BOOL;}
#line 2137 "parser.tab.c"
    break;

  case 121: /* type: TK_PR_CHAR  */
#line 368 "parser.y"
               {(yyval.type) = CHAR;}
#line 2143 "parser.tab.c"
    break;

  case 122: /* type: TK_PR_STRING  */
#line 369 "parser.y"
                 {(yyval.type) = STRING;}
#line 2149 "parser.tab.c"
    break;

  case 123: /* literal: TK_LIT_INT  */
#line 373 "parser.y"
               {(yyval.ast) = new_valued_ast(INT, (yyvsp[0].valor_lexico));}
#line 2155 "parser.tab.c"
    break;

  case 124: /* literal: TK_LIT_FLOAT  */
#line 374 "parser.y"
                 {(yyval.ast) = new_valued_ast(FLOAT, (yyvsp[0].valor_lexico));}
#line 2161 "parser.tab.c"
    break;

  case 125: /* literal: TK_LIT_FALSE  */
#line 375 "parser.y"
                 {(yyval.ast) = new_valued_ast(BOOL, (yyvsp[0].valor_lexico));}
#line 2167 "parser.tab.c"
    break;

  case 126: /* literal: TK_LIT_TRUE  */
#line 376 "parser.y"
                {(yyval.ast) = new_valued_ast(BOOL, (yyvsp[0].valor_lexico));}
#line 2173 "parser.tab.c"
    break;

  case 127: /* literal: TK_LIT_CHAR  */
#line 377 "parser.y"
                {(yyval.ast) = new_valued_ast(CHAR, (yyvsp[0].valor_lexico));}
#line 2179 "parser.tab.c"
    break;

  case 128: /* literal: TK_LIT_STRING  */
#line 378 "parser.y"
                  {(yyval.ast) = new_valued_ast(STRING, (yyvsp[0].valor_lexico));}
#line 2185 "parser.tab.c"
    break;


#line 2189 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 380 "parser.y"


    void yyerror (char const *s) {
    fprintf (stderr, "%s on line %d\n", s, current_line_number);
}
