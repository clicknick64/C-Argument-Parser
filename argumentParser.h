#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/*
Parse arguments with names given in "names" and length n from argv
Don't forget to free the returned pointer
*/
char** argParse(int argc, char **argv, int n, char **names);