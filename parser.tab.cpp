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
#line 1 ".\\parser.y"

    #include "parser.tab.hpp"
    extern int yylex(void);
    void yyerror(char* str);

#line 77 ".\\parser.tab.cpp"

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

#include "parser.tab.hpp"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_ALIAS_KEYWORD = 3,              /* ALIAS_KEYWORD  */
  YYSYMBOL_CASE_KEYWORD = 4,               /* CASE_KEYWORD  */
  YYSYMBOL_CLASS_KEYWORD = 5,              /* CLASS_KEYWORD  */
  YYSYMBOL_DEF_KEYWORD = 6,                /* DEF_KEYWORD  */
  YYSYMBOL_DEFINED_KEYWORD = 7,            /* DEFINED_KEYWORD  */
  YYSYMBOL_DO_KEYWORD = 8,                 /* DO_KEYWORD  */
  YYSYMBOL_IF_KEYWORD = 9,                 /* IF_KEYWORD  */
  YYSYMBOL_ELSE_KEYWORD = 10,              /* ELSE_KEYWORD  */
  YYSYMBOL_ELSIF_KEYWORD = 11,             /* ELSIF_KEYWORD  */
  YYSYMBOL_END_KEYWORD = 12,               /* END_KEYWORD  */
  YYSYMBOL_FALSE_KEYWORD = 13,             /* FALSE_KEYWORD  */
  YYSYMBOL_FOR_KEYWORD = 14,               /* FOR_KEYWORD  */
  YYSYMBOL_IN_KEYWORD = 15,                /* IN_KEYWORD  */
  YYSYMBOL_NIL_KEYWORD = 16,               /* NIL_KEYWORD  */
  YYSYMBOL_RETURN_KEYWORD = 17,            /* RETURN_KEYWORD  */
  YYSYMBOL_SELF_KEYWORD = 18,              /* SELF_KEYWORD  */
  YYSYMBOL_SUPER_KEYWORD = 19,             /* SUPER_KEYWORD  */
  YYSYMBOL_SUPERCLASS_KEYWORD = 20,        /* SUPERCLASS_KEYWORD  */
  YYSYMBOL_THEN_KEYWORD = 21,              /* THEN_KEYWORD  */
  YYSYMBOL_TRUE_KEYWORD = 22,              /* TRUE_KEYWORD  */
  YYSYMBOL_UNLESS_KEYWORD = 23,            /* UNLESS_KEYWORD  */
  YYSYMBOL_WHEN_KEYWORD = 24,              /* WHEN_KEYWORD  */
  YYSYMBOL_WHILE_KEYWORD = 25,             /* WHILE_KEYWORD  */
  YYSYMBOL_METHOD_MARK_QUESTION = 26,      /* METHOD_MARK_QUESTION  */
  YYSYMBOL_METHOD_MARK_EXCLAMATION = 27,   /* METHOD_MARK_EXCLAMATION  */
  YYSYMBOL_METHOD_MARK_EQUAL = 28,         /* METHOD_MARK_EQUAL  */
  YYSYMBOL_OR_KEYWORD = 29,                /* OR_KEYWORD  */
  YYSYMBOL_AND_KEYWORD = 30,               /* AND_KEYWORD  */
  YYSYMBOL_NOT_KEYWORD = 31,               /* NOT_KEYWORD  */
  YYSYMBOL_32_ = 32,                       /* '='  */
  YYSYMBOL_ADD_ASSIGN_OP = 33,             /* ADD_ASSIGN_OP  */
  YYSYMBOL_SUB_ASSIGN_OP = 34,             /* SUB_ASSIGN_OP  */
  YYSYMBOL_MUL_ASSIGN_OP = 35,             /* MUL_ASSIGN_OP  */
  YYSYMBOL_DIV_ASSIGN_OP = 36,             /* DIV_ASSIGN_OP  */
  YYSYMBOL_MOD_ASSIGN_OP = 37,             /* MOD_ASSIGN_OP  */
  YYSYMBOL_POW_ASSIGN_OP = 38,             /* POW_ASSIGN_OP  */
  YYSYMBOL_QUESTION_SYMBOL = 39,           /* QUESTION_SYMBOL  */
  YYSYMBOL_COLON_SYMBOL = 40,              /* COLON_SYMBOL  */
  YYSYMBOL_EXCLUSIVE_RANGE_OP = 41,        /* EXCLUSIVE_RANGE_OP  */
  YYSYMBOL_INCLUSIVE_RANGE_OP = 42,        /* INCLUSIVE_RANGE_OP  */
  YYSYMBOL_LOGICAL_OR_OP = 43,             /* LOGICAL_OR_OP  */
  YYSYMBOL_LOGICAL_AND_OP = 44,            /* LOGICAL_AND_OP  */
  YYSYMBOL_EQL_OP = 45,                    /* EQL_OP  */
  YYSYMBOL_NOT_EQL_OP = 46,                /* NOT_EQL_OP  */
  YYSYMBOL_COMB_COMPARISON_OP = 47,        /* COMB_COMPARISON_OP  */
  YYSYMBOL_CASE_EQL_OP = 48,               /* CASE_EQL_OP  */
  YYSYMBOL_GREATER_OP = 49,                /* GREATER_OP  */
  YYSYMBOL_LESS_OP = 50,                   /* LESS_OP  */
  YYSYMBOL_GREATER_OR_EQL_OP = 51,         /* GREATER_OR_EQL_OP  */
  YYSYMBOL_LESS_OR_EQL_OP = 52,            /* LESS_OR_EQL_OP  */
  YYSYMBOL_BIN_OR_OP = 53,                 /* BIN_OR_OP  */
  YYSYMBOL_BIN_XOR_OP = 54,                /* BIN_XOR_OP  */
  YYSYMBOL_BIN_AND_OP = 55,                /* BIN_AND_OP  */
  YYSYMBOL_BIN_LEFT_SHIFT_OP = 56,         /* BIN_LEFT_SHIFT_OP  */
  YYSYMBOL_BIN_RIGHT_SHIFT_OP = 57,        /* BIN_RIGHT_SHIFT_OP  */
  YYSYMBOL_58_ = 58,                       /* '+'  */
  YYSYMBOL_59_ = 59,                       /* '-'  */
  YYSYMBOL_60_ = 60,                       /* '*'  */
  YYSYMBOL_61_ = 61,                       /* '/'  */
  YYSYMBOL_62_ = 62,                       /* '%'  */
  YYSYMBOL_UMINUS = 63,                    /* UMINUS  */
  YYSYMBOL_LOGICAL_NOT_OP = 64,            /* LOGICAL_NOT_OP  */
  YYSYMBOL_BIN_ONES_COMPLEMENT_OP = 65,    /* BIN_ONES_COMPLEMENT_OP  */
  YYSYMBOL_ARITHMETIC_POW_OP = 66,         /* ARITHMETIC_POW_OP  */
  YYSYMBOL_67_ = 67,                       /* '('  */
  YYSYMBOL_68_ = 68,                       /* ')'  */
  YYSYMBOL_69_ = 69,                       /* '{'  */
  YYSYMBOL_70_ = 70,                       /* '}'  */
  YYSYMBOL_71_ = 71,                       /* '.'  */
  YYSYMBOL_72_ = 72,                       /* '['  */
  YYSYMBOL_73_ = 73,                       /* ']'  */
  YYSYMBOL_DOUBLE_COLON_SYMBOL = 74,       /* DOUBLE_COLON_SYMBOL  */
  YYSYMBOL_NEW_LINE_SYMBOL = 75,           /* NEW_LINE_SYMBOL  */
  YYSYMBOL_COMMA_SYMBOL = 76,              /* COMMA_SYMBOL  */
  YYSYMBOL_SEMICOLON_SYMBOL = 77,          /* SEMICOLON_SYMBOL  */
  YYSYMBOL_STRING = 78,                    /* STRING  */
  YYSYMBOL_INTEGER_NUMBER = 79,            /* INTEGER_NUMBER  */
  YYSYMBOL_FLOAT_NUMBER = 80,              /* FLOAT_NUMBER  */
  YYSYMBOL_IDENTIFIER = 81,                /* IDENTIFIER  */
  YYSYMBOL_OBJECT_VAR_NAME = 82,           /* OBJECT_VAR_NAME  */
  YYSYMBOL_CLASS_VAR_NAME = 83,            /* CLASS_VAR_NAME  */
  YYSYMBOL_CONSTANT_NAME = 84,             /* CONSTANT_NAME  */
  YYSYMBOL_85_ = 85,                       /* '<'  */
  YYSYMBOL_YYACCEPT = 86,                  /* $accept  */
  YYSYMBOL_programm = 87,                  /* programm  */
  YYSYMBOL_expr = 88,                      /* expr  */
  YYSYMBOL_linefeed_or_empty = 89,         /* linefeed_or_empty  */
  YYSYMBOL_linefeed = 90,                  /* linefeed  */
  YYSYMBOL_programm_element = 91,          /* programm_element  */
  YYSYMBOL_programm_el_list_not_empty = 92, /* programm_el_list_not_empty  */
  YYSYMBOL_delimiter = 93,                 /* delimiter  */
  YYSYMBOL_expr_list = 94,                 /* expr_list  */
  YYSYMBOL_stmt_list = 95,                 /* stmt_list  */
  YYSYMBOL_stmt = 96,                      /* stmt  */
  YYSYMBOL_param_list_not_empty = 97,      /* param_list_not_empty  */
  YYSYMBOL_param_list = 98,                /* param_list  */
  YYSYMBOL_method_stmt = 99,               /* method_stmt  */
  YYSYMBOL_class_stmt = 100,               /* class_stmt  */
  YYSYMBOL_class_body_stmt = 101,          /* class_body_stmt  */
  YYSYMBOL_class_body_not_empty = 102,     /* class_body_not_empty  */
  YYSYMBOL_class_body = 103,               /* class_body  */
  YYSYMBOL_delimeter_or_empty = 104,       /* delimeter_or_empty  */
  YYSYMBOL_if_stmt = 105,                  /* if_stmt  */
  YYSYMBOL_unless_stmt = 106,              /* unless_stmt  */
  YYSYMBOL_elsif_list = 107,               /* elsif_list  */
  YYSYMBOL_elsif_stmt = 108,               /* elsif_stmt  */
  YYSYMBOL_while_stmt = 109,               /* while_stmt  */
  YYSYMBOL_for_stmt = 110,                 /* for_stmt  */
  YYSYMBOL_return_stmt = 111,              /* return_stmt  */
  YYSYMBOL_case_stmt = 112,                /* case_stmt  */
  YYSYMBOL_when_list = 113,                /* when_list  */
  YYSYMBOL_when_stmt = 114,                /* when_stmt  */
  YYSYMBOL_alias_stmt = 115                /* alias_stmt  */
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
typedef yytype_int16 yy_state_t;

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
#define YYFINAL  64
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2674

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  445

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   326


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
       2,     2,     2,     2,     2,     2,     2,    62,     2,     2,
      67,    68,    60,    58,     2,    59,    71,    61,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      85,    32,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    72,     2,    73,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    63,    64,    65,    66,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   148,   148,   149,   152,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
     181,   182,   183,   184,   185,   186,   187,   188,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     233,   234,   237,   238,   241,   242,   243,   246,   247,   250,
     251,   252,   253,   256,   257,   260,   261,   264,   265,   266,
     267,   268,   269,   270,   271,   274,   275,   278,   279,   282,
     283,   284,   285,   286,   287,   288,   289,   292,   293,   296,
     297,   298,   299,   300,   303,   304,   307,   308,   311,   312,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   326,
     327,   328,   329,   330,   333,   334,   337,   338,   341,   342,
     345,   346,   349,   350,   353,   354,   357,   358,   361,   362,
     365
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
  "\"end of file\"", "error", "\"invalid token\"", "ALIAS_KEYWORD",
  "CASE_KEYWORD", "CLASS_KEYWORD", "DEF_KEYWORD", "DEFINED_KEYWORD",
  "DO_KEYWORD", "IF_KEYWORD", "ELSE_KEYWORD", "ELSIF_KEYWORD",
  "END_KEYWORD", "FALSE_KEYWORD", "FOR_KEYWORD", "IN_KEYWORD",
  "NIL_KEYWORD", "RETURN_KEYWORD", "SELF_KEYWORD", "SUPER_KEYWORD",
  "SUPERCLASS_KEYWORD", "THEN_KEYWORD", "TRUE_KEYWORD", "UNLESS_KEYWORD",
  "WHEN_KEYWORD", "WHILE_KEYWORD", "METHOD_MARK_QUESTION",
  "METHOD_MARK_EXCLAMATION", "METHOD_MARK_EQUAL", "OR_KEYWORD",
  "AND_KEYWORD", "NOT_KEYWORD", "'='", "ADD_ASSIGN_OP", "SUB_ASSIGN_OP",
  "MUL_ASSIGN_OP", "DIV_ASSIGN_OP", "MOD_ASSIGN_OP", "POW_ASSIGN_OP",
  "QUESTION_SYMBOL", "COLON_SYMBOL", "EXCLUSIVE_RANGE_OP",
  "INCLUSIVE_RANGE_OP", "LOGICAL_OR_OP", "LOGICAL_AND_OP", "EQL_OP",
  "NOT_EQL_OP", "COMB_COMPARISON_OP", "CASE_EQL_OP", "GREATER_OP",
  "LESS_OP", "GREATER_OR_EQL_OP", "LESS_OR_EQL_OP", "BIN_OR_OP",
  "BIN_XOR_OP", "BIN_AND_OP", "BIN_LEFT_SHIFT_OP", "BIN_RIGHT_SHIFT_OP",
  "'+'", "'-'", "'*'", "'/'", "'%'", "UMINUS", "LOGICAL_NOT_OP",
  "BIN_ONES_COMPLEMENT_OP", "ARITHMETIC_POW_OP", "'('", "')'", "'{'",
  "'}'", "'.'", "'['", "']'", "DOUBLE_COLON_SYMBOL", "NEW_LINE_SYMBOL",
  "COMMA_SYMBOL", "SEMICOLON_SYMBOL", "STRING", "INTEGER_NUMBER",
  "FLOAT_NUMBER", "IDENTIFIER", "OBJECT_VAR_NAME", "CLASS_VAR_NAME",
  "CONSTANT_NAME", "'<'", "$accept", "programm", "expr",
  "linefeed_or_empty", "linefeed", "programm_element",
  "programm_el_list_not_empty", "delimiter", "expr_list", "stmt_list",
  "stmt", "param_list_not_empty", "param_list", "method_stmt",
  "class_stmt", "class_body_stmt", "class_body_not_empty", "class_body",
  "delimeter_or_empty", "if_stmt", "unless_stmt", "elsif_list",
  "elsif_stmt", "while_stmt", "for_stmt", "return_stmt", "case_stmt",
  "when_list", "when_stmt", "alias_stmt", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-320)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     735,   -70,   -61,   -61,   -61,   -61,   -61,  -320,   -61,  -320,
    2053,   -45,   -42,  -320,   -61,   -61,   -33,   -61,   -61,   -61,
     -61,   -61,  -320,  -320,  -320,   -30,  -320,  -320,  -320,    44,
    2220,  -320,   735,  -320,   -28,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   -27,  -320,  2053,   -22,   -25,   -19,  2053,
    2053,  2053,  2411,   -61,   -61,  2053,  2053,   -61,  2053,  2053,
    2053,    96,  2053,   -61,  -320,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,  -320,  -320,   132,  -320,   132,   132,
     132,   132,   132,   132,   132,   132,   132,  -320,  2315,  -320,
     -46,   -37,   -34,    53,   114,  2454,  2315,  2269,    80,  1949,
    2315,  2110,  2053,   192,   192,  2364,  -320,  2411,   -55,  -320,
    2027,  2053,  2053,  2053,  2053,  2053,  2053,  2053,  2053,  2053,
    2053,  2053,  2053,  2053,  2053,  2053,  2053,  2053,  2053,  2053,
    2053,  2053,  2053,  2053,  2053,  2053,  2053,  2053,  2053,  2053,
    2053,  2053,  2053,  2053,  2053,  2053,  2053,    30,  2053,  2053,
    -320,  -320,   132,    36,    26,    42,   -61,   761,   -61,   761,
     -61,   761,   -61,   761,   761,    92,   -61,    49,    55,    56,
      59,  -320,   -55,   761,   118,   -28,   761,  2364,    61,  2053,
      62,  -320,   -55,  2411,  2411,  2454,  2454,  2454,  2454,  2454,
    2454,  2454,  2454,  2454,  2364,  2520,  2520,  2551,  2581,   406,
     406,   406,   406,   287,   287,   287,   287,   371,   371,  2600,
     347,   347,   235,   235,   192,   192,   192,   192,    60,  -320,
      75,    82,    87,    91,  2364,  -320,   -61,    12,  -320,   -28,
      89,   108,   -28,  -320,    22,   150,    86,   869,  -320,    86,
     951,    86,   977,    86,  1059,   134,  1923,  2053,   -61,   -61,
     -61,   -61,   119,   578,  1923,  1923,  1085,   124,  -320,  2411,
    -320,   135,   142,   -61,   -61,   -61,   -61,   129,  2053,   -28,
    -320,  -320,    42,  2053,   132,  2053,   132,   132,  -320,  -320,
     -61,   143,   152,  -320,  -320,   155,  -320,   156,  -320,   173,
    -320,  1923,   -61,  -320,   161,  -320,   548,  2165,  2053,  2053,
    2053,  2053,  -320,  1923,  -320,   843,  1167,  -320,  -320,  -320,
     -61,  2053,  2053,  2053,  2053,  -320,   163,  1923,   199,  2315,
    2315,  -320,   -61,   -28,   -28,   -28,   -28,  1193,  2053,  1923,
    -320,  -320,  1923,  -320,   234,   -28,   761,   -55,   -55,   -55,
     -55,  1275,  1923,  -320,  -320,  2053,   -55,   -55,   -55,   -55,
     761,   221,  1301,  -320,   132,   132,   170,   761,   761,   761,
     761,  -320,  2315,  1383,  1409,  1923,  -320,  1923,  1491,   185,
     187,   188,   193,  -320,  1517,  2488,   197,   200,   201,   203,
    1923,  1923,  -320,   -61,  1599,  1625,  1707,  1733,   761,   238,
    -320,  -320,  1815,  1841,  -320,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  1923,  -320,  -320,  -320,  -320,  -320,
    1923,  1923,  -320,  -320,  1923
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,    80,    80,    80,    80,    80,    10,    80,    11,
     153,     0,    25,     9,    80,    80,     0,    80,    80,    80,
      80,    80,     8,    12,    13,     4,     5,     6,     7,     0,
       0,    87,     3,    86,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    82,     0,    81,     0,     0,     0,
       0,     0,   152,    80,    80,     0,     0,    80,     0,     0,
       0,     0,     0,    80,     1,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    80,    80,    80,    80,    80,    80,
      80,    80,    80,    80,    89,    90,    97,    88,    85,    84,
      98,   102,    99,   100,   103,   101,   104,   160,   128,    83,
       0,     0,     0,     0,     0,    76,   128,     0,     0,     0,
     128,     0,     0,    21,    70,    80,    75,    93,    80,    77,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      92,    91,   129,     0,     0,   126,    80,     0,    80,     0,
      80,     0,    80,     0,   129,     0,    80,    32,    34,    36,
      30,    27,    80,   129,     0,   128,     0,    80,     0,     0,
       0,    24,    80,   138,   143,    45,    44,    14,    56,    57,
      58,    59,    60,    61,    80,    72,    71,    69,    68,    48,
      49,    54,    55,    50,    51,    52,    53,    63,    64,    62,
      66,    67,    19,    20,    18,    16,    17,    65,    47,    22,
      38,    40,    42,    28,    80,    78,    80,     0,   156,     0,
       0,     0,     0,   124,   127,     0,   107,     0,    95,   107,
       0,   107,     0,   107,     0,     0,     0,     0,    80,    80,
      80,    80,     0,     0,     0,     0,     0,     0,    73,    94,
      74,     0,     0,    80,    80,    80,    80,     0,     0,   128,
     154,   157,   126,     0,   122,     0,   120,   119,   125,   117,
      80,   108,     0,   112,    96,     0,   114,     0,   116,     0,
     111,     0,    80,   130,     0,   144,     0,     0,     0,     0,
       0,     0,    26,     0,   140,     0,     0,   149,    46,    23,
      80,     0,     0,     0,     0,    15,   128,     0,     0,     0,
       0,   105,    80,     0,     0,     0,     0,     0,     0,     0,
     134,   145,     0,   131,     0,   128,     0,    80,    80,    80,
      80,     0,     0,   139,   148,     0,    80,    80,    80,    80,
     129,     0,     0,   118,   123,   121,     0,     0,     0,     0,
       0,   132,   128,     0,     0,     0,   135,     0,     0,     0,
       0,     0,     0,   142,     0,    79,     0,     0,     0,     0,
     158,     0,   155,    80,     0,     0,     0,     0,   129,     0,
     136,   133,     0,     0,   151,    33,    35,    37,    31,   141,
      39,    41,    43,    29,   159,   106,   110,   113,   115,   109,
     146,     0,   137,   150,   147
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -320,  -320,   341,    -2,  -320,   228,  -320,   191,   -94,   332,
       0,  -320,   -74,    10,  -320,     9,  -320,   -21,  -103,  -320,
    -320,   -44,  -319,  -320,  -320,  -320,  -320,  -320,    23,  -320
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
       0,    29,    30,    45,    46,    31,    32,   182,   138,   267,
     268,   311,   312,   262,    35,   263,   264,   265,   183,    36,
      37,   324,   325,    38,    39,    40,    41,   257,   258,    42
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      33,    47,    48,    49,    50,   361,    51,   121,   122,   123,
      34,    43,    55,    56,    44,    58,    59,    60,    61,    62,
      44,   209,   299,   195,   300,    54,    53,   204,     4,   104,
     186,   105,    33,   188,    57,   202,   256,    63,   104,   184,
     105,   104,    34,   105,    64,   361,   212,   104,     4,   105,
     249,   128,   129,   119,   117,   132,   250,   251,   252,   120,
     256,   140,   124,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   285,     5,   260,   261,   197,   198,   199,     7,
     259,   253,     9,   276,    11,    12,   278,   180,    13,   181,
     190,   303,   279,   280,   260,   261,   281,    16,   104,   288,
     105,   101,   102,   208,   103,   290,   210,     1,     2,   284,
     305,     5,   293,     6,   321,   322,   323,     7,     8,   294,
       9,    10,    11,    12,   295,    17,    13,    14,   296,    15,
      18,   200,   309,    19,   104,    16,   105,   310,    20,   136,
      21,   359,   322,   360,    22,    23,    24,    25,    26,    27,
      28,   192,   340,   104,   266,   105,   269,   332,   271,   104,
     273,   105,   338,    17,   277,   315,   347,   317,    18,   319,
     282,    19,   345,   339,   346,   287,    20,   180,    21,   181,
     291,   383,    22,    23,    24,    25,    26,    27,    28,   352,
     353,   106,   292,   354,   355,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   367,   368,   369,   370,   104,   209,
     105,   356,   411,   381,   395,   322,   396,   376,   377,   378,
     379,   413,   297,   425,   298,   426,   427,    99,   100,   441,
     107,   428,   397,   101,   102,   430,   103,   314,   431,   432,
     314,   433,   314,   308,   314,   314,   328,   329,   330,   331,
     301,   348,   364,   314,     0,     0,   314,     0,     0,   419,
       0,   341,   342,   343,   344,    96,    97,    98,     0,     0,
      99,   100,     0,     0,     0,     0,   101,   102,   351,   103,
       0,   185,   187,   189,   191,   193,     0,   194,     0,     0,
     358,   203,   206,     0,     0,     0,   314,     0,     0,     0,
       0,     0,     0,     0,     0,   314,   314,     0,   375,     0,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
     386,    52,    99,   100,     0,     0,     0,   314,   101,   102,
       0,   103,     0,     0,     0,   399,   400,   401,   402,     0,
       0,   314,     0,     0,   406,   407,   408,   409,     0,     0,
       0,     0,   314,     0,     0,     0,   118,     0,     0,     0,
     125,   126,   127,   314,   314,     0,   130,   131,   314,   133,
     134,   135,   137,   139,   314,    94,    95,    96,    97,    98,
     314,   435,    99,   100,   314,   314,   314,   314,   101,   102,
       0,   103,   314,   314,     0,     0,    91,    92,    93,    94,
      95,    96,    97,    98,   314,     0,    99,   100,     0,     0,
     314,     0,   101,   102,   314,   103,     0,     0,     0,     0,
     302,   304,   306,   307,     0,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,     0,
     137,    99,   100,   207,     0,     0,     0,   101,   102,     0,
     103,   137,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   366,   254,
     255,   270,     0,   272,     0,   274,   275,     0,     0,     0,
       0,     0,     0,     0,     0,   283,     0,   380,   286,     0,
     384,   385,     0,     0,   387,   388,   389,   390,     0,     0,
     289,     1,     2,     0,     0,     5,     0,     6,   362,   322,
     363,     7,     8,     0,     9,    10,    11,    12,     0,     0,
      13,    14,     0,    15,     0,     0,     0,     0,     0,    16,
       0,     1,     2,   418,     0,     5,     0,     6,   333,     0,
     334,     7,     8,     0,     9,    10,    11,    12,     0,     0,
      13,    14,     0,    15,     0,     0,     0,    17,   326,    16,
       0,     0,    18,     0,     0,    19,   335,   336,   327,     0,
      20,     0,    21,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,    17,     0,   137,
       0,     0,    18,     0,   349,    19,   350,     0,     0,     0,
      20,     0,    21,   357,     0,     0,    22,    23,    24,    25,
      26,    27,    28,     0,     0,   371,     0,     0,     0,   137,
     137,   137,   137,     0,     0,     0,     0,     0,     0,   382,
       0,     0,   137,   137,   137,   137,     0,     0,     0,     0,
       0,   393,     0,     0,   394,     0,     0,     0,   398,   392,
       0,     0,     0,     0,   404,     0,     0,     0,     0,     0,
       0,     0,   410,     0,     0,     0,   405,     0,     0,   414,
     415,   416,   417,     0,     0,     0,     0,   422,     0,   423,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,     5,   434,     6,     0,     0,     0,     7,     8,
     440,     9,    10,    11,    12,     0,     0,    13,    14,     0,
      15,     0,     0,     0,     1,     2,    16,     0,     5,     0,
       6,     0,     0,   444,     7,     8,     0,     9,    10,    11,
      12,     0,     0,    13,    14,     0,    15,     0,     0,     0,
       0,     0,    16,     0,    17,     0,     0,     0,     0,    18,
       0,     0,    19,     0,     0,     0,     0,    20,     0,    21,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      17,     0,     0,     0,     0,    18,     0,     0,    19,     0,
       0,     0,     0,    20,     0,    21,   180,     0,   181,    22,
      23,    24,    25,    26,    27,    28,     1,     2,     0,     0,
       5,     0,     6,   372,     0,   373,     7,     8,     0,     9,
      10,    11,    12,     0,     0,    13,    14,     0,    15,     0,
       0,     0,     1,     2,    16,     0,     5,     0,     6,     0,
       0,   313,     7,     8,     0,     9,    10,    11,    12,     0,
       0,    13,    14,     0,    15,     0,     0,     0,     0,     0,
      16,     0,    17,     0,     0,     0,     0,    18,     0,     0,
      19,     0,     0,     0,     0,    20,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    17,     0,
       0,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       0,    20,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,     1,     2,     0,     0,     5,     0,
       6,     0,     0,   316,     7,     8,     0,     9,    10,    11,
      12,     0,     0,    13,    14,     0,    15,     0,     0,     0,
       1,     2,    16,     0,     5,     0,     6,     0,     0,   318,
       7,     8,     0,     9,    10,    11,    12,     0,     0,    13,
      14,     0,    15,     0,     0,     0,     0,     0,    16,     0,
      17,     0,     0,     0,     0,    18,     0,     0,    19,     0,
       0,     0,     0,    20,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    17,     0,     0,     0,
       0,    18,     0,     0,    19,     0,     0,     0,     0,    20,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,     1,     2,     0,     0,     5,     0,     6,     0,
       0,   320,     7,     8,     0,     9,    10,    11,    12,     0,
       0,    13,    14,     0,    15,     0,     0,     0,     1,     2,
      16,     0,     5,     0,     6,     0,     0,   337,     7,     8,
       0,     9,    10,    11,    12,     0,     0,    13,    14,     0,
      15,     0,     0,     0,     0,     0,    16,     0,    17,     0,
       0,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       0,    20,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    17,     0,     0,     0,     0,    18,
       0,     0,    19,     0,     0,     0,     0,    20,     0,    21,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
       1,     2,     0,     0,     5,     0,     6,     0,     0,   374,
       7,     8,     0,     9,    10,    11,    12,     0,     0,    13,
      14,     0,    15,     0,     0,     0,     1,     2,    16,     0,
       5,     0,     6,     0,     0,   391,     7,     8,     0,     9,
      10,    11,    12,     0,     0,    13,    14,     0,    15,     0,
       0,     0,     0,     0,    16,     0,    17,     0,     0,     0,
       0,    18,     0,     0,    19,     0,     0,     0,     0,    20,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    17,     0,     0,     0,     0,    18,     0,     0,
      19,     0,     0,     0,     0,    20,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,     1,     2,
       0,     0,     5,     0,     6,     0,     0,   403,     7,     8,
       0,     9,    10,    11,    12,     0,     0,    13,    14,     0,
      15,     0,     0,     0,     1,     2,    16,     0,     5,     0,
       6,     0,     0,   412,     7,     8,     0,     9,    10,    11,
      12,     0,     0,    13,    14,     0,    15,     0,     0,     0,
       0,     0,    16,     0,    17,     0,     0,     0,     0,    18,
       0,     0,    19,     0,     0,     0,     0,    20,     0,    21,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      17,     0,     0,     0,     0,    18,     0,     0,    19,     0,
       0,     0,     0,    20,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,     1,     2,     0,     0,
       5,     0,     6,     0,     0,   420,     7,     8,     0,     9,
      10,    11,    12,     0,     0,    13,    14,     0,    15,     0,
       0,     0,     1,     2,    16,     0,     5,     0,     6,     0,
       0,   421,     7,     8,     0,     9,    10,    11,    12,     0,
       0,    13,    14,     0,    15,     0,     0,     0,     0,     0,
      16,     0,    17,     0,     0,     0,     0,    18,     0,     0,
      19,     0,     0,     0,     0,    20,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    17,     0,
       0,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       0,    20,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,     1,     2,     0,     0,     5,     0,
       6,     0,     0,   424,     7,     8,     0,     9,    10,    11,
      12,     0,     0,    13,    14,     0,    15,     0,     0,     0,
       1,     2,    16,     0,     5,     0,     6,     0,     0,   429,
       7,     8,     0,     9,    10,    11,    12,     0,     0,    13,
      14,     0,    15,     0,     0,     0,     0,     0,    16,     0,
      17,     0,     0,     0,     0,    18,     0,     0,    19,     0,
       0,     0,     0,    20,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    17,     0,     0,     0,
       0,    18,     0,     0,    19,     0,     0,     0,     0,    20,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,     1,     2,     0,     0,     5,     0,     6,     0,
       0,   436,     7,     8,     0,     9,    10,    11,    12,     0,
       0,    13,    14,     0,    15,     0,     0,     0,     1,     2,
      16,     0,     5,     0,     6,     0,     0,   437,     7,     8,
       0,     9,    10,    11,    12,     0,     0,    13,    14,     0,
      15,     0,     0,     0,     0,     0,    16,     0,    17,     0,
       0,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       0,    20,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    17,     0,     0,     0,     0,    18,
       0,     0,    19,     0,     0,     0,     0,    20,     0,    21,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
       1,     2,     0,     0,     5,     0,     6,     0,     0,   438,
       7,     8,     0,     9,    10,    11,    12,     0,     0,    13,
      14,     0,    15,     0,     0,     0,     1,     2,    16,     0,
       5,     0,     6,     0,     0,   439,     7,     8,     0,     9,
      10,    11,    12,     0,     0,    13,    14,     0,    15,     0,
       0,     0,     0,     0,    16,     0,    17,     0,     0,     0,
       0,    18,     0,     0,    19,     0,     0,     0,     0,    20,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    17,     0,     0,     0,     0,    18,     0,     0,
      19,     0,     0,     0,     0,    20,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,     1,     2,
       0,     0,     5,     0,     6,     0,     0,   442,     7,     8,
       0,     9,    10,    11,    12,     0,     0,    13,    14,     0,
      15,     0,     0,     0,     1,     2,    16,     0,     5,     0,
       6,     0,     0,   443,     7,     8,     0,     9,    10,    11,
      12,     0,     0,    13,    14,     0,    15,     0,     0,     0,
       0,     0,    16,     0,    17,     0,     0,     0,     0,    18,
       0,     0,    19,     0,     0,     0,     0,    20,     0,    21,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      17,     0,     0,     0,     0,    18,     0,     0,    19,     0,
       0,     0,     0,    20,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,     1,     2,     0,     0,
       5,     0,     6,     0,     0,     0,     7,     8,     0,     9,
      10,    11,    12,     0,     0,    13,    14,     0,    15,     0,
       0,     0,     0,     0,    16,     0,     5,     0,     0,     0,
       0,     0,     7,     0,     0,     9,     0,    11,    12,     0,
       0,    13,     0,     0,     0,     0,     0,     0,     0,     0,
      16,     0,    17,     0,     0,     0,     0,    18,     0,     0,
      19,     0,     0,     0,     0,    20,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    17,     0,
       0,     0,     0,    18,     0,     0,    19,   201,     0,     0,
       0,    20,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,     5,     0,     0,     0,     0,     0,
       7,     0,     0,     9,     0,    11,    12,     0,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       5,     0,     0,     0,     0,     0,     7,     0,     0,     9,
       0,    11,    12,     0,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,    16,     0,    17,     0,     0,     0,
       0,    18,     0,     0,    19,   211,     0,     0,     0,    20,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    17,     0,     0,     0,     0,    18,   205,     0,
      19,     0,     0,     0,     0,    20,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,     0,    67,
      68,     0,    69,    70,    71,    72,    73,    74,    75,    76,
       0,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   365,     0,    99,   100,     0,     0,     0,
       0,   101,   102,     0,   103,   104,     0,   105,     0,     0,
       0,     0,     0,     0,    67,    68,     0,    69,    70,    71,
      72,    73,    74,    75,    76,     0,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     0,    65,
      99,   100,     0,     0,     0,     0,   101,   102,     0,   103,
     104,     0,   105,    66,     0,     0,     0,     0,     0,    67,
      68,     0,    69,    70,    71,    72,    73,    74,    75,    76,
       0,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     0,   196,    99,   100,     0,     0,     0,
       0,   101,   102,     0,   103,   104,     0,   105,    67,    68,
       0,    69,    70,    71,    72,    73,    74,    75,    76,     0,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     0,     0,    99,   100,     0,     0,     0,     0,
     101,   102,     0,   103,    67,    68,     0,    69,    70,    71,
      72,    73,    74,    75,    76,     0,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,     0,     0,
      99,   100,     0,     0,     0,     0,   101,   102,     0,   103,
     104,     0,   105,    67,    68,     0,    69,    70,    71,    72,
      73,    74,    75,    76,     0,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     0,     0,    99,
     100,     0,     0,     0,     0,   101,   102,     0,   103,    44,
      67,    68,     0,    69,    70,    71,    72,    73,    74,    75,
      76,     0,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,     0,     0,    99,   100,     0,     0,
       0,     0,   101,   102,     0,   103,    69,    70,    71,    72,
      73,    74,    75,    76,     0,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     0,     0,    99,
     100,     0,     0,     0,     0,   101,   102,     0,   103,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,     0,     0,    99,   100,     0,     0,     0,     0,   101,
     102,     0,   103,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     0,     0,    99,   100,     0,     0,     0,
       0,   101,   102,     0,   103,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,     0,     0,    99,   100,     0,     0,
       0,     0,   101,   102,     0,   103,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,     0,     0,    99,   100,     0,     0,
       0,     0,   101,   102,     0,   103,    92,    93,    94,    95,
      96,    97,    98,     0,     0,    99,   100,     0,     0,     0,
       0,   101,   102,     0,   103
};

