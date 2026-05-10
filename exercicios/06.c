#include <stdio.h>

int maior(int x, int y, int z){
    if(x >= y && x >= z){
        return x;
    }
    else if(y >= x && y >= z){
        return y;
    }
    else{
        return z;
    }
}

int main(){
    int a,b,c;
    
    printf("Digite três valores: ");
    scanf("%d%d%d", &a, &b, &c);
    
    printf("Maior número: %d", maior(a,b,c));
    
    return 0;
}
