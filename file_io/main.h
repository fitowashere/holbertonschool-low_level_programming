#ifndef main_h
#define main_h

/* libraries*/

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/*prototypes*/

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
void error_and_exit(const char *message, const char *filename, int exit_code);
void argc_fail(void);

#endif

