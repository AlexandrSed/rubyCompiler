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
    extern  std::vector<ProgramElementNode*>* root;
    void yyerror(char* str);

#line 78 "parser.tab.cpp"

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
#define YYLAST   2801

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  86
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  449

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
       0,   149,   149,   150,   153,   156,   157,   161,   165,   166,
     167,   168,   169,   170,   171,   175,   176,   177,   178,   179,
     180,   181,   182,   183,   184,   185,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     242,   243,   246,   247,   250,   251,   252,   255,   256,   259,
     260,   261,   262,   265,   266,   269,   270,   273,   274,   275,
     276,   277,   278,   279,   280,   283,   284,   287,   288,   291,
     292,   293,   294,   295,   296,   297,   298,   301,   302,   305,
     306,   307,   308,   309,   312,   313,   316,   317,   320,   321,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   335,
     336,   337,   338,   339,   342,   343,   346,   347,   350,   351,
     354,   355,   358,   359,   362,   363,   366,   367,   370,   371,
     374
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
     855,   -70,   -44,   -44,   -44,   -44,   -44,  -320,   -44,  -320,
     587,   -37,   -29,  -320,   -44,   -44,   -28,   -44,   -44,   -44,
     -44,   -44,  -320,  -320,  -320,   -24,  -320,  -320,  -320,    44,
    2340,  -320,   855,  -320,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -33,  -320,   587,   -22,   -30,   -19,   587,
     587,   587,  2531,   -44,   -44,   587,   587,   -44,   587,   587,
     587,   548,   587,   -44,  -320,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,  -320,  -320,    67,  -320,    67,    67,
      67,    67,    67,    67,    67,    67,    67,  -320,  2435,  -320,
     -55,    70,    71,    96,    99,  2574,  2435,  2389,    86,  2147,
    2435,  2230,   587,   127,   127,  2484,  -320,  2531,   -49,  -320,
    2173,   587,   587,   587,   587,   587,   587,   587,   587,   587,
     587,   587,   587,   587,   587,   587,   587,   587,   587,   587,
     587,   587,   587,   587,   587,   587,   587,   587,   587,   587,
     587,   587,   587,   587,   587,   587,   587,    30,   587,   587,
    -320,  -320,    67,    35,    24,    27,   -44,   881,   -44,   881,
     -44,   881,   -44,   881,   881,    39,   -44,    54,    72,    84,
      98,  -320,   -49,   881,   148,   -54,   881,  2484,   107,   587,
     109,  -320,   -49,  2531,  2531,  2574,  2574,  2574,  2574,  2574,
    2574,  2574,  2574,  2574,  2484,  2640,  2640,  2671,  2701,  2727,
    2727,  2727,  2727,    69,    69,    69,    69,   240,   240,   287,
     159,   159,   -25,   -25,   127,   127,   127,   127,   106,  -320,
     112,   114,   118,   120,  2484,  -320,   -44,   108,  -320,   -54,
      75,    87,   -54,  -320,    23,   177,   110,  1071,  -320,   110,
    1097,   110,  1179,   110,  1205,   747,  2069,   587,   -44,   -44,
     -44,   -44,   128,   963,  2069,  2069,  1287,   141,  -320,  2531,
    -320,   143,   155,   -44,   -44,   -44,   -44,   139,   587,   -54,
    -320,  -320,    27,   587,    67,   587,    67,    67,  -320,  -320,
     -44,   147,   164,  -320,  -320,   166,  -320,   167,  -320,   168,
    -320,   -44,   -44,  -320,   105,  -320,   773,  2285,   587,   587,
     587,   587,  -320,  2069,  -320,   989,  1313,  -320,  -320,  -320,
     -44,   587,   587,   587,   587,  -320,   131,  2069,   225,  2435,
    2435,  -320,   -44,   -54,   -54,   -54,   -54,  2069,   587,   -44,
    -320,  -320,   -44,  -320,   192,   -54,   881,   -49,   -49,   -49,
     -49,  1395,  2069,  -320,  -320,   587,   -49,   -49,   -49,   -49,
     881,   217,  1421,  -320,    67,    67,   165,   881,   881,   881,
     881,  1503,  2435,  2069,  2069,   -44,  -320,  2069,  1529,   179,
     180,   183,   185,  -320,  1611,  2608,   187,   188,   189,   190,
    2069,  2069,  -320,   -44,  1637,  1719,  1745,  1827,  -320,   881,
     238,  1853,  1935,  2069,  1961,  -320,  -320,  -320,  -320,  -320,
    -320,  -320,  -320,  -320,  -320,  2069,  -320,  -320,  -320,  -320,
    -320,  2069,  2069,  -320,  -320,  2043,  -320,  2069,  -320
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
     111,    80,    80,   130,     0,   144,     0,     0,     0,     0,
       0,     0,    26,     0,   140,     0,     0,   149,    46,    23,
      80,     0,     0,     0,     0,    15,   128,     0,     0,     0,
       0,   105,    80,     0,     0,     0,     0,     0,     0,    80,
     134,   145,    80,   131,     0,   128,     0,    80,    80,    80,
      80,     0,     0,   139,   148,     0,    80,    80,    80,    80,
     129,     0,     0,   118,   123,   121,     0,     0,     0,     0,
       0,     0,   128,     0,     0,    80,   135,     0,     0,     0,
       0,     0,     0,   142,     0,    79,     0,     0,     0,     0,
     158,     0,   155,    80,     0,     0,     0,     0,   132,   129,
       0,     0,     0,     0,     0,   151,    33,    35,    37,    31,
     141,    39,    41,    43,    29,   159,   106,   110,   113,   115,
     109,   146,     0,   136,   133,     0,   150,   147,   137
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -320,  -320,   378,    -2,  -320,   228,  -320,   119,  -115,   306,
       0,  -320,  -101,    10,  -320,    -3,  -320,   -40,  -102,  -320,
    -320,   -62,  -319,  -320,  -320,  -320,  -320,  -320,     8,  -320
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
      34,    43,    55,    56,   202,    58,    59,    60,    61,    62,
     104,   104,   105,   105,   195,   212,    44,   209,   204,     4,
     184,    44,    33,     4,    53,    96,    97,    98,    54,    57,
      99,   100,    34,    63,    64,   361,   101,   102,   117,   103,
     249,   128,   129,   119,   120,   132,   250,   251,   252,   256,
     276,   140,   124,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   285,   181,   260,   261,   303,   259,   260,
     261,   253,   197,   198,   199,   359,   322,   360,   299,   305,
     300,   278,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   256,   208,    99,   100,   210,   186,   188,   279,
     101,   102,   180,   103,   181,   104,   104,   105,   105,   106,
     104,   280,   105,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   104,   190,   105,   281,   192,   200,   315,   284,
     317,   104,   319,   105,   104,   288,   105,   101,   102,   293,
     103,   294,   290,   346,   266,   295,   269,   296,   271,   309,
     273,   310,    99,   100,   277,   340,   332,   347,   101,   102,
     282,   103,   395,   322,   396,   287,   104,   209,   105,   338,
     291,   339,   345,   367,   368,   369,   370,    94,    95,    96,
      97,    98,   292,   352,    99,   100,   376,   377,   378,   379,
     101,   102,   353,   103,   354,   355,   356,   383,   411,   185,
     187,   189,   191,   193,   381,   194,   413,   426,   427,   203,
     206,   428,   297,   429,   298,   431,   432,   433,   434,   442,
     107,   308,   348,   397,   364,   301,     0,   314,     0,     0,
     314,     0,   314,     0,   314,   314,   328,   329,   330,   331,
       0,     0,     0,   314,     0,     0,   314,     0,     0,     0,
     420,   341,   342,   343,   344,    91,    92,    93,    94,    95,
      96,    97,    98,     0,     0,    99,   100,     0,   351,     0,
       0,   101,   102,     0,   103,     0,     0,     0,     0,   357,
     358,     0,     0,     0,     0,     0,   314,     0,     0,     0,
       0,     0,     0,     0,     0,   314,   314,     0,   375,     0,
       0,     0,     0,    92,    93,    94,    95,    96,    97,    98,
     386,     0,    99,   100,     0,     0,     0,   393,   101,   102,
     394,   103,     0,     0,     0,   399,   400,   401,   402,     0,
       0,   314,     0,     0,   406,   407,   408,   409,   302,   304,
     306,   307,   314,     0,     0,     0,     0,     0,    52,     0,
       0,   314,     0,   423,     0,     0,     0,     0,   314,     0,
       0,     0,     0,     0,   314,     0,     0,     0,     0,     0,
     314,   436,     0,     0,   314,   314,   314,   314,     0,     0,
       0,   314,   314,   118,   314,     0,     0,   125,   126,   127,
       0,     0,     0,   130,   131,   314,   133,   134,   135,   137,
     139,   314,     0,     0,     0,   314,   366,   314,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   380,     0,     0,   384,   385,
       0,     0,   387,   388,   389,   390,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   270,     0,   272,     0,   274,
     275,     0,     0,     0,     0,     0,     0,   137,     0,   283,
     207,   419,   286,     0,     0,     0,     0,     0,   137,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248,     5,   254,   255,     0,     0,
       0,     7,     0,     0,     9,     0,    11,    12,     0,     0,
      13,     0,     0,     0,     0,     0,     0,     0,     0,    16,
       0,     0,   326,     0,     0,     0,     0,   289,     0,     0,
     335,   336,     0,     0,     5,     0,     0,     0,     0,     0,
       7,     0,     0,     9,     0,    11,    12,    17,     0,    13,
       0,     0,    18,     0,     0,    19,     0,     0,    16,     0,
      20,   136,    21,     0,     0,     0,    22,    23,    24,    25,
      26,    27,    28,     0,     0,     0,     0,     0,     0,   371,
       0,     0,     0,     0,     0,     0,    17,     0,     0,     0,
       0,    18,     0,   382,    19,   327,     0,     0,     0,    20,
       0,    21,     0,   391,     0,    22,    23,    24,    25,    26,
      27,    28,   398,     0,     0,     0,   137,     0,   404,     0,
       0,   349,     0,   350,     0,     0,   410,     0,     0,     0,
       0,     0,     0,   414,   415,   416,   417,     0,     0,   421,
     422,     0,     0,   424,     0,     0,   137,   137,   137,   137,
       0,     0,     0,     0,     0,     0,     0,   435,     0,   137,
     137,   137,   137,     0,     0,   441,     0,     0,     0,   445,
       0,     0,     0,     0,     0,     0,   392,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   447,     0,
       1,     2,     0,   405,     5,     0,     6,   321,   322,   323,
       7,     8,     0,     9,    10,    11,    12,     0,     0,    13,
      14,     0,    15,     0,     0,     0,     1,     2,    16,     0,
       5,     0,     6,   362,   322,   363,     7,     8,     0,     9,
      10,    11,    12,     0,     0,    13,    14,     0,    15,     0,
       0,     0,     0,     0,    16,     0,    17,     0,     0,     0,
       0,    18,     0,     0,    19,     0,     0,     0,     0,    20,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    17,     0,     0,     0,     0,    18,     0,     0,
      19,     0,     0,     0,     0,    20,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,     1,     2,
       3,     4,     5,     0,     6,     0,     0,     0,     7,     8,
       0,     9,    10,    11,    12,     0,     0,    13,    14,     0,
      15,     0,     0,     0,     1,     2,    16,     0,     5,     0,
       6,     0,     0,     0,     7,     8,     0,     9,    10,    11,
      12,     0,     0,    13,    14,     0,    15,     0,     0,     0,
       0,     0,    16,     0,    17,     0,     0,     0,     0,    18,
       0,     0,    19,     0,     0,     0,     0,    20,     0,    21,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      17,     0,     0,     0,     0,    18,     0,     0,    19,     0,
       0,     0,     0,    20,     0,    21,   180,     0,   181,    22,
      23,    24,    25,    26,    27,    28,     1,     2,     0,     0,
       5,     0,     6,   333,     0,   334,     7,     8,     0,     9,
      10,    11,    12,     0,     0,    13,    14,     0,    15,     0,
       0,     0,     1,     2,    16,     0,     5,     0,     6,   372,
       0,   373,     7,     8,     0,     9,    10,    11,    12,     0,
       0,    13,    14,     0,    15,     0,     0,     0,     0,     0,
      16,     0,    17,     0,     0,     0,     0,    18,     0,     0,
      19,     0,     0,     0,     0,    20,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    17,     0,
       0,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       0,    20,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,     1,     2,     0,     0,     5,     0,
       6,     0,     0,   313,     7,     8,     0,     9,    10,    11,
      12,     0,     0,    13,    14,     0,    15,     0,     0,     0,
       1,     2,    16,     0,     5,     0,     6,     0,     0,   316,
       7,     8,     0,     9,    10,    11,    12,     0,     0,    13,
      14,     0,    15,     0,     0,     0,     0,     0,    16,     0,
      17,     0,     0,     0,     0,    18,     0,     0,    19,     0,
       0,     0,     0,    20,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    17,     0,     0,     0,
       0,    18,     0,     0,    19,     0,     0,     0,     0,    20,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,     1,     2,     0,     0,     5,     0,     6,     0,
       0,   318,     7,     8,     0,     9,    10,    11,    12,     0,
       0,    13,    14,     0,    15,     0,     0,     0,     1,     2,
      16,     0,     5,     0,     6,     0,     0,   320,     7,     8,
       0,     9,    10,    11,    12,     0,     0,    13,    14,     0,
      15,     0,     0,     0,     0,     0,    16,     0,    17,     0,
       0,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       0,    20,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    17,     0,     0,     0,     0,    18,
       0,     0,    19,     0,     0,     0,     0,    20,     0,    21,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
       1,     2,     0,     0,     5,     0,     6,     0,     0,   337,
       7,     8,     0,     9,    10,    11,    12,     0,     0,    13,
      14,     0,    15,     0,     0,     0,     1,     2,    16,     0,
       5,     0,     6,     0,     0,   374,     7,     8,     0,     9,
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
       5,     0,     6,     0,     0,   418,     7,     8,     0,     9,
      10,    11,    12,     0,     0,    13,    14,     0,    15,     0,
       0,     0,     1,     2,    16,     0,     5,     0,     6,     0,
       0,   425,     7,     8,     0,     9,    10,    11,    12,     0,
       0,    13,    14,     0,    15,     0,     0,     0,     0,     0,
      16,     0,    17,     0,     0,     0,     0,    18,     0,     0,
      19,     0,     0,     0,     0,    20,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    17,     0,
       0,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       0,    20,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,     1,     2,     0,     0,     5,     0,
       6,     0,     0,   430,     7,     8,     0,     9,    10,    11,
      12,     0,     0,    13,    14,     0,    15,     0,     0,     0,
       1,     2,    16,     0,     5,     0,     6,     0,     0,   437,
       7,     8,     0,     9,    10,    11,    12,     0,     0,    13,
      14,     0,    15,     0,     0,     0,     0,     0,    16,     0,
      17,     0,     0,     0,     0,    18,     0,     0,    19,     0,
       0,     0,     0,    20,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,    17,     0,     0,     0,
       0,    18,     0,     0,    19,     0,     0,     0,     0,    20,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,     1,     2,     0,     0,     5,     0,     6,     0,
       0,   438,     7,     8,     0,     9,    10,    11,    12,     0,
       0,    13,    14,     0,    15,     0,     0,     0,     1,     2,
      16,     0,     5,     0,     6,     0,     0,   439,     7,     8,
       0,     9,    10,    11,    12,     0,     0,    13,    14,     0,
      15,     0,     0,     0,     0,     0,    16,     0,    17,     0,
       0,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       0,    20,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,    17,     0,     0,     0,     0,    18,
       0,     0,    19,     0,     0,     0,     0,    20,     0,    21,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
       1,     2,     0,     0,     5,     0,     6,     0,     0,   440,
       7,     8,     0,     9,    10,    11,    12,     0,     0,    13,
      14,     0,    15,     0,     0,     0,     1,     2,    16,     0,
       5,     0,     6,     0,     0,   443,     7,     8,     0,     9,
      10,    11,    12,     0,     0,    13,    14,     0,    15,     0,
       0,     0,     0,     0,    16,     0,    17,     0,     0,     0,
       0,    18,     0,     0,    19,     0,     0,     0,     0,    20,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    17,     0,     0,     0,     0,    18,     0,     0,
      19,     0,     0,     0,     0,    20,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,     1,     2,
       0,     0,     5,     0,     6,     0,     0,   444,     7,     8,
       0,     9,    10,    11,    12,     0,     0,    13,    14,     0,
      15,     0,     0,     0,     1,     2,    16,     0,     5,     0,
       6,     0,     0,   446,     7,     8,     0,     9,    10,    11,
      12,     0,     0,    13,    14,     0,    15,     0,     0,     0,
       0,     0,    16,     0,    17,     0,     0,     0,     0,    18,
       0,     0,    19,     0,     0,     0,     0,    20,     0,    21,
       0,     0,     0,    22,    23,    24,    25,    26,    27,    28,
      17,     0,     0,     0,     0,    18,     0,     0,    19,     0,
       0,     0,     0,    20,     0,    21,     0,     0,     0,    22,
      23,    24,    25,    26,    27,    28,     1,     2,     0,     0,
       5,     0,     6,     0,     0,   448,     7,     8,     0,     9,
      10,    11,    12,     0,     0,    13,    14,     0,    15,     0,
       0,     0,     1,     2,    16,     0,     5,     0,     6,     0,
       0,     0,     7,     8,     0,     9,    10,    11,    12,     0,
       0,    13,    14,     0,    15,     0,     0,     0,     0,     0,
      16,     0,    17,     0,     0,     0,     0,    18,     0,     0,
      19,     0,     0,     0,     0,    20,     0,    21,     0,     0,
       0,    22,    23,    24,    25,    26,    27,    28,    17,     0,
       0,     0,     0,    18,     0,     0,    19,     0,     0,     0,
       0,    20,     0,    21,     0,     0,     0,    22,    23,    24,
      25,    26,    27,    28,     5,     0,     0,     0,     0,     0,
       7,     0,     0,     9,     0,    11,    12,     0,     0,    13,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       5,     0,     0,     0,     0,     0,     7,     0,     0,     9,
       0,    11,    12,     0,     0,    13,     0,     0,     0,     0,
       0,     0,     0,     0,    16,     0,    17,     0,     0,     0,
       0,    18,     0,     0,    19,   201,     0,     0,     0,    20,
       0,    21,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    17,     0,     0,     0,     0,    18,   205,     0,
      19,   211,     0,     0,     0,    20,     0,    21,     0,     0,
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
       0,     0,   101,   102,     0,   103,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
       0,     0,    99,   100,     0,     0,     0,     0,   101,   102,
       0,   103
};

