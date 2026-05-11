#include <stdio.h>

float potencia(float x, int y){
    int k = 1;
    float s = 1;
    while(k <= y){
        s = s * x;
        k++;
    }
    return s;
}


int main(){
    float a;
    int b;
    
    printf("Digite um valor para A: ");
    scanf("%f", &a);
    
    printf("Digite um valor inteiro e positivo para B: ");
    scanf("%d", &b);
    
    while(b <= 0){
        printf("Número inválido! Digite um valor inteiro e positivo para B: ");
        scanf("%d", &b);
    }
    
    printf("Potência de A por B: %.2f", potencia(a,b));
    
    return 0;
}
