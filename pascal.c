#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int **m;
    int i, j;

    scanf("%d", &n);

    m = malloc(n * sizeof(int *));

    for (i = 0; i < n; i++) {
        m[i] = malloc((i + 1) * sizeof(int));
    }

    for (i = 0; i < n; i++) {
        m[i][0] = 1;
        m[i][i] = 1;
        for (j = 0; j < i + 1; j++) {
            if (j > 0 && j < i) {
                m[i][j] = m[i - 1][j - 1] + m[i - 1][j];
            }
        }
        for (j = 0; j <= i; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {
        free(m[i]);
    }
    free(m);
    return 0;
}