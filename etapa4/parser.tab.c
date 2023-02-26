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
  YYSYMBOL_bloco_de_comandos = 63,         /* bloco_de_comandos  */
  YYSYMBOL_comandos = 64,                  /* comandos  */
  YYSYMBOL_comandos_simples = 65,          /* comandos_simples  */
  YYSYMBOL_declaracao_variavel_local = 66, /* declaracao_variavel_local  */
  YYSYMBOL_lista_variaveis = 67,           /* lista_variaveis  */
  YYSYMBOL_variavel = 68,                  /* variavel  */
  YYSYMBOL_atribuicao = 69,                /* atribuicao  */
  YYSYMBOL_arranjo_multi = 70,             /* arranjo_multi  */
  YYSYMBOL_lista_de_expressoes = 71,       /* lista_de_expressoes  */
  YYSYMBOL_retorno = 72,                   /* retorno  */
  YYSYMBOL_controle_de_fluxo = 73,         /* controle_de_fluxo  */
  YYSYMBOL_chamada_funcao = 74,            /* chamada_funcao  */
  YYSYMBOL_lista_de_argumentos = 75,       /* lista_de_argumentos  */
  YYSYMBOL_argumento = 76,                 /* argumento  */
  YYSYMBOL_expressao = 77,                 /* expressao  */
  YYSYMBOL_sexta_precedencia = 78,         /* sexta_precedencia  */
  YYSYMBOL_quinta_precedencia = 79,        /* quinta_precedencia  */
  YYSYMBOL_quarta_precedencia = 80,        /* quarta_precedencia  */
  YYSYMBOL_terceira_precedencia = 81,      /* terceira_precedencia  */
  YYSYMBOL_segunda_precedencia = 82,       /* segunda_precedencia  */
  YYSYMBOL_primeira_precedencia = 83,      /* primeira_precedencia  */
  YYSYMBOL_fator = 84,                     /* fator  */
  YYSYMBOL_tipo = 85,                      /* tipo  */
  YYSYMBOL_literais = 86,                  /* literais  */
  YYSYMBOL_litInt = 87,                    /* litInt  */
  YYSYMBOL_ID = 88                         /* ID  */
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
#define YYLAST   162

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  40
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  154

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
       0,   122,   122,   123,   125,   125,   128,   129,   132,   134,
     135,   137,   138,   138,   140,   141,   143,   145,   147,   174,
     203,   204,   206,   213,   214,   217,   218,   222,   223,   224,
     225,   226,   227,   232,   234,   235,   254,   255,   276,   282,
     283,   285,   292,   293,   299,   304,   305,   306,   311,   322,
     337,   338,   340,   347,   348,   350,   351,   353,   354,   355,
     357,   358,   359,   360,   361,   363,   364,   365,   367,   368,
     369,   370,   372,   373,   374,   375,   377,   378,   379,   380,
     386,   387,   388,   389,   391,   392,   393,   394,   395,   397,
     399
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