static const yytype_int16 yycheck[] =
{
       0,     3,     4,     5,     6,   324,     8,    26,    27,    28,
       0,    81,    14,    15,   129,    17,    18,    19,    20,    21,
      75,    75,    77,    77,   126,   140,    75,    76,   130,     6,
      85,    75,    32,     6,    71,    60,    61,    62,    67,    67,
      65,    66,    32,    67,     0,   364,    71,    72,    81,    74,
      20,    53,    54,    75,    84,    57,    26,    27,    28,    24,
      21,    63,    81,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,    75,   205,    77,    82,    83,    32,    84,    82,
      83,    81,    26,    27,    28,    10,    11,    12,    10,    32,
      12,    67,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    24,   135,    65,    66,   138,    67,    67,    67,
      71,    72,    75,    74,    77,    75,    75,    77,    77,    30,
      75,    67,    77,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    75,    67,    77,    67,    67,    81,   269,    21,
     271,    75,   273,    77,    75,    68,    77,    71,    72,    67,
      74,    67,    73,   298,   186,    67,   188,    67,   190,    12,
     192,    81,    65,    66,   196,    40,    68,   299,    71,    72,
     202,    74,    10,    11,    12,   207,    75,    76,    77,    68,
     212,    68,    73,   328,   329,   330,   331,    58,    59,    60,
      61,    62,   224,    76,    65,    66,   341,   342,   343,   344,
      71,    72,    68,    74,    68,    68,    68,    12,    21,   120,
     121,   122,   123,   124,   346,   126,    81,    68,    68,   130,
     131,    68,   254,    68,   256,    68,    68,    68,    68,    21,
      32,   264,   302,   365,   326,   257,    -1,   267,    -1,    -1,
     270,    -1,   272,    -1,   274,   275,   278,   279,   280,   281,
      -1,    -1,    -1,   283,    -1,    -1,   286,    -1,    -1,    -1,
     392,   293,   294,   295,   296,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    -1,    65,    66,    -1,   310,    -1,
      -1,    71,    72,    -1,    74,    -1,    -1,    -1,    -1,   321,
     322,    -1,    -1,    -1,    -1,    -1,   326,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   335,   336,    -1,   340,    -1,
      -1,    -1,    -1,    56,    57,    58,    59,    60,    61,    62,
     352,    -1,    65,    66,    -1,    -1,    -1,   359,    71,    72,
     362,    74,    -1,    -1,    -1,   367,   368,   369,   370,    -1,
      -1,   371,    -1,    -1,   376,   377,   378,   379,   259,   260,
     261,   262,   382,    -1,    -1,    -1,    -1,    -1,    10,    -1,
      -1,   391,    -1,   395,    -1,    -1,    -1,    -1,   398,    -1,
      -1,    -1,    -1,    -1,   404,    -1,    -1,    -1,    -1,    -1,
     410,   413,    -1,    -1,   414,   415,   416,   417,    -1,    -1,
      -1,   421,   422,    45,   424,    -1,    -1,    49,    50,    51,
      -1,    -1,    -1,    55,    56,   435,    58,    59,    60,    61,
      62,   441,    -1,    -1,    -1,   445,   327,   447,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   346,    -1,    -1,   349,   350,
      -1,    -1,   353,   354,   355,   356,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   189,    -1,   191,    -1,   193,
     194,    -1,    -1,    -1,    -1,    -1,    -1,   129,    -1,   203,
     132,   392,   206,    -1,    -1,    -1,    -1,    -1,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,     7,   178,   179,    -1,    -1,
      -1,    13,    -1,    -1,    16,    -1,    18,    19,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    -1,   276,    -1,    -1,    -1,    -1,   209,    -1,    -1,
     284,   285,    -1,    -1,     7,    -1,    -1,    -1,    -1,    -1,
      13,    -1,    -1,    16,    -1,    18,    19,    59,    -1,    22,
      -1,    -1,    64,    -1,    -1,    67,    -1,    -1,    31,    -1,
      72,    73,    74,    -1,    -1,    -1,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,   333,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    64,    -1,   347,    67,   277,    -1,    -1,    -1,    72,
      -1,    74,    -1,   357,    -1,    78,    79,    80,    81,    82,
      83,    84,   366,    -1,    -1,    -1,   298,    -1,   372,    -1,
      -1,   303,    -1,   305,    -1,    -1,   380,    -1,    -1,    -1,
      -1,    -1,    -1,   387,   388,   389,   390,    -1,    -1,   393,
     394,    -1,    -1,   397,    -1,    -1,   328,   329,   330,   331,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   411,    -1,   341,
     342,   343,   344,    -1,    -1,   419,    -1,    -1,    -1,   423,
      -1,    -1,    -1,    -1,    -1,    -1,   358,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   442,    -1,
       3,     4,    -1,   375,     7,    -1,     9,    10,    11,    12,
      13,    14,    -1,    16,    17,    18,    19,    -1,    -1,    22,
      23,    -1,    25,    -1,    -1,    -1,     3,     4,    31,    -1,
       7,    -1,     9,    10,    11,    12,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    59,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    67,    -1,    -1,    -1,    -1,    72,
      -1,    74,    -1,    -1,    -1,    78,    79,    80,    81,    82,
      83,    84,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,     3,     4,
       5,     6,     7,    -1,     9,    -1,    -1,    -1,    13,    14,
      -1,    16,    17,    18,    19,    -1,    -1,    22,    23,    -1,
      25,    -1,    -1,    -1,     3,     4,    31,    -1,     7,    -1,
       9,    -1,    -1,    -1,    13,    14,    -1,    16,    17,    18,
      19,    -1,    -1,    22,    23,    -1,    25,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    59,    -1,    -1,    -1,    -1,    64,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    74,
      -1,    -1,    -1,    78,    79,    80,    81,    82,    83,    84,
      59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    72,    -1,    74,    75,    -1,    77,    78,
      79,    80,    81,    82,    83,    84,     3,     4,    -1,    -1,
       7,    -1,     9,    10,    -1,    12,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      -1,    -1,     3,     4,    31,    -1,     7,    -1,     9,    10,
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
       7,    -1,     9,    -1,    -1,    12,    13,    14,    -1,    16,
      17,    18,    19,    -1,    -1,    22,    23,    -1,    25,    -1,
      -1,    -1,     3,     4,    31,    -1,     7,    -1,     9,    -1,
      -1,    -1,    13,    14,    -1,    16,    17,    18,    19,    -1,
      -1,    22,    23,    -1,    25,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    59,    -1,    -1,    -1,    -1,    64,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,
      -1,    78,    79,    80,    81,    82,    83,    84,    59,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    67,    -1,    -1,    -1,
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
      67,    68,    -1,    -1,    -1,    72,    -1,    74,    -1,    -1,
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
      -1,    -1,    71,    72,    -1,    74,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      -1,    -1,    65,    66,    -1,    -1,    -1,    -1,    71,    72,
      -1,    74
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
      88,    89,    76,    68,    68,    68,    68,    89,    89,    10,
      12,   108,    10,    12,   107,     8,    93,    94,    94,    94,
      94,    95,    10,    12,    12,    89,    94,    94,    94,    94,
      93,   104,    95,    12,    93,    93,    89,    93,    93,    93,
      93,    95,    88,    89,    89,    10,    12,   104,    95,    89,
      89,    89,    89,    12,    95,    88,    89,    89,    89,    89,
      95,    21,    12,    81,    95,    95,    95,    95,    12,    93,
     104,    95,    95,    89,    95,    12,    68,    68,    68,    68,
      12,    68,    68,    68,    68,    95,    89,    12,    12,    12,
      12,    95,    21,    12,    12,    95,    12,    95,    12
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
       6,     7,     9,    10,     7,     8,    10,    11,     4,     7,
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
#line 149 ".\\parser.y"
                    {(yyval.programm_el_list_union)=NULL; root = NULL;}
#line 1943 "parser.tab.cpp"
    break;

  case 3: /* programm: programm_el_list_not_empty  */
#line 150 ".\\parser.y"
                                {(yyval.programm_el_list_union)=(yyvsp[0].programm_el_list_union); root = (yyvsp[0].programm_el_list_union);}
#line 1949 "parser.tab.cpp"
    break;

  case 4: /* expr: IDENTIFIER  */
#line 153 ".\\parser.y"
                    {
                        (yyval.expr_union)=ExprNode::createExprFromVarName(ExprType::id, (yyvsp[0].Str));
                    }
#line 1957 "parser.tab.cpp"
    break;

  case 5: /* expr: OBJECT_VAR_NAME  */
#line 156 ".\\parser.y"
                        {(yyval.expr_union)=ExprNode::createExprFromVarName(ExprType::objectVarName, (yyvsp[0].Str));}
#line 1963 "parser.tab.cpp"
    break;

  case 6: /* expr: CLASS_VAR_NAME  */
#line 157 ".\\parser.y"
                        {
                            printf("CLASS_VAR_NAME from parser: %s", (yyvsp[0].Str));
                            (yyval.expr_union)=ExprNode::createExprFromVarName(ExprType::classVarName, (yyvsp[0].Str));
                            }
#line 1972 "parser.tab.cpp"
    break;

  case 7: /* expr: CONSTANT_NAME  */
#line 161 ".\\parser.y"
                    {
                        printf("CONSTANT_NAME from parser: %s", (yyvsp[0].Str));
                        (yyval.expr_union)=ExprNode::createExprFromVarName(ExprType::constantName, (yyvsp[0].Str));
                    }
#line 1981 "parser.tab.cpp"
    break;

  case 8: /* expr: STRING  */
#line 165 ".\\parser.y"
                {(yyval.expr_union)=ExprNode::createExprFromString((yyvsp[0].Str));}
#line 1987 "parser.tab.cpp"
    break;

  case 9: /* expr: TRUE_KEYWORD  */
#line 166 ".\\parser.y"
                    {(yyval.expr_union)=ExprNode::createExprFromTrue();}
#line 1993 "parser.tab.cpp"
    break;

  case 10: /* expr: FALSE_KEYWORD  */
#line 167 ".\\parser.y"
                    {(yyval.expr_union)=ExprNode::createExprFromFalse();}
#line 1999 "parser.tab.cpp"
    break;

  case 11: /* expr: NIL_KEYWORD  */
#line 168 ".\\parser.y"
                    {(yyval.expr_union)=ExprNode::createExprFromNil();}
#line 2005 "parser.tab.cpp"
    break;

  case 12: /* expr: INTEGER_NUMBER  */
#line 169 ".\\parser.y"
                        {(yyval.expr_union)=ExprNode::createExprFromInt((yyvsp[0].Int));}
#line 2011 "parser.tab.cpp"
    break;

  case 13: /* expr: FLOAT_NUMBER  */
#line 170 ".\\parser.y"
                    {(yyval.expr_union)=ExprNode::createExprFromFloat((yyvsp[0].Float));}
#line 2017 "parser.tab.cpp"
    break;

  case 14: /* expr: expr '=' linefeed_or_empty expr  */
#line 171 ".\\parser.y"
                                        {

                                            (yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::assign, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));
                                        }
