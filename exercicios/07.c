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

int menor(int x, int y, int z){
    if(x <= y && x <= z){
        return x;
    }
    else if(y <= x && y <= z){
        return y;
    }
    else{
        return z;
    }
}

int medio(int x, int y, int z, int ma, int me){
    return (x + y + z) - ma - me;
}

int main(){
    int a,b,c;
    int rmaior, rmenor;
    
    printf("Digite três números: ");
    scanf("%d%d%d", &a, &b, &c);
    
    rmaior = maior(a,b,c);
    rmenor = menor(a,b,c);
    
    printf("Termo intermediário: %d", medio(a,b,c,rmaior, rmenor));
    
    return 0;
}
