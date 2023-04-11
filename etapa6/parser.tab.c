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
#line 11 "parser.y"


#include <stdio.h>
#include "erro.h"
#define VAR 0
#define ARRAY 1
#define FUNCTION 2
extern int current_line_number;
extern void *iloc_list;
extern void *arvore;
PILHA *pilha = NULL;
int yylex(void);
void yyerror (char const *s);
int yydebug=1;
int tipoVar = 0;
int tipoExpressao = 0;


#line 90 "parser.tab.c"

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
  YYSYMBOL_inicio_de_tudo = 50,            /* inicio_de_tudo  */
  YYSYMBOL_inicio = 51,                    /* inicio  */
  YYSYMBOL_programa = 52,                  /* programa  */
  YYSYMBOL_lista_de_elementos = 53,        /* lista_de_elementos  */
  YYSYMBOL_declaracao = 54,                /* declaracao  */
  YYSYMBOL_lista_identificador = 55,       /* lista_identificador  */
  YYSYMBOL_array = 56,                     /* array  */
  YYSYMBOL_lista_de_literais_inteiros = 57, /* lista_de_literais_inteiros  */
  YYSYMBOL_funcao = 58,                    /* funcao  */
  YYSYMBOL_corpo = 59,                     /* corpo  */
  YYSYMBOL_cabecalho = 60,                 /* cabecalho  */
  YYSYMBOL_lista_funcao = 61,              /* lista_funcao  */
  YYSYMBOL_parametro_funcao = 62,          /* parametro_funcao  */
  YYSYMBOL_inicia_escopo = 63,             /* inicia_escopo  */
  YYSYMBOL_fim_escopo = 64,                /* fim_escopo  */
  YYSYMBOL_bloco_de_comandos = 65,         /* bloco_de_comandos  */
  YYSYMBOL_comandos = 66,                  /* comandos  */
  YYSYMBOL_comandos_simples = 67,          /* comandos_simples  */
  YYSYMBOL_declaracao_variavel_local = 68, /* declaracao_variavel_local  */
  YYSYMBOL_lista_variaveis = 69,           /* lista_variaveis  */
  YYSYMBOL_variavel = 70,                  /* variavel  */
  YYSYMBOL_atribuicao = 71,                /* atribuicao  */
  YYSYMBOL_arranjo_multi = 72,             /* arranjo_multi  */
  YYSYMBOL_ID_ATR = 73,                    /* ID_ATR  */
  YYSYMBOL_ID_ATR_ARRAY = 74,              /* ID_ATR_ARRAY  */
  YYSYMBOL_lista_de_expressoes = 75,       /* lista_de_expressoes  */
  YYSYMBOL_retorno = 76,                   /* retorno  */
  YYSYMBOL_controle_de_fluxo = 77,         /* controle_de_fluxo  */
  YYSYMBOL_chamada_funcao = 78,            /* chamada_funcao  */
  YYSYMBOL_lista_de_argumentos = 79,       /* lista_de_argumentos  */
  YYSYMBOL_argumento = 80,                 /* argumento  */
  YYSYMBOL_expressao = 81,                 /* expressao  */
  YYSYMBOL_sexta_precedencia = 82,         /* sexta_precedencia  */
  YYSYMBOL_quinta_precedencia = 83,        /* quinta_precedencia  */
  YYSYMBOL_quarta_precedencia = 84,        /* quarta_precedencia  */
  YYSYMBOL_terceira_precedencia = 85,      /* terceira_precedencia  */
  YYSYMBOL_segunda_precedencia = 86,       /* segunda_precedencia  */
  YYSYMBOL_primeira_precedencia = 87,      /* primeira_precedencia  */
  YYSYMBOL_fator = 88,                     /* fator  */
  YYSYMBOL_tipo = 89,                      /* tipo  */
  YYSYMBOL_literais = 90,                  /* literais  */
  YYSYMBOL_litInt = 91,                    /* litInt  */
  YYSYMBOL_ID_FATOR_EXP = 92,              /* ID_FATOR_EXP  */
  YYSYMBOL_ID = 93                         /* ID  */
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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   161

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  45
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  159

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
       0,   135,   135,   136,   138,   138,   141,   142,   145,   147,
     169,   189,   210,   211,   213,   214,   216,   218,   220,   235,
     252,   253,   255,   258,   260,   262,   263,   266,   267,   271,
     272,   273,   274,   275,   276,   281,   283,   284,   301,   302,
     321,   327,   328,   330,   334,   355,   376,   377,   383,   404,
     407,   408,   413,   432,   455,   456,   458,   465,   466,   468,
     469,   471,   472,   473,   475,   476,   477,   478,   479,   481,
     482,   488,   490,   491,   492,   493,   495,   496,   497,   498,
     500,   501,   502,   503,   509,   510,   511,   512,   514,   515,
     516,   517,   518,   520,   523,   534
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
  "')'", "';'", "','", "$accept", "inicio_de_tudo", "inicio", "programa",
  "lista_de_elementos", "declaracao", "lista_identificador", "array",
  "lista_de_literais_inteiros", "funcao", "corpo", "cabecalho",
  "lista_funcao", "parametro_funcao", "inicia_escopo", "fim_escopo",
  "bloco_de_comandos", "comandos", "comandos_simples",
  "declaracao_variavel_local", "lista_variaveis", "variavel", "atribuicao",
  "arranjo_multi", "ID_ATR", "ID_ATR_ARRAY", "lista_de_expressoes",
  "retorno", "controle_de_fluxo", "chamada_funcao", "lista_de_argumentos",
  "argumento", "expressao", "sexta_precedencia", "quinta_precedencia",
  "quarta_precedencia", "terceira_precedencia", "segunda_precedencia",
  "primeira_precedencia", "fator", "tipo", "literais", "litInt",
  "ID_FATOR_EXP", "ID", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-44)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-96)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -44,   103,     6,   -44,   -44,   -44,   -44,   -44,   103,   -44,
     -44,   -32,    -2,   -44,   -44,   -44,   -44,    57,   -44,   -17,
     -44,   -30,   -19,    66,   -33,   -44,   -44,   -44,     9,   -18,
     -44,   -44,    45,    49,    53,   -44,   -44,   -44,    72,    74,
      13,   -44,    76,    66,    66,   -44,   -44,   -44,   -44,   -44,
     -33,    66,    66,    66,   -44,   -44,    81,    84,    51,    69,
      96,    88,   -44,   -44,   -44,   -44,    20,   -44,    68,    66,
      66,    66,   -10,   -44,    65,   118,   -44,    35,   -44,    89,
      70,   108,   -44,   110,    -9,    -7,   -44,   -44,    -6,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,   -44,    91,    92,    81,   -44,    81,    81,    36,
      81,    72,    72,    11,   -44,   120,   -44,   103,   -44,   -44,
     -20,   -44,   131,   -32,   -44,    84,    51,    69,    69,    96,
      96,    96,    96,    88,    88,   -44,   -44,   -44,   -44,    66,
     -44,    66,   -44,   -44,   -44,    98,   102,   100,   -44,   -32,
     -44,   -44,    81,   -44,   120,   136,   -44,   -32,   -44
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     5,     0,    85,    84,    87,    86,     3,     5,     6,
       7,     0,     0,     1,     4,    23,    16,     0,    17,     0,
       8,     0,     0,     0,    44,    24,    26,    33,     0,     0,
      29,    30,     0,     0,     0,    34,    31,    32,     0,     0,
       0,    11,     0,     0,     0,    89,    88,    92,    91,    90,
      94,     0,     0,     0,    80,    82,    48,    58,    60,    63,
      68,    71,    75,    79,    81,    83,     0,    25,    28,     0,
       0,     0,    39,    35,    38,     0,    93,     0,    18,     0,
      21,     0,    10,     0,     0,     0,    78,    77,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,    54,    56,    27,    42,    41,     0,
      47,     0,     0,     0,    12,     0,    19,     0,    95,    22,
       0,     9,     0,     0,    76,    57,    59,    61,    62,    65,
      64,    66,    67,    70,    69,    74,    73,    72,    52,     0,
      43,     0,    37,    36,    40,    15,     0,     0,    20,     0,
      51,    55,    46,    13,     0,    49,    14,     0,    50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -44,   -44,   -44,   139,   -44,   -44,    67,   -44,    -5,   -44,
     -44,   -44,    31,   -44,   -44,   123,   -11,    85,   -44,   -44,
      16,   -44,   -44,   -14,   -44,   -44,   -44,   -44,   -44,   -13,
      15,   -44,   -22,    63,    71,    38,    21,    34,   -43,   -44,
     -15,    42,   117,   -44,    77
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     7,     8,     9,    20,    42,   146,    10,
      16,    11,    79,    80,    17,    26,    27,    28,    29,    30,
      73,    74,    31,    54,    33,    34,   109,    35,    36,    55,
     103,   104,   105,    57,    58,    59,    60,    61,    62,    63,
      12,    64,   147,    65,    75
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    56,    38,    32,    37,   -95,    13,   -45,    86,    87,
      15,    89,    66,    89,    89,    43,     3,     4,     5,     6,
      39,    84,    85,    39,    19,    81,    44,    41,    40,    68,
      41,    88,    45,    46,    47,    48,    49,   122,   111,   123,
     124,    45,    46,    47,    48,    49,    50,   107,   108,   110,
      51,    52,    25,    38,    32,    37,   135,   136,   137,    78,
       3,     4,     5,     6,    21,    53,   102,    22,    91,    92,
      23,     3,     4,     5,     6,    21,   114,   140,    22,   115,
     141,    23,    69,    24,    93,    94,    70,    45,    46,    47,
      48,    49,    50,    71,    24,    76,    51,    52,    72,    15,
      25,    89,    81,    90,    95,    96,     3,     4,     5,     6,
      15,    53,   150,   112,   129,   130,   131,   132,   117,   152,
      99,   100,   101,    82,    83,    97,    98,   142,   143,   127,
     128,   133,   134,   113,   118,   116,   120,   138,   155,   149,
     139,   145,   -93,   153,   154,   157,   158,    14,   148,   156,
     121,    67,   125,   106,   151,   144,    77,     0,   119,     0,
       0,   126
};

