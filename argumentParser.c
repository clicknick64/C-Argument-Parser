#include "argumentParser.h"

/*
Return index of String in array, -1 if doesn't exist
*/
int arrayIndex(char *element, char **array, int n){
    for (int i=0; i<n; i++){
        if (!strcmp(element, array[i])) return i;
    }
    return -1;
}

char** argParse(int argc, char **argv, int n, char **names){
    // Invalid number of arguments
    if (argc-1 != n*2){
        printf("Error: Wrong number of arguments passed in argParse!\n");
        return NULL;
    }

    char **arguments = malloc(sizeof(char *) * n);
    int argIndex;
    int counter = 0;
    for (int i=0; i<argc-1; i++){
        if ((argIndex = arrayIndex(argv[i], names, n)) >= 0){
            arguments[argIndex] = argv[i+1];
            counter++;
        }
    }

    // Invalid syntax
    if (counter != n){
        free(arguments);
        printf("Error: Not all arguments were filled!\n");
        return NULL;
    }

    return arguments;
}