static const yytype_int16 yycheck[] =
{
       0,     3,     4,     5,     6,   324,     8,    26,    27,    28,
       0,    81,    14,    15,    75,    17,    18,    19,    20,    21,
      75,    76,    10,   126,    12,    67,    71,   130,     6,    75,
      67,    77,    32,    67,    67,   129,    24,    67,    75,    85,
      77,    75,    32,    77,     0,   364,   140,    75,     6,    77,
      20,    53,    54,    75,    81,    57,    26,    27,    28,    84,
      24,    63,    81,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   205,     7,    82,    83,    26,    27,    28,    13,
      84,    81,    16,    21,    18,    19,    67,    75,    22,    77,
      67,    32,    67,    67,    82,    83,    67,    31,    75,    68,
      77,    71,    72,   135,    74,    73,   138,     3,     4,    21,
      32,     7,    67,     9,    10,    11,    12,    13,    14,    67,
      16,    17,    18,    19,    67,    59,    22,    23,    67,    25,
      64,    81,    12,    67,    75,    31,    77,    81,    72,    73,
      74,    10,    11,    12,    78,    79,    80,    81,    82,    83,
      84,    67,    40,    75,   186,    77,   188,    68,   190,    75,
     192,    77,    68,    59,   196,   269,   299,   271,    64,   273,
     202,    67,    73,    68,   298,   207,    72,    75,    74,    77,
     212,    12,    78,    79,    80,    81,    82,    83,    84,    76,
      68,    30,   224,    68,    68,    34,    35,    36,    37,    38,
      39,    40,    41,    42,   328,   329,   330,   331,    75,    76,
      77,    68,    21,   346,    10,    11,    12,   341,   342,   343,
     344,    81,   254,    68,   256,    68,    68,    65,    66,    21,
      32,    68,   365,    71,    72,    68,    74,   267,    68,    68,
     270,    68,   272,   264,   274,   275,   278,   279,   280,   281,
     257,   302,   326,   283,    -1,    -1,   286,    -1,    -1,   392,
      -1,   293,   294,   295,   296,    60,    61,    62,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    71,    72,   310,    74,
      -1,   120,   121,   122,   123,   124,    -1,   126,    -1,    -1,
     322,   130,   131,    -1,    -1,    -1,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   335,   336,    -1,   340,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
     352,    10,    65,    66,    -1,    -1,    -1,   357,    71,    72,
      -1,    74,    -1,    -1,    -1,   367,   368,   369,   370,    -1,
      -1,   371,    -1,    -1,   376,   377,   378,   379,    -1,    -1,
      -1,    -1,   382,    -1,    -1,    -1,    45,    -1,    -1,    -1,
      49,    50,    51,   393,   394,    -1,    55,    56,   398,    58,
      59,    60,    61,    62,   404,    58,    59,    60,    61,    62,
     410,   413,    65,    66,   414,   415,   416,   417,    71,    72,
      -1,    74,   422,   423,    -1,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,   434,    -1,    65,    66,    -1,    -1,
     440,    -1,    71,    72,   444,    74,    -1,    -1,    -1,    -1,
     259,   260,   261,   262,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
     129,    65,    66,   132,    -1,    -1,    -1,    71,    72,    -1,
      74,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   327,   178,
     179,   189,    -1,   191,    -1,   193,   194,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   203,    -1,   346,   206,    -1,
     349,   350,    -1,    -1,   353,   354,   355,   356,    -1,    -1,
     209,     3,     4,    -1,    -1,     7,    -1,     9,    10,    11,
      12,    13,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      22,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,
      -1,     3,     4,   392,    -1,     7,    -1,     9,    10,    -1,
      12,    13,    14,    -1,    16,    17,    18,    19,    -1,    -1,
      22,    23,    -1,    25,    -1,    -1,    -1,    59,   276,    31,
      -1,    -1,    64,    -1,    -1,    67,   284,   285,   277,    -1,
      72,    -1,    74,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    59,    -1,   298,
      -1,    -1,    64,    -1,   303,    67,   305,    -1,    -1,    -1,
      72,    -1,    74,   321,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,   333,    -1,    -1,    -1,   328,
     329,   330,   331,    -1,    -1,    -1,    -1,    -1,    -1,   347,
      -1,    -1,   341,   342,   343,   344,    -1,    -1,    -1,    -1,
      -1,   359,    -1,    -1,   362,    -1,    -1,    -1,   366,   358,
      -1,    -1,    -1,    -1,   372,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   380,    -1,    -1,    -1,   375,    -1,    -1,   387,
     388,   389,   390,    -1,    -1,    -1,    -1,   395,    -1,   397,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,   411,     9,    -1,    -1,    -1,    13,    14,
     418,    16,    17,    18,    19,    -1,    -1,    22,    23,    -1,
      25,    -1,    -1,    -1,     3,     4,    31,    -1,     7,    -1,
       9,    -1,    -1,   441,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    22,    23,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    59,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
      59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    72,    -1,    74,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,     3,     4,    -1,    -1,
       7,    -1,     9,    10,    -1,    12,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      -1,    -1,     3,     4,    31,    -1,     7,    -1,     9,    -1,
      -1,    12,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    22,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,     3,     4,    -1,    -1,     7,    -1,
       9,    -1,    -1,    12,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    22,    23,    -1,    25,    -1,    -1,    -1,
       3,     4,    31,    -1,     7,    -1,     9,    -1,    -1,    12,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    22,
      23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    59,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,     3,     4,    -1,    -1,     7,    -1,     9,    -1,
      -1,    12,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    22,    23,    -1,    25,    -1,    -1,    -1,     3,     4,
      31,    -1,     7,    -1,     9,    -1,    -1,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    22,    23,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    31,    -1,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    59,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
       3,     4,    -1,    -1,     7,    -1,     9,    -1,    -1,    12,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    22,
      23,    -1,    25,    -1,    -1,    -1,     3,     4,    31,    -1,
       7,    -1,     9,    -1,    -1,    12,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    59,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,     3,     4,
      -1,    -1,     7,    -1,     9,    -1,    -1,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    22,    23,    -1,
      25,    -1,    -1,    -1,     3,     4,    31,    -1,     7,    -1,
       9,    -1,    -1,    12,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    22,    23,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    59,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
      59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,     3,     4,    -1,    -1,
       7,    -1,     9,    -1,    -1,    12,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      -1,    -1,     3,     4,    31,    -1,     7,    -1,     9,    -1,
      -1,    12,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    22,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,     3,     4,    -1,    -1,     7,    -1,
       9,    -1,    -1,    12,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    22,    23,    -1,    25,    -1,    -1,    -1,
       3,     4,    31,    -1,     7,    -1,     9,    -1,    -1,    12,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    22,
      23,    -1,    25,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,    59,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,     3,     4,    -1,    -1,     7,    -1,     9,    -1,
      -1,    12,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    22,    23,    -1,    25,    -1,    -1,    -1,     3,     4,
      31,    -1,     7,    -1,     9,    -1,    -1,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    22,    23,    -1,
      25,    -1,    -1,    -1,    -1,    -1,    31,    -1,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    72,    -1,    74,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,    59,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
       3,     4,    -1,    -1,     7,    -1,     9,    -1,    -1,    12,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    22,
      23,    -1,    25,    -1,    -1,    -1,     3,     4,    31,    -1,
       7,    -1,     9,    -1,    -1,    12,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    59,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,     3,     4,
      -1,    -1,     7,    -1,     9,    -1,    -1,    12,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    22,    23,    -1,
      25,    -1,    -1,    -1,     3,     4,    31,    -1,     7,    -1,
       9,    -1,    -1,    12,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    22,    23,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    59,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
      59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    72,    -1,    74,    -1,    -1,    -1,    78,
      79,    80,    81,    82,    83,    84,     3,     4,    -1,    -1,
       7,    -1,     9,    -1,    -1,    -1,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    31,    -1,     7,    -1,    -1,    -1,
      -1,    -1,    13,    -1,    -1,    16,    -1,    18,    19,    -1,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    67,    68,    -1,    -1,
      -1,    72,    -1,    74,    -1,    -1,    -1,    78,    79,    80,
      81,    82,    83,    84,     7,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    16,    -1,    18,    19,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
       7,    -1,    -1,    -1,    -1,    -1,    13,    -1,    -1,    16,
      -1,    18,    19,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    59,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    68,    -1,    -1,    -1,    72,
      -1,    74,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,    59,    -1,    -1,    -1,    -1,    64,     8,    -1,
      67,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    -1,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     8,    -1,    65,    66,    -1,    -1,    -1,
      -1,    71,    72,    -1,    74,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,     9,
      65,    66,    -1,    -1,    -1,    -1,    71,    72,    -1,    74,
      75,    -1,    77,    23,    -1,    -1,    -1,    -1,    -1,    29,
      30,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    15,    65,    66,    -1,    -1,    -1,
      -1,    71,    72,    -1,    74,    75,    -1,    77,    29,    30,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,
      71,    72,    -1,    74,    29,    30,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    -1,    -1,
      65,    66,    -1,    -1,    -1,    -1,    71,    72,    -1,    74,
      75,    -1,    77,    29,    30,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    71,    72,    -1,    74,    75,
      29,    30,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    71,    72,    -1,    74,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    -1,    -1,    65,
      66,    -1,    -1,    -1,    -1,    71,    72,    -1,    74,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    71,
      72,    -1,    74,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    71,    72,    -1,    74,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    71,    72,    -1,    74,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    -1,    65,    66,    -1,    -1,
      -1,    -1,    71,    72,    -1,    74,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    65,    66,    -1,    -1,    -1,
      -1,    71,    72,    -1,    74
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,     6,     7,     9,    13,    14,    16,
      17,    18,    19,    22,    23,    25,    31,    59,    64,    67,
      72,    74,    78,    79,    80,    81,    82,    83,    84,    87,
      88,    91,    92,    96,    99,   100,   105,   106,   109,   110,
     111,   112,   115,    81,    75,    89,    90,    89,    89,    89,
      89,    89,    88,    71,    67,    89,    89,    67,    89,    89,
      89,    89,    89,    67,     0,     9,    23,    29,    30,    32,
      33,    34,    35,    36,    37,    38,    39,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    65,
      66,    71,    72,    74,    75,    77,    93,    91,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    81,    88,    75,
      84,    26,    27,    28,    81,    88,    88,    88,    89,    89,
      88,    88,    89,    88,    88,    88,    73,    88,    94,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      89,    89,    89,    89,    89,    89,    89,    89,    89,    89,
      75,    77,    93,   104,    85,    93,    67,    93,    67,    93,
      67,    93,    67,    93,    93,   104,    15,    26,    27,    28,
      81,    68,    94,    93,   104,     8,    93,    88,    89,    76,
      89,    68,    94,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    20,
      26,    27,    28,    81,    88,    88,    24,   113,   114,    84,
      82,    83,    99,   101,   102,   103,    89,    95,    96,    89,
      95,    89,    95,    89,    95,    95,    21,    89,    67,    67,
      67,    67,    89,    95,    21,   104,    95,    89,    68,    88,
      73,    89,    89,    67,    67,    67,    67,    89,    89,    10,
      12,   114,    93,    32,    93,    32,    93,    93,   101,    12,
      81,    97,    98,    12,    96,    98,    12,    98,    12,    98,
      12,    10,    11,    12,   107,   108,    95,    88,    89,    89,
      89,    89,    68,    10,    12,    95,    95,    12,    68,    68,
      40,    89,    89,    89,    89,    73,    94,   104,   103,    88,
      88,    89,    76,    68,    68,    68,    68,    95,    89,    10,
      12,   108,    10,    12,   107,     8,    93,    94,    94,    94,
      94,    95,    10,    12,    12,    89,    94,    94,    94,    94,
      93,   104,    95,    12,    93,    93,    89,    93,    93,    93,
      93,    12,    88,    95,    95,    10,    12,   104,    95,    89,
      89,    89,    89,    12,    95,    88,    89,    89,    89,    89,
      95,    21,    12,    81,    95,    95,    95,    95,    93,   104,
      12,    12,    95,    95,    12,    68,    68,    68,    68,    12,
      68,    68,    68,    68,    95,    89,    12,    12,    12,    12,
      95,    21,    12,    12,    95
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    86,    87,    87,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      89,    89,    90,    90,    91,    91,    91,    92,    92,    93,
      93,    93,    93,    94,    94,    95,    95,    96,    96,    96,
      96,    96,    96,    96,    96,    97,    97,    98,    98,    99,
      99,    99,    99,    99,    99,    99,    99,   100,   100,   101,
     101,   101,   101,   101,   102,   102,   103,   103,   104,   104,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   106,
     106,   106,   106,   106,   107,   107,   108,   108,   109,   109,
     110,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     115
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     6,     4,     4,     4,     4,
       4,     3,     4,     6,     4,     1,     6,     4,     4,     9,
       4,     9,     4,     9,     4,     9,     4,     9,     4,     9,
       4,     9,     4,     9,     4,     4,     6,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     4,     4,
       3,     4,     4,     5,     5,     3,     3,     3,     4,     8,
       0,     1,     1,     2,     2,     2,     1,     1,     2,     1,
       1,     2,     2,     1,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     5,     0,     1,    10,
      10,     6,     6,    10,     6,    10,     6,     6,     8,     2,
       2,     4,     2,     4,     1,     2,     0,     1,     0,     1,
       6,     7,     8,     9,     7,     8,     9,    10,     4,     7,
       6,     9,     8,     4,     1,     2,     5,     6,     7,     6,
      10,     9,     2,     1,     6,     9,     1,     2,     5,     6,
       3
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
  case 2: /* programm: %empty  */
#line 148 ".\\parser.y"
                    {(yyval.programm_el_list_union)=NULL;}
#line 1916 ".\\parser.tab.cpp"
    break;

  case 3: /* programm: programm_el_list_not_empty  */
#line 149 ".\\parser.y"
                                {(yyval.programm_el_list_union)=(yyvsp[0].programm_el_list_union);}
#line 1922 ".\\parser.tab.cpp"
    break;

  case 4: /* expr: IDENTIFIER  */
#line 152 ".\\parser.y"
                    {
                        printf("String with identifier: %s", (yyvsp[0].Str));
                        (yyval.expr_union)=ExprNode::createExprFromVarName(ExprType::id, (yyvsp[0].Str));
                    }
#line 1931 ".\\parser.tab.cpp"
    break;

  case 5: /* expr: OBJECT_VAR_NAME  */
#line 156 ".\\parser.y"
                        {(yyval.expr_union)=ExprNode::createExprFromVarName(ExprType::objectVarName, (yyvsp[0].Str));}
#line 1937 ".\\parser.tab.cpp"
    break;

  case 6: /* expr: CLASS_VAR_NAME  */
#line 157 ".\\parser.y"
                        {(yyval.expr_union)=ExprNode::createExprFromVarName(ExprType::classVarName, (yyvsp[0].Str));}
#line 1943 ".\\parser.tab.cpp"
    break;

  case 7: /* expr: CONSTANT_NAME  */
#line 158 ".\\parser.y"
                    {(yyval.expr_union)=ExprNode::createExprFromVarName(ExprType::constantName, (yyvsp[0].Str));}
#line 1949 ".\\parser.tab.cpp"
    break;

  case 8: /* expr: STRING  */
#line 159 ".\\parser.y"
                {(yyval.expr_union)=ExprNode::createExprFromString((yyvsp[0].Str));}
#line 1955 ".\\parser.tab.cpp"
    break;

  case 9: /* expr: TRUE_KEYWORD  */
#line 160 ".\\parser.y"
                    {(yyval.expr_union)=ExprNode::createExprFromTrue();}
#line 1961 ".\\parser.tab.cpp"
    break;

  case 10: /* expr: FALSE_KEYWORD  */
#line 161 ".\\parser.y"
                    {(yyval.expr_union)=ExprNode::createExprFromFalse();}
#line 1967 ".\\parser.tab.cpp"
    break;

  case 11: /* expr: NIL_KEYWORD  */
#line 162 ".\\parser.y"
                    {(yyval.expr_union)=ExprNode::createExprFromNil();}
#line 1973 ".\\parser.tab.cpp"
    break;

  case 12: /* expr: INTEGER_NUMBER  */
#line 163 ".\\parser.y"
                        {(yyval.expr_union)=ExprNode::createExprFromInt((yyvsp[0].Int));}
#line 1979 ".\\parser.tab.cpp"
    break;

  case 13: /* expr: FLOAT_NUMBER  */
#line 164 ".\\parser.y"
                    {(yyval.expr_union)=ExprNode::createExprFromFloat((yyvsp[0].Float));}
#line 1985 ".\\parser.tab.cpp"
    break;

  case 14: /* expr: expr '=' linefeed_or_empty expr  */
#line 165 ".\\parser.y"
                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::assign, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 1991 ".\\parser.tab.cpp"
    break;

  case 15: /* expr: expr '[' linefeed_or_empty expr linefeed_or_empty ']'  */
#line 166 ".\\parser.y"
                                                            {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::arrayElement, (yyvsp[-5].expr_union), (yyvsp[-2].expr_union));}
