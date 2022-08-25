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
  YYSYMBOL_start = 72,                     /* start  */
  YYSYMBOL_programa_ou_vazio = 73,         /* programa_ou_vazio  */
  YYSYMBOL_programa = 74,                  /* programa  */
  YYSYMBOL_funcao_ou_variavel_global = 75, /* funcao_ou_variavel_global  */
  YYSYMBOL_variavel_global = 76,           /* variavel_global  */
  YYSYMBOL_tipo_global_ou_retorno = 77,    /* tipo_global_ou_retorno  */
  YYSYMBOL_lista_nao_vazia_identificadores = 78, /* lista_nao_vazia_identificadores  */
  YYSYMBOL_variavel_ou_vetor = 79,         /* variavel_ou_vetor  */
  YYSYMBOL_tipos_primitivos = 80,          /* tipos_primitivos  */
  YYSYMBOL_funcao = 81,                    /* funcao  */
  YYSYMBOL_cabecalho_funcao = 82,          /* cabecalho_funcao  */
  YYSYMBOL_nome_da_funcao = 83,            /* nome_da_funcao  */
  YYSYMBOL_parametros_da_funcao = 84,      /* parametros_da_funcao  */
  YYSYMBOL_parametro_funcao = 85,          /* parametro_funcao  */
  YYSYMBOL_lista_nao_vazia_parametros_funcao = 86, /* lista_nao_vazia_parametros_funcao  */
  YYSYMBOL_corpo_funcao = 87,              /* corpo_funcao  */
  YYSYMBOL_bloco_de_comandos = 88,         /* bloco_de_comandos  */
  YYSYMBOL_lista_comandos_simples = 89,    /* lista_comandos_simples  */
  YYSYMBOL_comando_simples = 90,           /* comando_simples  */
  YYSYMBOL_chamada_de_funcao = 91,         /* chamada_de_funcao  */
  YYSYMBOL_argumento = 92,                 /* argumento  */
  YYSYMBOL_lista_de_argumentos = 93,       /* lista_de_argumentos  */
  YYSYMBOL_declaracao_de_variavel = 94,    /* declaracao_de_variavel  */
  YYSYMBOL_variavel = 95,                  /* variavel  */
  YYSYMBOL_literal = 96,                   /* literal  */
  YYSYMBOL_lista_variaveis = 97,           /* lista_variaveis  */
  YYSYMBOL_comandos_de_entrada_e_saida = 98, /* comandos_de_entrada_e_saida  */
  YYSYMBOL_comando_de_retorno_break_continue = 99, /* comando_de_retorno_break_continue  */
  YYSYMBOL_expressao = 100,                /* expressao  */
  YYSYMBOL_comandos_de_controle_de_fluxo = 101, /* comandos_de_controle_de_fluxo  */
  YYSYMBOL_comando_de_atribuicao = 102,    /* comando_de_atribuicao  */
  YYSYMBOL_comandos_de_shift = 103         /* comandos_de_shift  */
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
#define YYLAST   534

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  71
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
       0,    95,    95,    99,   100,   104,   105,   109,   110,   115,
     119,   120,   124,   125,   129,   130,   134,   135,   136,   137,
     138,   143,   147,   151,   155,   156,   160,   161,   165,   166,
     170,   176,   180,   181,   186,   187,   188,   189,   190,   191,
     192,   193,   197,   198,   199,   203,   204,   208,   209,   214,
     215,   216,   217,   222,   223,   224,   228,   229,   230,   231,
     232,   233,   237,   238,   243,   244,   245,   248,   249,   250,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   278,   282,   283,   284,   285,
     289,   290,   294,   295,   296,   297
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
  "'#'", "'^'", "'$'", "','", "';'", "':'", "'.'", "$accept", "start",
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
       5,   -86,   -86,   -86,   -86,   -86,   200,     6,   -86,     5,
     -86,   -86,   -23,   -86,   -86,   -27,   -86,   -86,   -86,    48,
     -29,   -86,     0,    29,   -86,   -86,    37,    32,   -86,    78,
     -86,    39,    44,    35,    87,   470,   200,   195,    45,   -86,
     -86,    41,    55,    56,   -86,    54,    43,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,    57,    58,   -86,   200,   -86,    75,
     -86,   -41,   470,   470,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   470,   470,   470,   470,   470,   470,
     470,   470,   -86,   -86,   342,    55,   200,    55,    76,    84,
      94,   470,   470,   112,   -86,    79,   304,   -86,    29,   -86,
      99,   -86,   -86,   267,   162,   198,   234,    33,    33,   342,
      83,   -86,   442,   -86,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   470,   470,   470,   470,   470,   470,   470,
     470,    79,    55,    79,   -20,    80,   -86,   -86,   270,   342,
     340,    55,   -86,   113,   388,   -86,   -86,   -86,   -27,   146,
     -86,   254,   254,   182,   182,   392,   356,    33,    33,    82,
      83,    83,   406,   254,   254,   442,    83,   -86,    79,   470,
     470,    13,   -86,   -86,   -86,   -86,   -39,   150,   -27,   470,
     306,   122,   123,   126,   470,   -86,   -86,   -27,   -86,   342,
     104,    76,   -86,   -86,   342,   -86,   120,   -27,   -86
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,    16,    17,    19,    18,    20,     0,     0,     2,     4,
       5,     8,     0,    11,     7,     0,    10,     1,     6,    14,
       0,    12,     0,    33,    21,    30,     0,     0,     9,     0,
      22,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      68,    23,     0,     0,    34,     0,     0,    38,    35,    37,
      39,    40,    36,    41,     0,    14,    13,     0,    24,     0,
      28,     0,     0,     0,    64,    56,    60,    59,    58,    57,
      61,    65,    66,    45,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    46,    69,     0,     0,     0,     0,     0,
       0,     0,     0,    53,    62,    52,     0,    31,    33,    15,
       0,    27,    25,     0,     0,     0,     0,    73,    72,    77,
      76,    74,    75,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,    50,     0,     0,   102,   103,     0,   100,
       0,     0,    42,    47,     0,    32,    26,    29,     0,     0,
      71,    89,    90,    91,    92,    93,    94,    80,    79,     0,
      81,    82,    84,    87,    88,    85,    83,    86,    49,     0,
       0,     0,    54,    55,    63,    43,     0,    96,     0,     0,
       0,     0,     0,     0,     0,    44,    48,     0,    99,    95,
       0,     0,   104,   105,   101,    97,     0,     0,    98
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -86,   -86,   -86,   -86,   159,   -86,   -86,   -86,   142,    64,
     -86,   -86,   158,   -86,    68,   -86,   -86,   -15,    85,   -86,
     -86,   -73,   -86,   -86,    47,   -30,   -60,   -86,   -86,   -61,
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
      25,   104,   105,   135,    72,   102,    17,   185,     1,     2,
       3,     4,     5,   106,   107,   108,   109,   110,   111,   112,
     113,    19,     6,   143,    23,   131,   103,   133,   186,   169,
     138,   139,     1,     2,     3,     4,     5,    31,    27,    28,
      32,    92,    33,    34,    35,    36,    37,    29,    38,   182,
     183,    39,    40,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
      16,   176,   168,    41,   184,    54,    55,    89,    90,    64,
      23,     1,     2,     3,     4,     5,    62,    42,   123,   124,
      91,    63,    88,    59,    57,   -23,   129,    26,   130,    93,
      85,    87,    92,    96,    97,    99,   196,    26,   180,   181,
     173,    98,   114,   115,   116,   117,   118,   119,   189,   101,
     134,   100,   136,   194,    58,    65,    66,    67,    68,    69,
      70,    71,   137,   177,   120,   121,   122,   123,   124,   125,
     126,   127,   140,   146,   128,   129,   141,   130,   130,   170,
     132,   179,   114,   115,   116,   117,   118,   119,   178,   175,
     187,   192,    42,   188,   193,   184,   197,    59,    18,    56,
      22,   147,   195,     0,   120,   121,   122,   123,   124,   125,
     126,   127,   198,   145,   128,   129,     0,   130,   174,     0,
       0,   191,   114,   115,   116,   117,   118,   119,     1,     2,
       3,     4,     5,     1,     2,     3,     4,     5,   148,     0,
       0,    86,   114,   115,   120,   121,   122,   123,   124,   125,
     126,   127,     0,     0,   128,   129,     0,   130,   114,   115,
     116,   117,   118,   119,   120,   121,     0,   123,   124,     0,
     126,   127,     0,     0,   149,   129,     0,   130,     0,     0,
     120,   121,   122,   123,   124,   125,   126,   127,     0,     0,
     128,   129,     0,   130,   114,   115,   116,   117,   118,   119,
       1,     2,     3,     4,     5,     0,     0,     0,     0,     0,
     150,     0,     0,    57,     0,     0,   120,   121,   122,   123,
     124,   125,   126,   127,     0,     0,   128,   129,     0,   130,
     114,   115,   116,   117,   118,   119,   120,   121,     0,   123,
     124,     0,     0,     0,     0,     0,     0,   129,   171,   130,
       0,     0,   120,   121,   122,   123,   124,   125,   126,   127,
       0,     0,   128,   129,     0,   130,   114,   115,   116,   117,
     118,   119,    65,    66,    67,    68,    69,    70,    73,     0,
     142,     0,     0,     0,   190,     0,     0,     0,   120,   121,
     122,   123,   124,   125,   126,   127,     0,     0,   128,   129,
       0,   130,   114,   115,   116,   117,   118,   119,    65,    66,
      67,    68,    69,    70,   172,     0,   114,   115,   116,   117,
     118,     0,     0,     0,   120,   121,   122,   123,   124,   125,
     126,   127,     0,     0,   128,   129,     0,   130,   120,   121,
       0,   123,   124,   125,   126,   127,     0,     0,   128,   129,
       0,   130,   114,   115,   116,   117,    65,    66,    67,    68,
      69,    70,    73,     0,     0,     0,   114,   115,   116,   117,
       0,     0,     0,     0,   120,   121,     0,   123,   124,   125,
     126,   127,     0,     0,   128,   129,     0,   130,   120,   121,
       0,   123,   124,     0,   126,   127,     0,     0,   128,   129,
       0,   130,   114,   115,   116,   117,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   120,   121,     0,   123,   124,     0,
     126,   127,     0,     0,     0,   129,     0,   130,    65,    66,
      67,    68,    69,    70,    73,     0,     0,    74,     0,     0,
       0,     0,    75,    76,    77,    78,     0,     0,     0,     0,
      79,     0,    80,     0,    81
};

