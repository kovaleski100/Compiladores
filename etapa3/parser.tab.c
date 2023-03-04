/* A Bison parser, made by GNU Bison 3.8.2.  */

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
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 11 "parser.y"


#include <stdio.h>
#include "ast.h"
extern int current_line_number;
extern void *arvore;
int yylex(void);
void yyerror (char const *s);
int yydebug=1;

#line 82 "parser.tab.c"

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
  YYSYMBOL_TK_PR_IF = 7,                   /* TK_PR_IF  */
  YYSYMBOL_TK_PR_THEN = 8,                 /* TK_PR_THEN  */
  YYSYMBOL_TK_PR_ELSE = 9,                 /* TK_PR_ELSE  */
  YYSYMBOL_TK_PR_WHILE = 10,               /* TK_PR_WHILE  */
  YYSYMBOL_TK_PR_INPUT = 11,               /* TK_PR_INPUT  */
  YYSYMBOL_TK_PR_OUTPUT = 12,              /* TK_PR_OUTPUT  */
  YYSYMBOL_TK_PR_RETURN = 13,              /* TK_PR_RETURN  */
  YYSYMBOL_TK_PR_FOR = 14,                 /* TK_PR_FOR  */
  YYSYMBOL_TK_OC_LE = 15,                  /* TK_OC_LE  */
  YYSYMBOL_TK_OC_GE = 16,                  /* TK_OC_GE  */
  YYSYMBOL_TK_OC_EQ = 17,                  /* TK_OC_EQ  */
  YYSYMBOL_TK_OC_NE = 18,                  /* TK_OC_NE  */
  YYSYMBOL_TK_OC_AND = 19,                 /* TK_OC_AND  */
  YYSYMBOL_TK_OC_OR = 20,                  /* TK_OC_OR  */
  YYSYMBOL_TK_LIT_INT = 21,                /* TK_LIT_INT  */
  YYSYMBOL_TK_LIT_FLOAT = 22,              /* TK_LIT_FLOAT  */
  YYSYMBOL_TK_LIT_FALSE = 23,              /* TK_LIT_FALSE  */
  YYSYMBOL_TK_LIT_TRUE = 24,               /* TK_LIT_TRUE  */
  YYSYMBOL_TK_LIT_CHAR = 25,               /* TK_LIT_CHAR  */
  YYSYMBOL_TK_IDENTIFICADOR = 26,          /* TK_IDENTIFICADOR  */
  YYSYMBOL_TK_ERRO = 27,                   /* TK_ERRO  */
  YYSYMBOL_CALL = 28,                      /* CALL  */
  YYSYMBOL_29_ = 29,                       /* '+'  */
  YYSYMBOL_30_ = 30,                       /* '-'  */
  YYSYMBOL_31_ = 31,                       /* '!'  */
  YYSYMBOL_32_ = 32,                       /* '*'  */
  YYSYMBOL_33_ = 33,                       /* '/'  */
  YYSYMBOL_34_ = 34,                       /* '%'  */
  YYSYMBOL_35_ = 35,                       /* '>'  */
  YYSYMBOL_36_ = 36,                       /* '<'  */
  YYSYMBOL_37_ = 37,                       /* '='  */
  YYSYMBOL_38_ = 38,                       /* '&'  */
  YYSYMBOL_39_ = 39,                       /* '|'  */
  YYSYMBOL_40_ = 40,                       /* '['  */
  YYSYMBOL_41_ = 41,                       /* ']'  */
  YYSYMBOL_42_ = 42,                       /* '{'  */
  YYSYMBOL_43_ = 43,                       /* '}'  */
  YYSYMBOL_44_ = 44,                       /* '^'  */
  YYSYMBOL_45_ = 45,                       /* '('  */
  YYSYMBOL_46_ = 46,                       /* ')'  */
  YYSYMBOL_47_ = 47,                       /* ';'  */
  YYSYMBOL_48_ = 48,                       /* ','  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_inicio = 50,                    /* inicio  */
  YYSYMBOL_programa = 51,                  /* programa  */
  YYSYMBOL_lista_de_elementos = 52,        /* lista_de_elementos  */
  YYSYMBOL_declaracao = 53,                /* declaracao  */
  YYSYMBOL_lista_identificador = 54,       /* lista_identificador  */
  YYSYMBOL_array = 55,                     /* array  */
  YYSYMBOL_lista_de_literais_inteiros = 56, /* lista_de_literais_inteiros  */
  YYSYMBOL_funcao = 57,                    /* funcao  */
  YYSYMBOL_corpo = 58,                     /* corpo  */
  YYSYMBOL_cabecalho = 59,                 /* cabecalho  */
  YYSYMBOL_lista_funcao = 60,              /* lista_funcao  */
  YYSYMBOL_parametro_funcao = 61,          /* parametro_funcao  */
  YYSYMBOL_bloco_de_comandos = 62,         /* bloco_de_comandos  */
  YYSYMBOL_comandos = 63,                  /* comandos  */
  YYSYMBOL_comandos_simples = 64,          /* comandos_simples  */
  YYSYMBOL_declaracao_variavel_local = 65, /* declaracao_variavel_local  */
  YYSYMBOL_lista_variaveis = 66,           /* lista_variaveis  */
  YYSYMBOL_variavel = 67,                  /* variavel  */
  YYSYMBOL_atribuicao = 68,                /* atribuicao  */
  YYSYMBOL_arranjo_multi = 69,             /* arranjo_multi  */
  YYSYMBOL_lista_de_expressoes = 70,       /* lista_de_expressoes  */
  YYSYMBOL_retorno = 71,                   /* retorno  */
  YYSYMBOL_controle_de_fluxo = 72,         /* controle_de_fluxo  */
  YYSYMBOL_chamada_funcao = 73,            /* chamada_funcao  */
  YYSYMBOL_lista_de_argumentos = 74,       /* lista_de_argumentos  */
  YYSYMBOL_argumento = 75,                 /* argumento  */
  YYSYMBOL_expressao = 76,                 /* expressao  */
  YYSYMBOL_sexta_precedencia = 77,         /* sexta_precedencia  */
  YYSYMBOL_quinta_precedencia = 78,        /* quinta_precedencia  */
  YYSYMBOL_quarta_precedencia = 79,        /* quarta_precedencia  */
  YYSYMBOL_terceira_precedencia = 80,      /* terceira_precedencia  */
  YYSYMBOL_segunda_precedencia = 81,       /* segunda_precedencia  */
  YYSYMBOL_primeira_precedencia = 82,      /* primeira_precedencia  */
  YYSYMBOL_fator = 83,                     /* fator  */
  YYSYMBOL_tipo = 84,                      /* tipo  */
  YYSYMBOL_literais = 85,                  /* literais  */
  YYSYMBOL_litInt = 86,                    /* litInt  */
  YYSYMBOL_ID = 87                         /* ID  */
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
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  39
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  153

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   283


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
       2,     2,     2,    31,     2,     2,     2,    34,    38,     2,
      45,    46,    32,    29,    48,    30,     2,    33,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    47,
      36,    37,    35,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    42,    39,    43,     2,     2,     2,     2,
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
      25,    26,    27,    28
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   119,   119,   123,   123,   125,   126,   129,   131,   132,
     134,   135,   135,   137,   138,   140,   142,   144,   145,   147,
     148,   150,   152,   153,   156,   157,   163,   164,   165,   166,
     167,   168,   170,   172,   173,   174,   175,   177,   182,   183,
     185,   188,   189,   193,   195,   196,   197,   199,   200,   202,
     203,   205,   208,   209,   211,   212,   214,   215,   216,   218,
     219,   220,   221,   222,   224,   225,   226,   228,   229,   230,
     231,   233,   234,   235,   236,   238,   239,   240,   241,   245,
     246,   247,   248,   250,   251,   252,   253,   254,   256,   258
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
  "TK_PR_FLOAT", "TK_PR_BOOL", "TK_PR_CHAR", "TK_PR_IF", "TK_PR_THEN",
  "TK_PR_ELSE", "TK_PR_WHILE", "TK_PR_INPUT", "TK_PR_OUTPUT",
  "TK_PR_RETURN", "TK_PR_FOR", "TK_OC_LE", "TK_OC_GE", "TK_OC_EQ",
  "TK_OC_NE", "TK_OC_AND", "TK_OC_OR", "TK_LIT_INT", "TK_LIT_FLOAT",
  "TK_LIT_FALSE", "TK_LIT_TRUE", "TK_LIT_CHAR", "TK_IDENTIFICADOR",
  "TK_ERRO", "CALL", "'+'", "'-'", "'!'", "'*'", "'/'", "'%'", "'>'",
  "'<'", "'='", "'&'", "'|'", "'['", "']'", "'{'", "'}'", "'^'", "'('",
  "')'", "';'", "','", "$accept", "inicio", "programa",
  "lista_de_elementos", "declaracao", "lista_identificador", "array",
  "lista_de_literais_inteiros", "funcao", "corpo", "cabecalho",
  "lista_funcao", "parametro_funcao", "bloco_de_comandos", "comandos",
  "comandos_simples", "declaracao_variavel_local", "lista_variaveis",
  "variavel", "atribuicao", "arranjo_multi", "lista_de_expressoes",
  "retorno", "controle_de_fluxo", "chamada_funcao", "lista_de_argumentos",
  "argumento", "expressao", "sexta_precedencia", "quinta_precedencia",
  "quarta_precedencia", "terceira_precedencia", "segunda_precedencia",
  "primeira_precedencia", "fator", "tipo", "literais", "litInt", "ID", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-63)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      67,   -63,   -63,   -63,   -63,    25,   -63,    67,   -63,   -63,
      64,    39,   -63,   -63,    32,   -63,   -63,   -17,   -63,    71,
      76,    89,    80,   -63,   -63,    74,    79,   -63,   -63,    91,
     -63,   -63,   -63,   101,   -28,   108,    11,    36,    89,    89,
     -63,   -63,   -63,   -63,   -63,    89,    89,    89,   -63,   -63,
     110,   112,    13,    52,     4,    90,   -63,   -63,   -63,    92,
      55,   -63,    56,    89,    -4,   -63,    87,   121,    89,    89,
     -63,   -31,   -63,    93,    94,   111,   -63,   114,   -14,     0,
     -63,   -63,     1,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,   -63,    97,    96,   110,
     -63,   110,   101,   101,    72,   110,   -15,   110,   -63,   117,
     -63,    67,   -63,   -63,   105,   -63,   138,    64,   -63,   112,
      13,    52,    52,     4,     4,     4,     4,    90,    90,   -63,
     -63,   -63,   -63,    89,   -63,   -63,   -63,   -63,    89,   103,
     107,   106,   -63,    64,   -63,   -63,   110,   -63,   117,   140,
     -63,    64,   -63
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    80,    79,    82,    81,     0,     2,     4,     5,     6,
       0,     0,     1,     3,     0,    15,    16,    12,     7,     0,
       0,     0,    89,    23,    30,     0,     0,    26,    27,     0,
      31,    28,    29,     0,     0,     0,     0,     0,     0,     0,
      84,    83,    87,    86,    85,     0,     0,     0,    75,    77,
      43,    53,    55,    58,    63,    66,    70,    74,    76,    78,
       0,    22,    25,     0,    36,    32,    35,     0,     0,     0,
      88,     0,    17,     0,    20,     0,     9,     0,     0,     0,
      73,    72,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    48,     0,    49,    51,
      24,    39,     0,     0,     0,    38,     0,    42,    10,     0,
      18,     0,    89,    21,    12,     8,     0,     0,    71,    52,
      54,    56,    57,    60,    59,    61,    62,    65,    64,    69,
      68,    67,    47,     0,    34,    33,    37,    40,     0,    14,
       0,     0,    19,     0,    46,    50,    41,    11,     0,    44,
      13,     0,    45
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -63,   144,   -63,   -63,    75,   -63,     5,   -63,   -63,
     -63,    43,   -63,   -10,    95,   -63,   -63,   -62,   -63,   -63,
      -7,   -63,   -63,   -63,    -6,    22,   -63,   -20,    73,    77,
      23,    15,    -2,   -41,   -63,   -12,    54,   124,   -11
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     5,     6,     7,     8,    18,    37,   140,     9,    15,
      10,    73,    74,    24,    25,    26,    27,    65,    66,    28,
      48,   106,    30,    31,    49,    97,    98,    99,    51,    52,
      53,    54,    55,    56,    57,    11,    58,   141,    59
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      16,    50,    33,    34,    80,    81,    83,    29,    32,    68,
     108,   -89,    69,   109,     1,     2,     3,     4,    78,    79,
      83,    83,    67,    35,    75,    12,   137,    82,    36,   138,
      85,    86,   116,    91,    92,     1,     2,     3,     4,    19,
     134,   135,    20,   101,   102,    21,   117,   118,   105,   107,
      33,    34,   129,   130,   131,    29,    32,    72,    22,     1,
       2,     3,     4,    19,   113,    17,    20,    87,    88,    21,
       1,     2,     3,     4,    14,    23,    40,    41,    42,    43,
      44,    22,    22,    76,    77,    45,    46,    89,    90,   127,
     128,    67,    67,    40,    41,    42,    43,    44,    14,    75,
      47,    96,   123,   124,   125,   126,    14,   144,   121,   122,
      40,    41,    42,    43,    44,    22,    38,    61,   146,    45,
      46,    39,    93,    94,    95,    60,    62,    64,    63,    70,
      83,    84,    69,   149,    47,   103,   104,   112,   139,   110,
     114,   152,   111,   132,   133,    35,   143,   -88,   147,   151,
     148,    13,   115,   150,   142,   145,   119,   100,   136,    71,
       0,   120
};