#line 1997 ".\\parser.tab.cpp"
    break;

  case 16: /* expr: expr '/' linefeed_or_empty expr  */
#line 167 ".\\parser.y"
                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::division, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2003 ".\\parser.tab.cpp"
    break;

  case 17: /* expr: expr '%' linefeed_or_empty expr  */
#line 168 ".\\parser.y"
                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::remainderOfDivision, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2009 ".\\parser.tab.cpp"
    break;

  case 18: /* expr: expr '*' linefeed_or_empty expr  */
#line 169 ".\\parser.y"
                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::multiplication, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2015 ".\\parser.tab.cpp"
    break;

  case 19: /* expr: expr '+' linefeed_or_empty expr  */
#line 170 ".\\parser.y"
                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::sum, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2021 ".\\parser.tab.cpp"
    break;

  case 20: /* expr: expr '-' linefeed_or_empty expr  */
#line 171 ".\\parser.y"
                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::subtraction, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2027 ".\\parser.tab.cpp"
    break;

  case 21: /* expr: '-' linefeed_or_empty expr  */
#line 172 ".\\parser.y"
                                              {(yyval.expr_union)=ExprNode::createExprFromUnary(ExprType::unaryMinus, (yyvsp[0].expr_union));}
#line 2033 ".\\parser.tab.cpp"
    break;

  case 22: /* expr: expr '.' linefeed_or_empty SUPERCLASS_KEYWORD  */
