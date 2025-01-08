#include <stdio.h>

int main(){
    int amount;
    char kar;

    printf("Geef een aantal en een karakter: ");
    scanf("%d %c", &amount, &kar);

    int counter = 1;
    int x = 1;
    int spaces = amount - 1;

    while (counter <= amount){
        for (int i = 0; i < spaces; i++) {
            printf(" ");
        }

        for (int i = 0; i < x; i++) {
            printf("%c", kar);
        }
        printf("\n");
        counter ++;
        x += 2;
        spaces --;
    }

    return 0;
    }