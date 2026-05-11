#include <stdio.h>
#include <math.h>

float distancia(int a1, int b1, int a2, int b2){
    return sqrt((a2 - a1) * (a2 - a1) + (b2 - b1) * (b2 - b1));
}


int main(){
    int x1,y1,x2,y2;
    
    printf("Digite as primeiras coordenadas: ");
    scanf("%d%d", &x1, &y1);
    
    printf("Digite a segunda coordenada: ");
    scanf("%d%d", &x2, &y2);
    
    printf("Distância entre os pontos: %.2f", distancia(x1,y1,x2,y2));
    
    return 0;
    
}