static const yytype_int16 yycheck[] =
{
      10,    21,    14,    14,    45,    46,    20,    14,    14,    37,
      41,    15,    40,    44,     3,     4,     5,     6,    38,    39,
      20,    20,    33,    40,    36,     0,    41,    47,    45,    44,
      17,    18,    46,    29,    30,     3,     4,     5,     6,     7,
     102,   103,    10,    63,    48,    13,    46,    46,    68,    69,
      62,    62,    93,    94,    95,    62,    62,    46,    26,     3,
       4,     5,     6,     7,    75,    26,    10,    15,    16,    13,
       3,     4,     5,     6,    42,    43,    21,    22,    23,    24,
      25,    26,    26,    47,    48,    30,    31,    35,    36,    91,
      92,   102,   103,    21,    22,    23,    24,    25,    42,   111,
      45,    46,    87,    88,    89,    90,    42,   117,    85,    86,
      21,    22,    23,    24,    25,    26,    45,    43,   138,    30,
      31,    45,    32,    33,    34,    45,    47,    26,    37,    21,
      20,    19,    40,   143,    45,    48,    15,    26,    21,    46,
      26,   151,    48,    46,    48,    40,     8,    44,    41,     9,
      44,     7,    77,   148,   111,   133,    83,    62,   104,    35,
      -1,    84
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,    50,    51,    52,    53,    57,
      59,    84,     0,    51,    42,    58,    62,    26,    54,     7,
      10,    13,    26,    43,    62,    63,    64,    65,    68,    69,
      71,    72,    73,    84,    87,    40,    45,    55,    45,    45,
      21,    22,    23,    24,    25,    30,    31,    45,    69,    73,
      76,    77,    78,    79,    80,    81,    82,    83,    85,    87,
      45,    43,    47,    37,    26,    66,    67,    87,    37,    40,
      21,    86,    46,    60,    61,    84,    47,    48,    76,    76,
      82,    82,    76,    20,    19,    17,    18,    15,    16,    35,
      36,    29,    30,    32,    33,    34,    46,    74,    75,    76,
      63,    76,    48,    48,    15,    76,    70,    76,    41,    44,
      46,    48,    26,    87,    26,    54,    46,    46,    46,    77,
      78,    79,    79,    80,    80,    80,    80,    81,    81,    82,
      82,    82,    46,    48,    66,    66,    85,    41,    44,    21,
      56,    86,    60,     8,    62,    74,    76,    41,    44,    62,
      56,     9,    62
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    52,    52,    53,    54,    54,
      55,    55,    55,    56,    56,    57,    58,    59,    59,    60,
      60,    61,    62,    62,    63,    63,    64,    64,    64,    64,
      64,    64,    65,    66,    66,    66,    66,    67,    68,    68,
      69,    70,    70,    71,    72,    72,    72,    73,    73,    74,
      74,    75,    76,    76,    77,    77,    78,    78,    78,    79,
      79,    79,    79,    79,    80,    80,    80,    81,    81,    81,
      81,    82,    82,    82,    82,    83,    83,    83,    83,    84,
      84,    84,    84,    85,    85,    85,    85,    85,    86,    87
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     2,     4,     3,
       3,     5,     0,     3,     1,     2,     1,     4,     5,     3,
       1,     2,     3,     2,     3,     2,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     1,     1,     3,     3,     3,
       4,     3,     1,     2,     6,     8,     5,     4,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       1,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1
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
  case 2: /* inicio: programa  */
#line 119 "parser.y"
                 {arvore = (yyvsp[0].no);}
#line 1268 "parser.tab.c"
    break;

  case 3: /* programa: lista_de_elementos programa  */
#line 123 "parser.y"
                                      {(yyval.no) = (yyvsp[-1].no); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1274 "parser.tab.c"
    break;

  case 4: /* programa: %empty  */
#line 123 "parser.y"
                                                                           {(yyval.no) = NULL;}
#line 1280 "parser.tab.c"
    break;

  case 5: /* lista_de_elementos: declaracao  */
#line 125 "parser.y"
                                   {(yyval.no) = (yyvsp[0].no);}
#line 1286 "parser.tab.c"
    break;

  case 6: /* lista_de_elementos: funcao  */
#line 126 "parser.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1292 "parser.tab.c"
    break;

  case 7: /* declaracao: tipo lista_identificador  */
#line 129 "parser.y"
                                     {(yyval.no) = (yyvsp[0].no);destroiNodo((yyvsp[-1].no));}
#line 1298 "parser.tab.c"
    break;

  case 8: /* lista_identificador: TK_IDENTIFICADOR array ',' lista_identificador  */
#line 131 "parser.y"
                                                                       {(yyval.no)=NULL; destroiVL((yyvsp[-1].valor_lexico));destroiVL((yyvsp[-3].valor_lexico));destroiNodo((yyvsp[-2].no));}
#line 1304 "parser.tab.c"
    break;

  case 9: /* lista_identificador: TK_IDENTIFICADOR array ';'  */
#line 132 "parser.y"
                                                   {(yyval.no) = NULL; destroiVL((yyvsp[0].valor_lexico));destroiVL((yyvsp[-2].valor_lexico));destroiNodo((yyvsp[-1].no));}
#line 1310 "parser.tab.c"
    break;

  case 10: /* array: '[' litInt ']'  */
#line 134 "parser.y"
                           {(yyval.no) = NULL;destroiVL((yyvsp[-2].valor_lexico));destroiVL((yyvsp[0].valor_lexico));destroiNodo((yyvsp[-1].no));}
#line 1316 "parser.tab.c"
    break;

  case 11: /* array: '[' litInt '^' lista_de_literais_inteiros ']'  */
#line 135 "parser.y"
                                                           {(yyval.no) = NULL;destroiVL((yyvsp[-4].valor_lexico));destroiVL((yyvsp[-2].valor_lexico));destroiVL((yyvsp[0].valor_lexico));destroiNodo((yyvsp[-3].no));destroiNodo((yyvsp[-1].no));}
#line 1322 "parser.tab.c"
    break;

  case 12: /* array: %empty  */
#line 135 "parser.y"
                                                                                                                                                   {(yyval.no) = NULL;}
#line 1328 "parser.tab.c"
    break;

  case 13: /* lista_de_literais_inteiros: litInt '^' lista_de_literais_inteiros  */
#line 137 "parser.y"
                                                                      {(yyval.no)=NULL;destroiVL((yyvsp[-1].valor_lexico));destroiNodo((yyvsp[-2].no));destroiNodo((yyvsp[0].no));}
#line 1334 "parser.tab.c"
    break;

  case 14: /* lista_de_literais_inteiros: TK_LIT_INT  */
#line 138 "parser.y"
                                           {(yyval.no) = NULL;}
#line 1340 "parser.tab.c"
    break;

  case 15: /* funcao: cabecalho corpo  */
#line 140 "parser.y"
                        {(yyval.no) = add_child((yyvsp[-1].no), (yyvsp[0].no));}
#line 1346 "parser.tab.c"
    break;

  case 16: /* corpo: bloco_de_comandos  */
#line 142 "parser.y"
                         {(yyval.no) = (yyvsp[0].no);}
#line 1352 "parser.tab.c"
    break;

  case 17: /* cabecalho: tipo TK_IDENTIFICADOR '(' ')'  */
#line 144 "parser.y"
                                          {(yyval.no) = create_node(identificador, (yyvsp[-2].valor_lexico)); destroiVL((yyvsp[-1].valor_lexico));destroiVL((yyvsp[0].valor_lexico));destroiNodo((yyvsp[-3].no));}
#line 1358 "parser.tab.c"
    break;

  case 18: /* cabecalho: tipo TK_IDENTIFICADOR '(' lista_funcao ')'  */
#line 145 "parser.y"
                                                       {(yyval.no) = create_node(identificador, (yyvsp[-3].valor_lexico)); destroiVL((yyvsp[-2].valor_lexico));destroiVL((yyvsp[0].valor_lexico));destroiNodo((yyvsp[-1].no));}
#line 1364 "parser.tab.c"
    break;

  case 19: /* lista_funcao: parametro_funcao ',' lista_funcao  */
#line 147 "parser.y"
                                                  {destroiVL((yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyvsp[-2].no), (yyvsp[0].no));}
#line 1370 "parser.tab.c"
    break;

  case 20: /* lista_funcao: parametro_funcao  */
#line 148 "parser.y"
                                 {(yyval.no) = (yyvsp[0].no);}
#line 1376 "parser.tab.c"
    break;

  case 21: /* parametro_funcao: tipo ID  */
#line 150 "parser.y"
                          {(yyval.no) = (yyvsp[0].no);destroiNodo((yyvsp[-1].no));}
#line 1382 "parser.tab.c"
    break;

  case 22: /* bloco_de_comandos: '{' comandos '}'  */
#line 152 "parser.y"
                                     { (yyval.no) = (yyvsp[-1].no); destroiVL((yyvsp[-2].valor_lexico));destroiVL((yyvsp[0].valor_lexico));}
#line 1388 "parser.tab.c"
    break;

  case 23: /* bloco_de_comandos: '{' '}'  */
#line 153 "parser.y"
                           {destroiVL((yyvsp[-1].valor_lexico));destroiVL((yyvsp[0].valor_lexico)); (yyval.no)=NULL;}
#line 1394 "parser.tab.c"
    break;

  case 24: /* comandos: comandos_simples ';' comandos  */
#line 156 "parser.y"
                                          {(yyval.no) = ((yyvsp[-2].no)) == NULL ? ((yyvsp[0].no)) : ver_comando((yyvsp[-2].no), (yyvsp[0].no));destroiVL((yyvsp[-1].valor_lexico));}
#line 1400 "parser.tab.c"
    break;

  case 25: /* comandos: comandos_simples ';'  */
#line 157 "parser.y"
                                 {(yyval.no) = (yyvsp[-1].no); destroiVL((yyvsp[0].valor_lexico));}
#line 1406 "parser.tab.c"
    break;

  case 26: /* comandos_simples: declaracao_variavel_local  */
#line 163 "parser.y"
                                              {(yyval.no) = (yyvsp[0].no);}
#line 1412 "parser.tab.c"
    break;

  case 27: /* comandos_simples: atribuicao  */
#line 164 "parser.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1418 "parser.tab.c"
    break;

  case 28: /* comandos_simples: controle_de_fluxo  */
#line 165 "parser.y"
                                      {(yyval.no) = (yyvsp[0].no);}
#line 1424 "parser.tab.c"
    break;

  case 29: /* comandos_simples: chamada_funcao  */
#line 166 "parser.y"
                                   {(yyval.no) = (yyvsp[0].no);}
#line 1430 "parser.tab.c"
    break;

  case 30: /* comandos_simples: bloco_de_comandos  */
#line 167 "parser.y"
                                      {(yyval.no) = (yyvsp[0].no);}
#line 1436 "parser.tab.c"
    break;

  case 31: /* comandos_simples: retorno  */
#line 168 "parser.y"
                            {(yyval.no) = (yyvsp[0].no);}
#line 1442 "parser.tab.c"
    break;

  case 32: /* declaracao_variavel_local: tipo lista_variaveis  */
#line 170 "parser.y"
                                                {(yyval.no) = (yyvsp[0].no);}
#line 1448 "parser.tab.c"
    break;

  case 33: /* lista_variaveis: variavel ',' lista_variaveis  */
#line 172 "parser.y"
                                               {(yyval.no) = (yyvsp[-2].no); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));destroiVL((yyvsp[-1].valor_lexico));}
