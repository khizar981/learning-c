#include <stdio.h>

int main(void) {
    int a = 5;
    printf("Printing the table:\n");

    for (int i = 1; i <= 100; i++) {
        printf("%d x %d = %d\n", a, i, a * i);
    }

    printf("Hello world\n");
    return 0;
}