#line 173 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromUnary(ExprType::superclass, (yyvsp[-3].expr_union));}
#line 2039 ".\\parser.tab.cpp"
    break;

  case 23: /* expr: IDENTIFIER '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 174 ".\\parser.y"
                                                                        {(yyval.expr_union)=ExprNode::createExprFromFuncCall(ExprType::function, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str));}
#line 2045 ".\\parser.tab.cpp"
    break;

  case 24: /* expr: IDENTIFIER '(' linefeed_or_empty ')'  */
#line 175 ".\\parser.y"
                                            {(yyval.expr_union)=ExprNode::createExprFromFuncCall(ExprType::funcWithoutParams, NULL, (yyvsp[-3].Str));}
#line 2051 ".\\parser.tab.cpp"
    break;

  case 25: /* expr: SUPER_KEYWORD  */
#line 176 ".\\parser.y"
                    {(yyval.expr_union)=ExprNode::createExprFromSuper(ExprType::superWithoutParamsAndBrackets, NULL);}
#line 2057 ".\\parser.tab.cpp"
    break;

  case 26: /* expr: SUPER_KEYWORD '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 177 ".\\parser.y"
                                                                            {(yyval.expr_union)=ExprNode::createExprFromSuper(ExprType::super, (yyvsp[-2].expr_list_union));}
#line 2063 ".\\parser.tab.cpp"
    break;

  case 27: /* expr: SUPER_KEYWORD '(' linefeed_or_empty ')'  */
