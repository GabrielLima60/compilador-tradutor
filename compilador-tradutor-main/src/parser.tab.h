
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INCLUIR = 258,
     CONFIG = 259,
     FIM = 260,
     REPITA = 261,
     ESPERAR = 262,
     CONFIGURAR_SERIAL = 263,
     CONFIGURAR = 264,
     LER_DIGITAL = 265,
     LIGAR = 266,
     DESLIGAR = 267,
     MUDAR = 268,
     VAR = 269,
     ESCREVER_SERIAL = 270,
     LER_SERIAL = 271,
     CONSTANTE = 272,
     LER_ANALOGICO = 273,
     ESCREVER_ANALOGICO = 274,
     INTEIRO = 275,
     BOOLEANO = 276,
     TEXTO = 277,
     SAIDA = 278,
     ENTRADA = 279,
     SSID = 280,
     SENHA = 281,
     HOST = 282,
     CONECTAR_WIFI = 283,
     CHECAR_WIFI = 284,
     IGUAL = 285,
     DOISPONTOS = 286,
     SE = 287,
     SENAO = 288,
     ENTAO = 289,
     ENQUANTO = 290,
     DEFINIR = 291,
     TRUE = 292,
     FALSE = 293,
     INICIAR_HTTP = 294,
     RECEBER_HTTP = 295,
     NUMERO = 296,
     IDENT = 297,
     STRING = 298,
     COMENTARIO = 299,
     OPERADOR = 300,
     OPERADOR_COMPARACAO = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 74 "parser.y"

    int int_val;    /* Para NUMERO */
    char* str_val;  /* Para IDENT e STRING */



/* Line 1676 of yacc.c  */
#line 105 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


