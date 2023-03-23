#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define N 5
#define M 7

int main (){
    int i,j;
    int mt[N][M];
    int (*f)[M] = mt;
    int *c = *f;

    srand(time(NULL));

    for(i = 0;i<N; i++){
        for(j = 0;j<M; j++){
        *(c)=1+rand()%100;
        printf(" %d ", *c);
        c++;
        }
    printf("\n");
    f++;
    }
    return 0;
}