#line 178 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromSuper(ExprType::superWithoutParams, NULL);}
#line 2069 ".\\parser.tab.cpp"
    break;

  case 28: /* expr: expr '.' linefeed_or_empty IDENTIFIER  */
#line 179 ".\\parser.y"
                                            {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethodWithoutParams, NULL, (yyvsp[0].Str), (yyvsp[-3].expr_union));}
#line 2075 ".\\parser.tab.cpp"
    break;

  case 29: /* expr: expr '.' linefeed_or_empty IDENTIFIER '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 180 ".\\parser.y"
                                                                                                    {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethod, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str), (yyvsp[-8].expr_union));}
#line 2081 ".\\parser.tab.cpp"
    break;

  case 30: /* expr: SELF_KEYWORD '.' linefeed_or_empty IDENTIFIER  */
#line 181 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::selfWithoutParams, NULL, (yyvsp[0].Str));}
#line 2087 ".\\parser.tab.cpp"
    break;

  case 31: /* expr: SELF_KEYWORD '.' linefeed_or_empty IDENTIFIER '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 182 ".\\parser.y"
                                                                                                            {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::self, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str));}
#line 2093 ".\\parser.tab.cpp"
    break;

  case 32: /* expr: SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_QUESTION  */
#line 183 ".\\parser.y"
                                                                {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::selfMarkQuestionWithoutParams, NULL, (yyvsp[0].Str));}
#line 2099 ".\\parser.tab.cpp"
    break;

  case 33: /* expr: SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_QUESTION '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 184 ".\\parser.y"
                                                                                                                    {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::selfMarkQuestion, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str));}
#line 2105 ".\\parser.tab.cpp"
    break;

  case 34: /* expr: SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_EXCLAMATION  */
#line 185 ".\\parser.y"
                                                                    {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::selfMarkExclamationWithoutParams, NULL, (yyvsp[0].Str));}