#line 2026 "parser.tab.cpp"
    break;

  case 15: /* expr: expr '[' linefeed_or_empty expr linefeed_or_empty ']'  */
#line 175 ".\\parser.y"
                                                            {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::arrayElement, (yyvsp[-5].expr_union), (yyvsp[-2].expr_union));}
#line 2032 "parser.tab.cpp"
    break;

  case 16: /* expr: expr '/' linefeed_or_empty expr  */
#line 176 ".\\parser.y"
                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::division, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2038 "parser.tab.cpp"
    break;

  case 17: /* expr: expr '%' linefeed_or_empty expr  */
#line 177 ".\\parser.y"
                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::remainderOfDivision, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2044 "parser.tab.cpp"
    break;

  case 18: /* expr: expr '*' linefeed_or_empty expr  */
#line 178 ".\\parser.y"
                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::multiplication, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2050 "parser.tab.cpp"
    break;

  case 19: /* expr: expr '+' linefeed_or_empty expr  */
#line 179 ".\\parser.y"
                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::sum, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2056 "parser.tab.cpp"
    break;

  case 20: /* expr: expr '-' linefeed_or_empty expr  */
#line 180 ".\\parser.y"
                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::subtraction, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2062 "parser.tab.cpp"
    break;

  case 21: /* expr: '-' linefeed_or_empty expr  */