static const yytype_int16 yycheck[] =
{
      11,    23,    17,    17,    17,    15,     0,    40,    51,    52,
      42,    20,    45,    20,    20,    45,     3,     4,     5,     6,
      40,    43,    44,    40,    26,    40,    45,    47,    45,    47,
      47,    53,    21,    22,    23,    24,    25,    46,    48,    46,
      46,    21,    22,    23,    24,    25,    26,    69,    70,    71,
      30,    31,    43,    68,    68,    68,    99,   100,   101,    46,
       3,     4,     5,     6,     7,    45,    46,    10,    17,    18,
      13,     3,     4,     5,     6,     7,    41,    41,    10,    44,
      44,    13,    37,    26,    15,    16,    37,    21,    22,    23,
      24,    25,    26,    40,    26,    21,    30,    31,    26,    42,
      43,    20,   117,    19,    35,    36,     3,     4,     5,     6,
      42,    45,   123,    48,    93,    94,    95,    96,    48,   141,
      32,    33,    34,    47,    48,    29,    30,   111,   112,    91,
      92,    97,    98,    15,    26,    46,    26,    46,   149,     8,
      48,    21,    44,    41,    44,     9,   157,     8,   117,   154,
      83,    28,    89,    68,   139,   113,    39,    -1,    81,    -1,
      -1,    90
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,    51,     3,     4,     5,     6,    52,    53,    54,
      58,    60,    89,     0,    52,    42,    59,    63,    65,    26,
      55,     7,    10,    13,    26,    43,    64,    65,    66,    67,
      68,    71,    72,    73,    74,    76,    77,    78,    89,    40,
      45,    47,    56,    45,    45,    21,    22,    23,    24,    25,
      26,    30,    31,    45,    72,    78,    81,    82,    83,    84,
      85,    86,    87,    88,    90,    92,    45,    64,    47,    37,
      37,    40,    26,    69,    70,    93,    21,    91,    46,    61,
      62,    89,    47,    48,    81,    81,    87,    87,    81,    20,
      19,    17,    18,    15,    16,    35,    36,    29,    30,    32,
      33,    34,    46,    79,    80,    81,    66,    81,    81,    75,
      81,    48,    48,    15,    41,    44,    46,    48,    26,    93,
      26,    55,    46,    46,    46,    82,    83,    84,    84,    85,
      85,    85,    85,    86,    86,    87,    87,    87,    46,    48,
      41,    44,    69,    69,    90,    21,    57,    91,    61,     8,
      65,    79,    81,    41,    44,    65,    57,     9,    65
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    52,    52,    53,    53,    54,    55,
      55,    55,    56,    56,    57,    57,    58,    59,    60,    60,
      61,    61,    62,    63,    64,    65,    65,    66,    66,    67,
      67,    67,    67,    67,    67,    68,    69,    69,    69,    69,
      70,    71,    71,    72,    73,    74,    75,    75,    76,    77,
      77,    77,    78,    78,    79,    79,    80,    81,    81,    82,
      82,    83,    83,    83,    84,    84,    84,    84,    84,    85,
      85,    85,    86,    86,    86,    86,    87,    87,    87,    87,
      88,    88,    88,    88,    89,    89,    89,    89,    90,    90,
      90,    90,    90,    91,    92,    93
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     1,     1,     2,     4,
       3,     2,     3,     5,     3,     1,     2,     1,     4,     5,
       3,     1,     2,     1,     1,     3,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     2,     3,     3,     1,     1,
       3,     3,     3,     4,     1,     1,     3,     1,     2,     6,
       8,     5,     4,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     3,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
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
  case 2: /* inicio_de_tudo: %empty  */
#line 135 "parser.y"
                {push(&pilha, cria_tabela_vazia());}
#line 1289 "parser.tab.c"
    break;

  case 3: /* inicio: inicio_de_tudo programa  */
#line 136 "parser.y"
                                {arvore = (yyvsp[0].no);}
#line 1295 "parser.tab.c"
    break;

  case 4: /* programa: lista_de_elementos programa  */
#line 138 "parser.y"
                                      {(yyval.no) = (yyvsp[-1].no); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1301 "parser.tab.c"
    break;

  case 5: /* programa: %empty  */
#line 138 "parser.y"
                                                                           {(yyval.no) = NULL;}
#line 1307 "parser.tab.c"
    break;

  case 6: /* lista_de_elementos: declaracao  */
#line 141 "parser.y"
                                   {(yyval.no) = (yyvsp[0].no);}
#line 1313 "parser.tab.c"
    break;

  case 7: /* lista_de_elementos: funcao  */
#line 142 "parser.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1319 "parser.tab.c"
    break;

  case 8: /* declaracao: tipo lista_identificador  */
#line 145 "parser.y"
                                     {(yyval.no) = (yyvsp[0].no);}
#line 1325 "parser.tab.c"
    break;

  case 9: /* lista_identificador: TK_IDENTIFICADOR array ',' lista_identificador  */
#line 147 "parser.y"
                                                                       {(yyval.no)=NULL; destroiVL((yyvsp[-1].valor_lexico));
                        // Verifica se função já existe no escopo_global
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-3].valor_lexico), false);  
                        if(tipoVar == TK_PR_CHAR){
                            print_char_vector((yyvsp[-3].valor_lexico));
                            exit(ERR_CHAR_VECTOR);
                        }                                 
                        if(conteudo_na_pilha == NULL){
                            //Criar_conteudo
                            CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[-3].valor_lexico), ARRAY);
                            novo_conteudo->tipo = tipoVar;
                            //Adiciona o nome da função na pilha global
                            adiciona_simbolo(novo_conteudo, pilha);
                        }
                        else{
                            print_declared(conteudo_na_pilha, (yyvsp[-3].valor_lexico));
                            //printf("ERR_DECLARED na linha %d \n", current_line_number);
                            exit(ERR_DECLARED);
                        } 

                                                
                        }
