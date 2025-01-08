#include <stdio.h>
#include <stdbool.h>

void evenOdd(){
    int a;
    printf("Geef een geheel getal in: \n");
    scanf("%d", &a);

    if(a%2==0){
        printf("%d is even.", a);
    }
    else{
        printf("%d is oneven.", a);
    };
}

void gcd(){
    int a;
    int b;
    int resul;
    printf("Geef twee gehele getallen:\n");
    scanf("%d %d", &a, &b);

    for(int i = 1; i <= a; i++){
        if(a%i==0 & b%i == 0){
            resul = i;
            printf("De grootst gemeenschappelijke deler is: %d", resul);
        }
        else{
            printf("Deze getallen hebben geen gemene deler");
        }
    }

}

int main(){
    char choice;

    printf("MENU\n----\n e: Even/Odd\n g: GCD\n q: Quit");
    scanf("%c", &choice);

    switch(choice){
        case 'e':
            evenOdd();
            break;
        case 'g':
            gcd(); 
            break;
        case 'q':
            printf("Het programma sluit af");
            break;
        default:
            printf("Heb je het menu gelezen of ben je dom?");
    }

    return 0;
}
