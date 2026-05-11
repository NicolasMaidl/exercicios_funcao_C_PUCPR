#include <stdio.h>

int fatorial(int x){
    int k = 2;
    int s = 1;
    
    while(k <= x){
        s = s * k;
        k++;
    }
    return s;
}


int main(){
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    while(num < 0){
       printf("Digite um número válido: ");
       scanf("%d", &num); 
    }
    
    printf("O fatorial do número %d é: %d", num, fatorial(num));
    
    return 0;
}
