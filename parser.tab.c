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

extern int current_line_number;
extern tree *arvore;

int yylex(void);
void yyerror (char const *s);

#line 81 "parser.tab.c"

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
  YYSYMBOL_3_ = 3,                         /* '='  */
  YYSYMBOL_4_ = 4,                         /* '?'  */
  YYSYMBOL_5_ = 5,                         /* ':'  */
  YYSYMBOL_6_ = 6,                         /* '|'  */
  YYSYMBOL_7_ = 7,                         /* '&'  */
  YYSYMBOL_8_ = 8,                         /* '<'  */
  YYSYMBOL_9_ = 9,                         /* '>'  */
  YYSYMBOL_10_ = 10,                       /* '+'  */
  YYSYMBOL_11_ = 11,                       /* '-'  */
  YYSYMBOL_12_ = 12,                       /* '*'  */
  YYSYMBOL_13_ = 13,                       /* '/'  */
  YYSYMBOL_14_ = 14,                       /* '%'  */
  YYSYMBOL_15_ = 15,                       /* '^'  */
  YYSYMBOL_16_ = 16,                       /* '#'  */
  YYSYMBOL_17_ = 17,                       /* '!'  */
  YYSYMBOL_TK_PR_INT = 18,                 /* TK_PR_INT  */
  YYSYMBOL_TK_PR_FLOAT = 19,               /* TK_PR_FLOAT  */
  YYSYMBOL_TK_PR_BOOL = 20,                /* TK_PR_BOOL  */
  YYSYMBOL_TK_PR_CHAR = 21,                /* TK_PR_CHAR  */
  YYSYMBOL_TK_PR_STRING = 22,              /* TK_PR_STRING  */
  YYSYMBOL_TK_PR_IF = 23,                  /* TK_PR_IF  */
  YYSYMBOL_TK_PR_THEN = 24,                /* TK_PR_THEN  */
  YYSYMBOL_TK_PR_ELSE = 25,                /* TK_PR_ELSE  */
  YYSYMBOL_TK_PR_WHILE = 26,               /* TK_PR_WHILE  */
  YYSYMBOL_TK_PR_DO = 27,                  /* TK_PR_DO  */
  YYSYMBOL_TK_PR_INPUT = 28,               /* TK_PR_INPUT  */
  YYSYMBOL_TK_PR_OUTPUT = 29,              /* TK_PR_OUTPUT  */
  YYSYMBOL_TK_PR_RETURN = 30,              /* TK_PR_RETURN  */
  YYSYMBOL_TK_PR_CONST = 31,               /* TK_PR_CONST  */
  YYSYMBOL_TK_PR_STATIC = 32,              /* TK_PR_STATIC  */
  YYSYMBOL_TK_PR_FOREACH = 33,             /* TK_PR_FOREACH  */
  YYSYMBOL_TK_PR_FOR = 34,                 /* TK_PR_FOR  */
  YYSYMBOL_TK_PR_SWITCH = 35,              /* TK_PR_SWITCH  */
  YYSYMBOL_TK_PR_CASE = 36,                /* TK_PR_CASE  */
  YYSYMBOL_TK_PR_BREAK = 37,               /* TK_PR_BREAK  */
  YYSYMBOL_TK_PR_CONTINUE = 38,            /* TK_PR_CONTINUE  */
  YYSYMBOL_TK_PR_CLASS = 39,               /* TK_PR_CLASS  */
  YYSYMBOL_TK_PR_PRIVATE = 40,             /* TK_PR_PRIVATE  */
  YYSYMBOL_TK_PR_PUBLIC = 41,              /* TK_PR_PUBLIC  */
  YYSYMBOL_TK_PR_PROTECTED = 42,           /* TK_PR_PROTECTED  */
  YYSYMBOL_TK_PR_END = 43,                 /* TK_PR_END  */
  YYSYMBOL_TK_PR_DEFAULT = 44,             /* TK_PR_DEFAULT  */
  YYSYMBOL_TK_OC_LE = 45,                  /* TK_OC_LE  */
  YYSYMBOL_TK_OC_GE = 46,                  /* TK_OC_GE  */
  YYSYMBOL_TK_OC_EQ = 47,                  /* TK_OC_EQ  */
  YYSYMBOL_TK_OC_NE = 48,                  /* TK_OC_NE  */
  YYSYMBOL_TK_OC_AND = 49,                 /* TK_OC_AND  */
  YYSYMBOL_TK_OC_OR = 50,                  /* TK_OC_OR  */
  YYSYMBOL_TK_OC_SL = 51,                  /* TK_OC_SL  */
  YYSYMBOL_TK_OC_SR = 52,                  /* TK_OC_SR  */
  YYSYMBOL_TK_LIT_INT = 53,                /* TK_LIT_INT  */
  YYSYMBOL_TK_LIT_FLOAT = 54,              /* TK_LIT_FLOAT  */
  YYSYMBOL_TK_LIT_FALSE = 55,              /* TK_LIT_FALSE  */
  YYSYMBOL_TK_LIT_TRUE = 56,               /* TK_LIT_TRUE  */
  YYSYMBOL_TK_LIT_CHAR = 57,               /* TK_LIT_CHAR  */
  YYSYMBOL_TK_LIT_STRING = 58,             /* TK_LIT_STRING  */
  YYSYMBOL_TK_IDENTIFICADOR = 59,          /* TK_IDENTIFICADOR  */
  YYSYMBOL_TOKEN_ERRO = 60,                /* TOKEN_ERRO  */
  YYSYMBOL_61_ = 61,                       /* ';'  */
  YYSYMBOL_62_ = 62,                       /* ','  */
  YYSYMBOL_63_ = 63,                       /* '['  */
  YYSYMBOL_64_ = 64,                       /* ']'  */
  YYSYMBOL_65_ = 65,                       /* '('  */
  YYSYMBOL_66_ = 66,                       /* ')'  */
  YYSYMBOL_67_ = 67,                       /* '{'  */
  YYSYMBOL_68_ = 68,                       /* '}'  */
  YYSYMBOL_YYACCEPT = 69,                  /* $accept  */
  YYSYMBOL_start = 70,                     /* start  */
  YYSYMBOL_programa_ou_vazio = 71,         /* programa_ou_vazio  */
  YYSYMBOL_programa = 72,                  /* programa  */
  YYSYMBOL_funcao_ou_variavel_global = 73, /* funcao_ou_variavel_global  */
  YYSYMBOL_variavel_global = 74,           /* variavel_global  */
  YYSYMBOL_tipo_global_ou_retorno = 75,    /* tipo_global_ou_retorno  */
  YYSYMBOL_lista_nao_vazia_identificadores = 76, /* lista_nao_vazia_identificadores  */
  YYSYMBOL_variavel_ou_vetor = 77,         /* variavel_ou_vetor  */
  YYSYMBOL_tipos_primitivos = 78,          /* tipos_primitivos  */
  YYSYMBOL_funcao = 79,                    /* funcao  */
  YYSYMBOL_cabecalho_funcao = 80,          /* cabecalho_funcao  */
  YYSYMBOL_nome_da_funcao = 81,            /* nome_da_funcao  */
  YYSYMBOL_parametros_da_funcao = 82,      /* parametros_da_funcao  */
  YYSYMBOL_parametro_funcao = 83,          /* parametro_funcao  */
  YYSYMBOL_lista_nao_vazia_parametros_funcao = 84, /* lista_nao_vazia_parametros_funcao  */
  YYSYMBOL_corpo_funcao = 85,              /* corpo_funcao  */
  YYSYMBOL_bloco_de_comandos = 86,         /* bloco_de_comandos  */
  YYSYMBOL_lista_comandos_simples = 87,    /* lista_comandos_simples  */
  YYSYMBOL_comando_simples = 88,           /* comando_simples  */
  YYSYMBOL_chamada_de_funcao = 89,         /* chamada_de_funcao  */
  YYSYMBOL_argumento = 90,                 /* argumento  */
  YYSYMBOL_lista_de_argumentos = 91,       /* lista_de_argumentos  */
  YYSYMBOL_declaracao_de_variavel = 92,    /* declaracao_de_variavel  */
  YYSYMBOL_variavel = 93,                  /* variavel  */
  YYSYMBOL_literal = 94,                   /* literal  */
  YYSYMBOL_lista_variaveis = 95,           /* lista_variaveis  */
  YYSYMBOL_comandos_de_entrada_e_saida = 96, /* comandos_de_entrada_e_saida  */
  YYSYMBOL_comando_de_retorno_break_continue = 97, /* comando_de_retorno_break_continue  */
  YYSYMBOL_expressao = 98,                 /* expressao  */
  YYSYMBOL_comandos_de_controle_de_fluxo = 99, /* comandos_de_controle_de_fluxo  */
  YYSYMBOL_comando_de_atribuicao = 100,    /* comando_de_atribuicao  */
  YYSYMBOL_comandos_de_shift = 101         /* comandos_de_shift  */
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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   469

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  69
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  199

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
       2,     2,     2,    17,     2,    16,     2,    14,     7,     2,
      65,    66,    12,    10,    62,    11,     2,    13,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     5,    61,
       8,     3,     9,     4,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    63,     2,    64,    15,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,     6,    68,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    94,    94,    98,    99,   103,   104,   108,   109,   114,
     118,   119,   123,   124,   128,   129,   133,   134,   135,   136,
     137,   142,   146,   150,   154,   155,   159,   160,   164,   165,
     169,   175,   179,   180,   185,   186,   187,   188,   189,   190,
     191,   192,   196,   197,   198,   202,   203,   207,   208,   213,
     214,   215,   216,   221,   222,   223,   227,   228,   229,   230,
     231,   232,   236,   237,   242,   243,   244,   247,   248,   249,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   281,   282,   283,   284,
     288,   289,   293,   294,   295,   296
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
  "\"end of file\"", "error", "\"invalid token\"", "'='", "'?'", "':'",
  "'|'", "'&'", "'<'", "'>'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'",
  "'#'", "'!'", "TK_PR_INT", "TK_PR_FLOAT", "TK_PR_BOOL", "TK_PR_CHAR",
  "TK_PR_STRING", "TK_PR_IF", "TK_PR_THEN", "TK_PR_ELSE", "TK_PR_WHILE",
  "TK_PR_DO", "TK_PR_INPUT", "TK_PR_OUTPUT", "TK_PR_RETURN", "TK_PR_CONST",
  "TK_PR_STATIC", "TK_PR_FOREACH", "TK_PR_FOR", "TK_PR_SWITCH",
  "TK_PR_CASE", "TK_PR_BREAK", "TK_PR_CONTINUE", "TK_PR_CLASS",
  "TK_PR_PRIVATE", "TK_PR_PUBLIC", "TK_PR_PROTECTED", "TK_PR_END",
  "TK_PR_DEFAULT", "TK_OC_LE", "TK_OC_GE", "TK_OC_EQ", "TK_OC_NE",
  "TK_OC_AND", "TK_OC_OR", "TK_OC_SL", "TK_OC_SR", "TK_LIT_INT",
  "TK_LIT_FLOAT", "TK_LIT_FALSE", "TK_LIT_TRUE", "TK_LIT_CHAR",
  "TK_LIT_STRING", "TK_IDENTIFICADOR", "TOKEN_ERRO", "';'", "','", "'['",
  "']'", "'('", "')'", "'{'", "'}'", "$accept", "start",
  "programa_ou_vazio", "programa", "funcao_ou_variavel_global",
  "variavel_global", "tipo_global_ou_retorno",
  "lista_nao_vazia_identificadores", "variavel_ou_vetor",
  "tipos_primitivos", "funcao", "cabecalho_funcao", "nome_da_funcao",
  "parametros_da_funcao", "parametro_funcao",
  "lista_nao_vazia_parametros_funcao", "corpo_funcao", "bloco_de_comandos",
  "lista_comandos_simples", "comando_simples", "chamada_de_funcao",
  "argumento", "lista_de_argumentos", "declaracao_de_variavel", "variavel",
  "literal", "lista_variaveis", "comandos_de_entrada_e_saida",
  "comando_de_retorno_break_continue", "expressao",
  "comandos_de_controle_de_fluxo", "comando_de_atribuicao",
  "comandos_de_shift", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-86)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-24)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      19,   -86,   -86,   -86,   -86,   -86,   419,    22,   -86,    19,
     -86,   -86,   -29,   -86,   -86,   -44,   -86,   -86,   -86,   -36,
     -53,   -86,   -22,   271,   -86,   -86,    -9,   -86,   -13,   110,
     -86,   -18,   -17,    23,    81,   154,   419,    82,    30,   -86,
     -86,    42,    37,    32,   -86,    39,    51,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,    34,    53,   -86,   419,   -86,    55,
     -86,   -56,   154,   154,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   154,   154,   154,   154,   154,   154,   154,
     -86,   154,   -86,   -86,   353,    37,   419,    37,    58,   154,
      66,    67,   154,   109,   -86,    93,   199,   -86,   271,   -86,
      97,   -86,   159,   -86,    77,   138,   353,   421,    20,    20,
     142,   -86,   -86,   185,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   154,   154,   154,   154,   154,   154,   154,
     154,    93,    37,    93,     8,   155,   353,   -86,   -86,   214,
     269,    37,   -86,    96,   278,   -86,   -86,   -86,   -44,   132,
     -86,   306,   406,   421,    65,    65,    20,    20,   142,   142,
     142,   -86,    65,    65,   261,   261,   380,   363,    93,   154,
     154,    21,   -86,   -86,   -86,   -86,   -41,   143,   -44,   154,
     234,   335,   154,   114,   116,   -86,   -86,   -44,   -86,   353,
     170,    58,   353,   -86,   -86,   -86,   108,   -44,   -86
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,    16,    17,    19,    18,    20,     0,     0,     2,     4,
       5,     8,     0,    11,     7,     0,    10,     1,     6,    14,
       0,    12,     0,    33,    21,    30,     0,     9,     0,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    23,     0,     0,    34,     0,     0,    38,    35,    37,
      39,    40,    36,    41,     0,    14,    13,     0,    24,     0,
      28,     0,     0,     0,    64,    56,    60,    59,    58,    57,
      61,    65,    66,     0,     0,     0,     0,     0,     0,     0,
      45,     0,    70,    46,    69,     0,     0,     0,     0,     0,
       0,     0,     0,    53,    62,    52,     0,    31,    33,    15,
       0,    27,     0,    25,     0,     0,    77,    75,    72,    73,
      76,    78,    74,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,    50,     0,     0,   100,   102,   103,     0,
       0,     0,    42,    47,     0,    32,    26,    29,     0,     0,
      71,     0,    84,    85,    88,    87,    79,    80,    81,    82,
      83,    86,    89,    90,    91,    92,    93,    94,    49,     0,
       0,     0,    54,    55,    63,    43,     0,    96,     0,     0,
       0,     0,     0,     0,     0,    48,    44,     0,    99,    95,
       0,     0,   101,   104,   105,    97,     0,     0,    98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,   -86,   -86,   166,   -86,   -86,   -86,   173,    13,
     -86,   -86,   190,   -86,   101,   -86,   -86,   -15,   107,   -86,
     -86,   -70,   -86,   -86,    73,   -30,   -80,   -86,   -86,   -61,
     -86,   -85,   -86
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     7,     8,     9,    10,    11,    12,    20,    21,    13,
      14,    15,    43,    30,    60,    61,    24,    44,    45,    46,
      47,    82,   144,    48,    94,    83,    95,    49,    50,    84,
      51,    52,    53
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      25,   104,   105,   135,    72,   131,   102,   133,    27,    28,
     103,    89,   106,   107,   108,   109,   110,   111,   112,    16,
     113,   185,    17,    23,   182,   186,   143,    26,   136,   -23,
      19,   139,   121,   122,   123,   124,    42,     1,     2,     3,
       4,     5,    59,    29,    54,    89,    55,    62,    63,    85,
      87,     6,   168,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     100,   169,   183,   184,   176,   119,   120,   121,   122,   123,
     124,   114,    64,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,    90,    91,    88,    93,    96,    99,   132,
       1,     2,     3,     4,     5,    92,   196,    97,   180,   181,
     173,    42,    98,    86,   101,    59,    26,   134,   189,   137,
     138,   192,   125,   126,   127,   128,   129,   130,     1,     2,
       3,     4,     5,   177,    65,    66,    67,    68,    69,    70,
      71,    57,   114,   148,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   140,   141,   146,   124,    73,   178,
     170,    74,   175,   188,    75,    76,    77,   193,   187,   194,
      78,    79,   195,   182,   197,    18,    58,     1,     2,     3,
       4,     5,   198,   125,   126,   127,   128,   129,   130,   114,
      57,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,    56,    22,   147,   149,   145,     0,    65,    66,    67,
      68,    69,    70,    80,   174,     0,     0,     0,   114,    81,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,     0,     0,   114,     0,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
       0,   150,    65,    66,    67,    68,    69,    70,    80,   125,
     126,   127,   128,   129,   130,   142,     0,     0,     0,   117,
     118,   119,   120,   121,   122,   123,   124,     0,   171,   125,
     126,   127,   128,   129,   130,     0,     0,     0,     0,     1,
       2,     3,     4,     5,    31,     0,     0,    32,   190,    33,
      34,    35,    36,    37,     0,    38,   125,   126,    39,    40,
     114,   179,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,    65,    66,    67,    68,    69,    70,   172,     0,
      41,    65,    66,    67,    68,    69,    70,    80,    23,   114,
     191,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   114,     0,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,     0,
     125,   126,   127,   128,   129,   130,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,     0,     0,   125,   126,
     127,   128,   129,   130,     0,     0,     0,     0,   125,   126,
     127,   128,   129,   116,   117,   118,   119,   120,   121,   122,
     123,   124,     0,     0,     0,   125,   126,   127,   128,   117,
     118,   119,   120,   121,   122,   123,   124,     1,     2,     3,
       4,     5,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   125,   126,   127,   128,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   125,   126,   127,   128
};