#line 1352 "parser.tab.c"
    break;

  case 10: /* lista_identificador: TK_IDENTIFICADOR array ';'  */
#line 169 "parser.y"
                                                   {(yyval.no) = NULL; destroiVL((yyvsp[0].valor_lexico));
                        // Verifica se função já existe no escopo_global
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-2].valor_lexico), false);     
                        if(tipoVar == TK_PR_CHAR){
                            print_char_vector((yyvsp[-2].valor_lexico));
                            exit(ERR_CHAR_VECTOR);
                        }                                     
                        if(conteudo_na_pilha == NULL){
                            //Criar_conteudo
                            CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[-2].valor_lexico), ARRAY);
                            novo_conteudo->tipo = tipoVar;
                            //Adiciona o nome da função na pilha global
                            adiciona_simbolo(novo_conteudo, pilha);
                        }
                        else{
                            print_declared(conteudo_na_pilha, (yyvsp[-2].valor_lexico));
                            //printf("ERR_DECLARED na linha %d \n", current_line_number);
                            exit(ERR_DECLARED);
                        } 
                        }
#line 1377 "parser.tab.c"
    break;

  case 11: /* lista_identificador: TK_IDENTIFICADOR ';'  */
#line 189 "parser.y"
                                             {(yyval.no) = NULL; destroiVL((yyvsp[0].valor_lexico));
                        // Verifica se função já existe no escopo_global
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-1].valor_lexico), false);
                        if(tipoVar == TK_PR_CHAR){
                            print_char_vector((yyvsp[-1].valor_lexico));
                            exit(ERR_CHAR_VECTOR);
                        }                                        
                        if(conteudo_na_pilha == NULL){
                            //Criar_conteudo
                            CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[-1].valor_lexico), VAR);
                            novo_conteudo->tipo = tipoVar;
                            //Adiciona o nome da função na pilha global
                            adiciona_simbolo(novo_conteudo, pilha);
                        }
                        else{
                            print_declared(conteudo_na_pilha, (yyvsp[-1].valor_lexico));
                            //printf("ERR_DECLARED na linha %d \n", current_line_number);
                            exit(ERR_DECLARED);
                        } 
                        }
