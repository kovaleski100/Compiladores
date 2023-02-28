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
extern int current_line_number;
extern void *arvore;
PILHA *pilha = NULL;
int yylex(void);
void yyerror (char const *s);
int yydebug=1;
int tipoVar = 0;

#line 84 "parser.tab.c"

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
  YYSYMBOL_lista_de_expressoes = 73,       /* lista_de_expressoes  */
  YYSYMBOL_retorno = 74,                   /* retorno  */
  YYSYMBOL_controle_de_fluxo = 75,         /* controle_de_fluxo  */
  YYSYMBOL_chamada_funcao = 76,            /* chamada_funcao  */
  YYSYMBOL_lista_de_argumentos = 77,       /* lista_de_argumentos  */
  YYSYMBOL_argumento = 78,                 /* argumento  */
  YYSYMBOL_expressao = 79,                 /* expressao  */
  YYSYMBOL_sexta_precedencia = 80,         /* sexta_precedencia  */
  YYSYMBOL_quinta_precedencia = 81,        /* quinta_precedencia  */
  YYSYMBOL_quarta_precedencia = 82,        /* quarta_precedencia  */
  YYSYMBOL_terceira_precedencia = 83,      /* terceira_precedencia  */
  YYSYMBOL_segunda_precedencia = 84,       /* segunda_precedencia  */
  YYSYMBOL_primeira_precedencia = 85,      /* primeira_precedencia  */
  YYSYMBOL_fator = 86,                     /* fator  */
  YYSYMBOL_tipo = 87,                      /* tipo  */
  YYSYMBOL_literais = 88,                  /* literais  */
  YYSYMBOL_litInt = 89,                    /* litInt  */
  YYSYMBOL_ID_FATOR_EXP = 90,              /* ID_FATOR_EXP  */
  YYSYMBOL_ID = 91                         /* ID  */
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
#define YYLAST   164

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  93
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  158

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
       0,   127,   127,   128,   130,   130,   133,   134,   137,   139,
     156,   172,   173,   173,   175,   176,   178,   180,   182,   197,
     214,   215,   217,   220,   222,   224,   225,   228,   229,   233,
     234,   235,   236,   237,   238,   243,   245,   246,   261,   262,
     279,   285,   286,   288,   295,   296,   302,   323,   326,   327,
     332,   341,   354,   355,   357,   364,   365,   367,   368,   370,
     371,   372,   374,   375,   376,   377,   378,   380,   381,   382,
     384,   385,   386,   387,   389,   390,   391,   392,   394,   395,
     396,   397,   403,   404,   405,   406,   408,   409,   410,   411,
     412,   414,   417,   427
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
  "arranjo_multi", "lista_de_expressoes", "retorno", "controle_de_fluxo",
  "chamada_funcao", "lista_de_argumentos", "argumento", "expressao",
  "sexta_precedencia", "quinta_precedencia", "quarta_precedencia",
  "terceira_precedencia", "segunda_precedencia", "primeira_precedencia",
  "fator", "tipo", "literais", "litInt", "ID_FATOR_EXP", "ID", YY_NULLPTR
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

