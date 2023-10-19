#ifndef ELFILE_H
#define ELFILE_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>





void checkElf(unsigned char *e);
void printMagic(unsigned char *e);
void printClass(unsigned char *e);
void printData(unsigned char *e);
void printVersion(unsigned char *e);
void printAbi(unsigned char *e);
void printOsabi(unsigned char *e);
void printType(unsigned int t, unsigned char *e);
void printEntry(unsigned long int entry, unsigned char *e);
void closeElf(int elfile);


#endif