#line 1402 "parser.tab.c"
    break;

  case 12: /* array: '[' litInt ']'  */
#line 210 "parser.y"
                           {(yyval.no) = NULL;destroiVL((yyvsp[-2].valor_lexico));destroiVL((yyvsp[0].valor_lexico));}
#line 1408 "parser.tab.c"
    break;

  case 13: /* array: '[' litInt '^' lista_de_literais_inteiros ']'  */
#line 211 "parser.y"
                                                           {(yyval.no) = NULL;destroiVL((yyvsp[-4].valor_lexico));destroiVL((yyvsp[-2].valor_lexico));destroiVL((yyvsp[0].valor_lexico));}
#line 1414 "parser.tab.c"
    break;

  case 14: /* lista_de_literais_inteiros: litInt '^' lista_de_literais_inteiros  */
#line 213 "parser.y"
                                                                      {(yyval.no)=NULL;destroiVL((yyvsp[-1].valor_lexico));}
#line 1420 "parser.tab.c"
    break;

  case 15: /* lista_de_literais_inteiros: TK_LIT_INT  */
#line 214 "parser.y"
                                           {(yyval.no) = NULL;}
#line 1426 "parser.tab.c"
    break;

  case 16: /* funcao: cabecalho corpo  */
#line 216 "parser.y"
                        {(yyval.no) = add_child((yyvsp[-1].no), (yyvsp[0].no));}
#line 1432 "parser.tab.c"
    break;

  case 17: /* corpo: bloco_de_comandos  */
#line 218 "parser.y"
                         {(yyval.no) = (yyvsp[0].no);}
#line 1438 "parser.tab.c"
    break;

  case 18: /* cabecalho: tipo TK_IDENTIFICADOR '(' ')'  */
#line 220 "parser.y"
                                           {(yyval.no) = create_node(identificador, (yyvsp[-2].valor_lexico)); destroiVL((yyvsp[-1].valor_lexico));destroiVL((yyvsp[0].valor_lexico));
                                            // Verifica se função já existe no escopo_global
                                            CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-2].valor_lexico), false);                                    
                                            if(conteudo_na_pilha == NULL){
                                                //Criar_conteudo
                                                CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[-2].valor_lexico), FUNCTION);
                                                //Adiciona o nome da função na pilha global
                                                adiciona_simbolo(novo_conteudo, pilha);
                                            }
                                            else{
                                                print_declared(conteudo_na_pilha, (yyvsp[-2].valor_lexico));
                                                //printf("ERR_DECLARED na linha %d \n", current_line_number);
                                                exit(ERR_DECLARED);
                                            }                                           
                                            }
#line 1458 "parser.tab.c"
    break;

  case 19: /* cabecalho: tipo TK_IDENTIFICADOR '(' lista_funcao ')'  */
#line 235 "parser.y"
                                                       {(yyval.no) = create_node(identificador, (yyvsp[-3].valor_lexico)); destroiVL((yyvsp[-2].valor_lexico));destroiVL((yyvsp[0].valor_lexico));
                                            // Verifica se função já existe no escopo_global
                                            CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-3].valor_lexico), false);                                  
                                            if(conteudo_na_pilha == NULL){
                                                //Criar_conteudo
                                                CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[-3].valor_lexico), FUNCTION);
                                                //Adiciona o nome da função na pilha global
                                                adiciona_simbolo(novo_conteudo, pilha);
                                            }
                                            else{
                                                print_declared(conteudo_na_pilha, (yyvsp[-3].valor_lexico));
                                                //printf("ERR_DECLARED na linha %d \n", current_line_number);
                                                exit(ERR_DECLARED);
                                            }                                               
                                            }
#line 1478 "parser.tab.c"
    break;

  case 20: /* lista_funcao: parametro_funcao ',' lista_funcao  */
#line 252 "parser.y"
                                                  {destroiVL((yyvsp[-1].valor_lexico));}
#line 1484 "parser.tab.c"
    break;

  case 21: /* lista_funcao: parametro_funcao  */
#line 253 "parser.y"
                                 {(yyval.no) = (yyvsp[0].no);}
#line 1490 "parser.tab.c"
    break;

  case 22: /* parametro_funcao: tipo ID  */
#line 255 "parser.y"
                          {(yyval.no) = (yyvsp[0].no);}
#line 1496 "parser.tab.c"
    break;

  case 23: /* inicia_escopo: '{'  */
#line 258 "parser.y"
                   {push(&pilha, cria_tabela_vazia());destroiVL((yyvsp[0].valor_lexico));}
#line 1502 "parser.tab.c"
    break;

  case 24: /* fim_escopo: '}'  */
#line 260 "parser.y"
                {pop(&pilha);destroiVL((yyvsp[0].valor_lexico));}
#line 1508 "parser.tab.c"
    break;

  case 25: /* bloco_de_comandos: inicia_escopo comandos fim_escopo  */
#line 262 "parser.y"
                                                      { (yyval.no) = (yyvsp[-1].no);}
