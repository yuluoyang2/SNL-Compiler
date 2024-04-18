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
#line 1 "parser.y"

#include<unistd.h>
#include<stdio.h>   
#include "main.h"
int yylex();

#line 78 "parser.tab.c"

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
  YYSYMBOL_INTC = 3,                       /* INTC  */
  YYSYMBOL_CHARC = 4,                      /* CHARC  */
  YYSYMBOL_ID = 5,                         /* ID  */
  YYSYMBOL_PROGRAM = 6,                    /* PROGRAM  */
  YYSYMBOL_PROCEDURE = 7,                  /* PROCEDURE  */
  YYSYMBOL_TYPE = 8,                       /* TYPE  */
  YYSYMBOL_VAR = 9,                        /* VAR  */
  YYSYMBOL_IF = 10,                        /* IF  */
  YYSYMBOL_THEN = 11,                      /* THEN  */
  YYSYMBOL_ELSE = 12,                      /* ELSE  */
  YYSYMBOL_FI = 13,                        /* FI  */
  YYSYMBOL_WHILE = 14,                     /* WHILE  */
  YYSYMBOL_DO = 15,                        /* DO  */
  YYSYMBOL_ENDWH = 16,                     /* ENDWH  */
  YYSYMBOL_BEGIN1 = 17,                    /* BEGIN1  */
  YYSYMBOL_END = 18,                       /* END  */
  YYSYMBOL_READ = 19,                      /* READ  */
  YYSYMBOL_WRITE = 20,                     /* WRITE  */
  YYSYMBOL_ARRAY = 21,                     /* ARRAY  */
  YYSYMBOL_OF = 22,                        /* OF  */
  YYSYMBOL_RECORD = 23,                    /* RECORD  */
  YYSYMBOL_RETURN = 24,                    /* RETURN  */
  YYSYMBOL_INTEGER = 25,                   /* INTEGER  */
  YYSYMBOL_CHAR = 26,                      /* CHAR  */
  YYSYMBOL_SEMI = 27,                      /* SEMI  */
  YYSYMBOL_COMMA = 28,                     /* COMMA  */
  YYSYMBOL_ASSIGN = 29,                    /* ASSIGN  */
  YYSYMBOL_PLUS = 30,                      /* PLUS  */
  YYSYMBOL_MINUS = 31,                     /* MINUS  */
  YYSYMBOL_TIMES = 32,                     /* TIMES  */
  YYSYMBOL_DIV = 33,                       /* DIV  */
  YYSYMBOL_DOT = 34,                       /* DOT  */
  YYSYMBOL_NOT = 35,                       /* NOT  */
  YYSYMBOL_LPAREN = 36,                    /* LPAREN  */
  YYSYMBOL_RPAREN = 37,                    /* RPAREN  */
  YYSYMBOL_LMIDPAREN = 38,                 /* LMIDPAREN  */
  YYSYMBOL_RMINPAREN = 39,                 /* RMINPAREN  */
  YYSYMBOL_RELOP = 40,                     /* RELOP  */
  YYSYMBOL_UNDERANGE = 41,                 /* UNDERANGE  */
  YYSYMBOL_COMMENT = 42,                   /* COMMENT  */
  YYSYMBOL_SPACE = 43,                     /* SPACE  */
  YYSYMBOL_EOL = 44,                       /* EOL  */
  YYSYMBOL_AERROR = 45,                    /* AERROR  */
  YYSYMBOL_LOWER_THAN_ELSE = 46,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_Program = 48,                   /* Program  */
  YYSYMBOL_ProgramHead = 49,               /* ProgramHead  */
  YYSYMBOL_ProgramName = 50,               /* ProgramName  */
  YYSYMBOL_DeclarePart = 51,               /* DeclarePart  */
  YYSYMBOL_TypeDecpart = 52,               /* TypeDecpart  */
  YYSYMBOL_TypeDec = 53,                   /* TypeDec  */
  YYSYMBOL_TypeDecList = 54,               /* TypeDecList  */
  YYSYMBOL_TypeDecMore = 55,               /* TypeDecMore  */
  YYSYMBOL_TypeId = 56,                    /* TypeId  */
  YYSYMBOL_TypeDef = 57,                   /* TypeDef  */
  YYSYMBOL_BaseType = 58,                  /* BaseType  */
  YYSYMBOL_StructureType = 59,             /* StructureType  */
  YYSYMBOL_ArrayType = 60,                 /* ArrayType  */
  YYSYMBOL_Low = 61,                       /* Low  */
  YYSYMBOL_Top = 62,                       /* Top  */
  YYSYMBOL_RecType = 63,                   /* RecType  */
  YYSYMBOL_FieldDecList = 64,              /* FieldDecList  */
  YYSYMBOL_FieldDecMore = 65,              /* FieldDecMore  */
  YYSYMBOL_IdList = 66,                    /* IdList  */
  YYSYMBOL_IdMore = 67,                    /* IdMore  */
  YYSYMBOL_VarDecpart = 68,                /* VarDecpart  */
  YYSYMBOL_VarDec = 69,                    /* VarDec  */
  YYSYMBOL_VarDecList = 70,                /* VarDecList  */
  YYSYMBOL_VarDecMore = 71,                /* VarDecMore  */
  YYSYMBOL_VarIdList = 72,                 /* VarIdList  */
  YYSYMBOL_VarIdMore = 73,                 /* VarIdMore  */
  YYSYMBOL_ProcDecpart = 74,               /* ProcDecpart  */
  YYSYMBOL_ProcDec = 75,                   /* ProcDec  */
  YYSYMBOL_ProcDecMore = 76,               /* ProcDecMore  */
  YYSYMBOL_ProcName = 77,                  /* ProcName  */
  YYSYMBOL_ParamList = 78,                 /* ParamList  */
  YYSYMBOL_ParamDecList = 79,              /* ParamDecList  */
  YYSYMBOL_ParamMore = 80,                 /* ParamMore  */
  YYSYMBOL_Param = 81,                     /* Param  */
  YYSYMBOL_FormList = 82,                  /* FormList  */
  YYSYMBOL_FidMore = 83,                   /* FidMore  */
  YYSYMBOL_ProcDecPart = 84,               /* ProcDecPart  */
  YYSYMBOL_ProcBody = 85,                  /* ProcBody  */
  YYSYMBOL_ProgramBody = 86,               /* ProgramBody  */
  YYSYMBOL_StmList = 87,                   /* StmList  */
  YYSYMBOL_StmMore = 88,                   /* StmMore  */
  YYSYMBOL_Stm = 89,                       /* Stm  */
  YYSYMBOL_AssCall = 90,                   /* AssCall  */
  YYSYMBOL_AssignmentRest = 91,            /* AssignmentRest  */
  YYSYMBOL_ConditionalStm = 92,            /* ConditionalStm  */
  YYSYMBOL_LoopStm = 93,                   /* LoopStm  */
  YYSYMBOL_InputStm = 94,                  /* InputStm  */
  YYSYMBOL_Invar = 95,                     /* Invar  */
  YYSYMBOL_OutputStm = 96,                 /* OutputStm  */
  YYSYMBOL_ReturnStm = 97,                 /* ReturnStm  */
  YYSYMBOL_CallStmRest = 98,               /* CallStmRest  */
  YYSYMBOL_ActParamList = 99,              /* ActParamList  */
  YYSYMBOL_ActParamMore = 100,             /* ActParamMore  */
  YYSYMBOL_RelExp = 101,                   /* RelExp  */
  YYSYMBOL_OtherRelE = 102,                /* OtherRelE  */
  YYSYMBOL_Exp = 103,                      /* Exp  */
  YYSYMBOL_OtherTerm = 104,                /* OtherTerm  */
  YYSYMBOL_Term = 105,                     /* Term  */
  YYSYMBOL_OtherFactor = 106,              /* OtherFactor  */
  YYSYMBOL_Factor = 107,                   /* Factor  */
  YYSYMBOL_Varible = 108,                  /* Varible  */
  YYSYMBOL_VariMore = 109,                 /* VariMore  */
  YYSYMBOL_FieldVar = 110,                 /* FieldVar  */
  YYSYMBOL_FieldVarMode = 111,             /* FieldVarMode  */
  YYSYMBOL_CmpOp = 112,                    /* CmpOp  */
  YYSYMBOL_AddOp = 113,                    /* AddOp  */
  YYSYMBOL_MultOP = 114                    /* MultOP  */
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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   139

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  104
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  178

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


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
      45,    46
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    68,    68,    70,    71,    73,    75,    76,    77,    78,
      79,    80,    81,    83,    84,    85,    86,    87,    88,    89,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     113,   114,   115,   116,   117,   118,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   131,   132,   134,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182
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
  "\"end of file\"", "error", "\"invalid token\"", "INTC", "CHARC", "ID",
  "PROGRAM", "PROCEDURE", "TYPE", "VAR", "IF", "THEN", "ELSE", "FI",
  "WHILE", "DO", "ENDWH", "BEGIN1", "END", "READ", "WRITE", "ARRAY", "OF",
  "RECORD", "RETURN", "INTEGER", "CHAR", "SEMI", "COMMA", "ASSIGN", "PLUS",
  "MINUS", "TIMES", "DIV", "DOT", "NOT", "LPAREN", "RPAREN", "LMIDPAREN",
  "RMINPAREN", "RELOP", "UNDERANGE", "COMMENT", "SPACE", "EOL", "AERROR",
  "LOWER_THAN_ELSE", "$accept", "Program", "ProgramHead", "ProgramName",
  "DeclarePart", "TypeDecpart", "TypeDec", "TypeDecList", "TypeDecMore",
  "TypeId", "TypeDef", "BaseType", "StructureType", "ArrayType", "Low",
  "Top", "RecType", "FieldDecList", "FieldDecMore", "IdList", "IdMore",
  "VarDecpart", "VarDec", "VarDecList", "VarDecMore", "VarIdList",
  "VarIdMore", "ProcDecpart", "ProcDec", "ProcDecMore", "ProcName",
  "ParamList", "ParamDecList", "ParamMore", "Param", "FormList", "FidMore",
  "ProcDecPart", "ProcBody", "ProgramBody", "StmList", "StmMore", "Stm",
  "AssCall", "AssignmentRest", "ConditionalStm", "LoopStm", "InputStm",
  "Invar", "OutputStm", "ReturnStm", "CallStmRest", "ActParamList",
  "ActParamMore", "RelExp", "OtherRelE", "Exp", "OtherTerm", "Term",
  "OtherFactor", "Factor", "Varible", "VariMore", "FieldVar",
  "FieldVarMode", "CmpOp", "AddOp", "MultOP", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-141)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,     5,    17,    38,  -141,  -141,  -141,    14,    33,    47,
    -141,  -141,  -141,    28,    21,    24,    11,    52,  -141,    11,
      13,     3,     3,    25,    26,  -141,    42,    36,  -141,  -141,
    -141,  -141,  -141,  -141,  -141,    27,    -3,  -141,  -141,    59,
    -141,  -141,  -141,  -141,  -141,    61,  -141,  -141,    41,    64,
       3,     3,  -141,  -141,  -141,    43,  -141,   -23,     3,    60,
      34,    12,    20,  -141,    62,    70,     3,  -141,    21,  -141,
      73,    74,    74,    63,    50,    55,  -141,    48,    14,    45,
    -141,    49,    57,    51,     3,  -141,    54,    21,  -141,  -141,
       3,  -141,  -141,  -141,     3,  -141,  -141,  -141,     3,    21,
    -141,    56,    58,  -141,  -141,    46,    68,    65,    71,  -141,
      59,  -141,    11,     4,  -141,  -141,     3,  -141,  -141,     3,
    -141,  -141,  -141,  -141,    76,  -141,  -141,  -141,    81,  -141,
    -141,    86,    74,  -141,    -3,    -3,  -141,  -141,  -141,    11,
      98,    67,  -141,    78,    69,  -141,    21,  -141,  -141,    72,
    -141,  -141,  -141,  -141,    98,    79,  -141,    82,     4,  -141,
    -141,    93,    88,  -141,    98,  -141,    38,  -141,  -141,    29,
    -141,  -141,    33,  -141,    52,  -141,  -141,  -141
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     6,     4,     3,     1,     0,     0,    31,
       7,    12,     8,     0,     0,     0,     0,    40,    32,     0,
      94,     0,     0,     0,     0,    76,     0,    60,    62,    63,
      64,    65,    66,     2,    15,     0,     0,    16,    17,     0,
      13,    14,    18,    19,    33,     0,     5,    41,     0,     0,
      78,     0,    67,    68,    69,     0,    91,    94,     0,     0,
       0,    85,    88,    92,     0,     0,     0,    58,     0,    59,
       0,     0,     0,     0,    38,     0,    45,     0,    10,    98,
      96,     0,    80,     0,     0,    93,     0,     0,   100,    82,
       0,   101,   102,    84,     0,   103,   104,    87,     0,     0,
      74,     0,     0,    61,    21,     0,    29,     0,     0,    23,
       0,    37,    35,    46,    11,     9,     0,    97,    77,    78,
      79,    95,    70,    90,     0,    83,    86,    89,     0,    73,
      75,     0,     0,    28,    26,    26,    39,    36,    34,     0,
       0,     0,    47,    49,     0,    81,     0,    72,    22,     0,
      30,    27,    24,    25,     0,    54,    51,     0,     0,    48,
      99,     0,     0,    52,     0,    53,     6,    50,    71,     0,
      55,    56,     0,    20,    43,    57,    44,    42
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,  -141,  -141,   -54,  -141,  -141,    35,  -141,  -141,
     -19,   -35,  -141,   -33,  -141,  -141,  -141,    80,   -21,   -65,
    -141,  -141,  -141,     6,  -141,     7,  -141,  -141,   -59,  -141,
    -141,  -141,   -39,  -141,  -141,  -140,  -141,  -141,  -141,   -51,
     -66,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,  -141,
    -141,  -141,     8,  -141,   100,  -141,   -46,  -141,    30,  -141,
    -141,  -141,    66,  -141,  -141,  -141,  -141,  -141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,     5,     8,     9,    10,    12,   115,    13,
      39,    40,    41,    42,   105,   149,    43,   151,   152,   107,
     133,    17,    18,    44,   138,    75,   111,    46,    47,   177,
      77,   141,   142,   159,   143,   156,   165,   172,   174,    15,
      26,    69,    27,    52,    53,    28,    29,    30,   101,    31,
      32,    54,    81,   120,    59,    89,    60,    93,    61,    97,
      62,    63,    55,    80,   117,    90,    94,    98
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      48,    71,   103,    72,    82,    83,    56,   108,    57,    34,
       4,    49,    86,   139,   163,    51,    34,     6,    35,    11,
     102,   124,    37,    38,   170,    35,    20,    36,     1,    37,
      38,    21,    35,   128,    36,    22,    37,    38,   122,    58,
      23,    24,    91,    92,   125,    25,     7,    49,   126,    50,
      14,    51,    95,    96,    37,    38,    16,    19,    33,    45,
      67,    65,    66,    68,    74,    70,    76,   150,    78,    79,
     144,    87,    84,    82,    88,   100,   104,    99,   110,   106,
     161,   109,   112,   116,   113,   119,   118,   131,   146,   148,
     121,   123,   134,   129,   140,   130,   132,   147,   135,    71,
      71,    72,    72,   155,   157,   158,   168,   164,   160,   166,
     169,   162,   171,   114,   153,   176,    73,   136,   137,   167,
     154,   175,    64,    85,     0,     0,     0,   145,   127,     0,
       0,     0,     0,     0,   173,     0,     0,     0,     0,   140
};

