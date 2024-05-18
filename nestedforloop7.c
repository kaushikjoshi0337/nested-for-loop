#include <stdio.h>

int main() {
    int i, j;
    char ch;

    for(i = 0, ch = 'A'; i < 5; i++, ch++) {
        for(j = 0; j <= i; j++) {
            printf("%c ", ch - j);
        }
        printf("\n");
    }
}