#define YYTABLE_NINF (-94)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -44,   101,     5,   -44,   -44,   -44,   -44,   -44,   101,   -44,
     -44,   -25,     0,   -44,   -44,   -44,   -44,    34,   -44,    29,
     -44,     4,    23,    58,    33,   -44,   -44,   -44,    67,    -2,
     -44,   -44,    94,   -44,   -44,   -44,   104,    35,   111,    27,
     -12,    58,    58,   -44,   -44,   -44,   -44,   -44,    51,    58,
      58,    58,   -44,   -44,   113,   115,    91,    77,    93,    86,
     -44,   -44,   -44,   -44,    95,    40,   -44,     8,    58,    -5,
     -44,    88,   123,    58,    58,   -44,   -17,   -44,    96,    92,
     117,   -44,   118,   -18,    -4,   -44,   -44,     2,    58,    58,
      58,    58,    58,    58,    58,    58,    58,    58,    58,    58,
      58,   -44,   100,    99,   113,   -44,   113,   104,   104,    76,
     113,    46,   113,   -44,   120,   -44,   101,   -44,   -44,   108,
     -44,   131,   -25,   -44,   115,    91,    77,    77,    93,    93,
      93,    93,    86,    86,   -44,   -44,   -44,   -44,    58,   -44,
     -44,   -44,   -44,    58,   105,   109,   107,   -44,   -25,   -44,
     -44,   113,   -44,   120,   143,   -44,   -25,   -44
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     5,     0,    83,    82,    85,    84,     3,     5,     6,
       7,     0,     0,     1,     4,    23,    16,     0,    17,    13,
       8,     0,     0,     0,    93,    24,    26,    33,     0,     0,
      29,    30,     0,    34,    31,    32,     0,     0,     0,     0,
       0,     0,     0,    87,    86,    90,    89,    88,    92,     0,
       0,     0,    78,    80,    46,    56,    58,    61,    66,    69,
      73,    77,    79,    81,     0,     0,    25,    28,     0,    39,
      35,    38,     0,     0,     0,    91,     0,    18,     0,    21,
       0,    10,     0,     0,     0,    76,    75,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,    52,    54,    27,    42,     0,     0,     0,
      41,     0,    45,    11,     0,    19,     0,    93,    22,    13,
       9,     0,     0,    74,    55,    57,    59,    60,    63,    62,
      64,    65,    68,    67,    72,    71,    70,    50,     0,    37,
      36,    40,    43,     0,    15,     0,     0,    20,     0,    49,
      53,    44,    12,     0,    47,    14,     0,    48
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -44,   -44,   -44,   145,   -44,   -44,    72,   -44,     3,   -44,
     -44,   -44,    39,   -44,   -44,   129,   -11,    97,   -44,   -44,
      17,   -44,   -44,    -9,   -44,   -44,   -44,    -8,    20,   -44,
     -22,    71,    73,    36,    22,    32,   -43,   -44,   -14,    52,
     122,   -44,   -13
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     7,     8,     9,    20,    40,   145,    10,
      16,    11,    78,    79,    17,    26,    27,    28,    29,    30,
      70,    71,    31,    52,   111,    33,    34,    53,   102,   103,
     104,    55,    56,    57,    58,    59,    60,    61,    12,    62,
     146,    63,    64
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      18,    54,    88,    36,    37,    13,    85,    86,    32,    35,
     -93,     3,     4,     5,     6,    21,    88,    15,    22,    83,
      84,    23,    88,    72,   113,    80,    19,   114,   121,    87,
       3,     4,     5,     6,    24,    81,    82,     3,     4,     5,
       6,    21,   122,   107,    22,    67,   106,    23,   123,    41,
      15,   110,   112,    36,    37,   134,   135,   136,    32,    35,
      24,    43,    44,    45,    46,    47,    48,   118,    42,    38,
      49,    50,    73,    77,    39,    74,    15,    25,    65,    43,
      44,    45,    46,    47,    48,    51,   101,   142,    49,    50,
     143,   -93,    92,    93,    72,    72,    65,    43,    44,    45,
      46,    47,    80,    51,     3,     4,     5,     6,    90,    91,
      25,   149,    94,    95,   128,   129,   130,   131,    98,    99,
     100,   151,    96,    97,   139,   140,   126,   127,   132,   133,
      69,    68,    75,    88,    89,    74,   108,   154,   109,   148,
     116,   144,   115,   117,   119,   157,   137,   138,    38,   -91,
     152,   153,   156,    14,   120,   147,   155,    66,   150,   124,
      76,   141,   125,     0,   105
};

