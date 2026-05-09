#include <stdio.h>

float soma(float x, float y){
    return x + y;
}

float media(float z){
    return z / 2;
}
int main(){
    float a, b;
    float rsoma, rmedia;
    
    printf("Digite dois números: ");
    scanf("%f%f", &a, &b);
    
    rsoma = soma(a, b);
    rmedia = media(rsoma);
    
    printf("Soma: %.2f\n", rsoma);
    printf("Média: %.2f\n", rmedia);
    
    return 0;
}
