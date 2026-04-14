#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stddef.h>

char *creat_Array(unsigned int size, char c);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

int _strlen(char*s);

#endif

