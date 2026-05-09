#include <stdio.h>
#include <math.h>

float hipotenusa(int x, int y){
    return sqrt(x * x + y * y);
}

int main(){
    int a, b;
    
    printf("Digite dois catetos: ");
    scanf("%d%d", &a, &b);
    
    printf("Valor hipotenusa: %.2f", hipotenusa(a,b));
    
    return 0;
}
