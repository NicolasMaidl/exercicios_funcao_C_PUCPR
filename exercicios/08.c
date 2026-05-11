#include <stdio.h>

int primo(int x){
    
    if(x <= 1){
        return 0;
    }
    
    int k = 2;
    
    while(k < x){
        if(x % k == 0){
            return 0;
        }
        k++;
    }
    
    return 1;
}


int main(){
    int num;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if(primo(num)){
        printf("O número %d é primo!", num);
    }
    else{
        printf("O número %d não é primo!", num);
    }
    
    return 0;
}
