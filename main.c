#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
    //load config files

    // run command loop
    lsh_loop();

    return EXIT_SUCCESS;
}

void lsh_loop(void) {
    char *line;
    char **args;
    int status;
    
    do {
        printf("___>");
        line = lsh_read_line();
        args = lsh_split_line(line);
        status = lsh_execute(args);

        free(line);
        free(args);
    } while (status);
}

char lsh_read_line() {
    printf("to be implemented");
    return "c";
}

char lsh_split_line(char line) {
    printf("to be implemented");
    return "c";
}

int lsh_execute(char args) {
    printf("to be implemented");
    return 1;
}