static const yytype_int16 yycheck[] =
{
      11,    23,    20,    17,    17,     0,    49,    50,    17,    17,
      15,     3,     4,     5,     6,     7,    20,    42,    10,    41,
      42,    13,    20,    36,    41,    39,    26,    44,    46,    51,
       3,     4,     5,     6,    26,    47,    48,     3,     4,     5,
       6,     7,    46,    48,    10,    47,    68,    13,    46,    45,
      42,    73,    74,    67,    67,    98,    99,   100,    67,    67,
      26,    21,    22,    23,    24,    25,    26,    80,    45,    40,
      30,    31,    37,    46,    45,    40,    42,    43,    45,    21,
      22,    23,    24,    25,    26,    45,    46,    41,    30,    31,
      44,    40,    15,    16,   107,   108,    45,    21,    22,    23,
      24,    25,   116,    45,     3,     4,     5,     6,    17,    18,
      43,   122,    35,    36,    92,    93,    94,    95,    32,    33,
      34,   143,    29,    30,   107,   108,    90,    91,    96,    97,
      26,    37,    21,    20,    19,    40,    48,   148,    15,     8,
      48,    21,    46,    26,    26,   156,    46,    48,    40,    44,
      41,    44,     9,     8,    82,   116,   153,    28,   138,    88,
      38,   109,    89,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,    51,     3,     4,     5,     6,    52,    53,    54,
      58,    60,    87,     0,    52,    42,    59,    63,    65,    26,
      55,     7,    10,    13,    26,    43,    64,    65,    66,    67,
      68,    71,    72,    74,    75,    76,    87,    91,    40,    45,
      56,    45,    45,    21,    22,    23,    24,    25,    26,    30,
      31,    45,    72,    76,    79,    80,    81,    82,    83,    84,
      85,    86,    88,    90,    91,    45,    64,    47,    37,    26,
      69,    70,    91,    37,    40,    21,    89,    46,    61,    62,
      87,    47,    48,    79,    79,    85,    85,    79,    20,    19,
      17,    18,    15,    16,    35,    36,    29,    30,    32,    33,
      34,    46,    77,    78,    79,    66,    79,    48,    48,    15,
      79,    73,    79,    41,    44,    46,    48,    26,    91,    26,
      55,    46,    46,    46,    80,    81,    82,    82,    83,    83,
      83,    83,    84,    84,    85,    85,    85,    46,    48,    69,
      69,    88,    41,    44,    21,    57,    89,    61,     8,    65,
      77,    79,    41,    44,    65,    57,     9,    65
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    52,    52,    53,    53,    54,    55,
      55,    56,    56,    56,    57,    57,    58,    59,    60,    60,
      61,    61,    62,    63,    64,    65,    65,    66,    66,    67,
      67,    67,    67,    67,    67,    68,    69,    69,    69,    69,
      70,    71,    71,    72,    73,    73,    74,    75,    75,    75,
      76,    76,    77,    77,    78,    79,    79,    80,    80,    81,
      81,    81,    82,    82,    82,    82,    82,    83,    83,    83,
      84,    84,    84,    84,    85,    85,    85,    85,    86,    86,
      86,    86,    87,    87,    87,    87,    88,    88,    88,    88,
      88,    89,    90,    91
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     1,     1,     2,     4,
       3,     3,     5,     0,     3,     1,     2,     1,     4,     5,
       3,     1,     2,     1,     1,     3,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     2,     3,     3,     1,     1,
       3,     3,     3,     4,     3,     1,     2,     6,     8,     5,
       4,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
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
#line 127 "parser.y"
                {push(&pilha, cria_tabela_vazia());}
#line 1280 "parser.tab.c"
    break;

  case 3: /* inicio: inicio_de_tudo programa  */
#line 128 "parser.y"
                                {arvore = (yyvsp[0].no);}
#line 1286 "parser.tab.c"
    break;

  case 4: /* programa: lista_de_elementos programa  */
#line 130 "parser.y"
                                      {(yyval.no) = (yyvsp[-1].no); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1292 "parser.tab.c"
    break;

  case 5: /* programa: %empty  */
#line 130 "parser.y"
                                                                           {(yyval.no) = NULL;}
#line 1298 "parser.tab.c"
    break;

  case 6: /* lista_de_elementos: declaracao  */
#line 133 "parser.y"
                                   {(yyval.no) = (yyvsp[0].no);}
#line 1304 "parser.tab.c"
    break;

  case 7: /* lista_de_elementos: funcao  */
#line 134 "parser.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1310 "parser.tab.c"
    break;

  case 8: /* declaracao: tipo lista_identificador  */
#line 137 "parser.y"
                                     {(yyval.no) = (yyvsp[0].no);}
#line 1316 "parser.tab.c"
    break;

  case 9: /* lista_identificador: TK_IDENTIFICADOR array ',' lista_identificador  */
#line 139 "parser.y"
                                                                       {(yyval.no)=NULL; destroiVL((yyvsp[-1].valor_lexico));
                        // Verifica se função já existe no escopo_global
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-3].valor_lexico), false);                                    
                        if(conteudo_na_pilha == NULL){
                            //Criar_conteudo
                            CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[-3].valor_lexico), 1);
                            //Adiciona o nome da função na pilha global
                            adiciona_simbolo(novo_conteudo, pilha);
                        }
                        else{
                            print_declared(conteudo_na_pilha, (yyvsp[-3].valor_lexico));
                            //printf("ERR_DECLARED na linha %d \n", current_line_number);
                            exit(ERR_DECLARED);
                        } 

                                                
                        }
#line 1338 "parser.tab.c"
    break;

  case 10: /* lista_identificador: TK_IDENTIFICADOR array ';'  */
#line 156 "parser.y"
                                                   {(yyval.no) = NULL; destroiVL((yyvsp[0].valor_lexico));
                        // Verifica se função já existe no escopo_global
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-2].valor_lexico), false);                                    
                        if(conteudo_na_pilha == NULL){
                            //Criar_conteudo
                            CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[-2].valor_lexico), 1);
                            //Adiciona o nome da função na pilha global
                            adiciona_simbolo(novo_conteudo, pilha);
                        }
                        else{
                            print_declared(conteudo_na_pilha, (yyvsp[-2].valor_lexico));
                            //printf("ERR_DECLARED na linha %d \n", current_line_number);
                            exit(ERR_DECLARED);
                        } 
                        }
