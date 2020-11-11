#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *s = strdup(argv[1]);
    int charNum = 0;
    int i;
    for (i=1; i<argc; i++) {
        charNum += strlen(argv[i]);
    }
    printf("%d\n", charNum);
    return 0;
}