static const yytype_int16 yycheck[] =
{
      15,    62,    63,    88,    34,    46,     0,    46,     3,     4,
       5,     6,     7,    74,    75,    76,    77,    78,    79,    80,
      81,    44,    17,    96,    51,    85,    67,    87,    67,    49,
      91,    92,     3,     4,     5,     6,     7,     8,    67,    68,
      11,    61,    13,    14,    15,    16,    17,    47,    19,    36,
      37,    22,    23,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
       6,   144,   132,    44,    61,    38,    44,    36,    37,    44,
      51,     3,     4,     5,     6,     7,    47,    23,    55,    56,
      49,    47,    47,    29,    16,    47,    63,    49,    65,    44,
      36,    37,    61,    47,    50,    48,   191,    49,   169,   170,
     140,    68,    30,    31,    32,    33,    34,    35,   179,    44,
      44,    57,    38,   184,    46,    38,    39,    40,    41,    42,
      43,    44,    38,   148,    52,    53,    54,    55,    56,    57,
      58,    59,    30,    44,    62,    63,    67,    65,    65,    69,
      86,    69,    30,    31,    32,    33,    34,    35,    12,    46,
      10,    38,    98,   178,    38,    61,    46,   103,     9,    27,
      12,   103,   187,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,   197,    98,    62,    63,    -1,    65,   141,    -1,
      -1,    69,    30,    31,    32,    33,    34,    35,     3,     4,
       5,     6,     7,     3,     4,     5,     6,     7,    46,    -1,
      -1,    16,    30,    31,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    -1,    62,    63,    -1,    65,    30,    31,
      32,    33,    34,    35,    52,    53,    -1,    55,    56,    -1,
      58,    59,    -1,    -1,    46,    63,    -1,    65,    -1,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    -1,    -1,
      62,    63,    -1,    65,    30,    31,    32,    33,    34,    35,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    -1,
      46,    -1,    -1,    16,    -1,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    -1,    -1,    62,    63,    -1,    65,
      30,    31,    32,    33,    34,    35,    52,    53,    -1,    55,
      56,    -1,    -1,    -1,    -1,    -1,    -1,    63,    48,    65,
      -1,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      -1,    -1,    62,    63,    -1,    65,    30,    31,    32,    33,
      34,    35,    38,    39,    40,    41,    42,    43,    44,    -1,
      46,    -1,    -1,    -1,    48,    -1,    -1,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    -1,    -1,    62,    63,
      -1,    65,    30,    31,    32,    33,    34,    35,    38,    39,
      40,    41,    42,    43,    44,    -1,    30,    31,    32,    33,
      34,    -1,    -1,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    -1,    -1,    62,    63,    -1,    65,    52,    53,
      -1,    55,    56,    57,    58,    59,    -1,    -1,    62,    63,
      -1,    65,    30,    31,    32,    33,    38,    39,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    52,    53,    -1,    55,    56,    57,
      58,    59,    -1,    -1,    62,    63,    -1,    65,    52,    53,
      -1,    55,    56,    -1,    58,    59,    -1,    -1,    62,    63,
      -1,    65,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    -1,    55,    56,    -1,
      58,    59,    -1,    -1,    -1,    63,    -1,    65,    38,    39,
      40,    41,    42,    43,    44,    -1,    -1,    47,    -1,    -1,
      -1,    -1,    52,    53,    54,    55,    -1,    -1,    -1,    -1,
      60,    -1,    62,    -1,    64
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,    17,    72,    73,    74,
      75,    76,    77,    80,    81,    82,    80,     0,    75,    44,
      78,    79,    83,    51,    87,    88,    49,    67,    68,    47,
      84,     8,    11,    13,    14,    15,    16,    17,    19,    22,
      23,    44,    80,    83,    88,    89,    90,    91,    94,    98,
      99,   101,   102,   103,    38,    44,    79,    16,    46,    80,
      85,    86,    47,    47,    44,    38,    39,    40,    41,    42,
      43,    44,    96,    44,    47,    52,    53,    54,    55,    60,
      62,    64,    92,    96,   100,    80,    16,    80,    47,    36,
      37,    49,    61,    44,    95,    97,    47,    50,    68,    48,
      80,    44,    46,    67,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,    30,    31,    32,    33,    34,    35,
      52,    53,    54,    55,    56,    57,    58,    59,    62,    63,
      65,    97,    80,    97,    44,   102,    38,    38,   100,   100,
      30,    67,    46,    92,    93,    89,    44,    85,    46,    46,
      46,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,    97,    49,
      69,    48,    44,    96,    95,    46,    92,    88,    12,    69,
     100,   100,    36,    37,    61,    46,    67,    10,    88,   100,
      48,    69,    38,    38,   100,    88,   102,    46,    88
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    71,    72,    73,    73,    74,    74,    75,    75,    76,
      77,    77,    78,    78,    79,    79,    80,    80,    80,    80,
      80,    81,    82,    83,    84,    84,    85,    85,    86,    86,
      87,    88,    89,    89,    90,    90,    90,    90,    90,    90,
      90,    90,    91,    91,    91,    92,    92,    93,    93,    94,
      94,    94,    94,    95,    95,    95,    96,    96,    96,    96,
      96,    96,    97,    97,    98,    98,    98,    99,    99,    99,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   101,   101,   101,   101,
     102,   102,   103,   103,   103,   103
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
#line 95 "parser.y"
                         {arvore = (yyvsp[0].ast);}
#line 1384 "parser.tab.c"
    break;

  case 3: /* programa_ou_vazio: %empty  */
#line 99 "parser.y"
             {(yyval.ast) = NULL;}
#line 1390 "parser.tab.c"
    break;

  case 4: /* programa_ou_vazio: programa  */
#line 100 "parser.y"
               {(yyval.ast) = (yyvsp[0].ast);}
#line 1396 "parser.tab.c"
    break;

  case 5: /* programa: funcao_ou_variavel_global  */
#line 104 "parser.y"
                                {(yyval.ast) = NULL;}
#line 1402 "parser.tab.c"
    break;

  case 6: /* programa: programa funcao_ou_variavel_global  */
#line 105 "parser.y"
                                         {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1408 "parser.tab.c"
    break;

  case 7: /* funcao_ou_variavel_global: funcao  */
#line 109 "parser.y"
             {(yyval.ast) = (yyvsp[0].ast);}
#line 1414 "parser.tab.c"
    break;

  case 8: /* funcao_ou_variavel_global: variavel_global  */
#line 110 "parser.y"
                      {(yyval.ast) = NULL;}
#line 1420 "parser.tab.c"
    break;

  case 9: /* variavel_global: tipo_global_ou_retorno lista_nao_vazia_identificadores ';'  */
#line 115 "parser.y"
                                                                 {(yyval.ast) = NULL;}
#line 1426 "parser.tab.c"
    break;

  case 10: /* tipo_global_ou_retorno: TK_PR_STATIC tipos_primitivos  */
#line 119 "parser.y"
                                    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1432 "parser.tab.c"
    break;

  case 11: /* tipo_global_ou_retorno: tipos_primitivos  */
#line 120 "parser.y"
                       {(yyval.ast) = NULL;}
#line 1438 "parser.tab.c"
    break;

  case 12: /* lista_nao_vazia_identificadores: variavel_ou_vetor  */
#line 124 "parser.y"
                        {(yyval.ast) = NULL;}
#line 1444 "parser.tab.c"
    break;

  case 13: /* lista_nao_vazia_identificadores: lista_nao_vazia_identificadores ',' variavel_ou_vetor  */
#line 125 "parser.y"
                                                            {(yyval.ast) = NULL;}
#line 1450 "parser.tab.c"
    break;

  case 14: /* variavel_ou_vetor: TK_IDENTIFICADOR  */
#line 129 "parser.y"
                       {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1456 "parser.tab.c"
    break;

  case 15: /* variavel_ou_vetor: TK_IDENTIFICADOR '[' TK_LIT_INT ']'  */
#line 130 "parser.y"
                                          {(yyval.ast) = insert_leaf((yyvsp[-3].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));}
#line 1462 "parser.tab.c"
    break;

  case 16: /* tipos_primitivos: TK_PR_INT  */
#line 134 "parser.y"
                {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1468 "parser.tab.c"
    break;

  case 17: /* tipos_primitivos: TK_PR_FLOAT  */
#line 135 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1474 "parser.tab.c"
    break;

  case 18: /* tipos_primitivos: TK_PR_CHAR  */
#line 136 "parser.y"
                 {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1480 "parser.tab.c"
    break;

  case 19: /* tipos_primitivos: TK_PR_BOOL  */
#line 137 "parser.y"
                 {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1486 "parser.tab.c"
    break;

  case 20: /* tipos_primitivos: TK_PR_STRING  */
#line 138 "parser.y"
                   {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1492 "parser.tab.c"
    break;

  case 21: /* funcao: cabecalho_funcao corpo_funcao  */
#line 143 "parser.y"
                                    {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1498 "parser.tab.c"
    break;

  case 22: /* cabecalho_funcao: tipo_global_ou_retorno nome_da_funcao parametros_da_funcao  */
#line 147 "parser.y"
                                                                 {(yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1504 "parser.tab.c"
    break;

  case 23: /* nome_da_funcao: TK_IDENTIFICADOR  */
#line 151 "parser.y"
                       {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1510 "parser.tab.c"
    break;

  case 24: /* parametros_da_funcao: '(' ')'  */
#line 155 "parser.y"
              {(yyval.ast) = NULL;}
#line 1516 "parser.tab.c"
    break;

  case 25: /* parametros_da_funcao: '(' lista_nao_vazia_parametros_funcao ')'  */
#line 156 "parser.y"
                                                {(yyval.ast) = NULL;}
#line 1522 "parser.tab.c"
    break;

  case 26: /* parametro_funcao: TK_PR_CONST tipos_primitivos TK_IDENTIFICADOR  */
#line 160 "parser.y"
                                                    {(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); libera((yyvsp[-1].ast));}
#line 1528 "parser.tab.c"
    break;

  case 27: /* parametro_funcao: tipos_primitivos TK_IDENTIFICADOR  */
#line 161 "parser.y"
                                        {(yyval.ast) = NULL; libera((yyvsp[-1].ast));}
#line 1534 "parser.tab.c"
    break;

  case 28: /* lista_nao_vazia_parametros_funcao: parametro_funcao  */
#line 165 "parser.y"
                       {(yyval.ast) = (yyvsp[0].ast);}
#line 1540 "parser.tab.c"
    break;

  case 29: /* lista_nao_vazia_parametros_funcao: lista_nao_vazia_parametros_funcao ',' parametro_funcao  */
#line 166 "parser.y"
                                                             {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1546 "parser.tab.c"
    break;

  case 30: /* corpo_funcao: bloco_de_comandos  */
#line 170 "parser.y"
                        {(yyval.ast) = (yyvsp[0].ast);}
#line 1552 "parser.tab.c"
    break;

  case 31: /* bloco_de_comandos: '{' lista_comandos_simples '}'  */
#line 176 "parser.y"
                                     {(yyval.ast) = (yyvsp[-1].ast);}
#line 1558 "parser.tab.c"
    break;

  case 32: /* lista_comandos_simples: comando_simples ';' lista_comandos_simples  */
#line 180 "parser.y"
                                                 {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1564 "parser.tab.c"
    break;

  case 33: /* lista_comandos_simples: %empty  */
#line 181 "parser.y"
            {(yyval.ast) = NULL;}
#line 1570 "parser.tab.c"
    break;

  case 35: /* comando_simples: declaracao_de_variavel  */
#line 187 "parser.y"
                             {(yyval.ast) = (yyvsp[0].ast);}
#line 1576 "parser.tab.c"
    break;

  case 36: /* comando_simples: comando_de_atribuicao  */
#line 188 "parser.y"
                            {(yyval.ast) = (yyvsp[0].ast);}
#line 1582 "parser.tab.c"
    break;

  case 37: /* comando_simples: comandos_de_entrada_e_saida  */
#line 189 "parser.y"
                                  {(yyval.ast) = (yyvsp[0].ast);}
#line 1588 "parser.tab.c"
    break;

  case 38: /* comando_simples: chamada_de_funcao  */
#line 190 "parser.y"
                        {(yyval.ast) = (yyvsp[0].ast);}
#line 1594 "parser.tab.c"
    break;

  case 39: /* comando_simples: comando_de_retorno_break_continue  */
#line 191 "parser.y"
                                        {(yyval.ast) = (yyvsp[0].ast);}
#line 1600 "parser.tab.c"
    break;

  case 40: /* comando_simples: comandos_de_controle_de_fluxo  */
#line 192 "parser.y"
                                    {(yyval.ast) = (yyvsp[0].ast);}
#line 1606 "parser.tab.c"
    break;

  case 41: /* comando_simples: comandos_de_shift  */
#line 193 "parser.y"
                        {(yyval.ast) = (yyvsp[0].ast);}
#line 1612 "parser.tab.c"
    break;

  case 42: /* chamada_de_funcao: nome_da_funcao '(' ')'  */
#line 197 "parser.y"
                             {(yyval.ast) = (yyvsp[-2].ast);}
#line 1618 "parser.tab.c"
    break;

  case 43: /* chamada_de_funcao: nome_da_funcao '(' argumento ')'  */
#line 198 "parser.y"
                                       {(yyval.ast) = (yyvsp[-3].ast); (yyval.ast) = (yyvsp[-1].ast);}
#line 1624 "parser.tab.c"
    break;

  case 44: /* chamada_de_funcao: nome_da_funcao '(' lista_de_argumentos argumento ')'  */
#line 199 "parser.y"
                                                           {(yyval.ast) = (yyvsp[-4].ast); (yyval.ast) = (yyvsp[-2].ast) ; (yyval.ast) = (yyvsp[-1].ast);}
#line 1630 "parser.tab.c"
    break;

  case 45: /* argumento: TK_IDENTIFICADOR  */
#line 203 "parser.y"
                       {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1636 "parser.tab.c"
    break;

  case 46: /* argumento: literal  */
#line 204 "parser.y"
              {(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1642 "parser.tab.c"
    break;

  case 47: /* lista_de_argumentos: argumento  */
#line 208 "parser.y"
                {(yyval.ast) = (yyvsp[0].ast);}
#line 1648 "parser.tab.c"
    break;

  case 48: /* lista_de_argumentos: lista_de_argumentos argumento ','  */
#line 209 "parser.y"
                                        {(yyval.ast) = (yyvsp[-2].ast); (yyval.ast) = (yyvsp[-1].ast);}
#line 1654 "parser.tab.c"
    break;

  case 49: /* declaracao_de_variavel: TK_PR_STATIC TK_PR_CONST tipos_primitivos lista_variaveis  */
#line 214 "parser.y"
                                                                {(yyval.ast) = insert_leaf((yyvsp[-3].valor_lexico));(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1660 "parser.tab.c"
    break;

  case 50: /* declaracao_de_variavel: TK_PR_STATIC tipos_primitivos lista_variaveis  */
#line 215 "parser.y"
                                                    {(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1666 "parser.tab.c"
    break;

  case 51: /* declaracao_de_variavel: TK_PR_CONST tipos_primitivos lista_variaveis  */
#line 216 "parser.y"
                                                   {(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[-1].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1672 "parser.tab.c"
    break;

  case 52: /* declaracao_de_variavel: tipos_primitivos lista_variaveis  */
#line 217 "parser.y"
                                       {(yyval.ast) = (yyvsp[-1].ast); (yyval.ast) = (yyvsp[0].ast);}
#line 1678 "parser.tab.c"
    break;

  case 53: /* variavel: TK_IDENTIFICADOR  */
#line 222 "parser.y"
                       {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1684 "parser.tab.c"
    break;

  case 54: /* variavel: TK_IDENTIFICADOR TK_OC_LE TK_IDENTIFICADOR  */
#line 223 "parser.y"
                                                 {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1690 "parser.tab.c"
    break;

  case 55: /* variavel: TK_IDENTIFICADOR TK_OC_LE literal  */
#line 224 "parser.y"
                                        {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1696 "parser.tab.c"
    break;

  case 56: /* literal: TK_LIT_INT  */
#line 228 "parser.y"
                 {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1702 "parser.tab.c"
    break;

  case 57: /* literal: TK_LIT_CHAR  */
#line 229 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1708 "parser.tab.c"
    break;

  case 58: /* literal: TK_LIT_TRUE  */
#line 230 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1714 "parser.tab.c"
    break;

  case 59: /* literal: TK_LIT_FALSE  */
#line 231 "parser.y"
                   {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1720 "parser.tab.c"
    break;

  case 60: /* literal: TK_LIT_FLOAT  */
#line 232 "parser.y"
                   {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1726 "parser.tab.c"
    break;

  case 61: /* literal: TK_LIT_STRING  */
#line 233 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1732 "parser.tab.c"
    break;

  case 62: /* lista_variaveis: variavel  */
#line 237 "parser.y"
               {(yyval.ast) = (yyvsp[0].ast);}
#line 1738 "parser.tab.c"
    break;

  case 63: /* lista_variaveis: lista_variaveis ',' variavel  */
#line 238 "parser.y"
                                   {(yyval.ast) = NULL; (yyval.ast) = (yyvsp[-2].ast);}
#line 1744 "parser.tab.c"
    break;

  case 64: /* comandos_de_entrada_e_saida: TK_PR_INPUT TK_IDENTIFICADOR  */
#line 243 "parser.y"
                                   {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1750 "parser.tab.c"
    break;

  case 65: /* comandos_de_entrada_e_saida: TK_PR_OUTPUT TK_IDENTIFICADOR  */
#line 244 "parser.y"
                                    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1756 "parser.tab.c"
    break;

  case 66: /* comandos_de_entrada_e_saida: TK_PR_OUTPUT literal  */
#line 245 "parser.y"
                           {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1762 "parser.tab.c"
    break;

  case 67: /* comando_de_retorno_break_continue: TK_PR_BREAK  */
#line 248 "parser.y"
                  {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1768 "parser.tab.c"
    break;

  case 68: /* comando_de_retorno_break_continue: TK_PR_CONTINUE  */
#line 249 "parser.y"
                     {(yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1774 "parser.tab.c"
    break;

  case 69: /* comando_de_retorno_break_continue: TK_PR_RETURN expressao  */
#line 250 "parser.y"
                             {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1780 "parser.tab.c"
    break;

  case 70: /* expressao: argumento  */
#line 253 "parser.y"
                {(yyval.ast) = (yyvsp[0].ast);}
#line 1786 "parser.tab.c"
    break;

  case 71: /* expressao: '(' expressao ')'  */
#line 254 "parser.y"
                        {(yyval.ast) = (yyvsp[-1].ast);}
#line 1792 "parser.tab.c"
    break;

  case 72: /* expressao: '+' expressao  */
#line 255 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1798 "parser.tab.c"
    break;

  case 73: /* expressao: '-' expressao  */
#line 256 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1804 "parser.tab.c"
    break;

  case 74: /* expressao: '!' expressao  */
#line 257 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1810 "parser.tab.c"
    break;

  case 75: /* expressao: '&' expressao  */
#line 258 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1816 "parser.tab.c"
    break;

  case 76: /* expressao: '*' expressao  */
#line 259 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1822 "parser.tab.c"
    break;

  case 77: /* expressao: '?' expressao  */
#line 260 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1828 "parser.tab.c"
    break;

  case 78: /* expressao: '#' expressao  */
#line 261 "parser.y"
                    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1834 "parser.tab.c"
    break;

  case 79: /* expressao: expressao '+' expressao  */
#line 262 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1840 "parser.tab.c"
    break;

  case 80: /* expressao: expressao '-' expressao  */
#line 263 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1846 "parser.tab.c"
    break;

  case 81: /* expressao: expressao '*' expressao  */
#line 264 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1852 "parser.tab.c"
    break;

  case 82: /* expressao: expressao '/' expressao  */
#line 265 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1858 "parser.tab.c"
    break;

  case 83: /* expressao: expressao '%' expressao  */
#line 266 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1864 "parser.tab.c"
    break;

  case 84: /* expressao: expressao '|' expressao  */
#line 267 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1870 "parser.tab.c"
    break;

  case 85: /* expressao: expressao '&' expressao  */
#line 268 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1876 "parser.tab.c"
    break;

  case 86: /* expressao: expressao '^' expressao  */
#line 269 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1882 "parser.tab.c"
    break;

  case 87: /* expressao: expressao '>' expressao  */
#line 270 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1888 "parser.tab.c"
    break;

  case 88: /* expressao: expressao '<' expressao  */
#line 271 "parser.y"
                              {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1894 "parser.tab.c"
    break;

  case 89: /* expressao: expressao TK_OC_LE expressao  */
#line 272 "parser.y"
                                   {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1900 "parser.tab.c"
    break;

  case 90: /* expressao: expressao TK_OC_GE expressao  */
#line 273 "parser.y"
                                   {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1906 "parser.tab.c"
    break;

  case 91: /* expressao: expressao TK_OC_EQ expressao  */
#line 274 "parser.y"
                                   {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1912 "parser.tab.c"
    break;

  case 92: /* expressao: expressao TK_OC_NE expressao  */
#line 275 "parser.y"
                                   {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1918 "parser.tab.c"
    break;

  case 93: /* expressao: expressao TK_OC_AND expressao  */
#line 276 "parser.y"
                                    {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1924 "parser.tab.c"
    break;

  case 94: /* expressao: expressao TK_OC_OR expressao  */
#line 277 "parser.y"
                                   {(yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1930 "parser.tab.c"
    break;

  case 95: /* expressao: expressao '?' expressao ':' expressao  */
#line 278 "parser.y"
                                            {(yyval.ast) = insert_leaf((yyvsp[-3].valor_lexico)); (yyval.ast)->data->lv.v.s = "?:"; (yyval.ast)->data->token_t = COMPOSE_OP; (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast),(yyvsp[-2].ast));(yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1936 "parser.tab.c"
    break;

  case 96: /* comandos_de_controle_de_fluxo: TK_PR_IF '(' expressao ')' bloco_de_comandos  */
#line 282 "parser.y"
                                                   {(yyval.ast) = insert_leaf((yyvsp[-4].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1942 "parser.tab.c"
    break;

  case 97: /* comandos_de_controle_de_fluxo: TK_PR_IF '(' expressao ')' bloco_de_comandos TK_PR_ELSE bloco_de_comandos  */
#line 283 "parser.y"
                                                                                {(yyval.ast) = insert_leaf((yyvsp[-6].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-2].ast)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast),(yyvsp[0].ast));}
#line 1948 "parser.tab.c"
    break;

  case 98: /* comandos_de_controle_de_fluxo: TK_PR_FOR '(' comando_de_atribuicao ':' expressao ':' comando_de_atribuicao ')' bloco_de_comandos  */
#line 284 "parser.y"
                                                                                                        {(yyval.ast) = insert_leaf((yyvsp[-8].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-6].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-4].ast)); (yyval.ast) = insert_child((yyval.ast),(yyvsp[-2].ast));}
#line 1954 "parser.tab.c"
    break;

  case 99: /* comandos_de_controle_de_fluxo: TK_PR_WHILE '(' expressao ')' TK_PR_DO bloco_de_comandos  */
#line 285 "parser.y"
                                                               {(yyval.ast) = insert_leaf((yyvsp[-5].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1960 "parser.tab.c"
    break;

  case 100: /* comando_de_atribuicao: TK_IDENTIFICADOR '=' expressao  */
#line 289 "parser.y"
                                     {(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1966 "parser.tab.c"
    break;

  case 101: /* comando_de_atribuicao: TK_IDENTIFICADOR '[' expressao ']' '=' expressao  */
#line 290 "parser.y"
                                                       {(yyval.ast) = insert_leaf((yyvsp[-5].valor_lexico)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[-3].ast)); (yyval.ast) = insert_child((yyval.ast), (yyvsp[0].ast));}
#line 1972 "parser.tab.c"
    break;

  case 102: /* comandos_de_shift: TK_IDENTIFICADOR TK_OC_SL TK_LIT_INT  */
#line 294 "parser.y"
                                           {(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1978 "parser.tab.c"
    break;

  case 103: /* comandos_de_shift: TK_IDENTIFICADOR TK_OC_SR TK_LIT_INT  */
#line 295 "parser.y"
                                           {(yyval.ast) = insert_leaf((yyvsp[-2].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1984 "parser.tab.c"
    break;

  case 104: /* comandos_de_shift: TK_IDENTIFICADOR '[' expressao ']' TK_OC_SL TK_LIT_INT  */
#line 296 "parser.y"
                                                             {(yyval.ast) = insert_leaf((yyvsp[-5].valor_lexico)); (yyval.ast) = insert_child((yyval.ast),(yyvsp[-3].ast)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1990 "parser.tab.c"
    break;

  case 105: /* comandos_de_shift: TK_IDENTIFICADOR '[' expressao ']' TK_OC_SR TK_LIT_INT  */
#line 297 "parser.y"
                                                             {(yyval.ast) = insert_leaf((yyvsp[-5].valor_lexico)); (yyval.ast) = insert_child((yyval.ast),(yyvsp[-3].ast)); (yyval.ast) = insert_leaf((yyvsp[-1].valor_lexico)); (yyval.ast) = insert_leaf((yyvsp[0].valor_lexico));}
#line 1996 "parser.tab.c"
    break;


#line 2000 "parser.tab.c"

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

#line 300 "parser.y"


void yyerror (char const *s) {
    fprintf (stderr, "%s on line %d\n", s, current_line_number);
}
