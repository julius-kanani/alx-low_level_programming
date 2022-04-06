#ifdef MAIN_H
#define MAIN_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *, char *);
int **alloc_grid(int, int);
void free_grid(int **, int);
char *argstostr(int, char **);
char **strtow(char *);
int _putchar(char);
char *argstostr(int, char **);
char **strtow(char *);

#endif
