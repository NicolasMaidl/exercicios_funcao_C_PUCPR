#include <stdio.h>

float soma(float x, float y){
    return x + y;
}

int main(){
    float a,b;
    
    printf("Digite dois números: ");
    scanf("%f%f", &a, &b);
    
    printf("Soma dos dois números: %.2f", soma(a,b));
    
    return 0;
}