static const yytype_int16 yycheck[] =
{
      15,    62,    63,    88,    34,    85,    62,    87,    61,    62,
      66,     3,    73,    74,    75,    76,    77,    78,    79,     6,
      81,    62,     0,    67,     3,    66,    96,    63,    89,    65,
      59,    92,    12,    13,    14,    15,    23,    18,    19,    20,
      21,    22,    29,    65,    53,     3,    59,    65,    65,    36,
      37,    32,   132,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
      57,    63,    51,    52,   144,    10,    11,    12,    13,    14,
      15,     4,    59,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    51,    52,    65,    59,    65,    64,    86,
      18,    19,    20,    21,    22,    63,   191,    68,   169,   170,
     140,    98,    61,    31,    59,   102,    63,    59,   179,    53,
      53,   182,    45,    46,    47,    48,    49,    50,    18,    19,
      20,    21,    22,   148,    53,    54,    55,    56,    57,    58,
      59,    31,     4,    66,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    45,    62,    59,    15,     4,    27,
       5,     7,    66,   178,    10,    11,    12,    53,    25,    53,
      16,    17,   187,     3,    66,     9,    66,    18,    19,    20,
      21,    22,   197,    45,    46,    47,    48,    49,    50,     4,
      31,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    28,    12,   102,    66,    98,    -1,    53,    54,    55,
      56,    57,    58,    59,   141,    -1,    -1,    -1,     4,    65,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      45,    46,    47,    48,    49,    50,    -1,    -1,     4,    -1,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      -1,    66,    53,    54,    55,    56,    57,    58,    59,    45,
      46,    47,    48,    49,    50,    66,    -1,    -1,    -1,     8,
       9,    10,    11,    12,    13,    14,    15,    -1,    64,    45,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    -1,    -1,    26,    64,    28,
      29,    30,    31,    32,    -1,    34,    45,    46,    37,    38,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    53,    54,    55,    56,    57,    58,    59,    -1,
      59,    53,    54,    55,    56,    57,    58,    59,    67,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    45,    46,    47,    48,    49,    50,     4,    -1,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    -1,
      45,    46,    47,    48,    49,    50,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    -1,    -1,    45,    46,
      47,    48,    49,    50,    -1,    -1,    -1,    -1,    45,    46,
      47,    48,    49,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    -1,    -1,    -1,    45,    46,    47,    48,     8,
       9,    10,    11,    12,    13,    14,    15,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    19,    20,    21,    22,    32,    70,    71,    72,
      73,    74,    75,    78,    79,    80,    78,     0,    73,    59,
      76,    77,    81,    67,    85,    86,    63,    61,    62,    65,
      82,    23,    26,    28,    29,    30,    31,    32,    34,    37,
      38,    59,    78,    81,    86,    87,    88,    89,    92,    96,
      97,    99,   100,   101,    53,    59,    77,    31,    66,    78,
      83,    84,    65,    65,    59,    53,    54,    55,    56,    57,
      58,    59,    94,     4,     7,    10,    11,    12,    16,    17,
      59,    65,    90,    94,    98,    78,    31,    78,    65,     3,
      51,    52,    63,    59,    93,    95,    65,    68,    61,    64,
      78,    59,    62,    66,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,     4,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    45,    46,    47,    48,    49,
      50,    95,    78,    95,    59,   100,    98,    53,    53,    98,
      45,    62,    66,    90,    91,    87,    59,    83,    66,    66,
      66,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    95,    63,
       5,    64,    59,    94,    93,    66,    90,    86,    27,     5,
      98,    98,     3,    51,    52,    62,    66,    25,    86,    98,
      64,     5,    98,    53,    53,    86,   100,    66,    86
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    69,    70,    71,    71,    72,    72,    73,    73,    74,
      75,    75,    76,    76,    77,    77,    78,    78,    78,    78,
      78,    79,    80,    81,    82,    82,    83,    83,    84,    84,
      85,    86,    87,    87,    88,    88,    88,    88,    88,    88,
      88,    88,    89,    89,    89,    90,    90,    91,    91,    92,
      92,    92,    92,    93,    93,    93,    94,    94,    94,    94,
      94,    94,    95,    95,    96,    96,    96,    97,    97,    97,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    99,    99,    99,    99,
     100,   100,   101,   101,   101,   101
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     1,     1,     2,     1,     1,     3,
       2,     1,     1,     3,     1,     4,     1,     1,     1,     1,
       1,     2,     3,     1,     2,     3,     3,     2,     1,     3,
       1,     3,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     5,     1,     1,     1,     3,     4,
       3,     3,     2,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     2,     2,     1,     1,     2,
       1,     3,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     5,     5,     7,     9,     6,
       3,     6,     3,     3,     6,     6
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
  case 2: /* start: programa_ou_vazio  */
#line 94 "parser.y"
                         {arvore = (yyvsp[0].ast);}
#line 1368 "parser.tab.c"
    break;

  case 3: /* programa_ou_vazio: %empty  */
#line 98 "parser.y"
             {(yyval.ast) = NULL;}
#line 1374 "parser.tab.c"
    break;

  case 4: /* programa_ou_vazio: programa  */
#line 99 "parser.y"
               {(yyval.ast) = NULL;}
#line 1380 "parser.tab.c"
    break;

  case 5: /* programa: funcao_ou_variavel_global  */
#line 103 "parser.y"
                                {(yyval.ast) = NULL;}
#line 1386 "parser.tab.c"
    break;

  case 6: /* programa: programa funcao_ou_variavel_global  */
#line 104 "parser.y"
                                         {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1392 "parser.tab.c"
    break;

  case 7: /* funcao_ou_variavel_global: funcao  */
#line 108 "parser.y"
             {(yyval.ast) = (yyvsp[0].ast);}
#line 1398 "parser.tab.c"
    break;

  case 8: /* funcao_ou_variavel_global: variavel_global  */
#line 109 "parser.y"
                      {(yyval.ast) = NULL;}
#line 1404 "parser.tab.c"
    break;

  case 9: /* variavel_global: tipo_global_ou_retorno lista_nao_vazia_identificadores ';'  */
#line 114 "parser.y"
                                                                 {(yyval.ast) = NULL;}
#line 1410 "parser.tab.c"
    break;

  case 10: /* tipo_global_ou_retorno: TK_PR_STATIC tipos_primitivos  */
#line 118 "parser.y"
                                    {(yyval.ast) = NULL;}
#line 1416 "parser.tab.c"
    break;

  case 11: /* tipo_global_ou_retorno: tipos_primitivos  */
#line 119 "parser.y"
                       {(yyval.ast) = NULL;}
#line 1422 "parser.tab.c"
    break;

  case 12: /* lista_nao_vazia_identificadores: variavel_ou_vetor  */
#line 123 "parser.y"
                        {(yyval.ast) = NULL;}
#line 1428 "parser.tab.c"
    break;

  case 13: /* lista_nao_vazia_identificadores: lista_nao_vazia_identificadores ',' variavel_ou_vetor  */
#line 124 "parser.y"
                                                            {(yyval.ast) = NULL;}
#line 1434 "parser.tab.c"
    break;

  case 14: /* variavel_ou_vetor: TK_IDENTIFICADOR  */
#line 128 "parser.y"
                       {(yyval.ast) = NULL;}
#line 1440 "parser.tab.c"
    break;

  case 15: /* variavel_ou_vetor: TK_IDENTIFICADOR '[' TK_LIT_INT ']'  */
#line 129 "parser.y"
                                          {(yyval.ast) = NULL;}
#line 1446 "parser.tab.c"
    break;

  case 16: /* tipos_primitivos: TK_PR_INT  */
#line 133 "parser.y"
                {(yyval.ast) = NULL;}
#line 1452 "parser.tab.c"
    break;

  case 17: /* tipos_primitivos: TK_PR_FLOAT  */
#line 134 "parser.y"
                  {(yyval.ast) = NULL;}
#line 1458 "parser.tab.c"
    break;

  case 18: /* tipos_primitivos: TK_PR_CHAR  */
#line 135 "parser.y"
                 {(yyval.ast) = NULL;}
#line 1464 "parser.tab.c"
    break;

  case 19: /* tipos_primitivos: TK_PR_BOOL  */
#line 136 "parser.y"
                 {(yyval.ast) = NULL;}
#line 1470 "parser.tab.c"
    break;

  case 20: /* tipos_primitivos: TK_PR_STRING  */
#line 137 "parser.y"
                   {(yyval.ast) = NULL;}
#line 1476 "parser.tab.c"
    break;

  case 21: /* funcao: cabecalho_funcao corpo_funcao  */
#line 142 "parser.y"
                                    {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1482 "parser.tab.c"
    break;

  case 22: /* cabecalho_funcao: tipo_global_ou_retorno nome_da_funcao parametros_da_funcao  */
#line 146 "parser.y"
                                                                 {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1488 "parser.tab.c"
    break;

  case 23: /* nome_da_funcao: TK_IDENTIFICADOR  */
#line 150 "parser.y"
                       {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1494 "parser.tab.c"
    break;

  case 24: /* parametros_da_funcao: '(' ')'  */
#line 154 "parser.y"
              {(yyval.ast) = NULL;}
#line 1500 "parser.tab.c"
    break;

  case 25: /* parametros_da_funcao: '(' lista_nao_vazia_parametros_funcao ')'  */
#line 155 "parser.y"
                                                {(yyval.ast) = NULL;}
#line 1506 "parser.tab.c"
    break;

  case 26: /* parametro_funcao: TK_PR_CONST tipos_primitivos TK_IDENTIFICADOR  */
#line 159 "parser.y"
                                                    {(yyval.ast) = NULL; libera((yyvsp[-1].ast));}
#line 1512 "parser.tab.c"
    break;

  case 27: /* parametro_funcao: tipos_primitivos TK_IDENTIFICADOR  */
#line 160 "parser.y"
                                        {(yyval.ast) = NULL; libera((yyvsp[-1].ast));}
#line 1518 "parser.tab.c"
    break;

  case 28: /* lista_nao_vazia_parametros_funcao: parametro_funcao  */
#line 164 "parser.y"
                       {(yyval.ast) = (yyvsp[0].ast);}
#line 1524 "parser.tab.c"
    break;

  case 29: /* lista_nao_vazia_parametros_funcao: lista_nao_vazia_parametros_funcao ',' parametro_funcao  */
#line 165 "parser.y"
                                                             {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1530 "parser.tab.c"
    break;

  case 30: /* corpo_funcao: bloco_de_comandos  */
#line 169 "parser.y"
                        {(yyval.ast) = (yyvsp[0].ast);}
#line 1536 "parser.tab.c"
    break;

  case 31: /* bloco_de_comandos: '{' lista_comandos_simples '}'  */
#line 175 "parser.y"
                                     {(yyval.ast) = (yyvsp[-1].ast);}
#line 1542 "parser.tab.c"
    break;

  case 32: /* lista_comandos_simples: comando_simples ';' lista_comandos_simples  */
#line 179 "parser.y"
                                                 {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1548 "parser.tab.c"
    break;

  case 33: /* lista_comandos_simples: %empty  */
#line 180 "parser.y"
            {(yyval.ast) = NULL;}
#line 1554 "parser.tab.c"
    break;

  case 35: /* comando_simples: declaracao_de_variavel  */
#line 186 "parser.y"
                             {(yyval.ast) = (yyvsp[0].ast);}
#line 1560 "parser.tab.c"
    break;

  case 36: /* comando_simples: comando_de_atribuicao  */
#line 187 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1566 "parser.tab.c"
    break;

  case 37: /* comando_simples: comandos_de_entrada_e_saida  */
#line 188 "parser.y"
                                  {(yyval.ast) = (yyvsp[0].ast);}
#line 1572 "parser.tab.c"
    break;

  case 38: /* comando_simples: chamada_de_funcao  */
#line 189 "parser.y"
                        {(yyval.ast) = (yyvsp[0].ast);}
#line 1578 "parser.tab.c"
    break;

  case 39: /* comando_simples: comando_de_retorno_break_continue  */
#line 190 "parser.y"
                                        {(yyval.ast) = (yyvsp[0].ast);}
#line 1584 "parser.tab.c"
    break;

  case 40: /* comando_simples: comandos_de_controle_de_fluxo  */
#line 191 "parser.y"
                                    {(yyval.ast) = (yyvsp[0].ast);}
#line 1590 "parser.tab.c"
    break;

  case 41: /* comando_simples: comandos_de_shift  */
#line 192 "parser.y"
                        {(yyval.ast) = (yyvsp[0].ast);}
#line 1596 "parser.tab.c"
    break;

  case 42: /* chamada_de_funcao: nome_da_funcao '(' ')'  */
#line 196 "parser.y"
                             {(yyval.ast) = (yyvsp[-2].ast);}
#line 1602 "parser.tab.c"
    break;

  case 43: /* chamada_de_funcao: nome_da_funcao '(' argumento ')'  */
#line 197 "parser.y"
                                       {(yyval.ast) = (yyvsp[-3].ast); (yyval.ast) = (yyvsp[-1].ast);}
#line 1608 "parser.tab.c"
    break;

  case 44: /* chamada_de_funcao: nome_da_funcao '(' lista_de_argumentos argumento ')'  */
#line 198 "parser.y"
                                                           {(yyval.ast) = (yyvsp[-4].ast); (yyval.ast) = (yyvsp[-2].ast) ; (yyval.ast) = (yyvsp[-1].ast);}
#line 1614 "parser.tab.c"
    break;

  case 45: /* argumento: TK_IDENTIFICADOR  */
#line 202 "parser.y"
                       {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1620 "parser.tab.c"
    break;

  case 46: /* argumento: literal  */
#line 203 "parser.y"
              {(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1626 "parser.tab.c"
    break;

  case 47: /* lista_de_argumentos: argumento  */
#line 207 "parser.y"
                {(yyval.ast) = (yyvsp[0].ast);}
#line 1632 "parser.tab.c"
    break;

  case 48: /* lista_de_argumentos: lista_de_argumentos argumento ','  */
#line 208 "parser.y"
                                        {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = (yyvsp[-1].ast);}
#line 1638 "parser.tab.c"
    break;

  case 49: /* declaracao_de_variavel: TK_PR_STATIC TK_PR_CONST tipos_primitivos lista_variaveis  */
#line 213 "parser.y"
                                                                {(yyval.ast) = insert_leaf((yyvsp[-3].valor_lexico));(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1644 "parser.tab.c"
    break;

  case 50: /* declaracao_de_variavel: TK_PR_STATIC tipos_primitivos lista_variaveis  */
#line 214 "parser.y"
                                                    {(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1650 "parser.tab.c"
    break;

  case 51: /* declaracao_de_variavel: TK_PR_CONST tipos_primitivos lista_variaveis  */
#line 215 "parser.y"
                                                   {(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1656 "parser.tab.c"
    break;

  case 52: /* declaracao_de_variavel: tipos_primitivos lista_variaveis  */
#line 216 "parser.y"
                                       {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = (yyvsp[0].ast);}
#line 1662 "parser.tab.c"
    break;

  case 53: /* variavel: TK_IDENTIFICADOR  */
#line 221 "parser.y"
                       {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1668 "parser.tab.c"
    break;

  case 54: /* variavel: TK_IDENTIFICADOR TK_OC_LE TK_IDENTIFICADOR  */
#line 222 "parser.y"
                                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1674 "parser.tab.c"
    break;

  case 55: /* variavel: TK_IDENTIFICADOR TK_OC_LE literal  */
#line 223 "parser.y"
                                        {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1680 "parser.tab.c"
    break;

  case 56: /* literal: TK_LIT_INT  */
#line 227 "parser.y"
                 {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1686 "parser.tab.c"
    break;

  case 57: /* literal: TK_LIT_CHAR  */
#line 228 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1692 "parser.tab.c"
    break;

  case 58: /* literal: TK_LIT_TRUE  */
#line 229 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1698 "parser.tab.c"
    break;

  case 59: /* literal: TK_LIT_FALSE  */
#line 230 "parser.y"
                   {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1704 "parser.tab.c"
    break;

  case 60: /* literal: TK_LIT_FLOAT  */
#line 231 "parser.y"
                   {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1710 "parser.tab.c"
    break;

  case 61: /* literal: TK_LIT_STRING  */
#line 232 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1716 "parser.tab.c"
    break;

  case 62: /* lista_variaveis: variavel  */
#line 236 "parser.y"
               {(yyval.ast) = (yyvsp[0].ast);}
#line 1722 "parser.tab.c"
    break;

  case 63: /* lista_variaveis: lista_variaveis ',' variavel  */
#line 237 "parser.y"
                                   {(yyval.ast) = NULL; (yyval.ast) = (yyvsp[-2].ast);}
#line 1728 "parser.tab.c"
    break;

  case 64: /* comandos_de_entrada_e_saida: TK_PR_INPUT TK_IDENTIFICADOR  */
#line 242 "parser.y"
                                   {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1734 "parser.tab.c"
    break;

  case 65: /* comandos_de_entrada_e_saida: TK_PR_OUTPUT TK_IDENTIFICADOR  */
#line 243 "parser.y"
                                    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1740 "parser.tab.c"
    break;

  case 66: /* comandos_de_entrada_e_saida: TK_PR_OUTPUT literal  */
#line 244 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1746 "parser.tab.c"
    break;

  case 67: /* comando_de_retorno_break_continue: TK_PR_BREAK  */
#line 247 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1752 "parser.tab.c"
    break;

  case 68: /* comando_de_retorno_break_continue: TK_PR_CONTINUE  */
#line 248 "parser.y"
                     {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1758 "parser.tab.c"
    break;

  case 69: /* comando_de_retorno_break_continue: TK_PR_RETURN expressao  */
#line 249 "parser.y"
                             {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1764 "parser.tab.c"
    break;

  case 70: /* expressao: argumento  */
#line 252 "parser.y"
                {(yyval.ast) = (yyvsp[0].ast);}
#line 1770 "parser.tab.c"
    break;

  case 71: /* expressao: '(' expressao ')'  */
#line 253 "parser.y"
                        {(yyval.ast) = (yyvsp[-1].ast);}
#line 1776 "parser.tab.c"
    break;

  case 72: /* expressao: '+' expressao  */
#line 254 "parser.y"
                    {(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1782 "parser.tab.c"
    break;

  case 73: /* expressao: '-' expressao  */
#line 255 "parser.y"
                    {(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1788 "parser.tab.c"
    break;

  case 74: /* expressao: '!' expressao  */
#line 256 "parser.y"
                    {(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1794 "parser.tab.c"
    break;

  case 75: /* expressao: '&' expressao  */
#line 257 "parser.y"
                    {(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1800 "parser.tab.c"
    break;

  case 76: /* expressao: '*' expressao  */
#line 258 "parser.y"
                    {(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1806 "parser.tab.c"
    break;

  case 77: /* expressao: '?' expressao  */
#line 259 "parser.y"
                    {(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1812 "parser.tab.c"
    break;

  case 78: /* expressao: '#' expressao  */
#line 260 "parser.y"
                    {(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1818 "parser.tab.c"
    break;

  case 79: /* expressao: expressao '+' expressao  */
#line 261 "parser.y"
                              {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1824 "parser.tab.c"
    break;

  case 80: /* expressao: expressao '-' expressao  */
#line 262 "parser.y"
                              {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1830 "parser.tab.c"
    break;

  case 81: /* expressao: expressao '*' expressao  */
#line 263 "parser.y"
                              {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1836 "parser.tab.c"
    break;

  case 82: /* expressao: expressao '/' expressao  */
#line 264 "parser.y"
                              {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1842 "parser.tab.c"
    break;

  case 83: /* expressao: expressao '%' expressao  */
#line 265 "parser.y"
                              {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1848 "parser.tab.c"
    break;

  case 84: /* expressao: expressao '|' expressao  */
#line 266 "parser.y"
                              {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1854 "parser.tab.c"
    break;

  case 85: /* expressao: expressao '&' expressao  */
#line 267 "parser.y"
                              {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1860 "parser.tab.c"
    break;

  case 86: /* expressao: expressao '^' expressao  */
#line 268 "parser.y"
                              {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1866 "parser.tab.c"
    break;

  case 87: /* expressao: expressao '>' expressao  */
#line 269 "parser.y"
                              {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1872 "parser.tab.c"
    break;

  case 88: /* expressao: expressao '<' expressao  */
#line 270 "parser.y"
                              {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1878 "parser.tab.c"
    break;

  case 89: /* expressao: expressao TK_OC_LE expressao  */
#line 271 "parser.y"
                                   {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1884 "parser.tab.c"
    break;

  case 90: /* expressao: expressao TK_OC_GE expressao  */
#line 272 "parser.y"
                                   {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1890 "parser.tab.c"
    break;

  case 91: /* expressao: expressao TK_OC_EQ expressao  */
#line 273 "parser.y"
                                   {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1896 "parser.tab.c"
    break;

  case 92: /* expressao: expressao TK_OC_NE expressao  */
#line 274 "parser.y"
                                   {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1902 "parser.tab.c"
    break;

  case 93: /* expressao: expressao TK_OC_AND expressao  */
#line 275 "parser.y"
                                    {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1908 "parser.tab.c"
    break;

  case 94: /* expressao: expressao TK_OC_OR expressao  */
#line 276 "parser.y"
                                   {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1914 "parser.tab.c"
    break;

  case 95: /* expressao: expressao '?' expressao ':' expressao  */
#line 277 "parser.y"
                                            {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast),(yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1920 "parser.tab.c"
    break;

  case 96: /* comandos_de_controle_de_fluxo: TK_PR_IF '(' expressao ')' bloco_de_comandos  */
#line 281 "parser.y"
                                                   {(yyval.ast) = insert_leaf((yyvsp[-4].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1926 "parser.tab.c"
    break;

  case 97: /* comandos_de_controle_de_fluxo: TK_PR_IF '(' expressao ')' bloco_de_comandos TK_PR_ELSE bloco_de_comandos  */
#line 282 "parser.y"
                                                                                {(yyval.ast) = insert_leaf((yyvsp[-6].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast),(yyvsp[0].ast));}
#line 1932 "parser.tab.c"
    break;

  case 98: /* comandos_de_controle_de_fluxo: TK_PR_FOR '(' comando_de_atribuicao ':' expressao ':' comando_de_atribuicao ')' bloco_de_comandos  */
#line 283 "parser.y"
                                                                                                        {(yyval.ast) = insert_leaf((yyvsp[-8].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-6].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast),(yyvsp[-2].ast));}
#line 1938 "parser.tab.c"
    break;

  case 99: /* comandos_de_controle_de_fluxo: TK_PR_WHILE '(' expressao ')' TK_PR_DO bloco_de_comandos  */
#line 284 "parser.y"
                                                               {(yyval.ast) = insert_leaf((yyvsp[-5].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1944 "parser.tab.c"
    break;

  case 100: /* comando_de_atribuicao: TK_IDENTIFICADOR '=' expressao  */
#line 288 "parser.y"
                                     {(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1950 "parser.tab.c"
    break;

  case 101: /* comando_de_atribuicao: TK_IDENTIFICADOR '[' expressao ']' '=' expressao  */
#line 289 "parser.y"
                                                       {(yyval.ast) = insert_leaf((yyvsp[-5].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1956 "parser.tab.c"
    break;

  case 102: /* comandos_de_shift: TK_IDENTIFICADOR TK_OC_SL TK_LIT_INT  */
#line 293 "parser.y"
                                           {(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1962 "parser.tab.c"
    break;

  case 103: /* comandos_de_shift: TK_IDENTIFICADOR TK_OC_SR TK_LIT_INT  */
#line 294 "parser.y"
                                           {(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1968 "parser.tab.c"
    break;

  case 104: /* comandos_de_shift: TK_IDENTIFICADOR '[' expressao ']' TK_OC_SL TK_LIT_INT  */
#line 295 "parser.y"
                                                             {(yyval.ast) = insert_leaf((yyvsp[-5].valor_lexico)); (yyval.ast) = insert_child((yyval.ast),(yyvsp[-3].ast)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1974 "parser.tab.c"
    break;

  case 105: /* comandos_de_shift: TK_IDENTIFICADOR '[' expressao ']' TK_OC_SR TK_LIT_INT  */
#line 296 "parser.y"
                                                             {(yyval.ast) = insert_leaf((yyvsp[-5].valor_lexico)); (yyval.ast) = insert_child((yyval.ast),(yyvsp[-3].ast)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1980 "parser.tab.c"
    break;


#line 1984 "parser.tab.c"

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

#line 299 "parser.y"


void yyerror (char const *s) {
    fprintf (stderr, "%s on line %d\n", s, current_line_number);
}
