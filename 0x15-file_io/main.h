#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error97(int n);
void error98(ssize_t check, char *fd, int cpfrom, int cpto);
void error99(ssize_t check, int cpfrom, int cpto, char *file);
void error100(int check, int file);

#endif /* MAIN_H */
