# Simple Command Line Argument Parser for C

## Usage:
- Make a string array of the argument names you want to parse
- Make a string pointer for the return value of argParse

### Example

```c
int main(int argc, char *argv[])
{
    char *argNames[] = {"-p", "-s"};

    char **args = argParse(argc, argv, 2, argNames);
    if (!args){
        printf("ERROR\n");
    }
    else{
        printf("%s, %s\n", args[0], args[1]);
    }

    free(args);

    return 0;
}
```

```
$ ./test -p Hello -s 6
$ Hello 6
```
