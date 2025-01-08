#include <ctype.h>
#include <stdio.h>
#include <cstring>

void get_char(){

    char string[30];
    printf("Geef een string door:");
    gets(string);

    int lengte = strlen(string);
    int wordcounter = 1;

    for(int i=0; i < strlen(string); i++){

        if (isspace(string[i])){
            wordcounter++;
        }
        else if(islower(string[i])){
            string[i] = toupper(string[i]);
        }else{
            string[i] = tolower(string[i]);
        };
    }
    printf("Aantal woorden: %d\n", wordcounter);
    printf("Lengte van de string: %d\n", lengte);
    printf("%s", string);
}

int main(){
    get_char();
    return 0;
}