#line 181 ".\\parser.y"
                                              {(yyval.expr_union)=ExprNode::createExprFromUnary(ExprType::unaryMinus, (yyvsp[0].expr_union));}
#line 2068 "parser.tab.cpp"
    break;

  case 22: /* expr: expr '.' linefeed_or_empty SUPERCLASS_KEYWORD  */
#line 182 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromUnary(ExprType::superclass, (yyvsp[-3].expr_union));}
#line 2074 "parser.tab.cpp"
    break;

  case 23: /* expr: IDENTIFIER '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 183 ".\\parser.y"
                                                                        {(yyval.expr_union)=ExprNode::createExprFromFuncCall(ExprType::function, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str));}
#line 2080 "parser.tab.cpp"
    break;

  case 24: /* expr: IDENTIFIER '(' linefeed_or_empty ')'  */
#line 184 ".\\parser.y"
                                            {(yyval.expr_union)=ExprNode::createExprFromFuncCall(ExprType::funcWithoutParams, NULL, (yyvsp[-3].Str));}
#line 2086 "parser.tab.cpp"
    break;

  case 25: /* expr: SUPER_KEYWORD  */
#line 185 ".\\parser.y"
                    {(yyval.expr_union)=ExprNode::createExprFromSuper(ExprType::superWithoutParamsAndBrackets, NULL);}
#line 2092 "parser.tab.cpp"
    break;

  case 26: /* expr: SUPER_KEYWORD '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 186 ".\\parser.y"
                                                                            {(yyval.expr_union)=ExprNode::createExprFromSuper(ExprType::super, (yyvsp[-2].expr_list_union));}
#line 2098 "parser.tab.cpp"
    break;

  case 27: /* expr: SUPER_KEYWORD '(' linefeed_or_empty ')'  */
#line 187 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromSuper(ExprType::superWithoutParams, NULL);}
#line 2104 "parser.tab.cpp"
    break;

  case 28: /* expr: expr '.' linefeed_or_empty IDENTIFIER  */
#line 188 ".\\parser.y"
                                            {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethodWithoutParams, NULL, (yyvsp[0].Str), (yyvsp[-3].expr_union));}
#line 2110 "parser.tab.cpp"
    break;

  case 29: /* expr: expr '.' linefeed_or_empty IDENTIFIER '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 189 ".\\parser.y"
                                                                                                    {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethod, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str), (yyvsp[-8].expr_union));}
#line 2116 "parser.tab.cpp"
    break;

  case 30: /* expr: SELF_KEYWORD '.' linefeed_or_empty IDENTIFIER  */
#line 190 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::selfWithoutParams, NULL, (yyvsp[0].Str));}
#line 2122 "parser.tab.cpp"
    break;

  case 31: /* expr: SELF_KEYWORD '.' linefeed_or_empty IDENTIFIER '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 191 ".\\parser.y"
                                                                                                            {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::self, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str));}
#line 2128 "parser.tab.cpp"
    break;

  case 32: /* expr: SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_QUESTION  */
#line 192 ".\\parser.y"
                                                                {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::selfMarkQuestionWithoutParams, NULL, (yyvsp[0].Str));}
#line 2134 "parser.tab.cpp"
    break;

  case 33: /* expr: SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_QUESTION '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 193 ".\\parser.y"
                                                                                                                    {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::selfMarkQuestion, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str));}
#line 2140 "parser.tab.cpp"
    break;

  case 34: /* expr: SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_EXCLAMATION  */
#line 194 ".\\parser.y"
                                                                    {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::selfMarkExclamationWithoutParams, NULL, (yyvsp[0].Str));}
#line 2146 "parser.tab.cpp"
    break;

  case 35: /* expr: SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_EXCLAMATION '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 195 ".\\parser.y"
                                                                                                                        {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::selfMarkExclamation, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str));}
#line 2152 "parser.tab.cpp"
    break;

  case 36: /* expr: SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_EQUAL  */
