#include <stdio.h>

int lerNumero(){
    int num;
    
    do{
        printf("Digite um número positivo: ");
        scanf("%d", &num);
        
        if(num <= 0){
            printf("Numero invalido! Tente novamente.\n");
        }
    }while(num <= 0);
    return num;
}

int main(){
    printf("Número: %d", lerNumero());
    return 0;
}