#line 1514 "parser.tab.c"
    break;

  case 26: /* bloco_de_comandos: inicia_escopo fim_escopo  */
#line 263 "parser.y"
                                            {(yyval.no)=NULL;}
#line 1520 "parser.tab.c"
    break;

  case 27: /* comandos: comandos_simples ';' comandos  */
#line 266 "parser.y"
                                          {(yyval.no) = ((yyvsp[-2].no)) == NULL ? ((yyvsp[0].no)) : add_child((yyvsp[-2].no), (yyvsp[0].no));destroiVL((yyvsp[-1].valor_lexico)); tipoExpressao = 0;}
#line 1526 "parser.tab.c"
    break;

  case 28: /* comandos: comandos_simples ';'  */
#line 267 "parser.y"
                                 {(yyval.no) = (yyvsp[-1].no); destroiVL((yyvsp[0].valor_lexico)); tipoExpressao = 0;}
#line 1532 "parser.tab.c"
    break;

  case 29: /* comandos_simples: declaracao_variavel_local  */
#line 271 "parser.y"
                                              {(yyval.no) = (yyvsp[0].no); tipoExpressao = 0;}
#line 1538 "parser.tab.c"
    break;

  case 30: /* comandos_simples: atribuicao  */
#line 272 "parser.y"
                               {(yyval.no) = (yyvsp[0].no); tipoExpressao = 0;}
#line 1544 "parser.tab.c"
    break;

  case 31: /* comandos_simples: controle_de_fluxo  */
#line 273 "parser.y"
                                      {(yyval.no) = (yyvsp[0].no); tipoExpressao = 0;}
#line 1550 "parser.tab.c"
    break;

  case 32: /* comandos_simples: chamada_funcao  */
#line 274 "parser.y"
                                   {(yyval.no) = (yyvsp[0].no); tipoExpressao = 0;}
#line 1556 "parser.tab.c"
    break;

  case 33: /* comandos_simples: bloco_de_comandos  */
#line 275 "parser.y"
                                      {(yyval.no) = (yyvsp[0].no);tipoExpressao = 0;}
#line 1562 "parser.tab.c"
    break;

  case 34: /* comandos_simples: retorno  */
#line 276 "parser.y"
                            {(yyval.no) = (yyvsp[0].no);tipoExpressao = 0;}
#line 1568 "parser.tab.c"
    break;

  case 35: /* declaracao_variavel_local: tipo lista_variaveis  */
#line 281 "parser.y"
                                                {(yyval.no) = (yyvsp[0].no);}
#line 1574 "parser.tab.c"
    break;

  case 36: /* lista_variaveis: variavel ',' lista_variaveis  */
#line 283 "parser.y"
                                               {(yyval.no) = (yyvsp[-2].no); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));destroiVL((yyvsp[-1].valor_lexico));}
#line 1580 "parser.tab.c"
    break;

  case 37: /* lista_variaveis: TK_IDENTIFICADOR ',' lista_variaveis  */
#line 284 "parser.y"
                                                      {(yyval.no) = (yyvsp[0].no);
                                                    // Verifica se função já existe no escopo_global/local
                                                    CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-2].valor_lexico), true);                                  
                                                    if(conteudo_na_pilha == NULL){
                                                        //Criar_conteudo
                                                        CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[-2].valor_lexico), VAR);
                                                        novo_conteudo->natureza = VAR;
                                                        novo_conteudo->tipo = tipoVar;
                                                        //Adiciona o nome da variavel na pilha local(mais do topo)
                                                        adiciona_simbolo(novo_conteudo, pilha);
                                                    }
                                                    else{
                                                        print_declared(conteudo_na_pilha, (yyvsp[-2].valor_lexico));
                                                        //printf("ERR_DECLARED na linha %d \n", current_line_number);
                                                        exit(ERR_DECLARED);
                                                    }  
                                                    }
#line 1602 "parser.tab.c"
    break;

  case 38: /* lista_variaveis: variavel  */
#line 301 "parser.y"
                          {(yyval.no) = (yyvsp[0].no);}
#line 1608 "parser.tab.c"
    break;

  case 39: /* lista_variaveis: TK_IDENTIFICADOR  */
#line 302 "parser.y"
                                  {(yyval.no) = NULL;
                                    // Verifica se função já existe no escopo_global
                                    CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[0].valor_lexico), true);                                  
                                    if(conteudo_na_pilha == NULL){
                                        //Criar_conteudo
                                        CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[0].valor_lexico), VAR);
                                        novo_conteudo->natureza = VAR;
                                        novo_conteudo->tipo = tipoVar;
                                        //Adiciona o nome da variavel na pilha local(mais no topo)
                                        adiciona_simbolo(novo_conteudo, pilha);
                                    }
                                    else{
                                        print_declared(conteudo_na_pilha, (yyvsp[0].valor_lexico));
                                        //printf("ERR_DECLARED na linha %d \n", current_line_number);
                                        exit(ERR_DECLARED);
                                    }  
                 
                                }
#line 1631 "parser.tab.c"
    break;

  case 40: /* variavel: ID TK_OC_LE literais  */
#line 321 "parser.y"
                               {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no),(yyvsp[-2].no)); (yyval.no) = add_child((yyval.no),(yyvsp[0].no));}
#line 1637 "parser.tab.c"
    break;

  case 41: /* atribuicao: ID_ATR '=' expressao  */
#line 327 "parser.y"
                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no)); define_tipo_atribuicao(tipoVar, tipoExpressao, current_line_number); tipoExpressao = 0; tipoVar = 0;}
#line 1643 "parser.tab.c"
    break;

  case 42: /* atribuicao: arranjo_multi '=' expressao  */
