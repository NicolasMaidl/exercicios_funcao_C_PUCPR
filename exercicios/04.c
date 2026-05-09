#include <stdio.h>

float imc(float a, float b){
    return a / (b * b);
}

int main(){
    float peso, altura;
    
    printf("Digite o seu peso: ");
    scanf("%f", &peso);
    
    while(peso <= 0){
        printf("Peso inválido! Digite novamente: ");
        scanf("%f", &peso);
    }
    
    printf("Altura inválida! Digite novamente: ");
    scanf("%f", &altura);
    
    while(altura <= 0){
        printf("Digite sua altura: ");
        scanf("%f", &altura);
    }
    
    printf("O IMC: %.2f", imc(peso, altura));
    
    return 0;
}
