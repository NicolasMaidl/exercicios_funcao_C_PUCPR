#include <stdio.h>

int validar(){
    int n;
    
    printf("Digite um valor inteiro e positivo: ");
    scanf("%d", &n);
    
    while(n <= 0){
        printf("Erro! Digite um valor inteiro e positivo: ");
        scanf("%d", &n);
    }
    
    return n;
}


int main(){
    
    int valor = validar();
    
    printf("\nO número %d é positivo! ", valor);
    
    return 0;

}
