#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    int i, j;
    for (i = 0; i < 10; i++) {
        printf("%d%s", i, (i == 9) ? "\n" : ", ");
        for (j = i + 1; j < 10; j++) {
            printf("%d%s", j, (j == 9) ? "\n" : ", ");
        }
    }
    return 0;
}