#line 196 ".\\parser.y"
                                                            {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::selfEqualWithoutParams, NULL, (yyvsp[0].Str));}
#line 2158 "parser.tab.cpp"
    break;

  case 37: /* expr: SELF_KEYWORD '.' linefeed_or_empty METHOD_MARK_EQUAL '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 197 ".\\parser.y"
                                                                                                                    {(yyval.expr_union)=ExprNode::createExprFromSelf(ExprType::selfEqual, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str));}
#line 2164 "parser.tab.cpp"
    break;

  case 38: /* expr: expr '.' linefeed_or_empty METHOD_MARK_QUESTION  */
#line 198 ".\\parser.y"
                                                        {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethodMarkQuestionWithoutParams, NULL, (yyvsp[0].Str), (yyvsp[-3].expr_union));}
#line 2170 "parser.tab.cpp"
    break;

  case 39: /* expr: expr '.' linefeed_or_empty METHOD_MARK_QUESTION '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 199 ".\\parser.y"
                                                                                                            {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethodMarkQuestion, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str), (yyvsp[-8].expr_union));}
#line 2176 "parser.tab.cpp"
    break;

  case 40: /* expr: expr '.' linefeed_or_empty METHOD_MARK_EXCLAMATION  */
#line 200 ".\\parser.y"
                                                            {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethodMarkExclamationWithoutParams, NULL, (yyvsp[0].Str), (yyvsp[-3].expr_union));}
#line 2182 "parser.tab.cpp"
    break;

  case 41: /* expr: expr '.' linefeed_or_empty METHOD_MARK_EXCLAMATION '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 201 ".\\parser.y"
                                                                                                                {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethodMarkExclamation, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str), (yyvsp[-8].expr_union));}
#line 2188 "parser.tab.cpp"
    break;

  case 42: /* expr: expr '.' linefeed_or_empty METHOD_MARK_EQUAL  */
#line 202 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethodEqualWithoutParams, NULL, (yyvsp[0].Str), (yyvsp[-3].expr_union));}
#line 2194 "parser.tab.cpp"
    break;

  case 43: /* expr: expr '.' linefeed_or_empty METHOD_MARK_EQUAL '(' linefeed_or_empty expr_list linefeed_or_empty ')'  */
#line 203 ".\\parser.y"
                                                                                                            {(yyval.expr_union)=ExprNode::createExprFromMethod(ExprType::callOfMethodEqual, (yyvsp[-2].expr_list_union), (yyvsp[-5].Str), (yyvsp[-8].expr_union));}
#line 2200 "parser.tab.cpp"
    break;

  case 44: /* expr: expr AND_KEYWORD linefeed_or_empty expr  */
#line 204 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::andType, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2206 "parser.tab.cpp"
    break;

  case 45: /* expr: expr OR_KEYWORD linefeed_or_empty expr  */
#line 205 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::orType, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2212 "parser.tab.cpp"
    break;

  case 46: /* expr: NOT_KEYWORD '(' linefeed_or_empty expr linefeed_or_empty ')'  */
#line 206 ".\\parser.y"
                                                                    {(yyval.expr_union)=ExprNode::createExprFromUnary(ExprType::notType, (yyvsp[-2].expr_union));}
#line 2218 "parser.tab.cpp"
    break;

  case 47: /* expr: expr ARITHMETIC_POW_OP linefeed_or_empty expr  */
#line 207 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::pow, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2224 "parser.tab.cpp"
    break;

  case 48: /* expr: expr EQL_OP linefeed_or_empty expr  */
