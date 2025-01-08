#include <stdio.h>

int powerof(double a, int b){
    int resul = a;
    int counter = 1;
    while (counter != b){
        resul *= a;
        counter ++;
    }
    return resul;
}

int main(){
    int resul = powerof(2,3);
    printf("%d",resul);
    return 0;
}