#line 1358 "parser.tab.c"
    break;

  case 11: /* array: '[' litInt ']'  */
#line 172 "parser.y"
                           {(yyval.no) = NULL;destroiVL((yyvsp[-2].valor_lexico));destroiVL((yyvsp[0].valor_lexico));}
#line 1364 "parser.tab.c"
    break;

  case 12: /* array: '[' litInt '^' lista_de_literais_inteiros ']'  */
#line 173 "parser.y"
                                                           {(yyval.no) = NULL;destroiVL((yyvsp[-4].valor_lexico));destroiVL((yyvsp[-2].valor_lexico));destroiVL((yyvsp[0].valor_lexico));}
#line 1370 "parser.tab.c"
    break;

  case 13: /* array: %empty  */
#line 173 "parser.y"
                                                                                                                   {(yyval.no) = NULL;}
#line 1376 "parser.tab.c"
    break;

  case 14: /* lista_de_literais_inteiros: litInt '^' lista_de_literais_inteiros  */
#line 175 "parser.y"
                                                                      {(yyval.no)=NULL;destroiVL((yyvsp[-1].valor_lexico));}
#line 1382 "parser.tab.c"
    break;

  case 15: /* lista_de_literais_inteiros: TK_LIT_INT  */
#line 176 "parser.y"
                                           {(yyval.no) = NULL;}
#line 1388 "parser.tab.c"
    break;

  case 16: /* funcao: cabecalho corpo  */
#line 178 "parser.y"
                        {(yyval.no) = add_child((yyvsp[-1].no), (yyvsp[0].no));}
#line 1394 "parser.tab.c"
    break;

  case 17: /* corpo: bloco_de_comandos  */
#line 180 "parser.y"
                         {(yyval.no) = (yyvsp[0].no);}
#line 1400 "parser.tab.c"
    break;

  case 18: /* cabecalho: tipo TK_IDENTIFICADOR '(' ')'  */
#line 182 "parser.y"
                                           {(yyval.no) = create_node(identificador, (yyvsp[-2].valor_lexico)); destroiVL((yyvsp[-1].valor_lexico));destroiVL((yyvsp[0].valor_lexico));
                                            // Verifica se função já existe no escopo_global
                                            CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-2].valor_lexico), false);                                    
                                            if(conteudo_na_pilha == NULL){
                                                //Criar_conteudo
                                                CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[-2].valor_lexico), 1);
                                                //Adiciona o nome da função na pilha global
                                                adiciona_simbolo(novo_conteudo, pilha);
                                            }
                                            else{
                                                print_declared(conteudo_na_pilha, (yyvsp[-2].valor_lexico));
                                                //printf("ERR_DECLARED na linha %d \n", current_line_number);
                                                exit(ERR_DECLARED);
                                            }                                           
                                            }
#line 1420 "parser.tab.c"
    break;

  case 19: /* cabecalho: tipo TK_IDENTIFICADOR '(' lista_funcao ')'  */
#line 197 "parser.y"
                                                       {(yyval.no) = create_node(identificador, (yyvsp[-3].valor_lexico)); destroiVL((yyvsp[-2].valor_lexico));destroiVL((yyvsp[0].valor_lexico));
                                            // Verifica se função já existe no escopo_global
                                            CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-3].valor_lexico), false);                                  
                                            if(conteudo_na_pilha == NULL){
                                                //Criar_conteudo
                                                CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[-3].valor_lexico), 1);
                                                //Adiciona o nome da função na pilha global
                                                adiciona_simbolo(novo_conteudo, pilha);
                                            }
                                            else{
                                                print_declared(conteudo_na_pilha, (yyvsp[-3].valor_lexico));
                                                //printf("ERR_DECLARED na linha %d \n", current_line_number);
                                                exit(ERR_DECLARED);
                                            }                                               
                                            }
#line 1440 "parser.tab.c"
    break;

  case 20: /* lista_funcao: parametro_funcao ',' lista_funcao  */
#line 214 "parser.y"
                                                  {destroiVL((yyvsp[-1].valor_lexico));}
#line 1446 "parser.tab.c"
    break;

  case 21: /* lista_funcao: parametro_funcao  */
#line 215 "parser.y"
                                 {(yyval.no) = (yyvsp[0].no);}
#line 1452 "parser.tab.c"
    break;

  case 22: /* parametro_funcao: tipo ID  */
#line 217 "parser.y"
                          {(yyval.no) = (yyvsp[0].no);}
#line 1458 "parser.tab.c"
    break;

  case 23: /* inicia_escopo: '{'  */
#line 220 "parser.y"
                   {push(&pilha, cria_tabela_vazia());destroiVL((yyvsp[0].valor_lexico));}