#line 208 ".\\parser.y"
                                            {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::equal, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2230 "parser.tab.cpp"
    break;

  case 49: /* expr: expr NOT_EQL_OP linefeed_or_empty expr  */
#line 209 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::notEqual, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2236 "parser.tab.cpp"
    break;

  case 50: /* expr: expr GREATER_OP linefeed_or_empty expr  */
#line 210 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::greater, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2242 "parser.tab.cpp"
    break;

  case 51: /* expr: expr LESS_OP linefeed_or_empty expr  */
#line 211 ".\\parser.y"
                                            {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::less, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2248 "parser.tab.cpp"
    break;

  case 52: /* expr: expr GREATER_OR_EQL_OP linefeed_or_empty expr  */
#line 212 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::greaterOrEqual, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2254 "parser.tab.cpp"
    break;

  case 53: /* expr: expr LESS_OR_EQL_OP linefeed_or_empty expr  */
#line 213 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::lessOrEqual, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2260 "parser.tab.cpp"
    break;

  case 54: /* expr: expr COMB_COMPARISON_OP linefeed_or_empty expr  */
#line 214 ".\\parser.y"
                                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::combComparison, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2266 "parser.tab.cpp"
    break;

  case 55: /* expr: expr CASE_EQL_OP linefeed_or_empty expr  */
#line 215 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::caseEqual, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2272 "parser.tab.cpp"
    break;

  case 56: /* expr: expr ADD_ASSIGN_OP linefeed_or_empty expr  */
#line 216 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::addAssign, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2278 "parser.tab.cpp"
    break;

  case 57: /* expr: expr SUB_ASSIGN_OP linefeed_or_empty expr  */
#line 217 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::subAssign, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2284 "parser.tab.cpp"
    break;

  case 58: /* expr: expr MUL_ASSIGN_OP linefeed_or_empty expr  */
#line 218 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::mulAssign, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2290 "parser.tab.cpp"
    break;

  case 59: /* expr: expr DIV_ASSIGN_OP linefeed_or_empty expr  */
#line 219 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::divAssign, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2296 "parser.tab.cpp"
    break;

  case 60: /* expr: expr MOD_ASSIGN_OP linefeed_or_empty expr  */
#line 220 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::modAssign, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2302 "parser.tab.cpp"
    break;

  case 61: /* expr: expr POW_ASSIGN_OP linefeed_or_empty expr  */
#line 221 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::powAssign, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2308 "parser.tab.cpp"
    break;

  case 62: /* expr: expr BIN_AND_OP linefeed_or_empty expr  */
#line 222 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::binAnd, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2314 "parser.tab.cpp"
    break;

  case 63: /* expr: expr BIN_OR_OP linefeed_or_empty expr  */
#line 223 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::binOr, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2320 "parser.tab.cpp"
    break;

  case 64: /* expr: expr BIN_XOR_OP linefeed_or_empty expr  */
#line 224 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::binXor, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2326 "parser.tab.cpp"
    break;

  case 65: /* expr: expr BIN_ONES_COMPLEMENT_OP linefeed_or_empty expr  */
#line 225 ".\\parser.y"
                                                             {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::binOnesComplement, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2332 "parser.tab.cpp"
    break;

  case 66: /* expr: expr BIN_LEFT_SHIFT_OP linefeed_or_empty expr  */
#line 226 ".\\parser.y"
                                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::binLeftShift, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2338 "parser.tab.cpp"
    break;

  case 67: /* expr: expr BIN_RIGHT_SHIFT_OP linefeed_or_empty expr  */
#line 227 ".\\parser.y"
                                                            {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::binRightShift, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2344 "parser.tab.cpp"
    break;

  case 68: /* expr: expr LOGICAL_AND_OP linefeed_or_empty expr  */
#line 228 ".\\parser.y"
                                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::logicalAnd, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2350 "parser.tab.cpp"
    break;

  case 69: /* expr: expr LOGICAL_OR_OP linefeed_or_empty expr  */
#line 229 ".\\parser.y"
                                                    {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::logicalOr, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2356 "parser.tab.cpp"
    break;

  case 70: /* expr: LOGICAL_NOT_OP linefeed_or_empty expr  */
#line 230 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromUnary(ExprType::logicalNot, (yyvsp[0].expr_union));}
#line 2362 "parser.tab.cpp"
    break;

  case 71: /* expr: expr INCLUSIVE_RANGE_OP linefeed_or_empty expr  */
#line 231 ".\\parser.y"
                                                        {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::inclusiveRange, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2368 "parser.tab.cpp"
    break;

  case 72: /* expr: expr EXCLUSIVE_RANGE_OP linefeed_or_empty expr  */
#line 232 ".\\parser.y"
                                                            {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::exclusiveRange, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2374 "parser.tab.cpp"
    break;

  case 73: /* expr: '(' linefeed_or_empty expr linefeed_or_empty ')'  */
#line 233 ".\\parser.y"
                                                        {(yyval.expr_union)=ExprNode::createExprFromUnary(ExprType::brackets, (yyvsp[-2].expr_union));}
#line 2380 "parser.tab.cpp"
    break;

  case 74: /* expr: '[' linefeed_or_empty expr_list linefeed_or_empty ']'  */
#line 234 ".\\parser.y"
                                                            {(yyval.expr_union)=ExprNode::createExprFromArray(ExprType::array, (yyvsp[-2].expr_list_union));}
#line 2386 "parser.tab.cpp"
    break;

  case 75: /* expr: '[' linefeed_or_empty ']'  */
#line 235 ".\\parser.y"
                                {(yyval.expr_union)=ExprNode::createExprFromArray(ExprType::emptyArray, NULL);}
#line 2392 "parser.tab.cpp"
    break;

  case 76: /* expr: DEFINED_KEYWORD linefeed_or_empty expr  */
#line 236 ".\\parser.y"
                                                {(yyval.expr_union)=ExprNode::createExprFromUnary(ExprType::defined, (yyvsp[0].expr_union));}
#line 2398 "parser.tab.cpp"
    break;

  case 77: /* expr: DOUBLE_COLON_SYMBOL linefeed_or_empty expr  */
#line 237 ".\\parser.y"
                                                        {(yyval.expr_union)=ExprNode::createExprFromUnary(ExprType::doubleColon, (yyvsp[0].expr_union));}
#line 2404 "parser.tab.cpp"
    break;

  case 78: /* expr: expr DOUBLE_COLON_SYMBOL linefeed_or_empty expr  */
#line 238 ".\\parser.y"
                                                          {(yyval.expr_union)=ExprNode::createExprFromBinOp(ExprType::doubleColonWithLeftOperand, (yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2410 "parser.tab.cpp"
    break;

  case 79: /* expr: expr QUESTION_SYMBOL linefeed_or_empty expr linefeed_or_empty COLON_SYMBOL linefeed_or_empty expr  */
#line 239 ".\\parser.y"
                                                                                                        {(yyval.expr_union)=ExprNode::createExprFromTernary((yyvsp[-7].expr_union), (yyvsp[-4].expr_union), (yyvsp[0].expr_union));}
#line 2416 "parser.tab.cpp"
    break;

  case 84: /* programm_element: class_stmt delimiter  */
#line 250 ".\\parser.y"
                                       {(yyval.programm_el_union)=ProgramElementNode::createClassProgramElementNode((yyvsp[-1].class_stmt_union));}
#line 2422 "parser.tab.cpp"
    break;

  case 85: /* programm_element: method_stmt delimiter  */
#line 251 ".\\parser.y"
                            {(yyval.programm_el_union)=ProgramElementNode::createMethodProgramElementNode((yyvsp[-1].method_union));}
#line 2428 "parser.tab.cpp"
    break;

  case 86: /* programm_element: stmt  */
#line 252 ".\\parser.y"
           {(yyval.programm_el_union)=ProgramElementNode::createStmtProgramElementNode((yyvsp[0].stmt_union));}
#line 2434 "parser.tab.cpp"
    break;

  case 87: /* programm_el_list_not_empty: programm_element  */
#line 255 ".\\parser.y"
                                             {(yyval.programm_el_list_union)=ProgramElementNode::createProgramElementList((yyvsp[0].programm_el_union));}
#line 2440 "parser.tab.cpp"
    break;

  case 88: /* programm_el_list_not_empty: programm_el_list_not_empty programm_element  */
#line 256 ".\\parser.y"
                                                  {(yyval.programm_el_list_union)=ProgramElementNode::addProgramElementToList((yyvsp[-1].programm_el_list_union), (yyvsp[0].programm_el_union));}
#line 2446 "parser.tab.cpp"
    break;

  case 93: /* expr_list: expr  */
#line 265 ".\\parser.y"
                {(yyval.expr_list_union)=ExprNode::createExprList((yyvsp[0].expr_union));}
#line 2452 "parser.tab.cpp"
    break;

  case 94: /* expr_list: expr_list COMMA_SYMBOL expr  */
#line 266 ".\\parser.y"
                                  {(yyval.expr_list_union)=ExprNode::addExprToList((yyvsp[-2].expr_list_union), (yyvsp[0].expr_union));}
#line 2458 "parser.tab.cpp"
    break;

  case 95: /* stmt_list: stmt  */
#line 269 ".\\parser.y"
                {(yyval.stmt_list_union)=StmtNode::createStmtList((yyvsp[0].stmt_union));}
#line 2464 "parser.tab.cpp"
    break;

  case 96: /* stmt_list: stmt_list stmt  */
#line 270 ".\\parser.y"
                     {(yyval.stmt_list_union)=StmtNode::addStmtToList((yyvsp[-1].stmt_list_union), (yyvsp[0].stmt_union));}
#line 2470 "parser.tab.cpp"
    break;

  case 97: /* stmt: expr delimiter  */
#line 273 ".\\parser.y"
                     {(yyval.stmt_union)=StmtNode::createStmtNodeExpr((yyvsp[-1].expr_union));}
#line 2476 "parser.tab.cpp"
    break;

  case 98: /* stmt: if_stmt delimiter  */
#line 274 ".\\parser.y"
                         {(yyval.stmt_union)=StmtNode::createStmtNodeIf((yyvsp[-1].if_union));}
#line 2482 "parser.tab.cpp"
    break;

  case 99: /* stmt: while_stmt delimiter  */
#line 275 ".\\parser.y"
                           {(yyval.stmt_union)=StmtNode::createStmtNodeWhile((yyvsp[-1].while_union));}
#line 2488 "parser.tab.cpp"
    break;

  case 100: /* stmt: for_stmt delimiter  */
#line 276 ".\\parser.y"
                         {(yyval.stmt_union)=StmtNode::createStmtNodeFor((yyvsp[-1].for_union));}
#line 2494 "parser.tab.cpp"
    break;

  case 101: /* stmt: case_stmt delimiter  */
#line 277 ".\\parser.y"
                          {(yyval.stmt_union)=StmtNode::createStmtNodeCase((yyvsp[-1].case_union));}
#line 2500 "parser.tab.cpp"
    break;

  case 102: /* stmt: unless_stmt delimiter  */
#line 278 ".\\parser.y"
                            {(yyval.stmt_union)=StmtNode::createStmtNodeUnless((yyvsp[-1].unless_union));}
#line 2506 "parser.tab.cpp"
    break;

  case 103: /* stmt: return_stmt delimiter  */
#line 279 ".\\parser.y"
                            {(yyval.stmt_union)=StmtNode::createStmtNodeReturn((yyvsp[-1].return_union));}
#line 2512 "parser.tab.cpp"
    break;

  case 104: /* stmt: alias_stmt delimiter  */
#line 280 ".\\parser.y"
                           {(yyval.stmt_union)=StmtNode::createStmtNodeAlias((yyvsp[-1].alias_union));}
#line 2518 "parser.tab.cpp"
    break;

  case 105: /* param_list_not_empty: IDENTIFIER linefeed_or_empty  */
#line 283 ".\\parser.y"
                                                    {(yyval.param_list_union)=MethodStmtNode::createParamList((yyvsp[-1].Str));}
#line 2524 "parser.tab.cpp"
    break;

  case 106: /* param_list_not_empty: param_list_not_empty COMMA_SYMBOL linefeed_or_empty IDENTIFIER linefeed_or_empty  */
#line 284 ".\\parser.y"
                                                                                        {(yyval.param_list_union)=MethodStmtNode::addParametrToList((yyvsp[-4].param_list_union), (yyvsp[-1].Str));}
#line 2530 "parser.tab.cpp"
    break;

  case 107: /* param_list: %empty  */
#line 287 ".\\parser.y"
                        {(yyval.param_list_union)=NULL;}
#line 2536 "parser.tab.cpp"
    break;

  case 108: /* param_list: param_list_not_empty  */
#line 288 ".\\parser.y"
                            {(yyval.param_list_union)=(yyvsp[0].param_list_union);}
#line 2542 "parser.tab.cpp"
    break;

  case 109: /* method_stmt: DEF_KEYWORD linefeed_or_empty IDENTIFIER '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD  */
#line 291 ".\\parser.y"
                                                                                                                            {(yyval.method_union)=MethodStmtNode::createMethodStmt(MethodType::simple, (yyvsp[-7].Str), (yyvsp[-4].param_list_union), (yyvsp[-1].stmt_list_union));}
#line 2548 "parser.tab.cpp"
    break;

  case 110: /* method_stmt: DEF_KEYWORD linefeed_or_empty METHOD_MARK_QUESTION '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD  */
#line 292 ".\\parser.y"
                                                                                                                                {(yyval.method_union)=MethodStmtNode::createMethodStmt(MethodType::markQuestion, (yyvsp[-7].Str), (yyvsp[-4].param_list_union), (yyvsp[-1].stmt_list_union));}
#line 2554 "parser.tab.cpp"
    break;

  case 111: /* method_stmt: DEF_KEYWORD linefeed_or_empty IDENTIFIER delimiter stmt_list END_KEYWORD  */
#line 293 ".\\parser.y"
                                                                                {(yyval.method_union)=MethodStmtNode::createMethodStmtWithoutParams(MethodType::simple, (yyvsp[-3].Str), (yyvsp[-1].stmt_list_union));}
#line 2560 "parser.tab.cpp"
    break;

  case 112: /* method_stmt: DEF_KEYWORD linefeed_or_empty METHOD_MARK_QUESTION delimiter stmt_list END_KEYWORD  */
#line 294 ".\\parser.y"
                                                                                            {(yyval.method_union)=MethodStmtNode::createMethodStmtWithoutParams(MethodType::markQuestion, (yyvsp[-3].Str), (yyvsp[-1].stmt_list_union));}
#line 2566 "parser.tab.cpp"
    break;

  case 113: /* method_stmt: DEF_KEYWORD linefeed_or_empty METHOD_MARK_EXCLAMATION '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD  */
#line 295 ".\\parser.y"
                                                                                                                                    {(yyval.method_union)=MethodStmtNode::createMethodStmt(MethodType::markExclamation, (yyvsp[-7].Str), (yyvsp[-4].param_list_union), (yyvsp[-1].stmt_list_union));}
#line 2572 "parser.tab.cpp"
    break;

  case 114: /* method_stmt: DEF_KEYWORD linefeed_or_empty METHOD_MARK_EXCLAMATION delimiter stmt_list END_KEYWORD  */
#line 296 ".\\parser.y"
                                                                                            {(yyval.method_union)=MethodStmtNode::createMethodStmtWithoutParams(MethodType::markExclamation, (yyvsp[-3].Str), (yyvsp[-1].stmt_list_union));}
#line 2578 "parser.tab.cpp"
    break;

  case 115: /* method_stmt: DEF_KEYWORD linefeed_or_empty METHOD_MARK_EQUAL '(' linefeed_or_empty param_list ')' delimiter stmt_list END_KEYWORD  */
#line 297 ".\\parser.y"
                                                                                                                            {(yyval.method_union)=MethodStmtNode::createMethodStmt(MethodType::markEqual, (yyvsp[-7].Str), (yyvsp[-4].param_list_union), (yyvsp[-1].stmt_list_union));}
#line 2584 "parser.tab.cpp"
    break;

  case 116: /* method_stmt: DEF_KEYWORD linefeed_or_empty METHOD_MARK_EQUAL delimiter stmt_list END_KEYWORD  */
#line 298 ".\\parser.y"
                                                                                        {(yyval.method_union)=MethodStmtNode::createMethodStmtWithoutParams(MethodType::markEqual, (yyvsp[-3].Str), (yyvsp[-1].stmt_list_union));}
#line 2590 "parser.tab.cpp"
    break;

  case 117: /* class_stmt: CLASS_KEYWORD linefeed_or_empty CONSTANT_NAME delimiter class_body END_KEYWORD  */
#line 301 ".\\parser.y"
                                                                                            {(yyval.class_stmt_union)=ClassStmtNode::createClassStmt((yyvsp[-3].Str), (yyvsp[-1].class_body_union));}
#line 2596 "parser.tab.cpp"
    break;

  case 118: /* class_stmt: CLASS_KEYWORD linefeed_or_empty CONSTANT_NAME '<' CONSTANT_NAME delimiter class_body END_KEYWORD  */
#line 302 ".\\parser.y"
                                                                                                       {(yyval.class_stmt_union)=ClassStmtNode::createClassStmtWithParent((yyvsp[-5].Str), (yyvsp[-3].Str), (yyvsp[-1].class_body_union));}
#line 2602 "parser.tab.cpp"
    break;

  case 119: /* class_body_stmt: method_stmt delimiter  */
#line 305 ".\\parser.y"
                                        {(yyval.class_body_stmt_union)=ClassBodyStmtNode::createClassBodyStmtMethod((yyvsp[-1].method_union));}
#line 2608 "parser.tab.cpp"
    break;

  case 120: /* class_body_stmt: CLASS_VAR_NAME delimiter  */
#line 306 ".\\parser.y"
                                {(yyval.class_body_stmt_union)=ClassBodyStmtNode::createClassBodyStmtClassVarName((yyvsp[-1].Str), NULL);}
#line 2614 "parser.tab.cpp"
    break;

  case 121: /* class_body_stmt: CLASS_VAR_NAME '=' expr delimiter  */
#line 307 ".\\parser.y"
                                        {(yyval.class_body_stmt_union)=ClassBodyStmtNode::createClassBodyStmtClassVarName((yyvsp[-3].Str), (yyvsp[-1].expr_union));}
#line 2620 "parser.tab.cpp"
    break;

  case 122: /* class_body_stmt: OBJECT_VAR_NAME delimiter  */
#line 308 ".\\parser.y"
                                {(yyval.class_body_stmt_union)=ClassBodyStmtNode::createClassBodyStmtobjectVarName((yyvsp[-1].Str), NULL);}
#line 2626 "parser.tab.cpp"
    break;

  case 123: /* class_body_stmt: OBJECT_VAR_NAME '=' expr delimiter  */
#line 309 ".\\parser.y"
                                            {(yyval.class_body_stmt_union)=ClassBodyStmtNode::createClassBodyStmtobjectVarName((yyvsp[-3].Str), (yyvsp[-1].expr_union));}
#line 2632 "parser.tab.cpp"
    break;

  case 124: /* class_body_not_empty: class_body_stmt  */
#line 312 ".\\parser.y"
                                        {(yyval.class_body_union)=ClassBodyStmtNode::createClassBody((yyvsp[0].class_body_stmt_union));}
#line 2638 "parser.tab.cpp"
    break;

  case 125: /* class_body_not_empty: class_body_not_empty class_body_stmt  */
#line 313 ".\\parser.y"
                                            {(yyval.class_body_union)=ClassBodyStmtNode::addStmtToClassBody((yyvsp[-1].class_body_union), (yyvsp[0].class_body_stmt_union));}
#line 2644 "parser.tab.cpp"
    break;

  case 126: /* class_body: %empty  */
#line 316 ".\\parser.y"
                        {(yyval.class_body_union)=NULL;}
#line 2650 "parser.tab.cpp"
    break;

  case 127: /* class_body: class_body_not_empty  */
#line 317 ".\\parser.y"
                            {(yyval.class_body_union)=(yyvsp[0].class_body_union);}
#line 2656 "parser.tab.cpp"
    break;

  case 130: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD  */
#line 324 ".\\parser.y"
                                                                            {(yyval.if_union)=IfStmtNode::createIfStmt((yyvsp[-3].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2662 "parser.tab.cpp"
    break;

  case 131: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list END_KEYWORD  */
#line 325 ".\\parser.y"
                                                                                                {(yyval.if_union)=IfStmtNode::createIfStmt((yyvsp[-4].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2668 "parser.tab.cpp"
    break;

  case 132: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimiter stmt_list ELSE_KEYWORD linefeed_or_empty stmt_list END_KEYWORD  */
#line 326 ".\\parser.y"
                                                                                                                  {(yyval.if_union)=IfStmtNode::createIfStmtWithElse((yyvsp[-6].expr_union), (yyvsp[-4].stmt_list_union), (yyvsp[-1].stmt_list_union));}
#line 2674 "parser.tab.cpp"
    break;

  case 133: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list ELSE_KEYWORD linefeed_or_empty stmt_list END_KEYWORD  */
#line 327 ".\\parser.y"
                                                                                                                                          {(yyval.if_union)=IfStmtNode::createIfStmtWithElse((yyvsp[-7].expr_union), (yyvsp[-4].stmt_list_union), (yyvsp[-1].stmt_list_union));}
#line 2680 "parser.tab.cpp"
    break;

  case 134: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimiter stmt_list elsif_list END_KEYWORD  */
#line 328 ".\\parser.y"
                                                                                    {(yyval.if_union)=IfStmtNode::createIfStmtWithElsif((yyvsp[-4].expr_union), (yyvsp[-2].stmt_list_union), (yyvsp[-1].elsif_list_union));}
#line 2686 "parser.tab.cpp"
    break;

  case 135: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list elsif_list END_KEYWORD  */
#line 329 ".\\parser.y"
                                                                                                            {(yyval.if_union)=IfStmtNode::createIfStmtWithElsif((yyvsp[-5].expr_union), (yyvsp[-2].stmt_list_union), (yyvsp[-1].elsif_list_union));}
#line 2692 "parser.tab.cpp"
    break;

  case 136: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimiter stmt_list elsif_list ELSE_KEYWORD linefeed_or_empty stmt_list END_KEYWORD  */
#line 330 ".\\parser.y"
                                                                                                                              {(yyval.if_union)=IfStmtNode::createIfStmtWithElseAndElsif((yyvsp[-7].expr_union), (yyvsp[-5].stmt_list_union), (yyvsp[-4].elsif_list_union), (yyvsp[-1].stmt_list_union));}
#line 2698 "parser.tab.cpp"
    break;

  case 137: /* if_stmt: IF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list elsif_list ELSE_KEYWORD linefeed_or_empty stmt_list END_KEYWORD  */
#line 331 ".\\parser.y"
                                                                                                                                                  {(yyval.if_union)=IfStmtNode::createIfStmtWithElseAndElsif((yyvsp[-8].expr_union), (yyvsp[-5].stmt_list_union), (yyvsp[-4].elsif_list_union), (yyvsp[-1].stmt_list_union));}
#line 2704 "parser.tab.cpp"
    break;

  case 138: /* if_stmt: expr IF_KEYWORD linefeed_or_empty expr  */
#line 332 ".\\parser.y"
                                                {(yyval.if_union)=IfStmtNode::createSingleLineIfStmt((yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2710 "parser.tab.cpp"
    break;

  case 139: /* unless_stmt: UNLESS_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list END_KEYWORD  */
#line 335 ".\\parser.y"
                                                                                                            {(yyval.unless_union)=UnlessStmtNode::createUnlessStmt((yyvsp[-4].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2716 "parser.tab.cpp"
    break;

  case 140: /* unless_stmt: UNLESS_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD  */
#line 336 ".\\parser.y"
                                                                            {(yyval.unless_union)=UnlessStmtNode::createUnlessStmt((yyvsp[-3].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2722 "parser.tab.cpp"
    break;

  case 141: /* unless_stmt: UNLESS_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list ELSE_KEYWORD stmt_list END_KEYWORD  */
#line 337 ".\\parser.y"
                                                                                                                            {(yyval.unless_union)=UnlessStmtNode::createUnlessStmtwithElse((yyvsp[-6].expr_union), (yyvsp[-3].stmt_list_union), (yyvsp[-1].stmt_list_union));}
#line 2728 "parser.tab.cpp"
    break;

  case 142: /* unless_stmt: UNLESS_KEYWORD linefeed_or_empty expr delimiter stmt_list ELSE_KEYWORD stmt_list END_KEYWORD  */
#line 338 ".\\parser.y"
                                                                                                    {(yyval.unless_union)=UnlessStmtNode::createUnlessStmtwithElse((yyvsp[-5].expr_union), (yyvsp[-3].stmt_list_union), (yyvsp[-1].stmt_list_union));}
#line 2734 "parser.tab.cpp"
    break;

  case 143: /* unless_stmt: expr UNLESS_KEYWORD linefeed_or_empty expr  */
#line 339 ".\\parser.y"
                                                    {(yyval.unless_union)=UnlessStmtNode::createSingleLineUnlessStmt((yyvsp[-3].expr_union), (yyvsp[0].expr_union));}
#line 2740 "parser.tab.cpp"
    break;

  case 144: /* elsif_list: elsif_stmt  */
#line 342 ".\\parser.y"
                        {(yyval.elsif_list_union)=ElsifNode::createElsifList((yyvsp[0].elsif_union));}
#line 2746 "parser.tab.cpp"
    break;

  case 145: /* elsif_list: elsif_list elsif_stmt  */
#line 343 ".\\parser.y"
                            {(yyval.elsif_list_union)=ElsifNode::addElsifToList((yyvsp[-1].elsif_list_union), (yyvsp[0].elsif_union));}
#line 2752 "parser.tab.cpp"
    break;

  case 146: /* elsif_stmt: ELSIF_KEYWORD linefeed_or_empty expr delimiter stmt_list  */
#line 346 ".\\parser.y"
                                                                        {(yyval.elsif_union)=ElsifNode::createElsifStmt((yyvsp[-2].expr_union), (yyvsp[0].stmt_list_union));}
#line 2758 "parser.tab.cpp"
    break;

  case 147: /* elsif_stmt: ELSIF_KEYWORD linefeed_or_empty expr delimeter_or_empty THEN_KEYWORD stmt_list  */
#line 347 ".\\parser.y"
                                                                                        {(yyval.elsif_union)=ElsifNode::createElsifStmt((yyvsp[-3].expr_union), (yyvsp[0].stmt_list_union));}
#line 2764 "parser.tab.cpp"
    break;

  case 148: /* while_stmt: WHILE_KEYWORD linefeed_or_empty expr DO_KEYWORD delimeter_or_empty stmt_list END_KEYWORD  */
#line 350 ".\\parser.y"
                                                                                                        {(yyval.while_union)=WhileStmtNode::createWhileStmtNode((yyvsp[-4].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2770 "parser.tab.cpp"
    break;

  case 149: /* while_stmt: WHILE_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD  */
#line 351 ".\\parser.y"
                                                                            {(yyval.while_union)=WhileStmtNode::createWhileStmtNode((yyvsp[-3].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2776 "parser.tab.cpp"
    break;

  case 150: /* for_stmt: FOR_KEYWORD linefeed_or_empty expr IN_KEYWORD linefeed_or_empty expr DO_KEYWORD delimeter_or_empty stmt_list END_KEYWORD  */
#line 354 ".\\parser.y"
                                                                                                                                    {(yyval.for_union)=ForStmtNode::createForStmtNode((yyvsp[-7].expr_union), (yyvsp[-4].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2782 "parser.tab.cpp"
    break;

  case 151: /* for_stmt: FOR_KEYWORD linefeed_or_empty expr IN_KEYWORD linefeed_or_empty expr delimiter stmt_list END_KEYWORD  */
#line 355 ".\\parser.y"
                                                                                                            {(yyval.for_union)=ForStmtNode::createForStmtNode((yyvsp[-6].expr_union), (yyvsp[-3].expr_union), (yyvsp[-1].stmt_list_union));}
#line 2788 "parser.tab.cpp"
    break;

  case 152: /* return_stmt: RETURN_KEYWORD expr  */
#line 358 ".\\parser.y"
                                 {(yyval.return_union)=ReturnStmtNode::createReturnStmt((yyvsp[0].expr_union));}
#line 2794 "parser.tab.cpp"
    break;

  case 153: /* return_stmt: RETURN_KEYWORD  */
#line 359 ".\\parser.y"
                     {(yyval.return_union)=ReturnStmtNode::createSingleReturnStmt();}
#line 2800 "parser.tab.cpp"
    break;

  case 154: /* case_stmt: CASE_KEYWORD linefeed_or_empty expr delimeter_or_empty when_list END_KEYWORD  */
#line 362 ".\\parser.y"
                                                                                        {(yyval.case_union)=CaseStmtNode::createCaseStmt((yyvsp[-3].expr_union), (yyvsp[-1].when_list_union));}
#line 2806 "parser.tab.cpp"
    break;

  case 155: /* case_stmt: CASE_KEYWORD linefeed_or_empty expr delimeter_or_empty when_list ELSE_KEYWORD delimeter_or_empty stmt_list END_KEYWORD  */
#line 363 ".\\parser.y"
                                                                                                                                {(yyval.case_union)=CaseStmtNode::createCaseStmtWithElse((yyvsp[-6].expr_union), (yyvsp[-4].when_list_union), (yyvsp[-1].stmt_list_union));}
#line 2812 "parser.tab.cpp"
    break;

  case 156: /* when_list: when_stmt  */
#line 366 ".\\parser.y"
                        {(yyval.when_list_union)=WhenStmtNode::createWhenList((yyvsp[0].when_union));}
#line 2818 "parser.tab.cpp"
    break;

  case 157: /* when_list: when_list when_stmt  */
#line 367 ".\\parser.y"
                            {(yyval.when_list_union)=WhenStmtNode::addWhenToList((yyvsp[-1].when_list_union), (yyvsp[0].when_union));}
#line 2824 "parser.tab.cpp"
    break;

  case 158: /* when_stmt: WHEN_KEYWORD linefeed_or_empty expr_list delimiter stmt_list  */
#line 370 ".\\parser.y"
                                                                        {(yyval.when_union)=WhenStmtNode::createWhenStmt((yyvsp[-2].expr_list_union), (yyvsp[0].stmt_list_union));}
#line 2830 "parser.tab.cpp"
    break;

  case 159: /* when_stmt: WHEN_KEYWORD linefeed_or_empty expr_list delimeter_or_empty THEN_KEYWORD stmt_list  */
#line 371 ".\\parser.y"
                                                                                            {(yyval.when_union)=WhenStmtNode::createWhenStmt((yyvsp[-3].expr_list_union), (yyvsp[0].stmt_list_union));}
#line 2836 "parser.tab.cpp"
    break;

  case 160: /* alias_stmt: ALIAS_KEYWORD IDENTIFIER IDENTIFIER  */
#line 374 ".\\parser.y"
                                                {(yyval.alias_union)=AliasStmtNode::createAliasStmt((yyvsp[-1].Str), (yyvsp[0].Str));}
#line 2842 "parser.tab.cpp"
    break;


#line 2846 "parser.tab.cpp"

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

#line 376 ".\\parser.y"


void yyerror(char* str) {
    fprintf(stderr, "ERROR: %s\n", str);
}