#line 1454 "parser.tab.c"
    break;

  case 34: /* lista_variaveis: TK_IDENTIFICADOR ',' lista_variaveis  */
#line 173 "parser.y"
                                                      {(yyval.no) = (yyvsp[0].no);destroiVL((yyvsp[-1].valor_lexico));destroiVL((yyvsp[-2].valor_lexico));}
#line 1460 "parser.tab.c"
    break;

  case 35: /* lista_variaveis: variavel  */
#line 174 "parser.y"
                          {(yyval.no) = (yyvsp[0].no);}
#line 1466 "parser.tab.c"
    break;

  case 36: /* lista_variaveis: TK_IDENTIFICADOR  */
#line 175 "parser.y"
                                  {(yyval.no) = NULL;destroiVL((yyvsp[0].valor_lexico));}
#line 1472 "parser.tab.c"
    break;

  case 37: /* variavel: ID TK_OC_LE literais  */
#line 177 "parser.y"
                               {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no),(yyvsp[-2].no)); (yyval.no) = add_child((yyval.no),(yyvsp[0].no));}
#line 1478 "parser.tab.c"
    break;

  case 38: /* atribuicao: ID '=' expressao  */
#line 182 "parser.y"
                             {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1484 "parser.tab.c"
    break;

  case 39: /* atribuicao: arranjo_multi '=' expressao  */
#line 183 "parser.y"
                                         {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1490 "parser.tab.c"
    break;

  case 40: /* arranjo_multi: ID '[' lista_de_expressoes ']'  */
#line 185 "parser.y"
                                               {(yyval.no) = create_node(arranjo, (yyvsp[-2].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-3].no)); (yyval.no) = add_child((yyval.no), (yyvsp[-1].no)); destroiVL((yyvsp[0].valor_lexico));}
#line 1496 "parser.tab.c"
    break;

  case 41: /* lista_de_expressoes: lista_de_expressoes '^' expressao  */
#line 188 "parser.y"
                                                         {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no),(yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1502 "parser.tab.c"
    break;

  case 42: /* lista_de_expressoes: expressao  */
#line 189 "parser.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1508 "parser.tab.c"
    break;

  case 43: /* retorno: TK_PR_RETURN expressao  */
#line 193 "parser.y"
                                 {(yyval.no) = create_node(palavra_reservada, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1514 "parser.tab.c"
    break;

  case 44: /* controle_de_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos  */
#line 195 "parser.y"
                                                                           {(yyval.no) = create_node(palavra_reservada, (yyvsp[-5].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-3].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no)); destroiVL((yyvsp[-4].valor_lexico)); destroiVL((yyvsp[-2].valor_lexico));}
#line 1520 "parser.tab.c"
    break;

  case 45: /* controle_de_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos TK_PR_ELSE bloco_de_comandos  */
#line 196 "parser.y"
                                                                                                        {(yyval.no) = create_node(palavra_reservada, (yyvsp[-7].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-5].no)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));destroiVL((yyvsp[-6].valor_lexico)); destroiVL((yyvsp[-4].valor_lexico));}
#line 1526 "parser.tab.c"
    break;

  case 46: /* controle_de_fluxo: TK_PR_WHILE '(' expressao ')' bloco_de_comandos  */
#line 197 "parser.y"
                                                                   {(yyval.no) = create_node(palavra_reservada, (yyvsp[-4].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no)); destroiVL((yyvsp[-3].valor_lexico)); destroiVL((yyvsp[-1].valor_lexico));}
#line 1532 "parser.tab.c"
    break;

  case 47: /* chamada_funcao: TK_IDENTIFICADOR '(' lista_de_argumentos ')'  */
#line 199 "parser.y"
                                                             {(yyval.no) = create_node(call,(yyvsp[-3].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-1].no)); destroiVL((yyvsp[-2].valor_lexico)); destroiVL((yyvsp[0].valor_lexico));}
