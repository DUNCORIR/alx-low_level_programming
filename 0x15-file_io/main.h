#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/* For size_t*/
#include <stddef.h>
/* For open, O_RDONLT */
#include <fcntl.h>
/* For close,read,write */
#include <unistd.h>

/*****************FUNCTIONS*********/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void print_error(const char *message, int exit_code, const char *filename);
int _putchar(char c);
#endif /* MAIN.H */
