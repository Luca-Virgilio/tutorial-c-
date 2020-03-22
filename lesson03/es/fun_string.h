#ifndef fun_string_H
#define fun_string_H

void print_char (char *word);
int string_length(char *word);
void inverse(char *word);
char *copy (char *word);
char *concat(char *word1, char *word2);
bool equals(char *p, char *token);
char *index(char *word, char *token);

#endif