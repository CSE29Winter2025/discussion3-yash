#include <stdio.h>
#include <stdlib.h>

void fill(int **parray, int length) {
    *parray = malloc(length * sizeof(int));
    for (int i = 0; i < length; i++) {
        (*parray)[i] = 10 * (i + 1);
    }
}

int main() {
    int *parray = NULL; 
    fill(&parray, 3);
    for (int i = 0; i < 3; i++) {
        printf("%d\n", parray[i]);
    }
    return 0;
}
