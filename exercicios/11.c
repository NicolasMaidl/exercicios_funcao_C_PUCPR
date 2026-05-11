#include <stdio.h>

void tabuada(int n){
    int k = 1;

    printf("\nTabuada do %d\n", n);

    while(k <= 10){
        printf("%d x %d = %d\n", n, k, n * i);
        k++;
    }
}

int main(){
    int num = 1;

    while(num <= 9){
        tabuada(num);
        num++;
    }
    return 0;
}