#line 328 "parser.y"
                                         {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1649 "parser.tab.c"
    break;

  case 43: /* arranjo_multi: ID_ATR_ARRAY '[' lista_de_expressoes ']'  */
#line 330 "parser.y"
                                                         {(yyval.no) = create_node(arranjo, (yyvsp[-2].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-3].no)); (yyval.no) = add_child((yyval.no), (yyvsp[-1].no)); destroiVL((yyvsp[0].valor_lexico));}
#line 1655 "parser.tab.c"
    break;

  case 44: /* ID_ATR: TK_IDENTIFICADOR  */
#line 334 "parser.y"
                         {
                        (yyval.no) = create_node(identificador, (yyvsp[0].valor_lexico));
                        // Verifica se função já existe no escopo_global/local
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[0].valor_lexico), false);                                  
                        if(conteudo_na_pilha == NULL){
                            print_undeclared((yyvsp[0].valor_lexico));
                            //printf("ERR_UNDECLARED na linha %d \n", current_line_number);
                            exit(ERR_UNDECLARED);
                        } else {
                            if(conteudo_na_pilha->natureza == ARRAY) {
                               print_array(conteudo_na_pilha, (yyvsp[0].valor_lexico));
                               exit(ERR_ARRAY);
                            }
                            else if(conteudo_na_pilha->natureza == FUNCTION){
                                print_function(conteudo_na_pilha, (yyvsp[0].valor_lexico));
                                exit(ERR_FUNCTION);
                            }
                            tipoVar = conteudo_na_pilha->tipo;
                        }
}
#line 1680 "parser.tab.c"
    break;

  case 45: /* ID_ATR_ARRAY: TK_IDENTIFICADOR  */
#line 355 "parser.y"
                               {
                        (yyval.no) = create_node(identificador, (yyvsp[0].valor_lexico));
                        // Verifica se função já existe no escopo_global/local
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[0].valor_lexico), false);                                       
                        if(conteudo_na_pilha == NULL){
                            print_undeclared((yyvsp[0].valor_lexico));
                            //printf("ERR_UNDECLARED na linha %d \n", current_line_number);
                            exit(ERR_UNDECLARED);
                        } else {
                            if(conteudo_na_pilha->natureza == VAR) {
                               print_variable(conteudo_na_pilha, (yyvsp[0].valor_lexico));
                               exit(ERR_ARRAY);
                            }
                            else if(conteudo_na_pilha->natureza == FUNCTION){
                                print_function(conteudo_na_pilha, (yyvsp[0].valor_lexico));
                                exit(ERR_FUNCTION);
                            }
                        }
}
#line 1704 "parser.tab.c"
    break;

  case 46: /* lista_de_expressoes: lista_de_expressoes '^' expressao  */
#line 376 "parser.y"
                                                         {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); add_child((yyval.no),(yyvsp[-2].no)); add_child((yyval.no), (yyvsp[0].no));}
#line 1710 "parser.tab.c"
    break;

  case 47: /* lista_de_expressoes: expressao  */
#line 377 "parser.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1716 "parser.tab.c"
    break;

  case 48: /* retorno: TK_PR_RETURN expressao  */
#line 383 "parser.y"
                                 {(yyval.no) = create_node(palavra_reservada, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1722 "parser.tab.c"
    break;

  case 49: /* controle_de_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos  */
#line 404 "parser.y"
                                                                           {(yyval.no) = create_node(palavra_reservada, (yyvsp[-5].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-3].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no)); destroiVL((yyvsp[-4].valor_lexico)); destroiVL((yyvsp[-2].valor_lexico));
                                                                            
                                                                            }
#line 1730 "parser.tab.c"
    break;

  case 50: /* controle_de_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos TK_PR_ELSE bloco_de_comandos  */
#line 407 "parser.y"
                                                                                                        {(yyval.no) = create_node(palavra_reservada, (yyvsp[-7].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-5].no)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));destroiVL((yyvsp[-6].valor_lexico)); destroiVL((yyvsp[-4].valor_lexico));}
#line 1736 "parser.tab.c"
    break;

  case 51: /* controle_de_fluxo: TK_PR_WHILE '(' expressao ')' bloco_de_comandos  */
#line 408 "parser.y"
                                                                   {(yyval.no) = create_node(palavra_reservada, (yyvsp[-4].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no)); destroiVL((yyvsp[-3].valor_lexico)); destroiVL((yyvsp[-1].valor_lexico));}
#line 1742 "parser.tab.c"
    break;

  case 52: /* chamada_funcao: TK_IDENTIFICADOR '(' lista_de_argumentos ')'  */
#line 413 "parser.y"
                                                             {(yyval.no) = create_node(call,(yyvsp[-3].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-1].no)); destroiVL((yyvsp[-2].valor_lexico)); destroiVL((yyvsp[0].valor_lexico));
                                                                // Verifica se função já existe no escopo_global
                                                                CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-3].valor_lexico), false);                                     
                                                                if(conteudo_na_pilha == NULL){
                                                                    print_undeclared((yyvsp[-3].valor_lexico));
                                                                    //printf("ERR_UNDECLARED na linha %d \n", current_line_number);
                                                                    exit(ERR_UNDECLARED);
                                                                }
                                                                else {
                                                                    if(conteudo_na_pilha->natureza == VAR) {
                                                                        print_variable(conteudo_na_pilha, (yyvsp[-3].valor_lexico));
                                                                        exit(ERR_VARIABLE);
                                                                    }
                                                                    else if (conteudo_na_pilha->natureza == ARRAY){
                                                                        print_array(conteudo_na_pilha, (yyvsp[-3].valor_lexico));
                                                                        exit(ERR_ARRAY);
                                                                    }
                                                                }
                                                            }
#line 1766 "parser.tab.c"
    break;

  case 53: /* chamada_funcao: TK_IDENTIFICADOR '(' ')'  */