#line 1464 "parser.tab.c"
    break;

  case 24: /* fim_escopo: '}'  */
#line 222 "parser.y"
                {pop(&pilha);destroiVL((yyvsp[0].valor_lexico));}
#line 1470 "parser.tab.c"
    break;

  case 25: /* bloco_de_comandos: inicia_escopo comandos fim_escopo  */
#line 224 "parser.y"
                                                      { (yyval.no) = (yyvsp[-1].no);}
#line 1476 "parser.tab.c"
    break;

  case 26: /* bloco_de_comandos: inicia_escopo fim_escopo  */
#line 225 "parser.y"
                                            {(yyval.no)=NULL;}
#line 1482 "parser.tab.c"
    break;

  case 27: /* comandos: comandos_simples ';' comandos  */
#line 228 "parser.y"
                                          {(yyval.no) = ((yyvsp[-2].no)) == NULL ? ((yyvsp[0].no)) : add_child((yyvsp[-2].no), (yyvsp[0].no));destroiVL((yyvsp[-1].valor_lexico));}
#line 1488 "parser.tab.c"
    break;

  case 28: /* comandos: comandos_simples ';'  */
#line 229 "parser.y"
                                 {(yyval.no) = (yyvsp[-1].no); destroiVL((yyvsp[0].valor_lexico));}
#line 1494 "parser.tab.c"
    break;

  case 29: /* comandos_simples: declaracao_variavel_local  */
#line 233 "parser.y"
                                              {(yyval.no) = (yyvsp[0].no);}
#line 1500 "parser.tab.c"
    break;

  case 30: /* comandos_simples: atribuicao  */
#line 234 "parser.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1506 "parser.tab.c"
    break;

  case 31: /* comandos_simples: controle_de_fluxo  */
#line 235 "parser.y"
                                      {(yyval.no) = (yyvsp[0].no);}
#line 1512 "parser.tab.c"
    break;

  case 32: /* comandos_simples: chamada_funcao  */
#line 236 "parser.y"
                                   {(yyval.no) = (yyvsp[0].no);}
#line 1518 "parser.tab.c"
    break;

  case 33: /* comandos_simples: bloco_de_comandos  */
#line 237 "parser.y"
                                      {(yyval.no) = (yyvsp[0].no);}
#line 1524 "parser.tab.c"
    break;

  case 34: /* comandos_simples: retorno  */
#line 238 "parser.y"
                            {(yyval.no) = (yyvsp[0].no);}
#line 1530 "parser.tab.c"
    break;

  case 35: /* declaracao_variavel_local: tipo lista_variaveis  */
#line 243 "parser.y"
                                                {(yyval.no) = (yyvsp[0].no);}
#line 1536 "parser.tab.c"
    break;

  case 36: /* lista_variaveis: variavel ',' lista_variaveis  */
#line 245 "parser.y"
                                               {(yyval.no) = (yyvsp[-2].no); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));destroiVL((yyvsp[-1].valor_lexico));}
#line 1542 "parser.tab.c"
    break;

  case 37: /* lista_variaveis: TK_IDENTIFICADOR ',' lista_variaveis  */
#line 246 "parser.y"
                                                      {(yyval.no) = (yyvsp[0].no);
                                                    // Verifica se função já existe no escopo_global/local
                                                    CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-2].valor_lexico), true);                                  
                                                    if(conteudo_na_pilha == NULL){
                                                        //Criar_conteudo
                                                        CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[-2].valor_lexico), 1);
                                                        //Adiciona o nome da variavel na pilha local(mais do topo)
                                                        adiciona_simbolo(novo_conteudo, pilha);
                                                    }
                                                    else{
                                                        print_declared(conteudo_na_pilha, (yyvsp[-2].valor_lexico));
                                                        //printf("ERR_DECLARED na linha %d \n", current_line_number);
                                                        exit(ERR_DECLARED);
                                                    }  
                                                    }
#line 1562 "parser.tab.c"
    break;

  case 38: /* lista_variaveis: variavel  */
#line 261 "parser.y"
                          {(yyval.no) = (yyvsp[0].no);}
#line 1568 "parser.tab.c"
    break;

  case 39: /* lista_variaveis: TK_IDENTIFICADOR  */
#line 262 "parser.y"
                                  {(yyval.no) = NULL;
                                    // Verifica se função já existe no escopo_global
                                    CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[0].valor_lexico), true);                                  
                                    if(conteudo_na_pilha == NULL){
                                        //Criar_conteudo
                                        CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[0].valor_lexico), 1);
                                        //Adiciona o nome da variavel na pilha local(mais no topo)
                                        adiciona_simbolo(novo_conteudo, pilha);
                                    }
                                    else{
                                        print_declared(conteudo_na_pilha, (yyvsp[0].valor_lexico));
                                        //printf("ERR_DECLARED na linha %d \n", current_line_number);
                                        exit(ERR_DECLARED);
                                    }  
                 
                                }
