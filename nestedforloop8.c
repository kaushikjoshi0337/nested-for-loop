#include <stdio.h>

int main() {
    int rows, i, j, count = 1;
   for(i = 1; i <= 5; i++) {
       for(j = 1; j <= i; j++) {
         printf("%d ", count);
             count++;
        }
        printf("\n");
    }
}