#line 432 "parser.y"
                                          {(yyval.no) = create_node(call,(yyvsp[-2].valor_lexico)); destroiVL((yyvsp[-1].valor_lexico)); destroiVL((yyvsp[0].valor_lexico));
                                            // Verifica se função já existe no escopo_global
                                            CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-2].valor_lexico), false);                                       
                                            if(conteudo_na_pilha == NULL){
                                                print_undeclared((yyvsp[-2].valor_lexico));
                                                //printf("ERR_UNDECLARED na linha %d \n", current_line_number);
                                                exit(ERR_UNDECLARED);
                                            }
                                            else {
                                                if(conteudo_na_pilha->natureza == VAR) {
                                                    print_variable(conteudo_na_pilha, (yyvsp[-2].valor_lexico));
                                                    exit(ERR_VARIABLE);
                                                }
                                                else if (conteudo_na_pilha->natureza == ARRAY){
                                                    print_array(conteudo_na_pilha, (yyvsp[-2].valor_lexico));
                                                    exit(ERR_ARRAY);
                                                }
                                            }
                                         }
#line 1790 "parser.tab.c"
    break;

  case 54: /* lista_de_argumentos: argumento  */
#line 455 "parser.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1796 "parser.tab.c"
    break;

  case 55: /* lista_de_argumentos: argumento ',' lista_de_argumentos  */
#line 456 "parser.y"
                                                       {(yyval.no) = add_child((yyvsp[-2].no), (yyvsp[0].no));destroiVL((yyvsp[-1].valor_lexico));}
#line 1802 "parser.tab.c"
    break;

  case 56: /* argumento: expressao  */
#line 458 "parser.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 1808 "parser.tab.c"
    break;

  case 57: /* expressao: expressao TK_OC_OR sexta_precedencia  */