#line 1589 "parser.tab.c"
    break;

  case 40: /* variavel: ID TK_OC_LE literais  */
#line 279 "parser.y"
                               {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no),(yyvsp[-2].no)); (yyval.no) = add_child((yyval.no),(yyvsp[0].no));}
#line 1595 "parser.tab.c"
    break;

  case 41: /* atribuicao: ID '=' expressao  */
#line 285 "parser.y"
                             {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1601 "parser.tab.c"
    break;

  case 42: /* atribuicao: arranjo_multi '=' expressao  */
#line 286 "parser.y"
                                         {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1607 "parser.tab.c"
    break;

  case 43: /* arranjo_multi: ID '[' lista_de_expressoes ']'  */
#line 288 "parser.y"
                                               {(yyval.no) = create_node(arranjo, (yyvsp[-2].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-3].no)); (yyval.no) = add_child((yyval.no), (yyvsp[-1].no)); destroiVL((yyvsp[0].valor_lexico));}
#line 1613 "parser.tab.c"
    break;

  case 44: /* lista_de_expressoes: lista_de_expressoes '^' expressao  */
#line 295 "parser.y"
                                                         {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); add_child((yyval.no),(yyvsp[-2].no)); add_child((yyval.no), (yyvsp[0].no));}
#line 1619 "parser.tab.c"
    break;

  case 45: /* lista_de_expressoes: expressao  */
#line 296 "parser.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1625 "parser.tab.c"
    break;

  case 46: /* retorno: TK_PR_RETURN expressao  */
#line 302 "parser.y"
                                 {(yyval.no) = create_node(palavra_reservada, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1631 "parser.tab.c"
    break;

  case 47: /* controle_de_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos  */
#line 323 "parser.y"
                                                                           {(yyval.no) = create_node(palavra_reservada, (yyvsp[-5].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-3].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no)); destroiVL((yyvsp[-4].valor_lexico)); destroiVL((yyvsp[-2].valor_lexico));
                                                                            
                                                                            }
#line 1639 "parser.tab.c"
    break;

  case 48: /* controle_de_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos TK_PR_ELSE bloco_de_comandos  */
#line 326 "parser.y"
                                                                                                        {(yyval.no) = create_node(palavra_reservada, (yyvsp[-7].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-5].no)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));destroiVL((yyvsp[-6].valor_lexico)); destroiVL((yyvsp[-4].valor_lexico));}
#line 1645 "parser.tab.c"
    break;

  case 49: /* controle_de_fluxo: TK_PR_WHILE '(' expressao ')' bloco_de_comandos  */
#line 327 "parser.y"
                                                                   {(yyval.no) = create_node(palavra_reservada, (yyvsp[-4].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no)); destroiVL((yyvsp[-3].valor_lexico)); destroiVL((yyvsp[-1].valor_lexico));}
#line 1651 "parser.tab.c"
    break;

  case 50: /* chamada_funcao: TK_IDENTIFICADOR '(' lista_de_argumentos ')'  */
#line 332 "parser.y"
                                                             {(yyval.no) = create_node(call,(yyvsp[-3].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-1].no)); destroiVL((yyvsp[-2].valor_lexico)); destroiVL((yyvsp[0].valor_lexico));
                                                                // Verifica se função já existe no escopo_global
                                                                CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-3].valor_lexico), false);                                     
                                                                if(conteudo_na_pilha == NULL){
                                                                    print_undeclared((yyvsp[-3].valor_lexico));
                                                                    //printf("ERR_UNDECLARED na linha %d \n", current_line_number);
                                                                    exit(ERR_UNDECLARED);
                                                                }
                                                            }
#line 1665 "parser.tab.c"
    break;

  case 51: /* chamada_funcao: TK_IDENTIFICADOR '(' ')'  */
#line 341 "parser.y"
                                          {(yyval.no) = create_node(call,(yyvsp[-2].valor_lexico)); destroiVL((yyvsp[-1].valor_lexico)); destroiVL((yyvsp[0].valor_lexico));
                                            // Verifica se função já existe no escopo_global
                                            CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-2].valor_lexico), false);                                       
                                            if(conteudo_na_pilha == NULL){
                                                print_undeclared((yyvsp[-2].valor_lexico));
                                                //printf("ERR_UNDECLARED na linha %d \n", current_line_number);
                                                exit(ERR_UNDECLARED);
                                            }
                                         }
#line 1679 "parser.tab.c"
    break;

  case 52: /* lista_de_argumentos: argumento  */
