#ifndef MAIN_H
#define MAIN_H

/* For size_t*/
#include <stddef.h>
/* For open, O_RDONLT */
#include <fcntl.h>
/* For close,read,write */
#include <unistd.h>

void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

int _putchar(char c);

/*****************FUNCTIONS*********/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /* MAIN.H */