#line 465 "parser.y"
                                                {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1814 "parser.tab.c"
    break;

  case 58: /* expressao: sexta_precedencia  */
#line 466 "parser.y"
                             {(yyval.no) = (yyvsp[0].no);}
#line 1820 "parser.tab.c"
    break;

  case 59: /* sexta_precedencia: sexta_precedencia TK_OC_AND quinta_precedencia  */
#line 468 "parser.y"
                                                                   {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1826 "parser.tab.c"
    break;

  case 60: /* sexta_precedencia: quinta_precedencia  */
#line 469 "parser.y"
                                       {(yyval.no) = (yyvsp[0].no);}
#line 1832 "parser.tab.c"
    break;

  case 61: /* quinta_precedencia: quinta_precedencia TK_OC_EQ quarta_precedencia  */
#line 471 "parser.y"
                                                                   {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1838 "parser.tab.c"
    break;

  case 62: /* quinta_precedencia: quinta_precedencia TK_OC_NE quarta_precedencia  */
#line 472 "parser.y"
                                                                   {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1844 "parser.tab.c"
    break;

  case 63: /* quinta_precedencia: quarta_precedencia  */
#line 473 "parser.y"
                                       {(yyval.no) = (yyvsp[0].no);}
#line 1850 "parser.tab.c"
    break;

  case 64: /* quarta_precedencia: quarta_precedencia TK_OC_GE terceira_precedencia  */
#line 475 "parser.y"
                                                                      {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1856 "parser.tab.c"
    break;

  case 65: /* quarta_precedencia: quarta_precedencia TK_OC_LE terceira_precedencia  */
#line 476 "parser.y"
                                                                      {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1862 "parser.tab.c"
    break;

  case 66: /* quarta_precedencia: quarta_precedencia '>' terceira_precedencia  */
#line 477 "parser.y"
                                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1868 "parser.tab.c"
    break;

  case 67: /* quarta_precedencia: quarta_precedencia '<' terceira_precedencia  */
#line 478 "parser.y"
                                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1874 "parser.tab.c"
    break;

  case 68: /* quarta_precedencia: terceira_precedencia  */
#line 479 "parser.y"
                                         {(yyval.no) = (yyvsp[0].no);}
#line 1880 "parser.tab.c"
    break;

  case 69: /* terceira_precedencia: terceira_precedencia '-' segunda_precedencia  */
#line 481 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1886 "parser.tab.c"
    break;

  case 70: /* terceira_precedencia: terceira_precedencia '+' segunda_precedencia  */
#line 482 "parser.y"
                                                                     {
                                (yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); 
                                (yyval.no) = add_child((yyval.no), (yyvsp[-2].no));
                                (yyval.no) = add_child((yyval.no), (yyvsp[0].no));
                                gera_iloc_para_op_bin('+', (yyvsp[-2].no), (yyvsp[0].no), &iloc_list);
                                }
#line 1897 "parser.tab.c"
    break;

  case 71: /* terceira_precedencia: segunda_precedencia  */
#line 488 "parser.y"
                                            {(yyval.no) = (yyvsp[0].no);}
#line 1903 "parser.tab.c"
    break;

  case 72: /* segunda_precedencia: segunda_precedencia '%' primeira_precedencia  */
#line 490 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1909 "parser.tab.c"
    break;

  case 73: /* segunda_precedencia: segunda_precedencia '/' primeira_precedencia  */
#line 491 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1915 "parser.tab.c"
    break;

  case 74: /* segunda_precedencia: segunda_precedencia '*' primeira_precedencia  */
#line 492 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1921 "parser.tab.c"
    break;

  case 75: /* segunda_precedencia: primeira_precedencia  */
#line 493 "parser.y"
                                             {(yyval.no) = (yyvsp[0].no);}
#line 1927 "parser.tab.c"
    break;

  case 76: /* primeira_precedencia: '(' expressao ')'  */
#line 495 "parser.y"
                                          {(yyval.no) = (yyvsp[-1].no); destroiVL((yyvsp[-2].valor_lexico)); destroiVL((yyvsp[0].valor_lexico));}
#line 1933 "parser.tab.c"
    break;

  case 77: /* primeira_precedencia: '!' primeira_precedencia  */
#line 496 "parser.y"
                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)) ; (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1939 "parser.tab.c"
    break;

  case 78: /* primeira_precedencia: '-' primeira_precedencia  */
#line 497 "parser.y"
                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1945 "parser.tab.c"
    break;

  case 79: /* primeira_precedencia: fator  */
#line 498 "parser.y"
                              {(yyval.no) = (yyvsp[0].no);}
#line 1951 "parser.tab.c"
    break;

  case 80: /* fator: arranjo_multi  */
#line 500 "parser.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 1957 "parser.tab.c"
    break;

  case 81: /* fator: literais  */
#line 501 "parser.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1963 "parser.tab.c"
    break;

  case 82: /* fator: chamada_funcao  */
#line 502 "parser.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1969 "parser.tab.c"
    break;

  case 83: /* fator: ID_FATOR_EXP  */
#line 503 "parser.y"
                     {(yyval.no) = (yyvsp[0].no);}
#line 1975 "parser.tab.c"
    break;

  case 84: /* tipo: TK_PR_FLOAT  */
#line 509 "parser.y"
                  {(yyval.no) = NULL; tipoVar = TK_PR_FLOAT;}
#line 1981 "parser.tab.c"
    break;

  case 85: /* tipo: TK_PR_INT  */
#line 510 "parser.y"
                 {(yyval.no) = NULL; tipoVar = TK_PR_INT;}
#line 1987 "parser.tab.c"
    break;

  case 86: /* tipo: TK_PR_CHAR  */
#line 511 "parser.y"
                 {(yyval.no) = NULL; tipoVar = TK_PR_CHAR;}
#line 1993 "parser.tab.c"
    break;

  case 87: /* tipo: TK_PR_BOOL  */
#line 512 "parser.y"
                 {(yyval.no) = NULL; tipoVar = TK_PR_BOOL;}
#line 1999 "parser.tab.c"
    break;

  case 88: /* literais: TK_LIT_FLOAT  */
#line 514 "parser.y"
                          {(yyval.no) = create_node(literal_float, (yyvsp[0].valor_lexico)); tipoExpressao = define_tipo_expressao(tipoExpressao, TK_PR_FLOAT, (yyvsp[0].valor_lexico));}
#line 2005 "parser.tab.c"
    break;

  case 89: /* literais: TK_LIT_INT  */
#line 515 "parser.y"
                          {(yyval.no) = create_node(literal_inteiro, (yyvsp[0].valor_lexico));  tipoExpressao = define_tipo_expressao(tipoExpressao, TK_PR_INT, (yyvsp[0].valor_lexico));}
#line 2011 "parser.tab.c"
    break;

  case 90: /* literais: TK_LIT_CHAR  */
#line 516 "parser.y"
                          {(yyval.no) = create_node(literal_char, (yyvsp[0].valor_lexico));  tipoExpressao = define_tipo_expressao(tipoExpressao, TK_PR_CHAR, (yyvsp[0].valor_lexico));}
#line 2017 "parser.tab.c"
    break;

  case 91: /* literais: TK_LIT_TRUE  */
#line 517 "parser.y"
                          {(yyval.no) = create_node(literal_bool, (yyvsp[0].valor_lexico));  tipoExpressao = define_tipo_expressao(tipoExpressao, TK_PR_BOOL, (yyvsp[0].valor_lexico)); }
#line 2023 "parser.tab.c"
    break;

  case 92: /* literais: TK_LIT_FALSE  */
#line 518 "parser.y"
                          {(yyval.no) = create_node(literal_bool, (yyvsp[0].valor_lexico));  tipoExpressao = define_tipo_expressao(tipoExpressao, TK_PR_BOOL, (yyvsp[0].valor_lexico));}
#line 2029 "parser.tab.c"
    break;

  case 93: /* litInt: TK_LIT_INT  */
#line 520 "parser.y"
                     {(yyval.no) = create_node(literal_inteiro, (yyvsp[0].valor_lexico));}
#line 2035 "parser.tab.c"
    break;

  case 94: /* ID_FATOR_EXP: TK_IDENTIFICADOR  */
#line 523 "parser.y"
                               {(yyval.no) = create_node(identificador, (yyvsp[0].valor_lexico));
                        // Verifica se função já existe no escopo_global/local
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[0].valor_lexico), false);                                     
                        if(conteudo_na_pilha == NULL){
                            print_undeclared((yyvsp[0].valor_lexico));
                            //printf("ERR_UNDECLARED na linha %d \n", current_line_number);
                            exit(ERR_UNDECLARED);
                        }
                        tipoExpressao = define_tipo_expressao(tipoExpressao, conteudo_na_pilha->tipo, (yyvsp[0].valor_lexico));  
                        }
#line 2050 "parser.tab.c"
    break;

  case 95: /* ID: TK_IDENTIFICADOR  */
#line 534 "parser.y"
                     {(yyval.no) = create_node(identificador, (yyvsp[0].valor_lexico));
                        // Verifica se função já existe no escopo_global
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[0].valor_lexico), true);                                        
                        if(conteudo_na_pilha == NULL){
                            //Criar_conteudo
                            CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[0].valor_lexico), VAR);
                            novo_conteudo->tipo = tipoVar;
                            //Adiciona o nome da função na pilha global
                            adiciona_simbolo(novo_conteudo, pilha);
                        }
                        else{
                            print_declared(conteudo_na_pilha, (yyvsp[0].valor_lexico));
                            //printf("ERR_DECLARED na linha %d \n", current_line_number);
                            exit(ERR_DECLARED);
                        }  
                        }
#line 2071 "parser.tab.c"
    break;


#line 2075 "parser.tab.c"

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

#line 550 "parser.y"






void yyerror (char const *s) {
    fprintf (stderr, "%s na linha %d\n", s, current_line_number);
}