static const yytype_int16 yycheck[] =
{
      19,    36,    68,    36,    50,    51,     3,    72,     5,     5,
       5,    34,    58,     9,   154,    38,     5,     0,    21,     5,
      66,    87,    25,    26,   164,    21,     5,    23,     6,    25,
      26,    10,    21,    99,    23,    14,    25,    26,    84,    36,
      19,    20,    30,    31,    90,    24,     8,    34,    94,    36,
      17,    38,    32,    33,    25,    26,     9,    29,    34,     7,
      18,    36,    36,    27,     5,    38,     5,   132,    27,     5,
     116,    11,    29,   119,    40,     5,     3,    15,    28,     5,
     146,    18,    27,    38,    36,    28,    37,    41,    12,     3,
      39,    37,    27,    37,   113,    37,    28,    16,    27,   134,
     135,   134,   135,     5,    37,    27,    13,    28,    39,    27,
      22,    39,   166,    78,   135,   174,    36,   110,   112,   158,
     139,   172,    22,    57,    -1,    -1,    -1,   119,    98,    -1,
      -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,    -1,   158
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     6,    48,    49,     5,    50,     0,     8,    51,    52,
      53,     5,    54,    56,    17,    86,     9,    68,    69,    29,
       5,    10,    14,    19,    20,    24,    87,    89,    92,    93,
      94,    96,    97,    34,     5,    21,    23,    25,    26,    57,
      58,    59,    60,    63,    70,     7,    74,    75,    57,    34,
      36,    38,    90,    91,    98,   109,     3,     5,    36,   101,
     103,   105,   107,   108,   101,    36,    36,    18,    27,    88,
      38,    58,    60,    64,     5,    72,     5,    77,    27,     5,
     110,    99,   103,   103,    29,   109,   103,    11,    40,   102,
     112,    30,    31,   104,   113,    32,    33,   106,   114,    15,
       5,    95,   103,    87,     3,    61,     5,    66,    66,    18,
      28,    73,    27,    36,    54,    55,    38,   111,    37,    28,
     100,    39,   103,    37,    87,   103,   103,   105,    87,    37,
      37,    41,    28,    67,    27,    27,    72,    70,    71,     9,
      57,    78,    79,    81,   103,    99,    12,    16,     3,    62,
      66,    64,    65,    65,    57,     5,    82,    37,    27,    80,
      39,    87,    39,    82,    28,    83,    27,    79,    13,    22,
      82,    51,    84,    58,    85,    86,    75,    76
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    50,    51,    52,    52,    53,    54,
      55,    55,    56,    57,    57,    57,    58,    58,    59,    59,
      60,    61,    62,    63,    64,    64,    65,    65,    66,    67,
      67,    68,    68,    69,    70,    71,    71,    72,    73,    73,
      74,    74,    75,    76,    76,    77,    78,    78,    79,    80,
      80,    81,    81,    82,    83,    83,    84,    85,    86,    87,
      88,    88,    89,    89,    89,    89,    89,    89,    90,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,    99,
     100,   100,   101,   102,   103,   104,   104,   105,   106,   106,
     107,   107,   107,   108,   109,   109,   109,   110,   111,   111,
     112,   113,   113,   114,   114
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     4,     2,     1,     3,     0,     1,     2,     5,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       8,     1,     1,     3,     4,     4,     0,     1,     2,     0,
       2,     0,     1,     2,     4,     0,     1,     2,     0,     2,
       0,     1,     9,     0,     1,     1,     0,     1,     2,     0,
       2,     2,     3,     2,     0,     2,     1,     1,     3,     2,
       0,     2,     1,     1,     1,     1,     1,     2,     1,     1,
       3,     7,     5,     4,     1,     4,     1,     3,     0,     2,
       0,     2,     2,     2,     2,     0,     2,     2,     0,     2,
       3,     1,     1,     2,     0,     3,     2,     2,     0,     3,
       1,     1,     1,     1,     1
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
  case 2: /* Program: ProgramHead DeclarePart ProgramBody DOT  */
#line 68 "parser.y"
                                                {(yyval.type_tnode)=newAst("Program",3,(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1306 "parser.tab.c"
    break;

  case 3: /* ProgramHead: PROGRAM ProgramName  */
#line 70 "parser.y"
                               {(yyval.type_tnode)=newAst("ProgramHead",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1312 "parser.tab.c"
    break;

  case 4: /* ProgramName: ID  */
#line 71 "parser.y"
              {(yyval.type_tnode)=newAst("ProgramName",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1318 "parser.tab.c"
    break;

  case 5: /* DeclarePart: TypeDecpart VarDecpart ProcDecpart  */
#line 73 "parser.y"
                                              {(yyval.type_tnode)=newAst("DeclarePart",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1324 "parser.tab.c"
    break;

  case 6: /* TypeDecpart: %empty  */
#line 75 "parser.y"
            {(yyval.type_tnode)=newAst("TypeDecpart",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1330 "parser.tab.c"
    break;

  case 7: /* TypeDecpart: TypeDec  */
#line 76 "parser.y"
            {(yyval.type_tnode)=newAst("TypeDecPart",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1336 "parser.tab.c"
    break;

  case 8: /* TypeDec: TYPE TypeDecList  */
#line 77 "parser.y"
                        {(yyval.type_tnode)=newAst("TypeDec",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1342 "parser.tab.c"
    break;

  case 9: /* TypeDecList: TypeId ASSIGN TypeDef SEMI TypeDecMore  */
#line 78 "parser.y"
                                                  {(yyval.type_tnode)=newAst("TypeDecList",5,(yyvsp[-4].type_tnode),(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1348 "parser.tab.c"
    break;

  case 10: /* TypeDecMore: %empty  */
#line 79 "parser.y"
            {(yyval.type_tnode)=newAst("TypeDecMore",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1354 "parser.tab.c"
    break;

  case 11: /* TypeDecMore: TypeDecList  */
#line 80 "parser.y"
                {(yyval.type_tnode)=newAst("TypeDecMore",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1360 "parser.tab.c"
    break;

  case 12: /* TypeId: ID  */
#line 81 "parser.y"
         {(yyval.type_tnode)=newAst("TypeId",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1366 "parser.tab.c"
    break;

  case 13: /* TypeDef: BaseType  */
#line 83 "parser.y"
                {(yyval.type_tnode)=newAst("TypeDef",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1372 "parser.tab.c"
    break;

  case 14: /* TypeDef: StructureType  */
#line 84 "parser.y"
                  {(yyval.type_tnode)=newAst("TypeDef",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1378 "parser.tab.c"
    break;

  case 15: /* TypeDef: ID  */
#line 85 "parser.y"
       {(yyval.type_tnode)=newAst("TypeDef",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1384 "parser.tab.c"
    break;

  case 16: /* BaseType: INTEGER  */
#line 86 "parser.y"
                {(yyval.type_tnode)=newAst("BaseType",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1390 "parser.tab.c"
    break;

  case 17: /* BaseType: CHAR  */
#line 87 "parser.y"
         {(yyval.type_tnode)=newAst("BaseType",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1396 "parser.tab.c"
    break;

  case 18: /* StructureType: ArrayType  */
#line 88 "parser.y"
                       {(yyval.type_tnode)=newAst("StructureType",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1402 "parser.tab.c"
    break;

  case 19: /* StructureType: RecType  */
#line 89 "parser.y"
             {(yyval.type_tnode)=newAst("StructureType",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1408 "parser.tab.c"
    break;

  case 20: /* ArrayType: ARRAY LMIDPAREN Low UNDERANGE Top RMINPAREN OF BaseType  */
#line 91 "parser.y"
                                                                 {(yyval.type_tnode)=newAst("ArrayType",8,(yyvsp[-7].type_tnode),(yyvsp[-6].type_tnode),(yyvsp[-5].type_tnode),(yyvsp[-4].type_tnode),(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1414 "parser.tab.c"
    break;

  case 21: /* Low: INTC  */
#line 92 "parser.y"
        {(yyval.type_tnode)=newAst("Low",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1420 "parser.tab.c"
    break;

  case 22: /* Top: INTC  */
#line 93 "parser.y"
        {(yyval.type_tnode)=newAst("Top",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1426 "parser.tab.c"
    break;

  case 23: /* RecType: RECORD FieldDecList END  */
#line 94 "parser.y"
                                {(yyval.type_tnode)=newAst("RecType",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1432 "parser.tab.c"
    break;

  case 24: /* FieldDecList: BaseType IdList SEMI FieldDecMore  */
#line 95 "parser.y"
                                              {(yyval.type_tnode)=newAst("FieldDecList",4,(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1438 "parser.tab.c"
    break;

  case 25: /* FieldDecList: ArrayType IdList SEMI FieldDecMore  */
#line 96 "parser.y"
                                       {(yyval.type_tnode)=newAst("FieldDecList",4,(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1444 "parser.tab.c"
    break;

  case 26: /* FieldDecMore: %empty  */
#line 97 "parser.y"
             {(yyval.type_tnode)=newAst("FieldDecMore",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1450 "parser.tab.c"
    break;

  case 27: /* FieldDecMore: FieldDecList  */
#line 98 "parser.y"
                 {(yyval.type_tnode)=newAst("FieldDecMore",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1456 "parser.tab.c"
    break;

  case 28: /* IdList: ID IdMore  */
#line 99 "parser.y"
                {(yyval.type_tnode)=newAst("IdList",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1462 "parser.tab.c"
    break;

  case 29: /* IdMore: %empty  */
#line 100 "parser.y"
       {(yyval.type_tnode)=newAst("IdMore",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1468 "parser.tab.c"
    break;

  case 30: /* IdMore: COMMA IdList  */
#line 101 "parser.y"
                 {(yyval.type_tnode)=newAst("IdMore",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1474 "parser.tab.c"
    break;

  case 31: /* VarDecpart: %empty  */
#line 103 "parser.y"
           {(yyval.type_tnode)=newAst("VarDecpart",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1480 "parser.tab.c"
    break;

  case 32: /* VarDecpart: VarDec  */
#line 104 "parser.y"
           {(yyval.type_tnode)=newAst("VarDecPart",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1486 "parser.tab.c"
    break;

  case 33: /* VarDec: VAR VarDecList  */
#line 105 "parser.y"
                     {(yyval.type_tnode)=newAst("VarDec",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1492 "parser.tab.c"
    break;

  case 34: /* VarDecList: TypeDef VarIdList SEMI VarDecMore  */
#line 106 "parser.y"
                                            {(yyval.type_tnode)=newAst("VarDecList",4,(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1498 "parser.tab.c"
    break;

  case 35: /* VarDecMore: %empty  */
#line 107 "parser.y"
           {(yyval.type_tnode)=newAst("VarDecMore",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1504 "parser.tab.c"
    break;

  case 36: /* VarDecMore: VarDecList  */
#line 108 "parser.y"
               {(yyval.type_tnode)=newAst("VarDecMore",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1510 "parser.tab.c"
    break;

  case 37: /* VarIdList: ID VarIdMore  */
#line 109 "parser.y"
                      {(yyval.type_tnode)=newAst("VarIdList",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1516 "parser.tab.c"
    break;

  case 38: /* VarIdMore: %empty  */
#line 110 "parser.y"
          {(yyval.type_tnode)=newAst("VarIdMore",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1522 "parser.tab.c"
    break;

  case 39: /* VarIdMore: COMMA VarIdList  */
#line 111 "parser.y"
                    {(yyval.type_tnode)=newAst("VarIdMore",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1528 "parser.tab.c"
    break;

  case 40: /* ProcDecpart: %empty  */
#line 113 "parser.y"
            {(yyval.type_tnode)=newAst("ProcDecpart",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1534 "parser.tab.c"
    break;

  case 41: /* ProcDecpart: ProcDec  */
#line 114 "parser.y"
            {(yyval.type_tnode)=newAst("ProcDecpart",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1540 "parser.tab.c"
    break;

  case 42: /* ProcDec: PROCEDURE ProcName LPAREN ParamList RPAREN SEMI ProcDecPart ProcBody ProcDecMore  */
#line 115 "parser.y"
                                                                                        {(yyval.type_tnode)=newAst("ProcDec",9,(yyvsp[-8].type_tnode),(yyvsp[-7].type_tnode),(yyvsp[-6].type_tnode),(yyvsp[-5].type_tnode),(yyvsp[-4].type_tnode),(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1546 "parser.tab.c"
    break;

  case 43: /* ProcDecMore: %empty  */
#line 116 "parser.y"
            {(yyval.type_tnode)=newAst("ProcDecMore",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1552 "parser.tab.c"
    break;

  case 44: /* ProcDecMore: ProcDec  */
#line 117 "parser.y"
            {(yyval.type_tnode)=newAst("ProcDecMore",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1558 "parser.tab.c"
    break;

  case 45: /* ProcName: ID  */
#line 118 "parser.y"
           {(yyval.type_tnode)=newAst("ProName",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1564 "parser.tab.c"
    break;

  case 46: /* ParamList: %empty  */
#line 120 "parser.y"
          {(yyval.type_tnode)=newAst("ParamList",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1570 "parser.tab.c"
    break;

  case 47: /* ParamList: ParamDecList  */
#line 121 "parser.y"
                 {(yyval.type_tnode)=newAst("ParamList",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1576 "parser.tab.c"
    break;

  case 48: /* ParamDecList: Param ParamMore  */
#line 122 "parser.y"
                            {(yyval.type_tnode)=newAst("ParamDecList",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1582 "parser.tab.c"
    break;

  case 49: /* ParamMore: %empty  */
#line 123 "parser.y"
          {(yyval.type_tnode)=newAst("ParamMore",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1588 "parser.tab.c"
    break;

  case 50: /* ParamMore: SEMI ParamDecList  */
#line 124 "parser.y"
                      {(yyval.type_tnode)=newAst("ParamMore",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1594 "parser.tab.c"
    break;

  case 51: /* Param: TypeDef FormList  */
#line 125 "parser.y"
                      {(yyval.type_tnode)=newAst("Param",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1600 "parser.tab.c"
    break;

  case 52: /* Param: VAR TypeDef FormList  */
#line 126 "parser.y"
                         {(yyval.type_tnode)=newAst("Param",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1606 "parser.tab.c"
    break;

  case 53: /* FormList: ID FidMore  */
#line 127 "parser.y"
                   {(yyval.type_tnode)=newAst("FormList",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1612 "parser.tab.c"
    break;

  case 54: /* FidMore: %empty  */
#line 128 "parser.y"
        {(yyval.type_tnode)=newAst("FidMore",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1618 "parser.tab.c"
    break;

  case 55: /* FidMore: COMMA FormList  */
#line 129 "parser.y"
                   {(yyval.type_tnode)=newAst("FidMore",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1624 "parser.tab.c"
    break;

  case 56: /* ProcDecPart: DeclarePart  */
#line 131 "parser.y"
                       {(yyval.type_tnode)=newAst("ProcDecPart",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1630 "parser.tab.c"
    break;

  case 57: /* ProcBody: ProgramBody  */
#line 132 "parser.y"
                    {(yyval.type_tnode)=newAst("ProcBody",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1636 "parser.tab.c"
    break;

  case 58: /* ProgramBody: BEGIN1 StmList END  */
#line 134 "parser.y"
                              {(yyval.type_tnode)=newAst("ProgramBody",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1642 "parser.tab.c"
    break;

  case 59: /* StmList: Stm StmMore  */
#line 136 "parser.y"
                   {(yyval.type_tnode)=newAst("StmList",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1648 "parser.tab.c"
    break;

  case 60: /* StmMore: %empty  */
#line 137 "parser.y"
        {(yyval.type_tnode)=newAst("StmMore",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1654 "parser.tab.c"
    break;

  case 61: /* StmMore: SEMI StmList  */
#line 138 "parser.y"
                 {(yyval.type_tnode)=newAst("StmMore",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1660 "parser.tab.c"
    break;

  case 62: /* Stm: ConditionalStm  */
#line 139 "parser.y"
                  {(yyval.type_tnode)=newAst("Stm",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1666 "parser.tab.c"
    break;

  case 63: /* Stm: LoopStm  */
#line 140 "parser.y"
            {(yyval.type_tnode)=newAst("Stm",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1672 "parser.tab.c"
    break;

  case 64: /* Stm: InputStm  */
#line 141 "parser.y"
             {(yyval.type_tnode)=newAst("Stm",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1678 "parser.tab.c"
    break;

  case 65: /* Stm: OutputStm  */
#line 142 "parser.y"
              {(yyval.type_tnode)=newAst("Stm",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1684 "parser.tab.c"
    break;

  case 66: /* Stm: ReturnStm  */
#line 143 "parser.y"
              {(yyval.type_tnode)=newAst("Stm",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1690 "parser.tab.c"
    break;

  case 67: /* Stm: ID AssCall  */
#line 144 "parser.y"
               {(yyval.type_tnode)=newAst("Stm",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1696 "parser.tab.c"
    break;

  case 68: /* AssCall: AssignmentRest  */
#line 145 "parser.y"
                      {(yyval.type_tnode)=newAst("AssCall",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1702 "parser.tab.c"
    break;

  case 69: /* AssCall: CallStmRest  */
#line 146 "parser.y"
                {(yyval.type_tnode)=newAst("AssCall",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1708 "parser.tab.c"
    break;

  case 70: /* AssignmentRest: VariMore ASSIGN Exp  */
#line 147 "parser.y"
                                  {(yyval.type_tnode)=newAst("AssignmentRest",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1714 "parser.tab.c"
    break;

  case 71: /* ConditionalStm: IF RelExp THEN StmList ELSE StmList FI  */
#line 148 "parser.y"
                                                     {(yyval.type_tnode)=newAst("ConditionalStm",7,(yyvsp[-6].type_tnode),(yyvsp[-5].type_tnode),(yyvsp[-4].type_tnode),(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1720 "parser.tab.c"
    break;

  case 72: /* LoopStm: WHILE RelExp DO StmList ENDWH  */
#line 149 "parser.y"
                                     {(yyval.type_tnode)=newAst("LoopStm",5,(yyvsp[-4].type_tnode),(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1726 "parser.tab.c"
    break;

  case 73: /* InputStm: READ LPAREN Invar RPAREN  */
#line 150 "parser.y"
                                 {(yyval.type_tnode)=newAst("InputStm",4,(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1732 "parser.tab.c"
    break;

  case 74: /* Invar: ID  */
#line 151 "parser.y"
        {(yyval.type_tnode)=newAst("Invar",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1738 "parser.tab.c"
    break;

  case 75: /* OutputStm: WRITE LPAREN Exp RPAREN  */
#line 152 "parser.y"
                                 {(yyval.type_tnode)=newAst("OutputStm",4,(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1744 "parser.tab.c"
    break;

  case 76: /* ReturnStm: RETURN  */
#line 153 "parser.y"
                {(yyval.type_tnode)=newAst("ReturnStm",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1750 "parser.tab.c"
    break;

  case 77: /* CallStmRest: LPAREN ActParamList RPAREN  */
#line 155 "parser.y"
                                      {(yyval.type_tnode)=newAst("CallStmRest",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1756 "parser.tab.c"
    break;

  case 78: /* ActParamList: %empty  */
#line 156 "parser.y"
             {(yyval.type_tnode)=newAst("ActParamList",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1762 "parser.tab.c"
    break;

  case 79: /* ActParamList: Exp ActParamMore  */
#line 157 "parser.y"
                     {(yyval.type_tnode)=newAst("ActParamList",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1768 "parser.tab.c"
    break;

  case 80: /* ActParamMore: %empty  */
#line 158 "parser.y"
             {(yyval.type_tnode)=newAst("ActParamMore",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1774 "parser.tab.c"
    break;

  case 81: /* ActParamMore: COMMA ActParamList  */
#line 159 "parser.y"
                       {(yyval.type_tnode)=newAst("ActParamMore",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1780 "parser.tab.c"
    break;

  case 82: /* RelExp: Exp OtherRelE  */
#line 160 "parser.y"
                    {(yyval.type_tnode)=newAst("RelExp",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1786 "parser.tab.c"
    break;

  case 83: /* OtherRelE: CmpOp Exp  */
#line 161 "parser.y"
                   {(yyval.type_tnode)=newAst("OtherRelE",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1792 "parser.tab.c"
    break;

  case 84: /* Exp: Term OtherTerm  */
#line 162 "parser.y"
                  {(yyval.type_tnode)=newAst("Exp",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1798 "parser.tab.c"
    break;

  case 85: /* OtherTerm: %empty  */
#line 163 "parser.y"
          {(yyval.type_tnode)=newAst("OtherTerm",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1804 "parser.tab.c"
    break;

  case 86: /* OtherTerm: AddOp Exp  */
#line 164 "parser.y"
              {(yyval.type_tnode)=newAst("OtherTerm",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1810 "parser.tab.c"
    break;

  case 87: /* Term: Factor OtherFactor  */
#line 165 "parser.y"
                       {(yyval.type_tnode)=newAst("Term",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1816 "parser.tab.c"
    break;

  case 88: /* OtherFactor: %empty  */
#line 166 "parser.y"
            {(yyval.type_tnode)=newAst("OtherFactor",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1822 "parser.tab.c"
    break;

  case 89: /* OtherFactor: MultOP Term  */
#line 167 "parser.y"
                {(yyval.type_tnode)=newAst("OtherFactor",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1828 "parser.tab.c"
    break;

  case 90: /* Factor: LPAREN Exp RPAREN  */
#line 168 "parser.y"
                        {(yyval.type_tnode)=newAst("Factor",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1834 "parser.tab.c"
    break;

  case 91: /* Factor: INTC  */
#line 169 "parser.y"
         {(yyval.type_tnode)=newAst("Factor",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1840 "parser.tab.c"
    break;

  case 92: /* Factor: Varible  */
#line 170 "parser.y"
            {(yyval.type_tnode)=newAst("Factor",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1846 "parser.tab.c"
    break;

  case 93: /* Varible: ID VariMore  */
#line 171 "parser.y"
                   {(yyval.type_tnode)=newAst("Varible",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1852 "parser.tab.c"
    break;

  case 94: /* VariMore: %empty  */
#line 172 "parser.y"
         {(yyval.type_tnode)=newAst("VariMore",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1858 "parser.tab.c"
    break;

  case 95: /* VariMore: LMIDPAREN Exp RMINPAREN  */
#line 173 "parser.y"
                            {(yyval.type_tnode)=newAst("VariMore",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1864 "parser.tab.c"
    break;

  case 96: /* VariMore: DOT FieldVar  */
#line 174 "parser.y"
                 {(yyval.type_tnode)=newAst("VariMore",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1870 "parser.tab.c"
    break;

  case 97: /* FieldVar: ID FieldVarMode  */
#line 175 "parser.y"
                        {(yyval.type_tnode)=newAst("FieldVar",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1876 "parser.tab.c"
    break;

  case 98: /* FieldVarMode: %empty  */
#line 176 "parser.y"
             {(yyval.type_tnode)=newAst("FieldVarMode",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1882 "parser.tab.c"
    break;

  case 99: /* FieldVarMode: LMIDPAREN Exp RMINPAREN  */
#line 177 "parser.y"
                            {(yyval.type_tnode)=newAst("FieldVarMode",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1888 "parser.tab.c"
    break;

  case 100: /* CmpOp: RELOP  */
#line 178 "parser.y"
           {(yyval.type_tnode)=newAst("CmpOp",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1894 "parser.tab.c"
    break;

  case 101: /* AddOp: PLUS  */
#line 179 "parser.y"
          {(yyval.type_tnode)=newAst("AddOp",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1900 "parser.tab.c"
    break;

  case 102: /* AddOp: MINUS  */
#line 180 "parser.y"
          {(yyval.type_tnode)=newAst("AddOp",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1906 "parser.tab.c"
    break;

  case 103: /* MultOP: TIMES  */
#line 181 "parser.y"
            {(yyval.type_tnode)=newAst("MultOp",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1912 "parser.tab.c"
    break;

  case 104: /* MultOP: DIV  */
#line 182 "parser.y"
        {(yyval.type_tnode)=newAst("MultOp",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1918 "parser.tab.c"
    break;


#line 1922 "parser.tab.c"

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

#line 184 "parser.y"

