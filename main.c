#include <stdio.h>

int main() {
    printf("printing from main.c\n");
    malloc(100 * sizeof(int));
    return 0;
}