#line 2111 ".\\parser.tab.cpp"
    break;

  case 35: /* expr: SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_EXCLAMATION '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 186 ".\\parser.y"
                                                                                                                        {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::selfMarkExclamation, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str));}
#line 2117 ".\\parser.tab.cpp"
    break;

  case 36: /* expr: SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_EQUAL  */
#line 187 ".\\parser.y"
                                                            {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::selfEqualWithoutParams, NULL, (yyvsp[0].Str));}
#line 2123 ".\\parser.tab.cpp"
    break;

  case 37: /* expr: SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_EQUAL '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 188 ".\\parser.y"
                                                                                                                    {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::selfEqual, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str));}
#line 2129 ".\\parser.tab.cpp"
    break;

  case 38: /* expr: expr '.' linefeed_or_empty METHOD_MARK_QUESTION  */
#line 189 ".\\parser.y"
                                                        {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethodMarkQuestionWithoutParams, NULL, (yyvsp[0].Str), (yyvsp[-3].expr_union));}
#line 2135 ".\\parser.tab.cpp"
    break;

  case 39: /* expr: expr '.' linefeed_or_empty METHOD_MARK_QUESTION '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 190 ".\\parser.y"
                                                                                                            {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethodMarkQuestion, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str), (yyvsp[-8].expr_union));}
#line 2141 ".\\parser.tab.cpp"
    break;

  case 40: /* expr: expr '.' linefeed_or_empty METHOD_MARK_EXCLAMATION  */
#line 191 ".\\parser.y"
                                                            {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethodMarkExclamationWithoutParams, NULL, (yyvsp[0].Str), (yyvsp[-3].expr_union));}
#line 2147 ".\\parser.tab.cpp"
    break;

  case 41: /* expr: expr '.' linefeed_or_empty METHOD_MARK_EXCLAMATION '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 192 ".\\parser.y"
                                                                                                                {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethodMarkExclamation, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str), (yyvsp[-8].expr_union));}
#line 2153 ".\\parser.tab.cpp"
    break;

  case 42: /* expr: expr '.' linefeed_or_empty METHOD_MARK_EQUAL  */
#line 193 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethodEqualWithoutParams, NULL, (yyvsp[0].Str), (yyvsp[-3].expr_union));}
#line 2159 ".\\parser.tab.cpp"
    break;

  case 43: /* expr: expr '.' linefeed_or_empty METHOD_MARK_EQUAL '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 194 ".\\parser.y"
                                                                                                            {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethodEqual, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str), (yyvsp[-8].expr_union));}
#line 2165 ".\\parser.tab.cpp"
    break;

  case 44: /* expr: expr AND_KEYWORD linefeed_or_empty expr  */
#line 195 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::andType, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2171 ".\\parser.tab.cpp"
    break;

  case 45: /* expr: expr OR_KEYWORD linefeed_or_empty expr  */
#line 196 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::orType, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2177 ".\\parser.tab.cpp"
    break;

  case 46: /* expr: NOT_KEYWORD '(' linefeed_or_empty expr linefeed_or_empty ')'  */
#line 197 ".\\parser.y"
                                                                    {(yyval.expr_union)=ExprNode::createExprFromUnary(ExprType::notType, (yyvsp[-2].expr_union));}
#line 2183 ".\\parser.tab.cpp"
    break;

  case 47: /* expr: expr ARITHMETIC_POW_OP linefeed_or_empty expr  */
#line 198 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::pow, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2189 ".\\parser.tab.cpp"
    break;

  case 48: /* expr: expr EQL_OP linefeed_or_empty expr  */