#define YYPACT_NINF (-64)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-91)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -64,    67,    33,   -64,   -64,   -64,   -64,   -64,    67,   -64,
     -64,    25,    80,   -64,   -64,    32,   -64,   -64,   -17,   -64,
      71,    76,    89,    81,   -64,   -64,    74,    78,   -64,   -64,
      91,   -64,   -64,   -64,   101,    28,   108,    11,   -35,    89,
      89,   -64,   -64,   -64,   -64,   -64,    89,    89,    89,   -64,
     -64,   110,   112,     8,    -6,    54,    90,   -64,   -64,   -64,
      92,    55,   -64,    56,    89,    -4,   -64,    87,   121,    89,
      89,   -64,   -10,   -64,    93,    94,   111,   -64,   114,   -14,
       0,   -64,   -64,     1,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,   -64,    97,    96,
     110,   -64,   110,   101,   101,    72,   110,    61,   110,   -64,
     117,   -64,    67,   -64,   -64,   105,   -64,   138,    25,   -64,
     112,     8,    -6,    -6,    54,    54,    54,    54,    90,    90,
     -64,   -64,   -64,   -64,    89,   -64,   -64,   -64,   -64,    89,
     103,   107,   106,   -64,    25,   -64,   -64,   110,   -64,   117,
     140,   -64,    25,   -64
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     5,     0,    81,    80,    83,    82,     3,     5,     6,
       7,     0,     0,     1,     4,     0,    16,    17,    13,     8,
       0,     0,     0,    90,    24,    31,     0,     0,    27,    28,
       0,    32,    29,    30,     0,     0,     0,     0,     0,     0,
       0,    85,    84,    88,    87,    86,     0,     0,     0,    76,
      78,    44,    54,    56,    59,    64,    67,    71,    75,    77,
      79,     0,    23,    26,     0,    37,    33,    36,     0,     0,
       0,    89,     0,    18,     0,    21,     0,    10,     0,     0,
       0,    74,    73,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,    50,
      52,    25,    40,     0,     0,     0,    39,     0,    43,    11,
       0,    19,     0,    90,    22,    13,     9,     0,     0,    72,
      53,    55,    57,    58,    61,    60,    62,    63,    66,    65,
      70,    69,    68,    48,     0,    35,    34,    38,    41,     0,
      15,     0,     0,    20,     0,    47,    51,    42,    12,     0,
      45,    14,     0,    46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -64,   -64,   -64,   143,   -64,   -64,    75,   -64,     3,   -64,
     -64,   -64,    42,   -64,   -11,    95,   -64,   -64,   -63,   -64,
     -64,    -8,   -64,   -64,   -64,    -7,    21,   -64,   -21,    73,
      77,    17,    -1,    16,   -42,   -64,   -13,    51,   123,   -12
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     7,     8,     9,    19,    38,   141,    10,
      16,    11,    74,    75,    25,    26,    27,    28,    66,    67,
      29,    49,   107,    31,    32,    50,    98,    99,   100,    52,
      53,    54,    55,    56,    57,    58,    12,    59,   142,    60
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      17,    51,    34,    35,    81,    82,    84,    30,    33,    88,
      89,   -90,    77,    78,     3,     4,     5,     6,    79,    80,
      84,    84,    68,    36,    76,    86,    87,    83,    37,    90,
      91,   109,   117,    13,   110,     3,     4,     5,     6,    20,
     135,   136,    21,   102,   103,    22,   118,   119,   106,   108,
      34,    35,   130,   131,   132,    30,    33,    73,    23,     3,
       4,     5,     6,    20,   114,    69,    21,    15,    70,    22,
       3,     4,     5,     6,    15,    24,    41,    42,    43,    44,
      45,    23,    23,    92,    93,    46,    47,   124,   125,   126,
     127,    68,    68,    41,    42,    43,    44,    45,    15,    76,
      48,    97,   138,   122,   123,   139,    18,   145,   128,   129,
      41,    42,    43,    44,    45,    23,    39,    62,   147,    46,
      47,    40,    94,    95,    96,    63,    61,    65,    64,    71,
      84,    85,    70,   150,    48,   104,   105,   113,   140,   111,
     115,   153,   112,   133,   134,    36,   144,   -89,   148,   152,
     149,    14,   151,   116,   143,   146,   137,   120,   101,    72,
       0,     0,   121
};

