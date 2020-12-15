#include <stdio.h>

int main() {
    int i, j;
    int table;
    int max = 10;

    printf("Enter the range of the table: ");
    scanf("%d", &table);
    for (i = 1; i <= table; i++) {
        for (j=1; j <= max; j++) {
            printf("%d x %d = %d\n", i, j, i*j);
        }
        printf("\n"); /* blank line between tables */
    }

    return 0;
}