#line 199 ".\\parser.y"
                                            {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::equal, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2195 ".\\parser.tab.cpp"
    break;

  case 49: /* expr: expr NOT_EQL_OP linefeed_or_empty expr  */
#line 200 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::notEqual, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2201 ".\\parser.tab.cpp"
    break;

  case 50: /* expr: expr GREATER_OP linefeed_or_empty expr  */
#line 201 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::greater, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2207 ".\\parser.tab.cpp"
    break;

  case 51: /* expr: expr LESS_OP linefeed_or_empty expr  */
#line 202 ".\\parser.y"
                                            {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::less, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2213 ".\\parser.tab.cpp"
    break;

  case 52: /* expr: expr GREATER_OR_EQL_OP linefeed_or_empty expr  */
#line 203 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::greaterOrEqual, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2219 ".\\parser.tab.cpp"
    break;

  case 53: /* expr: expr LESS_OR_EQL_OP linefeed_or_empty expr  */
#line 204 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::lessOrEqual, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2225 ".\\parser.tab.cpp"
    break;

  case 54: /* expr: expr COMB_COMPARISON_OP linefeed_or_empty expr  */
#line 205 ".\\parser.y"
                                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::combComparison, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2231 ".\\parser.tab.cpp"
    break;

  case 55: /* expr: expr CASE_EQL_OP linefeed_or_empty expr  */
#line 206 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::caseEqual, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2237 ".\\parser.tab.cpp"
    break;

  case 56: /* expr: expr ADD_ASSIGN_OP linefeed_or_empty expr  */
#line 207 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::addAssign, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2243 ".\\parser.tab.cpp"
    break;

  case 57: /* expr: expr SUB_ASSIGN_OP linefeed_or_empty expr  */
#line 208 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::subAssign, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2249 ".\\parser.tab.cpp"
    break;

  case 58: /* expr: expr MUL_ASSIGN_OP linefeed_or_empty expr  */
#line 209 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::mulAssign, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2255 ".\\parser.tab.cpp"
    break;

  case 59: /* expr: expr DIV_ASSIGN_OP linefeed_or_empty expr  */
#line 210 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::divAssign, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2261 ".\\parser.tab.cpp"
    break;

  case 60: /* expr: expr MOD_ASSIGN_OP linefeed_or_empty expr  */
#line 211 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::modAssign, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2267 ".\\parser.tab.cpp"
    break;

  case 61: /* expr: expr POW_ASSIGN_OP linefeed_or_empty expr  */
#line 212 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::powAssign, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2273 ".\\parser.tab.cpp"
    break;

  case 62: /* expr: expr BIN_AND_OP linefeed_or_empty expr  */
#line 213 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::binAnd, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2279 ".\\parser.tab.cpp"
    break;

  case 63: /* expr: expr BIN_OR_OP linefeed_or_empty expr  */
#line 214 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::binOr, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2285 ".\\parser.tab.cpp"
    break;

  case 64: /* expr: expr BIN_XOR_OP linefeed_or_empty expr  */
#line 215 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::binXor, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2291 ".\\parser.tab.cpp"
    break;

  case 65: /* expr: expr BIN_ONES_COMPLEMENT_OP linefeed_or_empty expr  */
#line 216 ".\\parser.y"
                                                             {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::binOnesComplement, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2297 ".\\parser.tab.cpp"
    break;

  case 66: /* expr: expr BIN_LEFT_SHIFT_OP linefeed_or_empty expr  */
#line 217 ".\\parser.y"
                                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::binLeftShift, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2303 ".\\parser.tab.cpp"
    break;

  case 67: /* expr: expr BIN_RIGHT_SHIFT_OP linefeed_or_empty expr  */
#line 218 ".\\parser.y"
                                                            {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::binRightShift, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2309 ".\\parser.tab.cpp"
    break;

  case 68: /* expr: expr LOGICAL_AND_OP linefeed_or_empty expr  */
#line 219 ".\\parser.y"
                                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::logicalAnd, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2315 ".\\parser.tab.cpp"
    break;

  case 69: /* expr: expr LOGICAL_OR_OP linefeed_or_empty expr  */
#line 220 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::logicalOr, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2321 ".\\parser.tab.cpp"
    break;

  case 70: /* expr: LOGICAL_NOT_OP linefeed_or_empty expr  */
#line 221 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromUnary(ExprType::logicalNot, (yyvsp[0].expr_union));}
#line 2327 ".\\parser.tab.cpp"
    break;

  case 71: /* expr: expr INCLUSIVE_RANGE_OP linefeed_or_empty expr  */
#line 222 ".\\parser.y"
                                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::inclusiveRange, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2333 ".\\parser.tab.cpp"
    break;

  case 72: /* expr: expr EXCLUSIVE_RANGE_OP linefeed_or_empty expr  */
#line 223 ".\\parser.y"
                                                            {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::exclusiveRange, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2339 ".\\parser.tab.cpp"
    break;

  case 73: /* expr: '(' linefeed_or_empty expr linefeed_or_empty ')'  */
#line 224 ".\\parser.y"
                                                        {(yyval.expr_union)=ExprNode::createExprFromUnary(ExprType::brackets, (yyvsp[-2].expr_union));}
#line 2345 ".\\parser.tab.cpp"
    break;

  case 74: /* expr: '[' linefeed_or_empty expr_list linefeed_or_empty ']'  */
#line 225 ".\\parser.y"
                                                            {(yyval.expr_union)=ExprNode::createExprFromArray(ExprType::array, (yyvsp[-2].expr_list_union));}
#line 2351 ".\\parser.tab.cpp"
    break;

  case 75: /* expr: '[' linefeed_or_empty ']'  */
#line 226 ".\\parser.y"
                                {(yyval.expr_union)=ExprNode::createExprFromArray(ExprType::emptyArray, NULL);}
#line 2357 ".\\parser.tab.cpp"
    break;

  case 76: /* expr: DEFINED_KEYWORD linefeed_or_empty expr  */
#line 227 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromUnary(ExprType::defined, (yyvsp[0].expr_union));}
#line 2363 ".\\parser.tab.cpp"
    break;

  case 77: /* expr: DOUBLE_COLON_SYMBOL linefeed_or_empty expr  */
#line 228 ".\\parser.y"
                                                        {(yyval.expr_union)=ExprNode::createExprFromUnary(ExprType::doubleColon, (yyvsp[0].expr_union));}
#line 2369 ".\\parser.tab.cpp"
    break;

  case 78: /* expr: expr DOUBLE_COLON_SYMBOL linefeed_or_empty expr  */
#line 229 ".\\parser.y"
                                                          {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::doubleColonWithLeftOperand, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2375 ".\\parser.tab.cpp"
    break;

  case 79: /* expr: expr QUESTION_SYMBOL linefeed_or_empty expr linefeed_or_empty COLON_SYMBOL linefeed_or_empty expr  */
#line 230 ".\\parser.y"
                                                                                                        {(yyval.expr_union)=ExprNode::createExprFromTernary((yyvsp[-7].expr_union), (yyvsp[-4].expr_union), (yyvsp[0].expr_union));}
#line 2381 ".\\parser.tab.cpp"
    break;

  case 84: /* programm_element: class_stmt delimiter  */
#line 241 ".\\parser.y"
                                       {(yyval.programm_el_union)=ProgramElementNode::createClassProgramElementNode((yyvsp[-1].class_stmt_union));}
#line 2387 ".\\parser.tab.cpp"
    break;

  case 85: /* programm_element: method_stmt delimiter  */
#line 242 ".\\parser.y"
                            {(yyval.programm_el_union)=ProgramElementNode::createMethodProgramElementNode((yyvsp[-1].method_union));}
#line 2393 ".\\parser.tab.cpp"
    break;

  case 86: /* programm_element: stmt  */
#line 243 ".\\parser.y"
           {(yyval.programm_el_union)=ProgramElementNode::createStmtProgramElementNode((yyvsp[0].stmt_union));}
#line 2399 ".\\parser.tab.cpp"
    break;

  case 87: /* programm_el_list_not_empty: programm_element  */
#line 246 ".\\parser.y"
                                             {(yyval.programm_el_list_union)=ProgramElementNode::createProgramElementList((yyvsp[0].programm_el_union));}
#line 2405 ".\\parser.tab.cpp"
    break;

  case 88: /* programm_el_list_not_empty: programm_el_list_not_empty programm_element  */
#line 247 ".\\parser.y"
                                                  {(yyval.programm_el_list_union)=ProgramElementNode::addProgramElementToList((yyvsp[-1].programm_el_list_union), (yyvsp[0].programm_el_union));}
#line 2411 ".\\parser.tab.cpp"
    break;

  case 93: /* expr_list: expr  */
#line 256 ".\\parser.y"
                {(yyval.expr_list_union)=ExprNode::createExprList((yyvsp[0].expr_union));}
#line 2417 ".\\parser.tab.cpp"
    break;

  case 94: /* expr_list: expr_list COMMA_SYMBOL expr  */
#line 257 ".\\parser.y"
                                  {(yyval.expr_list_union)=ExprNode::addExprToList((yyvsp[-2].expr_list_union), (yyvsp[0].expr_union));}
#line 2423 ".\\parser.tab.cpp"
    break;

  case 95: /* stmt_list: stmt  */
#line 260 ".\\parser.y"
                {(yyval.stmt_list_union)=StmtNode::createStmtList((yyvsp[0].stmt_union));}
#line 2429 ".\\parser.tab.cpp"
    break;

  case 96: /* stmt_list: stmt_list stmt  */
#line 261 ".\\parser.y"
                     {(yyval.stmt_list_union)=StmtNode::addStmtToList((yyvsp[-1].stmt_list_union), (yyvsp[0].stmt_union));}
#line 2435 ".\\parser.tab.cpp"
    break;

  case 97: /* stmt: expr delimiter  */
#line 264 ".\\parser.y"
                     {(yyval.stmt_union)=StmtNode::createStmtNodeExpr((yyvsp[-1].expr_union));}
#line 2441 ".\\parser.tab.cpp"
    break;

  case 98: /* stmt: if_stmt delimiter  */
#line 265 ".\\parser.y"
                         {(yyval.stmt_union)=StmtNode::createStmtNodeIf((yyvsp[-1].if_union));}
#line 2447 ".\\parser.tab.cpp"
    break;

  case 99: /* stmt: while_stmt delimiter  */
#line 266 ".\\parser.y"
                           {(yyval.stmt_union)=StmtNode::createStmtNodeWhile((yyvsp[-1].while_union));}
#line 2453 ".\\parser.tab.cpp"
    break;

  case 100: /* stmt: for_stmt delimiter  */
#line 267 ".\\parser.y"
                         {(yyval.stmt_union)=StmtNode::createStmtNodeFor((yyvsp[-1].for_union));}
#line 2459 ".\\parser.tab.cpp"
    break;

  case 101: /* stmt: case_stmt delimiter  */
#line 268 ".\\parser.y"
                          {(yyval.stmt_union)=StmtNode::createStmtNodeCase((yyvsp[-1].case_union));}
#line 2465 ".\\parser.tab.cpp"
    break;

  case 102: /* stmt: unless_stmt delimiter  */
#line 269 ".\\parser.y"
                            {(yyval.stmt_union)=StmtNode::createStmtNodeUnless((yyvsp[-1].unless_union));}
#line 2471 ".\\parser.tab.cpp"
    break;

  case 103: /* stmt: return_stmt delimiter  */
#line 270 ".\\parser.y"
                            {(yyval.stmt_union)=StmtNode::createStmtNodeReturn((yyvsp[-1].return_union));}
#line 2477 ".\\parser.tab.cpp"
    break;

  case 104: /* stmt: alias_stmt delimiter  */
#line 271 ".\\parser.y"
                           {(yyval.stmt_union)=StmtNode::createStmtNodeAlias((yyvsp[-1].alias_union));}
#line 2483 ".\\parser.tab.cpp"
    break;

  case 105: /* param_list_not_empty: IDENTIFIER linefeed_or_empty  */
#line 274 ".\\parser.y"
                                                    {(yyval.param_list_union)=MethodStmtNode::createParamList((yyvsp[-1].Str));}
#line 2489 ".\\parser.tab.cpp"
    break;

  case 106: /* param_list_not_empty: param_list_not_empty COMMA_SYMBOL linefeed_or_empty IDENTIFIER linefeed_or_empty  */
#line 275 ".\\parser.y"
                                                                                        {(yyval.param_list_union)=MethodStmtNode::addParametrToList((yyvsp[-4].param_list_union), (yyvsp[-1].Str));}
#line 2495 ".\\parser.tab.cpp"
    break;

  case 107: /* param_list: %empty  */
#line 278 ".\\parser.y"
                        {(yyval.param_list_union)=NULL;}
#line 2501 ".\\parser.tab.cpp"
    break;

  case 108: /* param_list: param_list_not_empty  */
#line 279 ".\\parser.y"
                            {(yyval.param_list_union)=(yyvsp[0].param_list_union);}
#line 2507 ".\\parser.tab.cpp"
    break;

  case 109: /* method_stmt: DEF_KEYWORD linefeed_or_empty IDENTIFIER '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD  */
#line 282 ".\\parser.y"
                                                                                                                            {(yyval.method_union)=MethodStmtNode::createMethodStmt(MethodType::simple, (yyvsp[-7].Str), (yyvsp[-4].param_list_union), (yyvsp[-1].stmt_list_union));}
#line 2513 ".\\parser.tab.cpp"
    break;

  case 110: /* method_stmt: DEF_KEYWORD linefeed_or_empty METHOD_MARK_QUESTION '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD  */
#line 283 ".\\parser.y"
                                                                                                                                {(yyval.method_union)=MethodStmtNode::createMethodStmt(MethodType::markQuestion, (yyvsp[-7].Str), (yyvsp[-4].param_list_union), (yyvsp[-1].stmt_list_union));}
#line 2519 ".\\parser.tab.cpp"
    break;

  case 111: /* method_stmt: DEF_KEYWORD linefeed_or_empty IDENTIFIER delimiter stmt_list END_KEYWORD  */
#line 284 ".\\parser.y"
                                                                                {(yyval.method_union)=MethodStmtNode::createMethodStmtWithoutParams(MethodType::simple, (yyvsp[-3].Str), (yyvsp[-1].stmt_list_union));}
#line 2525 ".\\parser.tab.cpp"
    break;

  case 112: /* method_stmt: DEF_KEYWORD linefeed_or_empty METHOD_MARK_QUESTION delimiter stmt_list END_KEYWORD  */
#line 285 ".\\parser.y"
                                                                                            {(yyval.method_union)=MethodStmtNode::createMethodStmtWithoutParams(MethodType::markQuestion, (yyvsp[-3].Str), (yyvsp[-1].stmt_list_union));}
#line 2531 ".\\parser.tab.cpp"
    break;

  case 113: /* method_stmt: DEF_KEYWORD linefeed_or_empty METHOD_MARK_EXCLAMATION '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD  */
#line 286 ".\\parser.y"
                                                                                                                                    {(yyval.method_union)=MethodStmtNode::createMethodStmt(MethodType::markExclamation, (yyvsp[-7].Str), (yyvsp[-4].param_list_union), (yyvsp[-1].stmt_list_union));}
#line 2537 ".\\parser.tab.cpp"
    break;

  case 114: /* method_stmt: DEF_KEYWORD linefeed_or_empty METHOD_MARK_EXCLAMATION delimiter stmt_list END_KEYWORD  */
#line 287 ".\\parser.y"
                                                                                            {(yyval.method_union)=MethodStmtNode::createMethodStmtWithoutParams(MethodType::markExclamation, (yyvsp[-3].Str), (yyvsp[-1].stmt_list_union));}
#line 2543 ".\\parser.tab.cpp"
    break;

  case 115: /* method_stmt: DEF_KEYWORD linefeed_or_empty METHOD_MARK_EQUAL '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD  */
#line 288 ".\\parser.y"
                                                                                                                            {(yyval.method_union)=MethodStmtNode::createMethodStmt(MethodType::markEqual, (yyvsp[-7].Str), (yyvsp[-4].param_list_union), (yyvsp[-1].stmt_list_union));}
#line 2549 ".\\parser.tab.cpp"
    break;

  case 116: /* method_stmt: DEF_KEYWORD linefeed_or_empty METHOD_MARK_EQUAL delimiter stmt_list END_KEYWORD  */
#line 289 ".\\parser.y"
                                                                                        {(yyval.method_union)=MethodStmtNode::createMethodStmtWithoutParams(MethodType::markEqual, (yyvsp[-3].Str), (yyvsp[-1].stmt_list_union));}
#line 2555 ".\\parser.tab.cpp"
    break;

  case 117: /* class_stmt: CLASS_KEYWORD linefeed_or_empty CONSTANT_NAME delimiter class_body END_KEYWORD  */
#line 292 ".\\parser.y"
                                                                                            {(yyval.class_stmt_union)=ClassStmtNode::createClassStmt((yyvsp[-3].Str), (yyvsp[-1].class_body_union));}
#line 2561 ".\\parser.tab.cpp"
    break;

  case 118: /* class_stmt: CLASS_KEYWORD linefeed_or_empty CONSTANT_NAME '<' CONSTANT_NAME delimiter class_body END_KEYWORD  */
#line 293 ".\\parser.y"
                                                                                                       {(yyval.class_stmt_union)=ClassStmtNode::createClassStmtWithParent((yyvsp[-5].Str), (yyvsp[-3].Str), (yyvsp[-1].class_body_union));}
#line 2567 ".\\parser.tab.cpp"
    break;

  case 119: /* class_body_stmt: method_stmt delimiter  */
#line 296 ".\\parser.y"
                                        {(yyval.class_body_stmt_union)=ClassBodyStmtNode::createClassBodyStmtMethod((yyvsp[-1].method_union));}
#line 2573 ".\\parser.tab.cpp"
    break;

  case 120: /* class_body_stmt: CLASS_VAR_NAME delimiter  */
#line 297 ".\\parser.y"
                                {(yyval.class_body_stmt_union)=ClassBodyStmtNode::createClassBodyStmtClassVarName((yyvsp[-1].Str), NULL);}
#line 2579 ".\\parser.tab.cpp"
    break;

  case 121: /* class_body_stmt: CLASS_VAR_NAME '=' expr delimiter  */
#line 298 ".\\parser.y"
                                        {(yyval.class_body_stmt_union)=ClassBodyStmtNode::createClassBodyStmtClassVarName((yyvsp[-3].Str), (yyvsp[-1].expr_union));}
#line 2585 ".\\parser.tab.cpp"
    break;

  case 122: /* class_body_stmt: OBJECT_VAR_NAME delimiter  */
#line 299 ".\\parser.y"
                                {(yyval.class_body_stmt_union)=ClassBodyStmtNode::createClassBodyStmtobjectVarName((yyvsp[-1].Str), NULL);}
#line 2591 ".\\parser.tab.cpp"
    break;

  case 123: /* class_body_stmt: OBJECT_VAR_NAME '=' expr delimiter  */
#line 300 ".\\parser.y"
                                            {(yyval.class_body_stmt_union)=ClassBodyStmtNode::createClassBodyStmtobjectVarName((yyvsp[-3].Str), (yyvsp[-1].expr_union));}
#line 2597 ".\\parser.tab.cpp"
    break;

  case 124: /* class_body_not_empty: class_body_stmt  */
#line 303 ".\\parser.y"
                                        {(yyval.class_body_union)=ClassBodyStmtNode::createClassBody((yyvsp[0].class_body_stmt_union));}
#line 2603 ".\\parser.tab.cpp"
    break;

  case 125: /* class_body_not_empty: class_body_not_empty class_body_stmt  */
#line 304 ".\\parser.y"
                                            {(yyval.class_body_union)=ClassBodyStmtNode::addStmtToClassBody((yyvsp[-1].class_body_union), (yyvsp[0].class_body_stmt_union));}
#line 2609 ".\\parser.tab.cpp"
    break;

  case 126: /* class_body: %empty  */
#line 307 ".\\parser.y"
                        {(yyval.class_body_union)=NULL;}
#line 2615 ".\\parser.tab.cpp"
    break;

  case 127: /* class_body: class_body_not_empty  */
#line 308 ".\\parser.y"
                            {(yyval.class_body_union)=(yyvsp[0].class_body_union);}
#line 2621 ".\\parser.tab.cpp"
    break;

  case 130: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD  */
#line 315 ".\\parser.y"
                                                                            {(yyval.if_union)=IfStmtNode::createIfStmt((yyvsp[-3].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2627 ".\\parser.tab.cpp"
    break;

  case 131: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list END_KEYWORD  */
#line 316 ".\\parser.y"
                                                                                                {(yyval.if_union)=IfStmtNode::createIfStmt((yyvsp[-4].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2633 ".\\parser.tab.cpp"
    break;

  case 132: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimiter stmt_list ELSE_KEYWORD stmt_list END_KEYWORD  */
#line 317 ".\\parser.y"
                                                                                                {(yyval.if_union)=IfStmtNode::createIfStmtWithElse((yyvsp[-5].expr_union), (yyvsp[-3].stmt_list_union), (yyvsp[-1].stmt_list_union));}
#line 2639 ".\\parser.tab.cpp"
    break;

  case 133: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list ELSE_KEYWORD stmt_list END_KEYWORD  */
#line 318 ".\\parser.y"
                                                                                                                        {(yyval.if_union)=IfStmtNode::createIfStmtWithElse((yyvsp[-6].expr_union), (yyvsp[-3].stmt_list_union), (yyvsp[-1].stmt_list_union));}
#line 2645 ".\\parser.tab.cpp"
    break;

  case 134: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimiter stmt_list elsif_list END_KEYWORD  */
#line 319 ".\\parser.y"
                                                                                    {(yyval.if_union)=IfStmtNode::createIfStmtWithElsif((yyvsp[-4].expr_union), (yyvsp[-2].stmt_list_union), (yyvsp[-1].elsif_list_union));}
#line 2651 ".\\parser.tab.cpp"
    break;

  case 135: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list elsif_list END_KEYWORD  */
#line 320 ".\\parser.y"
                                                                                                            {(yyval.if_union)=IfStmtNode::createIfStmtWithElsif((yyvsp[-5].expr_union), (yyvsp[-2].stmt_list_union), (yyvsp[-1].elsif_list_union));}
#line 2657 ".\\parser.tab.cpp"
    break;

  case 136: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimiter stmt_list elsif_list ELSE_KEYWORD stmt_list END_KEYWORD  */
#line 321 ".\\parser.y"
                                                                                                            {(yyval.if_union)=IfStmtNode::createIfStmtWithElseAndElsif((yyvsp[-6].expr_union), (yyvsp[-4].stmt_list_union), (yyvsp[-3].elsif_list_union), (yyvsp[-1].stmt_list_union));}
#line 2663 ".\\parser.tab.cpp"
    break;

  case 137: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list elsif_list ELSE_KEYWORD stmt_list END_KEYWORD  */
#line 322 ".\\parser.y"
                                                                                                                                {(yyval.if_union)=IfStmtNode::createIfStmtWithElseAndElsif((yyvsp[-7].expr_union), (yyvsp[-4].stmt_list_union), (yyvsp[-3].elsif_list_union), (yyvsp[-1].stmt_list_union));}
#line 2669 ".\\parser.tab.cpp"
    break;

  case 138: /* if_stmt: expr IF_KEYWORD linefeed_or_empty expr  */
#line 323 ".\\parser.y"
                                                {(yyval.if_union)=IfStmtNode::createSingleLineIfStmt((yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2675 ".\\parser.tab.cpp"
    break;

  case 139: /* unless_stmt: UNLESS_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list END_KEYWORD  */
#line 326 ".\\parser.y"
                                                                                                            {(yyval.unless_union)=UnlessStmtNode::createUnlessStmt((yyvsp[-4].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2681 ".\\parser.tab.cpp"
    break;

  case 140: /* unless_stmt: UNLESS_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD  */
#line 327 ".\\parser.y"
                                                                            {(yyval.unless_union)=UnlessStmtNode::createUnlessStmt((yyvsp[-3].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2687 ".\\parser.tab.cpp"
    break;

  case 141: /* unless_stmt: UNLESS_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list ELSE_KEYWORD stmt_list END_KEYWORD  */
#line 328 ".\\parser.y"
                                                                                                                            {(yyval.unless_union)=UnlessStmtNode::createUnlessStmtwithElse((yyvsp[-6].expr_union), (yyvsp[-3].stmt_list_union), (yyvsp[-1].stmt_list_union));}
#line 2693 ".\\parser.tab.cpp"
    break;

  case 142: /* unless_stmt: UNLESS_KEYWORD linefeed_or_empty expr delimiter stmt_list ELSE_KEYWORD stmt_list END_KEYWORD  */
#line 329 ".\\parser.y"
                                                                                                    {(yyval.unless_union)=UnlessStmtNode::createUnlessStmtwithElse((yyvsp[-5].expr_union), (yyvsp[-3].stmt_list_union), (yyvsp[-1].stmt_list_union));}
#line 2699 ".\\parser.tab.cpp"
    break;

  case 143: /* unless_stmt: expr UNLESS_KEYWORD linefeed_or_empty expr  */
#line 330 ".\\parser.y"
                                                    {(yyval.unless_union)=UnlessStmtNode::createSingleLineUnlessStmt((yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2705 ".\\parser.tab.cpp"
    break;

  case 144: /* elsif_list: elsif_stmt  */
#line 333 ".\\parser.y"
                        {(yyval.elsif_list_union)=ElsifNode::createElsifList((yyvsp[0].elsif_union));}
#line 2711 ".\\parser.tab.cpp"
    break;

  case 145: /* elsif_list: elsif_list elsif_stmt  */
#line 334 ".\\parser.y"
                            {(yyval.elsif_list_union)=ElsifNode::addElsifToList((yyvsp[-1].elsif_list_union), (yyvsp[0].elsif_union));}
#line 2717 ".\\parser.tab.cpp"
    break;

  case 146: /* elsif_stmt: ELSIF_KEYWORD linefeed_or_empty expr delimiter stmt_list  */
#line 337 ".\\parser.y"
                                                                        {(yyval.elsif_union)=ElsifNode::createElsifStmt((yyvsp[-2].expr_union), (yyvsp[0].stmt_list_union));}
#line 2723 ".\\parser.tab.cpp"
    break;

  case 147: /* elsif_stmt: ELSIF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list  */
#line 338 ".\\parser.y"
                                                                                        {(yyval.elsif_union)=ElsifNode::createElsifStmt((yyvsp[-3].expr_union), (yyvsp[0].stmt_list_union));}
#line 2729 ".\\parser.tab.cpp"
    break;

  case 148: /* while_stmt: WHILE_KEYWORD linefeed_or_empty expr DO_KEYWORD delimeter_or_empty stmt_list END_KEYWORD  */
#line 341 ".\\parser.y"
                                                                                                        {(yyval.while_union)=WhileStmtNode::createWhileStmtNode((yyvsp[-4].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2735 ".\\parser.tab.cpp"
    break;

  case 149: /* while_stmt: WHILE_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD  */
#line 342 ".\\parser.y"
                                                                            {(yyval.while_union)=WhileStmtNode::createWhileStmtNode((yyvsp[-3].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2741 ".\\parser.tab.cpp"
    break;

  case 150: /* for_stmt: FOR_KEYWORD linefeed_or_empty expr IN_KEYWORD linefeed_or_empty expr DO_KEYWORD delimeter_or_empty stmt_list END_KEYWORD  */
#line 345 ".\\parser.y"
                                                                                                                                    {(yyval.for_union)=ForStmtNode::createForStmtNode((yyvsp[-7].expr_union), (yyvsp[-4].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2747 ".\\parser.tab.cpp"
    break;

  case 151: /* for_stmt: FOR_KEYWORD linefeed_or_empty expr IN_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD  */
#line 346 ".\\parser.y"
                                                                                                            {(yyval.for_union)=ForStmtNode::createForStmtNode((yyvsp[-6].expr_union), (yyvsp[-3].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2753 ".\\parser.tab.cpp"
    break;

  case 152: /* return_stmt: RETURN_KEYWORD expr  */
#line 349 ".\\parser.y"
                                 {(yyval.return_union)=ReturnStmtNode::createReturnStmt((yyvsp[0].expr_union));}
#line 2759 ".\\parser.tab.cpp"
    break;

  case 153: /* return_stmt: RETURN_KEYWORD  */
#line 350 ".\\parser.y"
                     {(yyval.return_union)=ReturnStmtNode::createSingleReturnStmt();}
#line 2765 ".\\parser.tab.cpp"
    break;

  case 154: /* case_stmt: CASE_KEYWORD linefeed_or_empty expr delimeter_or_empty when_list END_KEYWORD  */
#line 353 ".\\parser.y"
                                                                                        {(yyval.case_union)=CaseStmtNode::createCaseStmt((yyvsp[-3].expr_union), (yyvsp[-1].when_list_union));}
#line 2771 ".\\parser.tab.cpp"
    break;

  case 155: /* case_stmt: CASE_KEYWORD linefeed_or_empty expr delimeter_or_empty when_list ELSE_KEYWORD delimeter_or_empty stmt_list END_KEYWORD  */
#line 354 ".\\parser.y"
                                                                                                                                {(yyval.case_union)=CaseStmtNode::createCaseStmtWithElse((yyvsp[-6].expr_union), (yyvsp[-4].when_list_union), (yyvsp[-1].stmt_list_union));}
#line 2777 ".\\parser.tab.cpp"
    break;

  case 156: /* when_list: when_stmt  */
#line 357 ".\\parser.y"
                        {(yyval.when_list_union)=WhenStmtNode::createWhenList((yyvsp[0].when_union));}
#line 2783 ".\\parser.tab.cpp"
    break;

  case 157: /* when_list: when_list when_stmt  */
#line 358 ".\\parser.y"
                            {(yyval.when_list_union)=WhenStmtNode::addWhenToList((yyvsp[-1].when_list_union), (yyvsp[0].when_union));}
#line 2789 ".\\parser.tab.cpp"
    break;

  case 158: /* when_stmt: WHEN_KEYWORD linefeed_or_empty expr_list delimiter stmt_list  */
#line 361 ".\\parser.y"
                                                                        {(yyval.when_union)=WhenStmtNode::createWhenStmt((yyvsp[-2].expr_list_union), (yyvsp[0].stmt_list_union));}
#line 2795 ".\\parser.tab.cpp"
    break;

  case 159: /* when_stmt: WHEN_KEYWORD linefeed_or_empty expr_list delimeter_or_empty THEN_KEYWORD stmt_list  */
#line 362 ".\\parser.y"
                                                                                            {(yyval.when_union)=WhenStmtNode::createWhenStmt((yyvsp[-3].expr_list_union), (yyvsp[0].stmt_list_union));}
#line 2801 ".\\parser.tab.cpp"
    break;

  case 160: /* alias_stmt: ALIAS_KEYWORD IDENTIFIER IDENTIFIER  */
#line 365 ".\\parser.y"
                                                {(yyval.alias_union)=AliasStmtNode::createAliasStmt((yyvsp[-1].Str), (yyvsp[0].Str));}
#line 2807 ".\\parser.tab.cpp"
    break;


#line 2811 ".\\parser.tab.cpp"

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

#line 367 ".\\parser.y"


void yyerror(char* str) {
    fprintf(stderr, "ERROR: %s\n", str);
}