static const yytype_int16 yycheck[] =
{
      11,    22,    15,    15,    46,    47,    20,    15,    15,    15,
      16,    15,    47,    48,     3,     4,     5,     6,    39,    40,
      20,    20,    34,    40,    37,    17,    18,    48,    45,    35,
      36,    41,    46,     0,    44,     3,     4,     5,     6,     7,
     103,   104,    10,    64,    48,    13,    46,    46,    69,    70,
      63,    63,    94,    95,    96,    63,    63,    46,    26,     3,
       4,     5,     6,     7,    76,    37,    10,    42,    40,    13,
       3,     4,     5,     6,    42,    43,    21,    22,    23,    24,
      25,    26,    26,    29,    30,    30,    31,    88,    89,    90,
      91,   103,   104,    21,    22,    23,    24,    25,    42,   112,
      45,    46,    41,    86,    87,    44,    26,   118,    92,    93,
      21,    22,    23,    24,    25,    26,    45,    43,   139,    30,
      31,    45,    32,    33,    34,    47,    45,    26,    37,    21,
      20,    19,    40,   144,    45,    48,    15,    26,    21,    46,
      26,   152,    48,    46,    48,    40,     8,    44,    41,     9,
      44,     8,   149,    78,   112,   134,   105,    84,    63,    36,
      -1,    -1,    85
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    50,    51,     3,     4,     5,     6,    52,    53,    54,
      58,    60,    85,     0,    52,    42,    59,    63,    26,    55,
       7,    10,    13,    26,    43,    63,    64,    65,    66,    69,
      70,    72,    73,    74,    85,    88,    40,    45,    56,    45,
      45,    21,    22,    23,    24,    25,    30,    31,    45,    70,
      74,    77,    78,    79,    80,    81,    82,    83,    84,    86,
      88,    45,    43,    47,    37,    26,    67,    68,    88,    37,
      40,    21,    87,    46,    61,    62,    85,    47,    48,    77,
      77,    83,    83,    77,    20,    19,    17,    18,    15,    16,
      35,    36,    29,    30,    32,    33,    34,    46,    75,    76,
      77,    64,    77,    48,    48,    15,    77,    71,    77,    41,
      44,    46,    48,    26,    88,    26,    55,    46,    46,    46,
      78,    79,    80,    80,    81,    81,    81,    81,    82,    82,
      83,    83,    83,    46,    48,    67,    67,    86,    41,    44,
      21,    57,    87,    61,     8,    63,    75,    77,    41,    44,
      63,    57,     9,    63
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    52,    52,    53,    53,    54,    55,
      55,    56,    56,    56,    57,    57,    58,    59,    60,    60,
      61,    61,    62,    63,    63,    64,    64,    65,    65,    65,
      65,    65,    65,    66,    67,    67,    67,    67,    68,    69,
      69,    70,    71,    71,    72,    73,    73,    73,    74,    74,
      75,    75,    76,    77,    77,    78,    78,    79,    79,    79,
      80,    80,    80,    80,    80,    81,    81,    81,    82,    82,
      82,    82,    83,    83,    83,    83,    84,    84,    84,    84,
      85,    85,    85,    85,    86,    86,    86,    86,    86,    87,
      88
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     0,     1,     1,     2,     4,
       3,     3,     5,     0,     3,     1,     2,     1,     4,     5,
       3,     1,     2,     3,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     2,     3,     3,     1,     1,     3,     3,
       3,     4,     3,     1,     2,     6,     8,     5,     4,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
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
#line 122 "parser.y"
                {push(&pilha, cria_tabela_vazia());printf("Hello");}
#line 1274 "parser.tab.c"
    break;

  case 3: /* inicio: inicio_de_tudo programa  */
#line 123 "parser.y"
                                {arvore = (yyvsp[-1].no);}
#line 1280 "parser.tab.c"
    break;

  case 4: /* programa: lista_de_elementos programa  */
#line 125 "parser.y"
                                      {(yyval.no) = (yyvsp[-1].no); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1286 "parser.tab.c"
    break;

  case 5: /* programa: %empty  */
#line 125 "parser.y"
                                                                           {(yyval.no) = NULL;}
#line 1292 "parser.tab.c"
    break;

  case 6: /* lista_de_elementos: declaracao  */
#line 128 "parser.y"
                                   {(yyval.no) = (yyvsp[0].no);}
#line 1298 "parser.tab.c"
    break;

  case 7: /* lista_de_elementos: funcao  */
#line 129 "parser.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1304 "parser.tab.c"
    break;

  case 8: /* declaracao: tipo lista_identificador  */
#line 132 "parser.y"
                                     {(yyval.no) = (yyvsp[0].no);}
#line 1310 "parser.tab.c"
    break;

  case 9: /* lista_identificador: TK_IDENTIFICADOR array ',' lista_identificador  */
#line 134 "parser.y"
                                                                       {(yyval.no)=NULL; destroiVL((yyvsp[-1].valor_lexico));}
#line 1316 "parser.tab.c"
    break;

  case 10: /* lista_identificador: TK_IDENTIFICADOR array ';'  */
#line 135 "parser.y"
                                                   {(yyval.no) = NULL; destroiVL((yyvsp[0].valor_lexico));}
#line 1322 "parser.tab.c"
    break;

  case 11: /* array: '[' litInt ']'  */
#line 137 "parser.y"
                           {(yyval.no) = NULL;destroiVL((yyvsp[-2].valor_lexico));destroiVL((yyvsp[0].valor_lexico));}
#line 1328 "parser.tab.c"
    break;

  case 12: /* array: '[' litInt '^' lista_de_literais_inteiros ']'  */
#line 138 "parser.y"
                                                           {(yyval.no) = NULL;destroiVL((yyvsp[-4].valor_lexico));destroiVL((yyvsp[-2].valor_lexico));destroiVL((yyvsp[0].valor_lexico));}
#line 1334 "parser.tab.c"
    break;

  case 13: /* array: %empty  */
#line 138 "parser.y"
                                                                                                                   {(yyval.no) = NULL;}
#line 1340 "parser.tab.c"
    break;

  case 14: /* lista_de_literais_inteiros: litInt '^' lista_de_literais_inteiros  */
#line 140 "parser.y"
                                                                      {(yyval.no)=NULL;destroiVL((yyvsp[-1].valor_lexico));}
#line 1346 "parser.tab.c"
    break;

  case 15: /* lista_de_literais_inteiros: TK_LIT_INT  */
#line 141 "parser.y"
                                           {(yyval.no) = NULL;}
#line 1352 "parser.tab.c"
    break;

  case 16: /* funcao: cabecalho corpo  */
#line 143 "parser.y"
                        {(yyval.no) = add_child((yyvsp[-1].no), (yyvsp[0].no));}
#line 1358 "parser.tab.c"
    break;

  case 17: /* corpo: bloco_de_comandos  */
#line 145 "parser.y"
                         {(yyval.no) = (yyvsp[0].no);}
#line 1364 "parser.tab.c"
    break;

  case 18: /* cabecalho: tipo TK_IDENTIFICADOR '(' ')'  */
#line 147 "parser.y"
                                           {(yyval.no) = create_node(identificador, (yyvsp[-2].valor_lexico)); destroiVL((yyvsp[-1].valor_lexico));destroiVL((yyvsp[0].valor_lexico));
                                            // Verifica se função já existe no escopo_global
                                            printf("Inicio TK_IDENTIFICADOR\n");
                                            // print_pilha(&pilha);  
                                            CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-2].valor_lexico));
                                            printf("Conteudo um\n");                                         
                                            if(conteudo_na_pilha == NULL){
                                                //Criar_conteudo
                                                CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[-2].valor_lexico));
                                                printf("Conteudo Criado\n");
                                                //Adiciona o nome da função na pilha global
                                                adiciona_simbolo(novo_conteudo, pilha);
                                                printf("Nome da funcao adicionado na pilha global\n");
                                                //Adiciona novo escopo
                                                //TabelaSimbolos* novo_escopo = cria_tabela_vazia();
                                                // printf("Criou novo escopo\n");
                                                push(&pilha, cria_tabela_vazia());
                                                // printf("Adicionou novo escopo na pilha\n");
                                                //pop(&pilha);
                                                //print_pilha(&pilha);
                                                printf("Pop Pilha\n");
                                            }
                                            else{
                                                printf("ERR_DECLARED na linha %d \n", current_line_number);
                                                exit(ERR_DECLARED);
                                            }                                           
                                            }
