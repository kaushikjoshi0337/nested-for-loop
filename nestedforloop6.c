#include <stdio.h>

int main() {
   for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5 - i; j++) {
       printf("1 ");
         if (j < 5 - i - 1) {
             printf("0 ");
        }
        }
         printf("\n");
    }
}