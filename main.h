#ifndef _MAIN_H_
#define _MAIN_H_


#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <signal.h>
#include <stdarg.h>
#include <errno.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/signal.h>
#include <dirent.h>
#include <sys/stat.h>

/**
 * struct tpesPer - structure for percentage formats
 * @t: a format for percentage
 * @f: function
 */
typedef struct tpesPer
{
	char t;
	void (*f)(va_list, int *);
} tpPer;

/**
 *struct bu_in - structure to reference the right built in function
 *@s: string to be evaluated
 *@fun: function correspont to the string
 */
typedef struct bu_in
{
	char *s;
	int (*fun)(char **);
} tpe_bui;

int free_EOF(char *text);
int free_textNULL(char *text);
void freeNewpid(void);
void free_argv(char *argv[]);
int _strcmp(char *s1, char *s2);
char *_strncat(char *dest, char *src, int n);
int _strlen(char *s);
char *_strchr(char *s, char c);
void create_argv(char *s, char **argv);
void print_number(int n);
int _putchar(char c);
void print_terror(char **argv, char *process, int cuenta, char *text);
void superFree(char *text, char **argv);
typedef void (*sighandler_t)(int);
char *get_string(int *i);
char **token_arg(char *_str);
int exec_fun(int *cicles, char **_args, char **av, char **env);
int built_in_handler(char **_args, char **env);
int exec_handler(int *cicles, char **_args, char **av, char **env);
void *_realloc(void *ptr, int old_size, int new_size);
int fun_cd(char **);
int fun_pwd(char **);
int fun_exit(char **);
int fun_envi(char **);
char *func_env(char *_com, char **env, int *no_path);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int *_putchar(char c, int *p);
int _printf(const char *format, ...);
void printChar(va_list va, int *p);
void printString(va_list va, int *p);
void printInt(va_list va, int *p);
int fun_count(char *s);
void printDec(va_list va, int *p);
int funper(const char *format, int i, va_list toPrint, int *pun);
int print_Number(int n, int *p);
int _strcmp(char *s1, char *s2);
int stat_fun(char **_str, int *_fl, char *_com, int c, char *av_0, char **env);
char *_getline();
void hashtag_handle(char *buff);

#endif /* _MAIN_H_ */