#line 1396 "parser.tab.c"
    break;

  case 19: /* cabecalho: tipo TK_IDENTIFICADOR '(' lista_funcao ')'  */
#line 174 "parser.y"
                                                       {(yyval.no) = create_node(identificador, (yyvsp[-3].valor_lexico)); destroiVL((yyvsp[-2].valor_lexico));destroiVL((yyvsp[0].valor_lexico));
                                            // Verifica se função já existe no escopo_global
                                            printf("Inicio TK_IDENTIFICADOR\n");
                                            // print_pilha(&pilha);  
                                            CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-3].valor_lexico));
                                            printf("Conteudo um\n");                                         
                                            if(conteudo_na_pilha == NULL){
                                                //Criar_conteudo
                                                CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[-3].valor_lexico));
                                                printf("Conteudo Criado\n");
                                                //Adiciona o nome da função na pilha global
                                                adiciona_simbolo(novo_conteudo, pilha);
                                                printf("Nome da funcao adicionado na pilha global\n");
                                                //Adiciona novo escopo
                                                //TabelaSimbolos* novo_escopo = cria_tabela_vazia();
                                                // printf("Criou novo escopo\n");
                                                push(&pilha, cria_tabela_vazia());
                                                // printf("Adicionou novo escopo na pilha\n");
                                                //pop(&pilha);
                                                //print_pilha(&pilha);
                                                printf("Pop Pilha\n");
                                            }
                                            else{
                                                printf("ERR_DECLARED na linha %d \n", current_line_number);
                                                exit(ERR_DECLARED);
                                            }                                               
                                            }
#line 1428 "parser.tab.c"
    break;

  case 20: /* lista_funcao: parametro_funcao ',' lista_funcao  */
#line 203 "parser.y"
                                                  {destroiVL((yyvsp[-1].valor_lexico));}
#line 1434 "parser.tab.c"
    break;

  case 21: /* lista_funcao: parametro_funcao  */
#line 204 "parser.y"
                                 {(yyval.no) = (yyvsp[0].no);}
#line 1440 "parser.tab.c"
    break;

  case 22: /* parametro_funcao: tipo ID  */
#line 206 "parser.y"
                          {(yyval.no) = (yyvsp[0].no);}
#line 1446 "parser.tab.c"
    break;

  case 23: /* bloco_de_comandos: '{' comandos '}'  */
#line 213 "parser.y"
                                     { (yyval.no) = (yyvsp[-1].no); destroiVL((yyvsp[-2].valor_lexico));destroiVL((yyvsp[0].valor_lexico));}
#line 1452 "parser.tab.c"
    break;

  case 24: /* bloco_de_comandos: '{' '}'  */
#line 214 "parser.y"
                           {destroiVL((yyvsp[-1].valor_lexico));destroiVL((yyvsp[0].valor_lexico)); (yyval.no)=NULL; pop(&pilha);}
#line 1458 "parser.tab.c"
    break;

  case 25: /* comandos: comandos_simples ';' comandos  */
