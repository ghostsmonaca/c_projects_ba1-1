#include <stdio.h>
#include <string.h>

int countelements(int array[]){

    int counter = 0;
    for(int i=0; array[i] != '\0'; i++){
        counter++;
    };
    return counter;
}

void minimumarray(int array[]){

    int lengte = countelements(array);
    printf("%d", lengte);

    int resul = array[0];

    for(int i=0; i < lengte; i++){
        if(resul > array[i]){
            resul = array[i];
        };
    }
    printf("Het kleinste getal uit de array is: %d\n", resul);
}

int main(){

    int array1[10] = {1,2,3,4,5,6,7,8,9,10};
    int array2[5] = {4,8,2,6,5};

    minimumarray(array1);
    minimumarray(array2);

    return 0;

}