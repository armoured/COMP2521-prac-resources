#include <stdio.h>
#include <stdlib.h>


int main (int argc, char* argv[]) {

    int i = 1;
    
    while (i < argc) {
        int ch;
        int lineNum = 1;
        FILE *f = fopen(argv[i], "r");
        if (f) {
            ch = fgetc(f);
            int lineStart = 1;
            while (ch != EOF) {
                if (lineStart == 1) {
                    printf("%6d ", lineNum);
                    lineNum++;
                    lineStart = 0;
                }
                if (ch == '\n') {
                    lineStart = 1;
                }
                putchar(ch); 
                ch = fgetc(f);
            }
        }
        fclose(f);
        i++;
    }

    return EXIT_SUCCESS;
}