#line 217 "parser.y"
                                          {(yyval.no) = ((yyvsp[-2].no)) == NULL ? ((yyvsp[0].no)) : add_child((yyvsp[-2].no), (yyvsp[0].no));destroiVL((yyvsp[-1].valor_lexico));}
#line 1464 "parser.tab.c"
    break;

  case 26: /* comandos: comandos_simples ';'  */
#line 218 "parser.y"
                                 {(yyval.no) = (yyvsp[-1].no); destroiVL((yyvsp[0].valor_lexico)); printf("Isso é um comando simples"); pop(&pilha);}
#line 1470 "parser.tab.c"
    break;

  case 27: /* comandos_simples: declaracao_variavel_local  */
#line 222 "parser.y"
                                              {(yyval.no) = (yyvsp[0].no);}
#line 1476 "parser.tab.c"
    break;

  case 28: /* comandos_simples: atribuicao  */
#line 223 "parser.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1482 "parser.tab.c"
    break;

  case 29: /* comandos_simples: controle_de_fluxo  */
#line 224 "parser.y"
                                      {(yyval.no) = (yyvsp[0].no);}
#line 1488 "parser.tab.c"
    break;

  case 30: /* comandos_simples: chamada_funcao  */
#line 225 "parser.y"
                                   {(yyval.no) = (yyvsp[0].no);}
#line 1494 "parser.tab.c"
    break;

  case 31: /* comandos_simples: bloco_de_comandos  */
#line 226 "parser.y"
                                      {(yyval.no) = (yyvsp[0].no);}
#line 1500 "parser.tab.c"
    break;

  case 32: /* comandos_simples: retorno  */
#line 227 "parser.y"
                            {(yyval.no) = (yyvsp[0].no);}
#line 1506 "parser.tab.c"
    break;

  case 33: /* declaracao_variavel_local: tipo lista_variaveis  */
#line 232 "parser.y"
                                                {(yyval.no) = (yyvsp[0].no);}
#line 1512 "parser.tab.c"
    break;

  case 34: /* lista_variaveis: variavel ',' lista_variaveis  */
#line 234 "parser.y"
                                               {(yyval.no) = (yyvsp[-2].no); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));destroiVL((yyvsp[-1].valor_lexico));}
#line 1518 "parser.tab.c"
    break;

  case 35: /* lista_variaveis: TK_IDENTIFICADOR ',' lista_variaveis  */
#line 235 "parser.y"
                                                      {(yyval.no) = (yyvsp[0].no);
                                                    // Verifica se função já existe no escopo_global
                                                    printf("Inicio TK_IDENTIFICADOR\n");
                                                    // print_pilha(&pilha);  
                                                    CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-2].valor_lexico));
                                                    printf("Conteudo um\n");                                         
                                                    if(conteudo_na_pilha == NULL){
                                                        //Criar_conteudo
                                                        CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[-2].valor_lexico));
                                                        printf("Conteudo Criado\n");
                                                        //Adiciona o nome da variavel na pilha
                                                        adiciona_simbolo(novo_conteudo, pilha);
                                                        printf("Nome da variavel adicionado na pilha local\n");
                                                    }
                                                    else{
                                                        printf("ERR_DECLARED na linha %d \n", current_line_number);
                                                        exit(ERR_DECLARED);
                                                    }  
                                                    }
#line 1542 "parser.tab.c"
    break;

  case 36: /* lista_variaveis: variavel  */
#line 254 "parser.y"
                          {(yyval.no) = (yyvsp[0].no);}
#line 1548 "parser.tab.c"
    break;

  case 37: /* lista_variaveis: TK_IDENTIFICADOR  */
#line 255 "parser.y"
                                  {(yyval.no) = NULL;
                                    // Verifica se função já existe no escopo_global
                                    printf("Inicio TK_IDENTIFICADOR\n");
                                    // print_pilha(&pilha);  
                                    CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[0].valor_lexico));
                                    printf("Conteudo um\n");                                         
                                    if(conteudo_na_pilha == NULL){
                                        //Criar_conteudo
                                        CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[0].valor_lexico));
                                        printf("Conteudo Criado\n");
                                        //Adiciona o nome da variavel na pilha
                                        adiciona_simbolo(novo_conteudo, pilha);
                                        printf("Nome da variavel adicionado na pilha local\n");
                                    }
                                    else{
                                        printf("ERR_DECLARED na linha %d \n", current_line_number);
                                        exit(ERR_DECLARED);
                                    }  
                 
                                }
#line 1573 "parser.tab.c"
    break;

  case 38: /* variavel: ID TK_OC_LE literais  */
#line 276 "parser.y"
                               {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no),(yyvsp[-2].no)); (yyval.no) = add_child((yyval.no),(yyvsp[0].no));}