#line 1538 "parser.tab.c"
    break;

  case 48: /* chamada_funcao: TK_IDENTIFICADOR '(' ')'  */
#line 200 "parser.y"
                                          {(yyval.no) = create_node(call,(yyvsp[-2].valor_lexico)); destroiVL((yyvsp[-1].valor_lexico)); destroiVL((yyvsp[0].valor_lexico));}
#line 1544 "parser.tab.c"
    break;

  case 49: /* lista_de_argumentos: argumento  */
#line 202 "parser.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1550 "parser.tab.c"
    break;

  case 50: /* lista_de_argumentos: argumento ',' lista_de_argumentos  */
#line 203 "parser.y"
                                                       {(yyval.no) = add_child((yyvsp[-2].no), (yyvsp[0].no));destroiVL((yyvsp[-1].valor_lexico));}
#line 1556 "parser.tab.c"
    break;

  case 51: /* argumento: expressao  */
#line 205 "parser.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 1562 "parser.tab.c"
    break;

  case 52: /* expressao: expressao TK_OC_OR sexta_precedencia  */
#line 208 "parser.y"
                                                {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1568 "parser.tab.c"
    break;

  case 53: /* expressao: sexta_precedencia  */
#line 209 "parser.y"
                             {(yyval.no) = (yyvsp[0].no);}
#line 1574 "parser.tab.c"
    break;

  case 54: /* sexta_precedencia: sexta_precedencia TK_OC_AND quinta_precedencia  */
#line 211 "parser.y"
                                                                   {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1580 "parser.tab.c"
    break;

  case 55: /* sexta_precedencia: quinta_precedencia  */
#line 212 "parser.y"
                                       {(yyval.no) = (yyvsp[0].no);}
#line 1586 "parser.tab.c"
    break;

  case 56: /* quinta_precedencia: quinta_precedencia TK_OC_EQ quarta_precedencia  */
#line 214 "parser.y"
                                                                   {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1592 "parser.tab.c"
    break;

  case 57: /* quinta_precedencia: quinta_precedencia TK_OC_NE quarta_precedencia  */
#line 215 "parser.y"
                                                                   {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1598 "parser.tab.c"
    break;

  case 58: /* quinta_precedencia: quarta_precedencia  */
#line 216 "parser.y"
                                       {(yyval.no) = (yyvsp[0].no);}
#line 1604 "parser.tab.c"
    break;

  case 59: /* quarta_precedencia: quarta_precedencia TK_OC_GE terceira_precedencia  */
#line 218 "parser.y"
                                                                      {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1610 "parser.tab.c"
    break;

  case 60: /* quarta_precedencia: quarta_precedencia TK_OC_LE terceira_precedencia  */
#line 219 "parser.y"
                                                                      {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1616 "parser.tab.c"
    break;

  case 61: /* quarta_precedencia: quarta_precedencia '>' terceira_precedencia  */
#line 220 "parser.y"
                                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1622 "parser.tab.c"
    break;

  case 62: /* quarta_precedencia: quarta_precedencia '<' terceira_precedencia  */
#line 221 "parser.y"
                                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1628 "parser.tab.c"
    break;

  case 63: /* quarta_precedencia: terceira_precedencia  */
#line 222 "parser.y"
                                         {(yyval.no) = (yyvsp[0].no);}
#line 1634 "parser.tab.c"
    break;

  case 64: /* terceira_precedencia: terceira_precedencia '-' segunda_precedencia  */
#line 224 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1640 "parser.tab.c"
    break;

  case 65: /* terceira_precedencia: terceira_precedencia '+' segunda_precedencia  */
#line 225 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1646 "parser.tab.c"
    break;

  case 66: /* terceira_precedencia: segunda_precedencia  */
#line 226 "parser.y"
                                            {(yyval.no) = (yyvsp[0].no);}
#line 1652 "parser.tab.c"
    break;

  case 67: /* segunda_precedencia: segunda_precedencia '%' primeira_precedencia  */
#line 228 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1658 "parser.tab.c"
    break;

  case 68: /* segunda_precedencia: segunda_precedencia '/' primeira_precedencia  */
#line 229 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1664 "parser.tab.c"
    break;

  case 69: /* segunda_precedencia: segunda_precedencia '*' primeira_precedencia  */
#line 230 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1670 "parser.tab.c"
    break;

  case 70: /* segunda_precedencia: primeira_precedencia  */
#line 231 "parser.y"
                                             {(yyval.no) = (yyvsp[0].no);}
#line 1676 "parser.tab.c"
    break;

  case 71: /* primeira_precedencia: '(' expressao ')'  */
#line 233 "parser.y"
                                          {(yyval.no) = (yyvsp[-1].no); destroiVL((yyvsp[-2].valor_lexico)); destroiVL((yyvsp[0].valor_lexico));}
#line 1682 "parser.tab.c"
    break;

  case 72: /* primeira_precedencia: '!' primeira_precedencia  */
#line 234 "parser.y"
                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)) ; (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1688 "parser.tab.c"
    break;

  case 73: /* primeira_precedencia: '-' primeira_precedencia  */
#line 235 "parser.y"
                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1694 "parser.tab.c"
    break;

  case 74: /* primeira_precedencia: fator  */
#line 236 "parser.y"
                              {(yyval.no) = (yyvsp[0].no);}
#line 1700 "parser.tab.c"
    break;

  case 75: /* fator: arranjo_multi  */
#line 238 "parser.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 1706 "parser.tab.c"
    break;

  case 76: /* fator: literais  */
#line 239 "parser.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1712 "parser.tab.c"
    break;

  case 77: /* fator: chamada_funcao  */
#line 240 "parser.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1718 "parser.tab.c"
    break;

  case 78: /* fator: ID  */
#line 241 "parser.y"
           {(yyval.no) = (yyvsp[0].no);}
#line 1724 "parser.tab.c"
    break;

  case 79: /* tipo: TK_PR_FLOAT  */
#line 245 "parser.y"
                  {(yyval.no) = NULL;}
#line 1730 "parser.tab.c"
    break;

  case 80: /* tipo: TK_PR_INT  */
#line 246 "parser.y"
                 {(yyval.no) = NULL;}
#line 1736 "parser.tab.c"
    break;

  case 81: /* tipo: TK_PR_CHAR  */
#line 247 "parser.y"
                 {(yyval.no) = NULL;}
#line 1742 "parser.tab.c"
    break;

  case 82: /* tipo: TK_PR_BOOL  */
#line 248 "parser.y"
                 {(yyval.no) = NULL;}
#line 1748 "parser.tab.c"
    break;

  case 83: /* literais: TK_LIT_FLOAT  */
#line 250 "parser.y"
                          {(yyval.no) = create_node(literal_float, (yyvsp[0].valor_lexico));}
#line 1754 "parser.tab.c"
    break;

  case 84: /* literais: TK_LIT_INT  */
#line 251 "parser.y"
                          {(yyval.no) = create_node(literal_inteiro, (yyvsp[0].valor_lexico));}
#line 1760 "parser.tab.c"
    break;

  case 85: /* literais: TK_LIT_CHAR  */
#line 252 "parser.y"
                          {(yyval.no) = create_node(literal_char, (yyvsp[0].valor_lexico));}
#line 1766 "parser.tab.c"
    break;

  case 86: /* literais: TK_LIT_TRUE  */
#line 253 "parser.y"
                          {(yyval.no) = create_node(literal_bool, (yyvsp[0].valor_lexico));}
#line 1772 "parser.tab.c"
    break;

  case 87: /* literais: TK_LIT_FALSE  */
#line 254 "parser.y"
                          {(yyval.no) = create_node(literal_bool, (yyvsp[0].valor_lexico));}
#line 1778 "parser.tab.c"
    break;

  case 88: /* litInt: TK_LIT_INT  */
#line 256 "parser.y"
                     {(yyval.no) = create_node(literal_inteiro, (yyvsp[0].valor_lexico));}
#line 1784 "parser.tab.c"
    break;

  case 89: /* ID: TK_IDENTIFICADOR  */
#line 258 "parser.y"
                     {(yyval.no) = create_node(identificador, (yyvsp[0].valor_lexico));}
#line 1790 "parser.tab.c"
    break;


#line 1794 "parser.tab.c"

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

#line 259 "parser.y"

void yyerror (char const *s) {
    fprintf (stderr, "%s na linha %d\n", s, current_line_number);
}
