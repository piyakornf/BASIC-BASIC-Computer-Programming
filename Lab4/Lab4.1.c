#include <stdio.h>

int main() {
    int N, i;

    scanf("%d", &N);

    int scores[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &scores[i]);
    }

    for ( i = N - 1; i >= 0; i--) {
        printf("%d\n", scores[i]);
    }
    
    return 0;
}