#line 354 "parser.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1685 "parser.tab.c"
    break;

  case 53: /* lista_de_argumentos: argumento ',' lista_de_argumentos  */
#line 355 "parser.y"
                                                       {(yyval.no) = add_child((yyvsp[-2].no), (yyvsp[0].no));destroiVL((yyvsp[-1].valor_lexico));}
#line 1691 "parser.tab.c"
    break;

  case 54: /* argumento: expressao  */
#line 357 "parser.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 1697 "parser.tab.c"
    break;

  case 55: /* expressao: expressao TK_OC_OR sexta_precedencia  */
#line 364 "parser.y"
                                                {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1703 "parser.tab.c"
    break;

  case 56: /* expressao: sexta_precedencia  */
#line 365 "parser.y"
                             {(yyval.no) = (yyvsp[0].no);}
#line 1709 "parser.tab.c"
    break;

  case 57: /* sexta_precedencia: sexta_precedencia TK_OC_AND quinta_precedencia  */
#line 367 "parser.y"
                                                                   {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1715 "parser.tab.c"
    break;

  case 58: /* sexta_precedencia: quinta_precedencia  */
#line 368 "parser.y"
                                       {(yyval.no) = (yyvsp[0].no);}
#line 1721 "parser.tab.c"
    break;

  case 59: /* quinta_precedencia: quinta_precedencia TK_OC_EQ quarta_precedencia  */
#line 370 "parser.y"
                                                                   {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1727 "parser.tab.c"
    break;

  case 60: /* quinta_precedencia: quinta_precedencia TK_OC_NE quarta_precedencia  */
#line 371 "parser.y"
                                                                   {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1733 "parser.tab.c"
    break;

  case 61: /* quinta_precedencia: quarta_precedencia  */
#line 372 "parser.y"
                                       {(yyval.no) = (yyvsp[0].no);}
#line 1739 "parser.tab.c"
    break;

  case 62: /* quarta_precedencia: quarta_precedencia TK_OC_GE terceira_precedencia  */
#line 374 "parser.y"
                                                                      {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1745 "parser.tab.c"
    break;

  case 63: /* quarta_precedencia: quarta_precedencia TK_OC_LE terceira_precedencia  */
#line 375 "parser.y"
                                                                      {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1751 "parser.tab.c"
    break;

  case 64: /* quarta_precedencia: quarta_precedencia '>' terceira_precedencia  */
#line 376 "parser.y"
                                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1757 "parser.tab.c"
    break;

  case 65: /* quarta_precedencia: quarta_precedencia '<' terceira_precedencia  */
#line 377 "parser.y"
                                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1763 "parser.tab.c"
    break;

  case 66: /* quarta_precedencia: terceira_precedencia  */
#line 378 "parser.y"
                                         {(yyval.no) = (yyvsp[0].no);}
#line 1769 "parser.tab.c"
    break;

  case 67: /* terceira_precedencia: terceira_precedencia '-' segunda_precedencia  */
#line 380 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1775 "parser.tab.c"
    break;

  case 68: /* terceira_precedencia: terceira_precedencia '+' segunda_precedencia  */
#line 381 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1781 "parser.tab.c"
    break;

  case 69: /* terceira_precedencia: segunda_precedencia  */
#line 382 "parser.y"
                                            {(yyval.no) = (yyvsp[0].no);}
#line 1787 "parser.tab.c"
    break;

  case 70: /* segunda_precedencia: segunda_precedencia '%' primeira_precedencia  */
#line 384 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1793 "parser.tab.c"
    break;

  case 71: /* segunda_precedencia: segunda_precedencia '/' primeira_precedencia  */
#line 385 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1799 "parser.tab.c"
    break;

  case 72: /* segunda_precedencia: segunda_precedencia '*' primeira_precedencia  */
#line 386 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1805 "parser.tab.c"
    break;

  case 73: /* segunda_precedencia: primeira_precedencia  */
#line 387 "parser.y"
                                             {(yyval.no) = (yyvsp[0].no);}
#line 1811 "parser.tab.c"
    break;

  case 74: /* primeira_precedencia: '(' expressao ')'  */
#line 389 "parser.y"
                                          {(yyval.no) = (yyvsp[-1].no); destroiVL((yyvsp[-2].valor_lexico)); destroiVL((yyvsp[0].valor_lexico));}
#line 1817 "parser.tab.c"
    break;

  case 75: /* primeira_precedencia: '!' primeira_precedencia  */
#line 390 "parser.y"
                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)) ; (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1823 "parser.tab.c"
    break;

  case 76: /* primeira_precedencia: '-' primeira_precedencia  */
#line 391 "parser.y"
                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1829 "parser.tab.c"
    break;

  case 77: /* primeira_precedencia: fator  */
#line 392 "parser.y"
                              {(yyval.no) = (yyvsp[0].no);}
#line 1835 "parser.tab.c"
    break;

  case 78: /* fator: arranjo_multi  */
#line 394 "parser.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 1841 "parser.tab.c"
    break;

  case 79: /* fator: literais  */
#line 395 "parser.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1847 "parser.tab.c"
    break;

  case 80: /* fator: chamada_funcao  */
#line 396 "parser.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1853 "parser.tab.c"
    break;

  case 81: /* fator: ID_FATOR_EXP  */
#line 397 "parser.y"
                     {(yyval.no) = (yyvsp[0].no);}
#line 1859 "parser.tab.c"
    break;

  case 82: /* tipo: TK_PR_FLOAT  */
#line 403 "parser.y"
                  {(yyval.no) = NULL; tipoVar = (yyvsp[0].tipo);}
#line 1865 "parser.tab.c"
    break;

  case 83: /* tipo: TK_PR_INT  */
#line 404 "parser.y"
                 {(yyval.no) = NULL; tipoVar = (yyvsp[0].tipo);}
#line 1871 "parser.tab.c"
    break;

  case 84: /* tipo: TK_PR_CHAR  */
#line 405 "parser.y"
                 {(yyval.no) = NULL; tipoVar = (yyvsp[0].tipo);}
#line 1877 "parser.tab.c"
    break;

  case 85: /* tipo: TK_PR_BOOL  */
#line 406 "parser.y"
                 {(yyval.no) = NULL; tipoVar = (yyvsp[0].tipo);}
#line 1883 "parser.tab.c"
    break;

  case 86: /* literais: TK_LIT_FLOAT  */
#line 408 "parser.y"
                          {(yyval.no) = create_node(literal_float, (yyvsp[0].valor_lexico));}
#line 1889 "parser.tab.c"
    break;

  case 87: /* literais: TK_LIT_INT  */
#line 409 "parser.y"
                          {(yyval.no) = create_node(literal_inteiro, (yyvsp[0].valor_lexico));}
#line 1895 "parser.tab.c"
    break;

  case 88: /* literais: TK_LIT_CHAR  */
#line 410 "parser.y"
                          {(yyval.no) = create_node(literal_char, (yyvsp[0].valor_lexico));}
#line 1901 "parser.tab.c"
    break;

  case 89: /* literais: TK_LIT_TRUE  */
#line 411 "parser.y"
                          {(yyval.no) = create_node(literal_bool, (yyvsp[0].valor_lexico));}
#line 1907 "parser.tab.c"
    break;

  case 90: /* literais: TK_LIT_FALSE  */
#line 412 "parser.y"
                          {(yyval.no) = create_node(literal_bool, (yyvsp[0].valor_lexico));}
#line 1913 "parser.tab.c"
    break;

  case 91: /* litInt: TK_LIT_INT  */
#line 414 "parser.y"
                     {(yyval.no) = create_node(literal_inteiro, (yyvsp[0].valor_lexico));}
#line 1919 "parser.tab.c"
    break;

  case 92: /* ID_FATOR_EXP: TK_IDENTIFICADOR  */
#line 417 "parser.y"
                               {(yyval.no) = create_node(identificador, (yyvsp[0].valor_lexico));
                        // Verifica se função já existe no escopo_global/local
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[0].valor_lexico), false);                                       
                        if(conteudo_na_pilha == NULL){
                            print_undeclared((yyvsp[0].valor_lexico));
                            //printf("ERR_UNDECLARED na linha %d \n", current_line_number);
                            exit(ERR_UNDECLARED);
                        }
                        }
#line 1933 "parser.tab.c"
    break;

  case 93: /* ID: TK_IDENTIFICADOR  */
#line 427 "parser.y"
                     {(yyval.no) = create_node(identificador, (yyvsp[0].valor_lexico));
                        // Verifica se função já existe no escopo_global
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[0].valor_lexico), true);                                        
                        if(conteudo_na_pilha == NULL){
                            //Criar_conteudo
                            CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[0].valor_lexico), 1);
                            //Adiciona o nome da função na pilha global
                            adiciona_simbolo(novo_conteudo, pilha);
                        }
                        else{
                            print_declared(conteudo_na_pilha, (yyvsp[0].valor_lexico));
                            //printf("ERR_DECLARED na linha %d \n", current_line_number);
                            exit(ERR_DECLARED);
                        }  
                        }
#line 1953 "parser.tab.c"
    break;


#line 1957 "parser.tab.c"

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

#line 442 "parser.y"






void yyerror (char const *s) {
    fprintf (stderr, "%s na linha %d\n", s, current_line_number);
}