#line 1579 "parser.tab.c"
    break;

  case 39: /* atribuicao: ID '=' expressao  */
#line 282 "parser.y"
                             {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1585 "parser.tab.c"
    break;

  case 40: /* atribuicao: arranjo_multi '=' expressao  */
#line 283 "parser.y"
                                         {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1591 "parser.tab.c"
    break;

  case 41: /* arranjo_multi: ID '[' lista_de_expressoes ']'  */
#line 285 "parser.y"
                                               {(yyval.no) = create_node(arranjo, (yyvsp[-2].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-3].no)); (yyval.no) = add_child((yyval.no), (yyvsp[-1].no)); destroiVL((yyvsp[0].valor_lexico));}
#line 1597 "parser.tab.c"
    break;

  case 42: /* lista_de_expressoes: lista_de_expressoes '^' expressao  */
#line 292 "parser.y"
                                                         {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); add_child((yyval.no),(yyvsp[-2].no)); add_child((yyval.no), (yyvsp[0].no));}
#line 1603 "parser.tab.c"
    break;

  case 43: /* lista_de_expressoes: expressao  */
#line 293 "parser.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1609 "parser.tab.c"
    break;

  case 44: /* retorno: TK_PR_RETURN expressao  */
#line 299 "parser.y"
                                 {(yyval.no) = create_node(palavra_reservada, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1615 "parser.tab.c"
    break;

  case 45: /* controle_de_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos  */
#line 304 "parser.y"
                                                                           {(yyval.no) = create_node(palavra_reservada, (yyvsp[-5].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-3].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no)); destroiVL((yyvsp[-4].valor_lexico)); destroiVL((yyvsp[-2].valor_lexico));}
#line 1621 "parser.tab.c"
    break;

  case 46: /* controle_de_fluxo: TK_PR_IF '(' expressao ')' TK_PR_THEN bloco_de_comandos TK_PR_ELSE bloco_de_comandos  */
#line 305 "parser.y"
                                                                                                        {(yyval.no) = create_node(palavra_reservada, (yyvsp[-7].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-5].no)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));destroiVL((yyvsp[-6].valor_lexico)); destroiVL((yyvsp[-4].valor_lexico));}
#line 1627 "parser.tab.c"
    break;

  case 47: /* controle_de_fluxo: TK_PR_WHILE '(' expressao ')' bloco_de_comandos  */
#line 306 "parser.y"
                                                                   {(yyval.no) = create_node(palavra_reservada, (yyvsp[-4].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no)); destroiVL((yyvsp[-3].valor_lexico)); destroiVL((yyvsp[-1].valor_lexico));}
#line 1633 "parser.tab.c"
    break;

  case 48: /* chamada_funcao: TK_IDENTIFICADOR '(' lista_de_argumentos ')'  */
#line 311 "parser.y"
                                                             {(yyval.no) = create_node(call,(yyvsp[-3].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-1].no)); destroiVL((yyvsp[-2].valor_lexico)); destroiVL((yyvsp[0].valor_lexico));
                                                                // Verifica se função já existe no escopo_global
                                                                printf("Inicio de uma chamada de funcao\n");
                                                                // print_pilha(&pilha);  
                                                                CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-3].valor_lexico));
                                                                printf("Conteudo um\n");                                         
                                                                if(conteudo_na_pilha == NULL){
                                                                    printf("ERR_UNDECLARED na linha %d \n", current_line_number);
                                                                    exit(ERR_UNDECLARED);
                                                                }
                                                            }
#line 1649 "parser.tab.c"
    break;

  case 49: /* chamada_funcao: TK_IDENTIFICADOR '(' ')'  */
#line 322 "parser.y"
                                          {(yyval.no) = create_node(call,(yyvsp[-2].valor_lexico)); destroiVL((yyvsp[-1].valor_lexico)); destroiVL((yyvsp[0].valor_lexico));
                                            // Verifica se função já existe no escopo_global
                                            printf("Inicio de uma chamada de funcao\n");
                                            // print_pilha(&pilha);  
                                            CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[-2].valor_lexico));
                                            printf("Conteudo um\n");                                         
                                            if(conteudo_na_pilha == NULL){
                                                printf("ERR_UNDECLARED na linha %d \n", current_line_number);
                                                exit(ERR_UNDECLARED);
                                            }
                                         }
#line 1665 "parser.tab.c"
    break;

  case 50: /* lista_de_argumentos: argumento  */
#line 337 "parser.y"
                               {(yyval.no) = (yyvsp[0].no);}
#line 1671 "parser.tab.c"
    break;

  case 51: /* lista_de_argumentos: argumento ',' lista_de_argumentos  */
