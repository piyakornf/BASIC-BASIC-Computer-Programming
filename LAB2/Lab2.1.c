#include <stdio.h>

int main() {
    int N, i;
    
    if(scanf("%d", &N) != 1) {
        return 1;
    }
    
    if(N == 0) {
        fprintf(stderr,"Error: Input is zero.\n");
        return 2;
    }else if(N < 0) {
        fprintf(stderr,"Error: Input is negative.\n");
        return 3;
    }
    for(i = 0; i < N; i++){
        printf("Hello Loop\n");
    }
    return 0;
}