#include <stdio.h>

void blur(int amount){

    int matrix[amount][amount];
    int counter = 0;

    for(int i = 0; i < amount; i++){
        matrix[i][0] = counter;
        for(int j = 0; j < amount; j++){
            matrix[i][j] = counter;
            counter++;
            printf("%d\n", matrix[i][j]);
        }
    }
}

int main(){
    int amount;
    printf("Geef 3, 5 of 7 in");
    scanf("%d", &amount);

    blur(amount);
    return 0;

}