#line 338 "parser.y"
                                                       {(yyval.no) = add_child((yyvsp[-2].no), (yyvsp[0].no));destroiVL((yyvsp[-1].valor_lexico));}
#line 1677 "parser.tab.c"
    break;

  case 52: /* argumento: expressao  */
#line 340 "parser.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 1683 "parser.tab.c"
    break;

  case 53: /* expressao: expressao TK_OC_OR sexta_precedencia  */
#line 347 "parser.y"
                                                {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1689 "parser.tab.c"
    break;

  case 54: /* expressao: sexta_precedencia  */
#line 348 "parser.y"
                             {(yyval.no) = (yyvsp[0].no);}
#line 1695 "parser.tab.c"
    break;

  case 55: /* sexta_precedencia: sexta_precedencia TK_OC_AND quinta_precedencia  */
#line 350 "parser.y"
                                                                   {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1701 "parser.tab.c"
    break;

  case 56: /* sexta_precedencia: quinta_precedencia  */
#line 351 "parser.y"
                                       {(yyval.no) = (yyvsp[0].no);}
#line 1707 "parser.tab.c"
    break;

  case 57: /* quinta_precedencia: quinta_precedencia TK_OC_EQ quarta_precedencia  */
#line 353 "parser.y"
                                                                   {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1713 "parser.tab.c"
    break;

  case 58: /* quinta_precedencia: quinta_precedencia TK_OC_NE quarta_precedencia  */
#line 354 "parser.y"
                                                                   {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1719 "parser.tab.c"
    break;

  case 59: /* quinta_precedencia: quarta_precedencia  */
#line 355 "parser.y"
                                       {(yyval.no) = (yyvsp[0].no);}
#line 1725 "parser.tab.c"
    break;

  case 60: /* quarta_precedencia: quarta_precedencia TK_OC_GE terceira_precedencia  */
#line 357 "parser.y"
                                                                      {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1731 "parser.tab.c"
    break;

  case 61: /* quarta_precedencia: quarta_precedencia TK_OC_LE terceira_precedencia  */
#line 358 "parser.y"
                                                                      {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1737 "parser.tab.c"
    break;

  case 62: /* quarta_precedencia: quarta_precedencia '>' terceira_precedencia  */
#line 359 "parser.y"
                                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1743 "parser.tab.c"
    break;

  case 63: /* quarta_precedencia: quarta_precedencia '<' terceira_precedencia  */
#line 360 "parser.y"
                                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico));(yyval.no) =  add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1749 "parser.tab.c"
    break;

  case 64: /* quarta_precedencia: terceira_precedencia  */
#line 361 "parser.y"
                                         {(yyval.no) = (yyvsp[0].no);}
#line 1755 "parser.tab.c"
    break;

  case 65: /* terceira_precedencia: terceira_precedencia '-' segunda_precedencia  */
#line 363 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1761 "parser.tab.c"
    break;

  case 66: /* terceira_precedencia: terceira_precedencia '+' segunda_precedencia  */
#line 364 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1767 "parser.tab.c"
    break;

  case 67: /* terceira_precedencia: segunda_precedencia  */
#line 365 "parser.y"
                                            {(yyval.no) = (yyvsp[0].no);}
#line 1773 "parser.tab.c"
    break;

  case 68: /* segunda_precedencia: segunda_precedencia '%' primeira_precedencia  */
#line 367 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1779 "parser.tab.c"
    break;

  case 69: /* segunda_precedencia: segunda_precedencia '/' primeira_precedencia  */
#line 368 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1785 "parser.tab.c"
    break;

  case 70: /* segunda_precedencia: segunda_precedencia '*' primeira_precedencia  */
#line 369 "parser.y"
                                                                     {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[-2].no)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1791 "parser.tab.c"
    break;

  case 71: /* segunda_precedencia: primeira_precedencia  */
#line 370 "parser.y"
                                             {(yyval.no) = (yyvsp[0].no);}
#line 1797 "parser.tab.c"
    break;

  case 72: /* primeira_precedencia: '(' expressao ')'  */
#line 372 "parser.y"
                                          {(yyval.no) = (yyvsp[-1].no); destroiVL((yyvsp[-2].valor_lexico)); destroiVL((yyvsp[0].valor_lexico));}
#line 1803 "parser.tab.c"
    break;

  case 73: /* primeira_precedencia: '!' primeira_precedencia  */
#line 373 "parser.y"
                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)) ; (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1809 "parser.tab.c"
    break;

  case 74: /* primeira_precedencia: '-' primeira_precedencia  */
#line 374 "parser.y"
                                                 {(yyval.no) = create_node(caracter_especial, (yyvsp[-1].valor_lexico)); (yyval.no) = add_child((yyval.no), (yyvsp[0].no));}
#line 1815 "parser.tab.c"
    break;

  case 75: /* primeira_precedencia: fator  */
#line 375 "parser.y"
                              {(yyval.no) = (yyvsp[0].no);}
#line 1821 "parser.tab.c"
    break;

  case 76: /* fator: arranjo_multi  */
#line 377 "parser.y"
                      {(yyval.no) = (yyvsp[0].no);}
#line 1827 "parser.tab.c"
    break;

  case 77: /* fator: literais  */
#line 378 "parser.y"
                 {(yyval.no) = (yyvsp[0].no);}
#line 1833 "parser.tab.c"
    break;

  case 78: /* fator: chamada_funcao  */
#line 379 "parser.y"
                       {(yyval.no) = (yyvsp[0].no);}
#line 1839 "parser.tab.c"
    break;

  case 79: /* fator: ID  */
#line 380 "parser.y"
           {(yyval.no) = (yyvsp[0].no);}
#line 1845 "parser.tab.c"
    break;

  case 80: /* tipo: TK_PR_FLOAT  */
#line 386 "parser.y"
                  {(yyval.no) = NULL; tipoVar = (yyvsp[0].tipo);}
#line 1851 "parser.tab.c"
    break;

  case 81: /* tipo: TK_PR_INT  */
#line 387 "parser.y"
                 {(yyval.no) = NULL; tipoVar = (yyvsp[0].tipo);}
#line 1857 "parser.tab.c"
    break;

  case 82: /* tipo: TK_PR_CHAR  */
#line 388 "parser.y"
                 {(yyval.no) = NULL; tipoVar = (yyvsp[0].tipo);}
#line 1863 "parser.tab.c"
    break;

  case 83: /* tipo: TK_PR_BOOL  */
#line 389 "parser.y"
                 {(yyval.no) = NULL; tipoVar = (yyvsp[0].tipo);}
#line 1869 "parser.tab.c"
    break;

  case 84: /* literais: TK_LIT_FLOAT  */
#line 391 "parser.y"
                          {(yyval.no) = create_node(literal_float, (yyvsp[0].valor_lexico));}
#line 1875 "parser.tab.c"
    break;

  case 85: /* literais: TK_LIT_INT  */
#line 392 "parser.y"
                          {(yyval.no) = create_node(literal_inteiro, (yyvsp[0].valor_lexico));}
#line 1881 "parser.tab.c"
    break;

  case 86: /* literais: TK_LIT_CHAR  */
#line 393 "parser.y"
                          {(yyval.no) = create_node(literal_char, (yyvsp[0].valor_lexico));}
#line 1887 "parser.tab.c"
    break;

  case 87: /* literais: TK_LIT_TRUE  */
#line 394 "parser.y"
                          {(yyval.no) = create_node(literal_bool, (yyvsp[0].valor_lexico));}
#line 1893 "parser.tab.c"
    break;

  case 88: /* literais: TK_LIT_FALSE  */
#line 395 "parser.y"
                          {(yyval.no) = create_node(literal_bool, (yyvsp[0].valor_lexico));}
#line 1899 "parser.tab.c"
    break;

  case 89: /* litInt: TK_LIT_INT  */
#line 397 "parser.y"
                     {(yyval.no) = create_node(literal_inteiro, (yyvsp[0].valor_lexico));}
#line 1905 "parser.tab.c"
    break;

  case 90: /* ID: TK_IDENTIFICADOR  */
#line 399 "parser.y"
                     {(yyval.no) = create_node(identificador, (yyvsp[0].valor_lexico));
                        // Verifica se função já existe no escopo_global
                        printf("Inicio TK_IDENTIFICADOR\n");
                        // print_pilha(&pilha);  
                        CONTEUDO* conteudo_na_pilha = procura_simbolo(pilha, (yyvsp[0].valor_lexico));
                        printf("Conteudo um\n");                                         
                        if(conteudo_na_pilha == NULL){
                            //Criar_conteudo
                            CONTEUDO* novo_conteudo = cria_conteudo((yyvsp[0].valor_lexico));
                            printf("Conteudo Criado\n");
                            //Adiciona o nome da função na pilha global
                            adiciona_simbolo(novo_conteudo, pilha);
                            printf("Nome da funcao adicionado na pilha local\n");
                        }
                        else{
                            printf("ERR_DECLARED na linha %d \n", current_line_number);
                            exit(ERR_DECLARED);
                        }  
                        }
#line 1929 "parser.tab.c"
    break;


#line 1933 "parser.tab.c"

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

#line 418 "parser.y"






void yyerror (char const *s) {
    fprintf (stderr, "%s na linha %d\n", s, current_line_number);
}
